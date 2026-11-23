#define _GNU_SOURCE 1
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// POSIX:
// https://pubs.opengroup.org/onlinepubs/9799919799/functions/strptime.html

int
main ()
{
  struct tm t;
  char *end;
  int result = 0;

  memset (&t, '\0', sizeof (t));
  t.tm_isdst = -1;
  end = strptime ("Friday September 18, 1987, 10:29:30", "%A %B %d, %Y, %H:%M:%S", &t);
  printf ("end = %p, *end = NUL? %d\n", end, end != NULL && *end == '\0');
  printf ("t = %d %d %d %d %d %d\n",
          t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);

  memset (&t, '\0', sizeof (t));
  t.tm_year = -9999; t.tm_mon = -9999; t.tm_mday = -9999;
  t.tm_hour = -9999; t.tm_min = -9999; t.tm_sec = -9999;
  t.tm_isdst = -1;
  end = strptime ("Friday September 18, 1987", "%A %B %d, %Y", &t);
  printf ("end = %p, *end = NUL? %d\n", end, end != NULL && *end == '\0');
  printf ("t = %d %d %d %d %d %d\n",
          t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);
  if (t.tm_hour != -9999 || t.tm_min != -9999 || t.tm_sec != -9999)
    result |= 1;

  memset (&t, '\0', sizeof (t));
  t.tm_year = -9999; t.tm_mon = -9999; t.tm_mday = -9999;
  t.tm_hour = -9999; t.tm_min = -9999; t.tm_sec = -9999;
  t.tm_isdst = -1;
  end = strptime ("10:29:30", "%H:%M:%S", &t);
  printf ("end = %p, *end = NUL? %d\n", end, end != NULL && *end == '\0');
  printf ("t = %d %d %d %d %d %d\n",
          t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);
  if (t.tm_year != -9999 || t.tm_mon != -9999 || t.tm_mday != -9999)
    result |= 2;

  return result;
}
