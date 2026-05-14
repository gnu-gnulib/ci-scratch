/* Optimization of multithreaded code.

   Copyright (C) 2026 Free Software Foundation, Inc.

   This file is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as
   published by the Free Software Foundation; either version 2.1 of the
   License, or (at your option) any later version.

   This file is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* Written by Bruno Haible <bruno@clisp.org>, 2026.  */

#include <config.h>

/* Specification.  */
#include "thread-optim.h"

static int mt_override = -1;

void
gl_set_multithreaded (bool mt)
{
  mt_override = (mt ? 1 : 0);
}

#ifdef _GL_MULTITHREADED_VIA_ELF

/* Three possible approaches come to mind for automatically determining
   whether a process is single-threaded:

     * Look at the number of entries in the /proc/self/task/ directory.
       If there is only one, the process is (currently) single-threaded.
       Drawbacks:
         - It works only on Linux.
         - It is relatively expensive (several system calls).

     * Look at the state of the PLT and GOT entries for the functions
       'pthread_create' and 'thrd_create'.  If they are both still in the
       initial state, neither of them has been called so far, and the
       process therefore is (currently) single-threaded.
       Drawbacks:
         - It does not work on modern Linux distros, because they link
           with options '-z now -z relro' ('-z relro' for security
           reasons, and '-z now' because it it required for '-z now')
           and '-z now' activates early binding instead of lazy binding
           in the PLT and GOT.
         - The code for doing this is architecture dependent (because
           the instructions in the PLT are obviously arch dependent)
           and OS dependent (because OpenBSD has a different structure
           for the PLT than the other OSes).  Additionally it requires
           inline assembly in order to get the value of the
           'pthread_create@plt' and 'thrd_create@plt' symbols.

     * Look at whether the symbols 'pthread_create' and 'thrd_create'
       occur in the PLT and GOT.  If neither of them occurs (in the
       executable and in the linked shared libraries), the process
       cannot create threads.
       Drawbacks:
         - This approach works only under the following assumptions:
           . These two entry points are the only facilities in libc
             that create threads.
           . The process will not invoke dlopen() to attach other
             shared libraries.
           . The program is not statically linked.

   Here we implement the third approach.  We mitigate the drawback
   by allowing the programmer to override the result if the assumptions
   are not met.  */

#include <elf.h>
#include <link.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "thread-creators.h"

/* Macros for decomposing an r_info field into symbol index and reloc type.  */
#if __ELF_NATIVE_CLASS == 32
# define ELF_R_SYM ELF32_R_SYM
# define ELF_R_TYPE ELF32_R_TYPE
#elif __ELF_NATIVE_CLASS == 64
# define ELF_R_SYM ELF64_R_SYM
# define ELF_R_TYPE ELF64_R_TYPE
#endif

/* We inspect the GOT.  This is more robust than inspecting the PLT, because
     - When the executable is built with option '-fno-plt', there is no PLT,
       only a GOT.
     - The ELF data structures accessible from dl_iterate_phdr() don't
       actually contain a pointer to the PLT.  In order to recognize the PLT,
       we would have to look for architecture specific relocations.  */

/* Inspects the GOT of a single ELF file in memory.
   Returns 1 if a thread creator symbol is seen,
           -1 if the executable is statically linked, or
           0 otherwise.  */
