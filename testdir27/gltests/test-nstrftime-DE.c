/* Test of nstrftime in Germany.
   Copyright (C) 2025 Free Software Foundation, Inc.

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

/* Written by Bruno Haible <bruno@clisp.org>, 2025.  */

#include <config.h>

/* Specification.  */
#include "strftime.h"

#include <locale.h>
#include <string.h>
#include <time.h>

#include "macros.h"

#define DECLARE_TM(variable, greg_year, greg_month, greg_day) \
  struct tm variable =                          \
    {                                           \
      .tm_year = (greg_year) - 1900,            \
      .tm_mon = (greg_month) - 1,               \
      .tm_mday = (greg_day),                    \
      .tm_hour = 12, .tm_min = 34, .tm_sec = 56 \
    };                                          \
  /* Fill the other fields.  */                 \
  time_t tt = timegm (&variable);               \
  gmtime_r (&tt, &variable)/*;*/

int
main ()
{
  if (setlocale (LC_ALL, "de_DE.UTF-8") == NULL)
    {
      fprintf (stderr, "Skipping test: Unicode locale for Germany is not installed\n");
      return 77;
    }

  char buf[100];
  size_t ret;
  {
    DECLARE_TM (tm, 1969, 12, 28);

    ret = nstrftime (buf, sizeof (buf), "%Y-%m-%d",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "1969-12-28") == 0);

    ret = nstrftime (buf, sizeof (buf), "%-d. %B %Y",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "28. Dezember 1969") == 0);

    ret = nstrftime (buf, sizeof (buf), "%x",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "28.12.1969") == 0);
  }
  {
    DECLARE_TM (tm, 2025, 3, 1);

    ret = nstrftime (buf, sizeof (buf), "%Y-%m-%d",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "2025-03-01") == 0);

    ret = nstrftime (buf, sizeof (buf), "%-d. %B %Y",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "1. März 2025") == 0);

    ret = nstrftime (buf, sizeof (buf), "%x",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "01.03.2025") == 0);
  }

  return test_exit_status;
}
