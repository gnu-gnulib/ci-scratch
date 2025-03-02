## DO NOT EDIT! GENERATED AUTOMATICALLY!
## Process this file with automake to produce Makefile.in.
# Copyright (C) 2002-2025 Free Software Foundation, Inc.
#
# This file is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This file is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this file.  If not, see <https://www.gnu.org/licenses/>.
#
# As a special exception to the GNU General Public License,
# this file may be distributed as part of a program that
# contains a configuration script generated by Autoconf, under
# the same distribution terms as the rest of that program.
#
# Generated by gnulib-tool.

AUTOMAKE_OPTIONS = 1.14 gnits

SUBDIRS =
noinst_HEADERS =
noinst_LIBRARIES =
noinst_LTLIBRARIES =
pkgdata_DATA =
EXTRA_DIST =
BUILT_SOURCES =
SUFFIXES =
MOSTLYCLEANFILES = core *.stackdump
MOSTLYCLEANDIRS =
CLEANFILES =
DISTCLEANFILES =
MAINTAINERCLEANFILES =
# No GNU Make output.

AM_CPPFLAGS = -DGNULIB_STRICT_CHECKING=1
AM_CFLAGS =

noinst_LIBRARIES += libgnu.a

libgnu_a_SOURCES =
libgnu_a_LIBADD = $(gl_LIBOBJS)
libgnu_a_DEPENDENCIES = $(gl_LIBOBJS)
EXTRA_libgnu_a_SOURCES =

## begin gnulib module absolute-header

# Use this preprocessor expression to decide whether #include_next works.
# Do not rely on a 'configure'-time test for this, since the expression
# might appear in an installed header, which is used by some other compiler.
HAVE_INCLUDE_NEXT = (__GNUC__ || __clang__ || 60000000 <= __DECC_VER)

## end   gnulib module absolute-header

## begin gnulib module c-ctype

libgnu_a_SOURCES += c-ctype.h c-ctype.c

## end   gnulib module c-ctype

## begin gnulib module c-strncasecmp

libgnu_a_SOURCES += c-strncasecmp.c

EXTRA_DIST += c-strcase.h

## end   gnulib module c-strncasecmp

## begin gnulib module ctype-h

BUILT_SOURCES += ctype.h