static int
inspect_one_GOT (struct dl_phdr_info *info, size_t size, void *data)
{
  ElfW(Addr) base_address = info->dlpi_addr;

  size_t num_headers = info->dlpi_phnum;
  const ElfW(Phdr) *headers = info->dlpi_phdr;

  const ElfW(Dyn) *dynamic_section = NULL;
  for (size_t h = 0; h < num_headers; h++)
    {
      const ElfW(Phdr) *header = headers + h;
      if (header->p_type == PT_DYNAMIC)
        {
          dynamic_section = (const ElfW(Dyn) *) (base_address + header->p_vaddr);
          break;
        }
    }
  if (dynamic_section != NULL)
    {
      const char *strtab = NULL;
      size_t strsz = 0;
      const ElfW(Sym) *symtab = NULL;
      for (const ElfW(Dyn) *dynamic_section_entry = dynamic_section;
           dynamic_section_entry->d_tag != DT_NULL;
           dynamic_section_entry++)
        {
          if (dynamic_section_entry->d_tag == DT_STRTAB)
            strtab = (const char *) dynamic_section_entry->d_un.d_ptr;
          if (dynamic_section_entry->d_tag == DT_STRSZ)
            strsz = dynamic_section_entry->d_un.d_val;
          if (dynamic_section_entry->d_tag == DT_SYMTAB)
            symtab = (const ElfW(Sym) *) dynamic_section_entry->d_un.d_ptr;
        }

      int jump_relocation_type = 0;
      const void *jump_relocations = NULL;
      size_t num_jump_relocations = 0;
      for (const ElfW(Dyn) *dynamic_section_entry = dynamic_section;
           dynamic_section_entry->d_tag != DT_NULL;
           dynamic_section_entry++)
        {
          if (dynamic_section_entry->d_tag == DT_PLTREL)
            {
              /* The value should be DT_REL or DT_RELA.  */
              jump_relocation_type = dynamic_section_entry->d_un.d_val;
            }
          else if (dynamic_section_entry->d_tag == DT_PLTRELSZ)
            {
              num_jump_relocations = dynamic_section_entry->d_un.d_val / sizeof (ElfW(Rela));
            }
          else if (dynamic_section_entry->d_tag == DT_JMPREL)
            {
              jump_relocations = (const void *) dynamic_section_entry->d_un.d_ptr;
            }
          /* The entry with tag DT_PLTGOT contains a pointer to the GOT
             in memory.  But we don't need it actually.  */
        }
      if (jump_relocations != NULL)
        {
          for (size_t j = 0; j < num_jump_relocations; j++)
            {
              if (jump_relocation_type == DT_REL)
                {
                  const ElfW(Rel) *jump_reloc = (const ElfW(Rel) *) jump_relocations + j;
                  ElfW(Addr) got_element = base_address + jump_reloc->r_offset;
                  unsigned int symbol_index = ELF_R_SYM (jump_reloc->r_info);
                  unsigned int reloc_type = ELF_R_TYPE (jump_reloc->r_info);
                  (void) reloc_type;
                  /* We can ignore relocations not connected to a symbol.  */
                  if (symbol_index != 0)
                    {
                      const ElfW(Sym) *symtab_entry = symtab + symbol_index;
                      ElfW(Word) symbol_name_offset = symtab_entry->st_name;
                      const char *symbol_name = strtab + symbol_name_offset;
                      if (thread_creators_lookup (symbol_name, strlen (symbol_name)) != NULL)
                        /* Found a jump relocation to a thread creator symbol.  */
                        return 1;
                    }
                }
              else if (jump_relocation_type == DT_RELA)
                {
                  const ElfW(Rela) *jump_reloc = (const ElfW(Rela) *) jump_relocations + j;
                  ElfW(Addr) got_element = base_address + jump_reloc->r_offset;
                  unsigned int symbol_index = ELF_R_SYM (jump_reloc->r_info);
                  unsigned int reloc_type = ELF_R_TYPE (jump_reloc->r_info);
                  (void) reloc_type;
                  /* We can ignore relocations not connected to a symbol.  */
                  if (symbol_index != 0)
                    {
                      const ElfW(Sym) *symtab_entry = symtab + symbol_index;
                      ElfW(Word) symbol_name_offset = symtab_entry->st_name;
                      const char *symbol_name = strtab + symbol_name_offset;
                      if (thread_creators_lookup (symbol_name, strlen (symbol_name)) != NULL)
                        /* Found a jump relocation to a thread creator symbol.  */
                        return 1;
                    }
                }
            }
        }
    }
  else
    {
      if (info->dlpi_name[0] == '\0')
        /* The executable is statically linked.  */
        return -1;
    }

  return 0;
}

/* Returns true if the process is possibly multithreaded throughout its
   lifetime (assuming the process will not invoke dlopen() to attach other
   shared libraries).  */
static bool
is_multithreaded_uncached (void)
{
  int result = dl_iterate_phdr (inspect_one_GOT, NULL);
  /* result is 1 if a thread creator symbol is seen in some of the GOTs,
               -1 if the executable is statically linked, or
               0 otherwise.  */
  return result != 0;
}

bool
gl_multithreaded (void)
{
  /* Consider the override.  */
  if (mt_override >= 0)
    return mt_override;
  else
    {
      /* Cache the result from is_multithreaded_uncached.  */
      static int volatile cached_result = -1;

      if (cached_result < 0)
        cached_result = is_multithreaded_uncached ();

      return cached_result;
    }
}

#endif /* _GL_MULTITHREADED_VIA_ELF */
