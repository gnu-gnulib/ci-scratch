/* Iterate over arguments from argv or --files0-from=FILE
   Copyright (C) 2008-2025 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* This file uses _GL_ATTRIBUTE_DEALLOC, _GL_ATTRIBUTE_PURE.  */
#if !_GL_CONFIG_H_INCLUDED
 #error "Please include config.h first."
#endif

#include <stdio.h>

/* Definition of _GL_ARG_NONNULL.  */
#include "arg-nonnull.h"

#ifdef __cplusplus
extern "C" {
#endif


struct argv_iterator;

enum argv_iter_err
{
  AI_ERR_OK = 1,
  AI_ERR_EOF,
  AI_ERR_MEM,
  AI_ERR_READ
};

void argv_iter_free (struct argv_iterator *)
  _GL_ARG_NONNULL ((1));

struct argv_iterator *argv_iter_init_argv (char **argv)
  _GL_ARG_NONNULL ((1)) _GL_ATTRIBUTE_DEALLOC (argv_iter_free, 1);
struct argv_iterator *argv_iter_init_stream (FILE *fp)
  _GL_ARG_NONNULL ((1)) _GL_ATTRIBUTE_DEALLOC (argv_iter_free, 1);
char *argv_iter (struct argv_iterator *, enum argv_iter_err *)
  _GL_ARG_NONNULL ((1, 2));
size_t argv_iter_n_args (struct argv_iterator const *)
  _GL_ATTRIBUTE_PURE _GL_ARG_NONNULL ((1));


#ifdef __cplusplus
}
#endif
