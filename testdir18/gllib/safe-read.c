/* An interface to read and write that retries after interrupts.

   Copyright (C) 1993-1994, 1998, 2002-2006, 2009-2025 Free Software
   Foundation, Inc.

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

#include <config.h>

/* Specification.  */
#ifdef SAFE_WRITE
# include "safe-write.h"
#else
# include "safe-read.h"
#endif

/* Get ssize_t.  */
#include <sys/types.h>
#include <unistd.h>

#include <errno.h>

#ifdef EINTR
# define IS_EINTR(x) ((x) == EINTR)
#else
# define IS_EINTR(x) 0
#endif

#include "sys-limits.h"

#ifdef SAFE_WRITE
# define safe_rw safe_write
# define rw write
typedef void const *bufptr;
#else
# define safe_rw safe_read
# define rw read
typedef void *bufptr;
#endif

/* Read(write) up to COUNT bytes at BUF from(to) descriptor FD, retrying if
   interrupted.  Return the number of bytes read(written), zero for EOF,
   or -1 upon error.  */
ptrdiff_t
safe_rw (int fd, bufptr buf, idx_t count)
{
  for (;;)
    {
      ssize_t result = rw (fd, buf, count <= (size_t) -1 ? count : (size_t) -1);

      if (0 <= result)
        return result;
      else if (IS_EINTR (errno))
        continue;
      else if (errno == EINVAL && SYS_BUFSIZE_MAX < count)
        count = SYS_BUFSIZE_MAX;
      else
        return result;
    }
}
