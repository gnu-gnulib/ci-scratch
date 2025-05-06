/* xgettext TSX backend.
   Copyright (C) 2001-2025 Free Software Foundation, Inc.

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

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

/* Specification.  */
#include "x-typescriptx.h"

#define NOTE_OPTION_KEYWORD     x_typescriptx_keyword
#define NOTE_OPTION_EXTRACT_ALL x_typescriptx_extract_all
#define INIT_FLAG_TABLE         init_flag_table_typescriptx
#define EXTRACT                 extract_typescriptx
#define TREE_SITTER_LANGUAGE    tree_sitter_tsx
#include "x-typescript-impl.h"
