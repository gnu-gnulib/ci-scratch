/* xgettext TypeScript backend.
   Copyright (C) 2002-2025 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* Written by Bruno Haible <bruno@clisp.org>, 2025.  */


#include <stdio.h>

#include "message.h"
#include "xg-arglist-context.h"


#ifdef __cplusplus
extern "C" {
#endif


#define EXTENSIONS_TYPESCRIPT \
  { "ts",     "TypeScript" },                                           \

#define SCANNERS_TYPESCRIPT \
  { "TypeScript",       extract_typescript, NULL,                       \
                        &flag_table_typescript, &formatstring_javascript, NULL }, \

/* Scan a TypeScript file and add its translatable strings to mdlp.  */
extern void extract_typescript (FILE *fp, const char *real_filename,
                                const char *logical_filename,
                                flag_context_list_table_ty *flag_table,
                                msgdomain_list_ty *mdlp);

extern void x_typescript_keyword (const char *keyword);
extern void x_typescript_extract_all (void);

extern void init_flag_table_typescript (void);


#ifdef __cplusplus
}
#endif