# We need the following in order to create <ctype.h> when the system
# doesn't have one that works with the given compiler.
ctype.h: ctype.in.h $(top_builddir)/config.status $(CXXDEFS_H) $(ARG_NONNULL_H) $(WARN_ON_USE_H)
	$(gl_V_at)$(SED_HEADER_STDOUT) \
	      -e 's|@''GUARD_PREFIX''@|GL|g' \
	      -e 's|@''INCLUDE_NEXT''@|$(INCLUDE_NEXT)|g' \
	      -e 's|@''PRAGMA_SYSTEM_HEADER''@|@PRAGMA_SYSTEM_HEADER@|g' \
	      -e 's|@''PRAGMA_COLUMNS''@|@PRAGMA_COLUMNS@|g' \
	      -e 's|@''NEXT_CTYPE_H''@|$(NEXT_CTYPE_H)|g' \
	      -e 's/@''GNULIB_ISALNUM_L''@/$(GL_GNULIB_ISALNUM_L)/g' \
	      -e 's/@''GNULIB_ISALPHA_L''@/$(GL_GNULIB_ISALPHA_L)/g' \
	      -e 's/@''GNULIB_ISBLANK''@/$(GL_GNULIB_ISBLANK)/g' \
	      -e 's/@''GNULIB_ISBLANK_L''@/$(GL_GNULIB_ISBLANK_L)/g' \
	      -e 's/@''GNULIB_ISCNTRL_L''@/$(GL_GNULIB_ISCNTRL_L)/g' \
	      -e 's/@''GNULIB_ISDIGIT_L''@/$(GL_GNULIB_ISDIGIT_L)/g' \
	      -e 's/@''GNULIB_ISGRAPH_L''@/$(GL_GNULIB_ISGRAPH_L)/g' \
	      -e 's/@''GNULIB_ISLOWER_L''@/$(GL_GNULIB_ISLOWER_L)/g' \
	      -e 's/@''GNULIB_ISPRINT_L''@/$(GL_GNULIB_ISPRINT_L)/g' \
	      -e 's/@''GNULIB_ISPUNCT_L''@/$(GL_GNULIB_ISPUNCT_L)/g' \
	      -e 's/@''GNULIB_ISSPACE_L''@/$(GL_GNULIB_ISSPACE_L)/g' \
	      -e 's/@''GNULIB_ISUPPER_L''@/$(GL_GNULIB_ISUPPER_L)/g' \
	      -e 's/@''GNULIB_ISXDIGIT_L''@/$(GL_GNULIB_ISXDIGIT_L)/g' \
	      -e 's/@''GNULIB_TOLOWER_L''@/$(GL_GNULIB_TOLOWER_L)/g' \
	      -e 's/@''GNULIB_TOUPPER_L''@/$(GL_GNULIB_TOUPPER_L)/g' \
	      -e 's/@''HAVE_ISALNUM_L''@/$(HAVE_ISALNUM_L)/g' \
	      -e 's/@''HAVE_ISALPHA_L''@/$(HAVE_ISALPHA_L)/g' \
	      -e 's/@''HAVE_ISBLANK''@/$(HAVE_ISBLANK)/g' \
	      -e 's/@''HAVE_ISBLANK_L''@/$(HAVE_ISBLANK_L)/g' \
	      -e 's/@''HAVE_ISCNTRL_L''@/$(HAVE_ISCNTRL_L)/g' \
	      -e 's/@''HAVE_ISDIGIT_L''@/$(HAVE_ISDIGIT_L)/g' \
	      -e 's/@''HAVE_ISGRAPH_L''@/$(HAVE_ISGRAPH_L)/g' \
	      -e 's/@''HAVE_ISLOWER_L''@/$(HAVE_ISLOWER_L)/g' \
	      -e 's/@''HAVE_ISPRINT_L''@/$(HAVE_ISPRINT_L)/g' \
	      -e 's/@''HAVE_ISPUNCT_L''@/$(HAVE_ISPUNCT_L)/g' \
	      -e 's/@''HAVE_ISSPACE_L''@/$(HAVE_ISSPACE_L)/g' \
	      -e 's/@''HAVE_ISUPPER_L''@/$(HAVE_ISUPPER_L)/g' \
	      -e 's/@''HAVE_ISXDIGIT_L''@/$(HAVE_ISXDIGIT_L)/g' \
	      -e 's/@''HAVE_TOLOWER_L''@/$(HAVE_TOLOWER_L)/g' \
	      -e 's/@''HAVE_TOUPPER_L''@/$(HAVE_TOUPPER_L)/g' \
	      -e '/definitions of _GL_FUNCDECL_RPL/r $(CXXDEFS_H)' \
	      -e '/definition of _GL_ARG_NONNULL/r $(ARG_NONNULL_H)' \
	      -e '/definition of _GL_WARN_ON_USE/r $(WARN_ON_USE_H)' \
	      $(srcdir)/ctype.in.h > $@-t
	$(AM_V_at)mv $@-t $@
MOSTLYCLEANFILES += ctype.h ctype.h-t

EXTRA_DIST += ctype.in.h

## end   gnulib module ctype-h

## begin gnulib module gen-header

# In 'sed', replace the pattern space with a "DO NOT EDIT" comment.
SED_HEADER_NOEDIT = s,.*,/* DO NOT EDIT! GENERATED AUTOMATICALLY! */,

# '$(SED_HEADER_STDOUT) -e "..."' runs 'sed' but first outputs "DO NOT EDIT".
SED_HEADER_STDOUT = sed -e 1h -e '1$(SED_HEADER_NOEDIT)' -e 1G

# '$(SED_HEADER_TO_AT_t) FILE' copies FILE to $@-t, prepending a leading
# "DO_NOT_EDIT".  Although this could be done more simply via:
#	SED_HEADER_TO_AT_t = $(SED_HEADER_STDOUT) > $@-t
# the -n and 'w' avoid a fork+exec, at least when GNU Make is used.
SED_HEADER_TO_AT_t = $(SED_HEADER_STDOUT) -n -e 'w $@-t'

# Use $(gl_V_at) instead of $(AM_V_GEN) or $(AM_V_at) on a line that
# is its recipe's first line if and only if @NMD@ lines are absent.
gl_V_at = $(AM_V_GEN)

## end   gnulib module gen-header

## begin gnulib module locale-h

BUILT_SOURCES += locale.h

