/* Test of nstrftime in Iran.
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
  if (setlocale (LC_ALL, "fa_IR.UTF-8") == NULL
      && setlocale (LC_ALL, "fa_IR") == NULL)
    {
      fprintf (stderr, "Skipping test: Unicode locale for Iran is not installed\n");
      return 77;
    }

  char buf[100];
  size_t ret;
  {
    DECLARE_TM (tm, 1967, 10, 26);

    ret = nstrftime (buf, sizeof (buf), "%Y-%m-%d",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "1346-08-04") == 0);

    ret = nstrftime (buf, sizeof (buf), "%-d %B %Y",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "4 آبان 1346") == 0);

    ret = nstrftime (buf, sizeof (buf), "%x",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "۱۳۴۶/۸/۴") == 0);
  }
  {
    DECLARE_TM (tm, 1969, 12, 28);

    ret = nstrftime (buf, sizeof (buf), "%Y-%m-%d",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "1348-10-07") == 0);

    ret = nstrftime (buf, sizeof (buf), "%-d %B %Y",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "7 دی 1348") == 0);

    ret = nstrftime (buf, sizeof (buf), "%x",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "۱۳۴۸/۱۰/۷") == 0);
  }
  /* Verify that 1403 is a leap year and 1404 is not.  */
  {
    DECLARE_TM (tm, 2024, 3, 19);

    ret = nstrftime (buf, sizeof (buf), "%Y-%m-%d",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "1402-12-29") == 0);

    ret = nstrftime (buf, sizeof (buf), "%-d %B %Y",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "29 اسفند 1402") == 0);

    ret = nstrftime (buf, sizeof (buf), "%x",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "۱۴۰۲/۱۲/۲۹") == 0);
  }
  {
    DECLARE_TM (tm, 2024, 3, 22);

    ret = nstrftime (buf, sizeof (buf), "%Y-%m-%d",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "1403-01-03") == 0);

    ret = nstrftime (buf, sizeof (buf), "%-d %B %Y",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "3 فروردین 1403") == 0);

    ret = nstrftime (buf, sizeof (buf), "%x",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "۱۴۰۳/۱/۳") == 0);
  }
  {
    DECLARE_TM (tm, 2025, 3, 19);

    ret = nstrftime (buf, sizeof (buf), "%Y-%m-%d",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "1403-12-29") == 0);

    ret = nstrftime (buf, sizeof (buf), "%-d %B %Y",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "29 اسفند 1403") == 0);

    ret = nstrftime (buf, sizeof (buf), "%x",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "۱۴۰۳/۱۲/۲۹") == 0);
  }
  {
    DECLARE_TM (tm, 2025, 3, 22);

    ret = nstrftime (buf, sizeof (buf), "%Y-%m-%d",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "1404-01-02") == 0);

    ret = nstrftime (buf, sizeof (buf), "%-d %B %Y",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "2 فروردین 1404") == 0);

    ret = nstrftime (buf, sizeof (buf), "%x",
                     &tm, (timezone_t) 0, 0);
    ASSERT (ret > 0);
    ASSERT (strcmp (buf, "۱۴۰۴/۱/۲") == 0);
  }

  return test_exit_status;
}
