// Show getdate bugs on musl libc, macOS, NetBSD, Solaris 11 OmniOS.

#define _GNU_SOURCE 1
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

// POSIX:
// https://pubs.opengroup.org/onlinepubs/9799919799/functions/getdate.html
// https://pubs.opengroup.org/onlinepubs/9799919799/functions/strptime.html

static void
prepare ()
{
  const char *filename = "datemsk";

  FILE *fp = fopen (filename, "w");
  if (fp == NULL)
    perror ("fopen");
  const char *contents =
    "%m\n"
    "%A %B %d, %Y, %H:%M:%S\n"
    "%A\n"
    "%B\n"
    "%m/%d/%y %I %p\n"
    "%d,%m,%Y %H:%M\n"
    "%m/%d/%y\n"
    "%d.%m.%y\n"
    "%y-%m-%d\n"
    "%A %H:%M:%S\n"
    "%a\n"
    "%b %a\n"
    "%b %a %Y\n"
    "%a %H\n"
    "%b %H:%S\n"
    "%H:%M\n"
    ;
  fputs (contents, fp);
  fclose (fp);

  setenv ("DATEMSK", filename, 1);
}

// datum must specify *all* fields of 'struct tm'.
static void
test_complete (int line, const char *fmt, const char *datum)
{
  struct tm gd;
  {
    struct tm *t = getdate (datum);
    if (t == NULL)
      {
        fprintf (stderr, "%d: getdate failed, error %d\n", line, getdate_err);
        return;
      }
    if (!(t->tm_mon >= 0 && t->tm_mon < 12
          && t->tm_mday >= 1 && t->tm_mday <= 31))
      {
        char buf[100];
        strftime (buf, sizeof (buf), "%Y-%m-%d %H:%M:%S", t);
        fprintf (stderr, "%d: getdate returned invalid date %s\n", line, buf);
        return;
      }
    gd = *t;
  }

  struct tm sp;
  {
    // Need to initialize sp, because POSIX says
    // "It is unspecified whether multiple calls to strptime() using the same
    //  tm structure will update the current contents of the structure or
    //  overwrite all contents of the structure."
    sp.tm_year = 0;
    sp.tm_mon = 0;
    sp.tm_mday = 1;
    sp.tm_hour = 0;
    sp.tm_min = 0;
    sp.tm_sec = 0;
    sp.tm_isdst = 0;
    char *end = strptime (datum, fmt, &sp);
    if (end == NULL)
      {
        fprintf (stderr, "%d: strptime failed\n", line);
        return;
      }
    if (*end != '\0')
      {
        fprintf (stderr, "%d: strptime did not consume the entire string\n", line);
        return;
      }
    if (!(sp.tm_mon >= 0 && sp.tm_mon < 12
          && sp.tm_mday >= 1 && sp.tm_mday <= 31))
      {
        char buf[100];
        strftime (buf, sizeof (buf), "%Y-%m-%d %H:%M:%S", &sp);
        fprintf (stderr, "%d: strptime returned invalid date %s\n", line, buf);
        return;
      }
  }

  if (!(gd.tm_year == sp.tm_year
        && gd.tm_mon == sp.tm_mon
        && gd.tm_mday == sp.tm_mday
        && gd.tm_hour == sp.tm_hour
        && gd.tm_min == sp.tm_min
        && gd.tm_sec == sp.tm_sec))
    {
      char buf1[100];
      strftime (buf1, sizeof (buf1), "%Y-%m-%d %H:%M:%S", &gd);
      char buf2[100];
      strftime (buf2, sizeof (buf2), "%Y-%m-%d %H:%M:%S", &sp);
      fprintf (stderr, "%d: getdate and strptime returned different times: %s vs. %s\n", line, buf1, buf2);
      return;
    }

  char buf[100];
  strftime (buf, sizeof (buf), "%Y-%m-%d %a %H:%M:%S", &gd);
  printf ("%d: %s\n", line, buf);
}

