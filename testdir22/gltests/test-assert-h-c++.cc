/* Test of <assert.h> substitute in C++ mode.
   Copyright (C) 2019-2025 Free Software Foundation, Inc.

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

/* Written by Bruno Haible <bruno@clisp.org>, 2019.  */

#define GNULIB_NAMESPACE gnulib
#include <config.h>

#include <assert.h>

/* Check against conflicts between <assert.h> and the C++ header files.  */
#include <stddef.h>
#include <iostream>


static_assert (2 + 2 == 4, "arithmetic does not work");
static_assert (2 + 2 == 4);

int
main ()
{
}