# We need the following in order to create <locale.h> when the system
# doesn't have one that provides all definitions.
locale.h: locale.in.h $(top_builddir)/config.status $(CXXDEFS_H) $(ARG_NONNULL_H) $(WARN_ON_USE_H)
	$(gl_V_at)$(SED_HEADER_STDOUT) \
	      -e 's|@''GUARD_PREFIX''@|GL|g' \
	      -e 's|@''INCLUDE_NEXT''@|$(INCLUDE_NEXT)|g' \
	      -e 's|@''PRAGMA_SYSTEM_HEADER''@|@PRAGMA_SYSTEM_HEADER@|g' \
	      -e 's|@''PRAGMA_COLUMNS''@|@PRAGMA_COLUMNS@|g' \
	      -e 's|@''NEXT_LOCALE_H''@|$(NEXT_LOCALE_H)|g' \
	      -e 's|@''HAVE_LOCALE_T''@|$(HAVE_LOCALE_T)|g' \
	      -e 's|@''HAVE_WINDOWS_LOCALE_T''@|$(HAVE_WINDOWS_LOCALE_T)|g' \
	      -e 's/@''GNULIB_LOCALECONV''@/$(GL_GNULIB_LOCALECONV)/g' \
	      -e 's/@''GNULIB_SETLOCALE''@/$(GL_GNULIB_SETLOCALE)/g' \
	      -e 's/@''GNULIB_SETLOCALE_NULL''@/$(GL_GNULIB_SETLOCALE_NULL)/g' \
	      -e 's/@''GNULIB_NEWLOCALE''@/$(GL_GNULIB_NEWLOCALE)/g' \
	      -e 's/@''GNULIB_DUPLOCALE''@/$(GL_GNULIB_DUPLOCALE)/g' \
	      -e 's/@''GNULIB_FREELOCALE''@/$(GL_GNULIB_FREELOCALE)/g' \
	      -e 's/@''GNULIB_LOCALENAME_UNSAFE''@/$(GL_GNULIB_LOCALENAME_UNSAFE)/g' \
	      -e 's|@''HAVE_NEWLOCALE''@|$(HAVE_NEWLOCALE)|g' \
	      -e 's|@''HAVE_DUPLOCALE''@|$(HAVE_DUPLOCALE)|g' \
	      -e 's|@''HAVE_FREELOCALE''@|$(HAVE_FREELOCALE)|g' \
	      -e 's|@''HAVE_XLOCALE_H''@|$(HAVE_XLOCALE_H)|g' \
	      -e 's|@''REPLACE_LOCALECONV''@|$(REPLACE_LOCALECONV)|g' \
	      -e 's|@''REPLACE_SETLOCALE''@|$(REPLACE_SETLOCALE)|g' \
	      -e 's|@''REPLACE_NEWLOCALE''@|$(REPLACE_NEWLOCALE)|g' \
	      -e 's|@''REPLACE_DUPLOCALE''@|$(REPLACE_DUPLOCALE)|g' \
	      -e 's|@''REPLACE_FREELOCALE''@|$(REPLACE_FREELOCALE)|g' \
	      -e 's|@''REPLACE_STRUCT_LCONV''@|$(REPLACE_STRUCT_LCONV)|g' \
	      -e 's|@''LOCALENAME_ENHANCE_LOCALE_FUNCS''@|$(LOCALENAME_ENHANCE_LOCALE_FUNCS)|g' \
	      -e '/definitions of _GL_FUNCDECL_RPL/r $(CXXDEFS_H)' \
	      -e '/definition of _GL_ARG_NONNULL/r $(ARG_NONNULL_H)' \
	      -e '/definition of _GL_WARN_ON_USE/r $(WARN_ON_USE_H)' \
	      $(srcdir)/locale.in.h > $@-t
	$(AM_V_at)mv $@-t $@
MOSTLYCLEANFILES += locale.h locale.h-t

EXTRA_DIST += locale.in.h

## end   gnulib module locale-h

## begin gnulib module snippet/arg-nonnull

# Because this Makefile snippet defines a variable used by other
# gnulib Makefile snippets, it must be present in all makefiles that
# need it. This is ensured by the applicability 'all' defined above.

ARG_NONNULL_H=$(srcdir)/arg-nonnull.h

EXTRA_DIST += arg-nonnull.h

## end   gnulib module snippet/arg-nonnull

## begin gnulib module snippet/c++defs