static void
test_simple (int line, const char *fmt, const char *datum)
{
  (void) fmt;

  struct tm gd;
  {
    struct tm *t = getdate (datum);
    if (t == NULL)
      {
        fprintf (stderr, "%d: getdate failed, error %d\n", line, getdate_err);
        return;
      }
    if (!(t->tm_mon >= 0 && t->tm_mon < 12
          && t->tm_mday >= 1 && t->tm_mday <= 31))
      {
        char buf[100];
        strftime (buf, sizeof (buf), "%Y-%m-%d %H:%M:%S", t);
        fprintf (stderr, "%d: getdate returned invalid date %s\n", line, buf);
        return;
      }
    gd = *t;
  }

  char buf[100];
  strftime (buf, sizeof (buf), "%Y-%m-%d %a %H:%M:%S", &gd);
  printf ("%d: %s\n", line, buf);
}

int
main ()
{
  prepare ();

  test_complete (__LINE__, "%m/%d/%y %I %p", "10/1/87 4 PM");    // NetBSD OmniOS
  test_complete (__LINE__, "%A %B %d, %Y, %H:%M:%S", "Friday September 18, 1987, 10:30:30"); // OmniOS
  test_complete (__LINE__, "%d,%m,%Y %H:%M", "24,9,1986 10:30"); // musl NetBSD OmniOS

  test_simple (__LINE__, "%m/%d/%y", "11/27/86");                // NetBSD OmniOS
  test_simple (__LINE__, "%d.%m.%y", "27.11.86");                // NetBSD
  test_simple (__LINE__, "%y-%m-%d", "86-11-27");                // NetBSD
  test_simple (__LINE__, "%A %H:%M:%S", "Friday 12:00:00");      // NetBSD OmniOS
  test_simple (__LINE__, "%A", "Friday");                        // OmniOS
  test_simple (__LINE__, "%a", "Mon");                           // OmniOS
  test_simple (__LINE__, "%a", "Sun");                           // OmniOS
  test_simple (__LINE__, "%a", "Fri");                           // OmniOS
  test_simple (__LINE__, "%B", "September");                     // OmniOS
  test_simple (__LINE__, "%B", "January");                       // OmniOS
  test_simple (__LINE__, "%B", "December");                      // OmniOS
  test_simple (__LINE__, "%b %a", "Sep Mon");                    // NetBSD OmniOS
  test_simple (__LINE__, "%b %a", "Jan Fri");                    // NetBSD OmniOS
  test_simple (__LINE__, "%b %a", "Dec Mon");                    // NetBSD OmniOS
  test_simple (__LINE__, "%b %a %Y", "Jan Wed 1989");            // NetBSD OmniOS
  test_simple (__LINE__, "%a %H", "Fri 9");                      // NetBSD OmniOS
  test_simple (__LINE__, "%b %H:%S", "Feb 10:30");               // NetBSD OmniOS
  test_simple (__LINE__, "%H:%M", "10:30");                      // NetBSD OmniOS
  test_simple (__LINE__, "%H:%M", "13:30");                      // musl OmniOS

  return 0;
}

// Output e.g. on glibc:
// 155: 1987-10-01 Thu 16:00:00
// 156: 1987-09-18 Fri 10:30:30
// 157: 1986-09-24 Wed 10:30:00
// 159: 1986-11-27 Thu 12:12:22
// 160: 1986-11-27 Thu 12:12:22
// 161: 1986-11-27 Thu 12:12:22
// 162: 2026-11-27 Fri 12:00:00
// 163: 2026-11-27 Fri 12:12:22
// 164: 2026-11-23 Mon 12:12:22
// 165: 2026-11-22 Sun 12:12:22
// 166: 2026-11-27 Fri 12:12:22
// 167: 2027-09-03 Fri 12:12:22
// 168: 2027-01-03 Sun 12:12:22
// 169: 2026-12-04 Fri 12:12:22
// 170: 2027-09-06 Mon 12:12:22
// 171: 2027-01-01 Fri 12:12:22
// 172: 2026-12-07 Mon 12:12:22
// 173: 1989-01-04 Wed 12:12:22
// 174: 2026-11-27 Fri 09:00:00
// 175: 2027-02-03 Wed 10:00:30
// 176: 2026-11-23 Mon 10:30:00
// 177: 2026-11-22 Sun 13:30:00