# Because this Makefile snippet defines a variable used by other
# gnulib Makefile snippets, it must be present in all makefiles that
# need it. This is ensured by the applicability 'all' defined above.

CXXDEFS_H=$(srcdir)/c++defs.h

EXTRA_DIST += c++defs.h

## end   gnulib module snippet/c++defs

## begin gnulib module snippet/warn-on-use

# Because this Makefile snippet defines a variable used by other
# gnulib Makefile snippets, it must be present in all makefiles that
# need it. This is ensured by the applicability 'all' defined above.

WARN_ON_USE_H=$(srcdir)/warn-on-use.h

EXTRA_DIST += warn-on-use.h

## end   gnulib module snippet/warn-on-use

## begin gnulib module stddef-h

BUILT_SOURCES += $(STDDEF_H)

# We need the following in order to create <stddef.h> when the system
# doesn't have one that works with the given compiler.
if GL_GENERATE_STDDEF_H
stddef.h: stddef.in.h $(top_builddir)/config.status
	$(gl_V_at)$(SED_HEADER_STDOUT) \
	      -e 's|@''GUARD_PREFIX''@|GL|g' \
	      -e 's|@''INCLUDE_NEXT''@|$(INCLUDE_NEXT)|g' \
	      -e 's|@''PRAGMA_SYSTEM_HEADER''@|@PRAGMA_SYSTEM_HEADER@|g' \
	      -e 's|@''PRAGMA_COLUMNS''@|@PRAGMA_COLUMNS@|g' \
	      -e 's|@''NEXT_STDDEF_H''@|$(NEXT_STDDEF_H)|g' \
	      -e 's|@''NULLPTR_T_NEEDS_STDDEF''@|$(NULLPTR_T_NEEDS_STDDEF)|g' \
	      -e 's|@''STDDEF_NOT_IDEMPOTENT''@|$(STDDEF_NOT_IDEMPOTENT)|g' \
	      -e 's|@''REPLACE_NULL''@|$(REPLACE_NULL)|g' \
	      -e 's|@''HAVE_MAX_ALIGN_T''@|$(HAVE_MAX_ALIGN_T)|g' \
	      $(srcdir)/stddef.in.h > $@-t
	$(AM_V_at)mv $@-t $@
else
stddef.h: $(top_builddir)/config.status
	rm -f $@
endif
MOSTLYCLEANFILES += stddef.h stddef.h-t

EXTRA_DIST += stddef.in.h

## end   gnulib module stddef-h

## begin gnulib module strings-h

BUILT_SOURCES += strings.h

# We need the following in order to create <strings.h> when the system
# doesn't have one that works with the given compiler.
strings.h: strings.in.h $(top_builddir)/config.status $(CXXDEFS_H) $(WARN_ON_USE_H) $(ARG_NONNULL_H)
	$(gl_V_at)$(SED_HEADER_STDOUT) \
	      -e 's|@''GUARD_PREFIX''@|GL|g' \
	      -e 's|@''HAVE_STRINGS_H''@|$(HAVE_STRINGS_H)|g' \
	      -e 's|@''INCLUDE_NEXT''@|$(INCLUDE_NEXT)|g' \
	      -e 's|@''PRAGMA_SYSTEM_HEADER''@|@PRAGMA_SYSTEM_HEADER@|g' \
	      -e 's|@''PRAGMA_COLUMNS''@|@PRAGMA_COLUMNS@|g' \
	      -e 's|@''NEXT_STRINGS_H''@|$(NEXT_STRINGS_H)|g' \
	      -e 's/@''GNULIB_FFS''@/$(GL_GNULIB_FFS)/g' \
	      -e 's/@''GNULIB_STRCASECMP''@/$(GL_GNULIB_STRCASECMP)/g' \
	      -e 's/@''GNULIB_STRCASECMP_L''@/$(GL_GNULIB_STRCASECMP_L)/g' \
	      -e 's/@''GNULIB_STRNCASECMP''@/$(GL_GNULIB_STRNCASECMP)/g' \
	      -e 's/@''GNULIB_STRNCASECMP_L''@/$(GL_GNULIB_STRNCASECMP_L)/g' \
	      -e 's|@''HAVE_FFS''@|$(HAVE_FFS)|g' \
	      -e 's|@''HAVE_STRCASECMP''@|$(HAVE_STRCASECMP)|g' \
	      -e 's|@''HAVE_STRCASECMP_L''@|$(HAVE_STRCASECMP_L)|g' \
	      -e 's|@''HAVE_STRNCASECMP''@|$(HAVE_STRNCASECMP)|g' \
	      -e 's|@''HAVE_STRNCASECMP_L''@|$(HAVE_STRNCASECMP_L)|g' \
	      -e 's|@''HAVE_DECL_STRNCASECMP''@|$(HAVE_DECL_STRNCASECMP)|g' \
	      -e 's|@''REPLACE_STRCASECMP''@|$(REPLACE_STRCASECMP)|g' \
	      -e 's|@''REPLACE_STRCASECMP_L''@|$(REPLACE_STRCASECMP_L)|g' \
	      -e 's|@''REPLACE_STRNCASECMP''@|$(REPLACE_STRNCASECMP)|g' \
	      -e 's|@''REPLACE_STRNCASECMP_L''@|$(REPLACE_STRNCASECMP_L)|g' \
	      -e '/definitions of _GL_FUNCDECL_RPL/r $(CXXDEFS_H)' \
	      -e '/definition of _GL_ARG_NONNULL/r $(ARG_NONNULL_H)' \
	      -e '/definition of _GL_WARN_ON_USE/r $(WARN_ON_USE_H)' \
	      $(srcdir)/strings.in.h > $@-t
	$(AM_V_at)mv $@-t $@
MOSTLYCLEANFILES += strings.h strings.h-t

EXTRA_DIST += strings.in.h

## end   gnulib module strings-h

## begin gnulib module strncasecmp_l

if GL_COND_OBJ_STRNCASECMP_L
libgnu_a_SOURCES += strncasecmp_l.c
endif

## end   gnulib module strncasecmp_l

## begin gnulib module sys_types-h

BUILT_SOURCES += sys/types.h

# We need the following in order to create <sys/types.h> when the system
# doesn't have one that works with the given compiler.
sys/types.h: sys_types.in.h $(top_builddir)/config.status
	$(AM_V_GEN)$(MKDIR_P) '%reldir%/sys'
	$(AM_V_at)$(SED_HEADER_STDOUT) \
	      -e 's|@''GUARD_PREFIX''@|GL|g' \
	      -e 's|@''INCLUDE_NEXT''@|$(INCLUDE_NEXT)|g' \
	      -e 's|@''PRAGMA_SYSTEM_HEADER''@|@PRAGMA_SYSTEM_HEADER@|g' \
	      -e 's|@''PRAGMA_COLUMNS''@|@PRAGMA_COLUMNS@|g' \
	      -e 's|@''NEXT_SYS_TYPES_H''@|$(NEXT_SYS_TYPES_H)|g' \
	      -e 's|@''WINDOWS_64_BIT_OFF_T''@|$(WINDOWS_64_BIT_OFF_T)|g' \
	      -e 's|@''HAVE_OFF64_T''@|$(HAVE_OFF64_T)|g' \
	      -e 's|@''WINDOWS_STAT_INODES''@|$(WINDOWS_STAT_INODES)|g' \
	      -e 's|@''HAVE_BLKSIZE_T''@|$(HAVE_BLKSIZE_T)|g' \
	      -e 's|@''HAVE_BLKCNT_T''@|$(HAVE_BLKCNT_T)|g' \
	      $(srcdir)/sys_types.in.h > $@-t
	$(AM_V_at)mv $@-t $@
MOSTLYCLEANFILES += sys/types.h sys/types.h-t
MOSTLYCLEANDIRS += sys

EXTRA_DIST += sys_types.in.h

## end   gnulib module sys_types-h

## begin gnulib module tolower_l

if GL_COND_OBJ_TOLOWER_L
libgnu_a_SOURCES += tolower_l.c
endif

EXTRA_DIST += to_l-impl.h

## end   gnulib module tolower_l


mostlyclean-local: mostlyclean-generic
	@for dir in '' $(MOSTLYCLEANDIRS); do \
	  if test -n "$$dir" && test -d $$dir; then \
	    echo "rmdir $$dir"; rmdir $$dir; \
	  fi; \
	done; \
	:
distclean-local: distclean-gnulib-libobjs
distclean-gnulib-libobjs:
	-rm -f @gl_LIBOBJDEPS@
maintainer-clean-local: distclean-gnulib-libobjs
