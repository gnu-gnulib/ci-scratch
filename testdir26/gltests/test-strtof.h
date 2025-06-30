/* Test of strtof() and c_strtof() in the "C" locale.
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

/* Written by Eric Blake.  */

static void
test_function (float (*my_strtof) (const char *, char **))
{
  /* Subject sequence empty or invalid.  */
  {
    const char input[] = "";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input);
    ASSERT (errno == 0 || errno == EINVAL);
  }
  {
    const char input[] = " ";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input);
    ASSERT (errno == 0 || errno == EINVAL);
  }
  {
    const char input[] = " +";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input);
    ASSERT (errno == 0 || errno == EINVAL);
  }
  {
    const char input[] = " .";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input);
    ASSERT (errno == 0 || errno == EINVAL);
  }
  {
    const char input[] = " .e0";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input);              /* IRIX 6.5, OSF/1 5.1 */
    ASSERT (errno == 0 || errno == EINVAL);
  }
  {
    const char input[] = " +.e-0";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input);              /* IRIX 6.5, OSF/1 5.1 */
    ASSERT (errno == 0 || errno == EINVAL);
  }
  {
    const char input[] = " in";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input);
    ASSERT (errno == 0 || errno == EINVAL);
  }
  {
    const char input[] = " na";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input);
    ASSERT (errno == 0 || errno == EINVAL);
  }

  /* Simple floating point values.  */
  {
    const char input[] = "1";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);
    ASSERT (ptr == input + 1);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "1.";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);
    ASSERT (ptr == input + 2);
    ASSERT (errno == 0);
  }
  {
    const char input[] = ".5";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.5f);
    ASSERT (ptr == input + 2);
    ASSERT (errno == 0);
  }
  {
    const char input[] = " 1";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);
    ASSERT (ptr == input + 2);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "+1";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);
    ASSERT (ptr == input + 2);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "-1";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == -1.0f);
    ASSERT (ptr == input + 2);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "1e0";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);
    ASSERT (ptr == input + 3);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "1e+0";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);
    ASSERT (ptr == input + 4);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "1e-0";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);
    ASSERT (ptr == input + 4);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "1e1";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 10.0f);
    ASSERT (ptr == input + 3);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "5e-1";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.5f);
    ASSERT (ptr == input + 4);
    ASSERT (errno == 0);
  }

  /* Zero.  */
  {
    const char input[] = "0";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input + 1);
    ASSERT (errno == 0);
  }
  {
    const char input[] = ".0";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input + 2);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0e0";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input + 3);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0e+9999999";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input + 10);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0e-9999999";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input + 10);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "-0";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!!signbit (result) == !!signbit (minus_zerof)); /* IRIX 6.5, OSF/1 4.0 */
    ASSERT (ptr == input + 2);
    ASSERT (errno == 0);
  }

  /* Suffixes.  */
  {
    const char input[] = "1f";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);
    ASSERT (ptr == input + 1);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "1.f";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);
    ASSERT (ptr == input + 2);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "1e";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);
    ASSERT (ptr == input + 1);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "1e+";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);
    ASSERT (ptr == input + 1);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "1e-";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);
    ASSERT (ptr == input + 1);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "1E 2";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);            /* HP-UX 11.11, IRIX 6.5, OSF/1 4.0 */
    ASSERT (ptr == input + 1);          /* HP-UX 11.11, IRIX 6.5 */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0x";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input + 1);          /* glibc-2.3.6, Mac OS X 10.3, FreeBSD 6.2, AIX 7.1 */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "00x1";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input + 2);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "-0x";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!!signbit (result) == !!signbit (minus_zerof)); /* Mac OS X 10.3, FreeBSD 6.2, IRIX 6.5, OSF/1 4.0 */
    ASSERT (ptr == input + 2);          /* glibc-2.3.6, Mac OS X 10.3, FreeBSD 6.2, AIX 7.1 */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0xg";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input + 1);          /* glibc-2.3.6, Mac OS X 10.3, FreeBSD 6.2, AIX 7.1 */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0xp";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input + 1);          /* glibc-2.3.6, Mac OS X 10.3, FreeBSD 6.2, AIX 7.1 */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0XP";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input + 1);          /* glibc-2.3.6, Mac OS X 10.3, FreeBSD 6.2, AIX 7.1 */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0x.";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input + 1);          /* glibc-2.3.6, Mac OS X 10.3, FreeBSD 6.2, AIX 7.1 */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0xp+";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input + 1);          /* glibc-2.3.6, Mac OS X 10.3, FreeBSD 6.2, AIX 7.1 */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0xp+1";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input + 1);          /* glibc-2.3.6, Mac OS X 10.3, FreeBSD 6.2, AIX 7.1 */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0x.p+1";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input + 1);          /* glibc-2.3.6, Mac OS X 10.3, FreeBSD 6.2, AIX 7.1 */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "1p+1";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);
    ASSERT (ptr == input + 1);
    ASSERT (errno == 0);
  }
  {
    const char input[] = "1P+1";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);
    ASSERT (ptr == input + 1);
    ASSERT (errno == 0);
  }

  /* Overflow.  */
  {
    const char input[] = "1e50";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == HUGE_VAL);
    ASSERT (ptr == input + 4);          /* OSF/1 5.1 */
    ASSERT (errno == ERANGE);
  }
  {
    const char input[] = "1E1000000";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == HUGE_VAL);
    ASSERT (ptr == input + 9);          /* OSF/1 5.1 */
    ASSERT (errno == ERANGE);
  }
  {
    const char input[] = "-1E1000000";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == -HUGE_VAL);
    ASSERT (ptr == input + 10);
    ASSERT (errno == ERANGE);
  }

  /* Gradual underflow, resulting in a denormalized number.  */
  {
    const char input[] = "1e-40";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (0.0f < result && result <= FLT_MIN);
    ASSERT (ptr == input + 5);
#if !defined _MSC_VER
    ASSERT (errno == ERANGE);
#endif
  }
  {
    const char input[] = "-1e-40";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (-FLT_MIN <= result && result < 0.0f);
    ASSERT (ptr == input + 6);
#if !defined _MSC_VER
    ASSERT (errno == ERANGE);
#endif
  }

  /* Flush-to-zero underflow.  */
  {
    const char input[] = "1E-100000";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
#if 1
    ASSERT (result == 0.0f);
#else /* This is all that ISO C guarantees.  */
    ASSERT (0.0f <= result && result <= FLT_MIN);
#endif
    ASSERT (!signbit (result));
    ASSERT (ptr == input + 9);
    ASSERT (errno == ERANGE);
  }
  {
    const char input[] = "-1E-100000";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
#if 1
    ASSERT (result == 0.0f);
#else /* This is all that ISO C guarantees.  */
    ASSERT (-FLT_MIN <= result && result <= 0.0f);
#endif
    /* Negative underflow.  Expect a negative sign, although POSIX allows +0.0f.
       See also <https://sourceware.org/bugzilla/show_bug.cgi?id=5995>.  */
    ASSERT (!!signbit (result) == !!signbit (minus_zerof)); /* glibc-2.3.6, mingw */
    ASSERT (ptr == input + 10);
    ASSERT (errno == ERANGE);
  }

  /* Space before the exponent.  */
  {
    const char input[] = "1E 1000000";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);            /* HP-UX 11.11, IRIX 6.5, OSF/1 4.0 */
    ASSERT (ptr == input + 1);          /* HP-UX 11.11, IRIX 6.5 */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0x1P 1000000";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);            /* NetBSD 3.0, OpenBSD 4.0, AIX 7.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (ptr == input + 3);          /* NetBSD 3.0, OpenBSD 4.0, AIX 7.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (errno == 0);
  }

  /* Infinity.  */
  {
    const char input[] = "iNf";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == HUGE_VAL);        /* OpenBSD 4.0, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (ptr == input + 3);          /* OpenBSD 4.0, HP-UX 11.00, IRIX 6.5, OSF/1 5.1, Solaris 9, mingw */
    ASSERT (errno == 0);                /* HP-UX 11.11, OSF/1 4.0 */
  }
  {
    const char input[] = "-InF";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == -HUGE_VAL);       /* OpenBSD 4.0, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (ptr == input + 4);          /* OpenBSD 4.0, HP-UX 11.00, IRIX 6.5, OSF/1 4.0, Solaris 9, mingw */
    ASSERT (errno == 0);                /* HP-UX 11.11, OSF/1 4.0 */
  }
  {
    const char input[] = "infinite";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == HUGE_VAL);        /* OpenBSD 4.0, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (ptr == input + 3);          /* OpenBSD 4.0, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (errno == 0);                /* OSF/1 4.0 */
  }
  {
    const char input[] = "infinitY";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == HUGE_VAL);        /* OpenBSD 4.0, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (ptr == input + 8);          /* OpenBSD 4.0, HP-UX 11.00, IRIX 6.5, OSF/1 5.1, Solaris 9, mingw */
    ASSERT (errno == 0);                /* HP-UX 11.11, OSF/1 4.0 */
  }
  {
    const char input[] = "infinitY.";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == HUGE_VAL);        /* OpenBSD 4.0, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (ptr == input + 8);          /* OpenBSD 4.0, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (errno == 0);                /* OSF/1 4.0 */
  }

  /* NaN.  Some processors set the sign bit of the default NaN, so all
     we check is that using a sign changes the result.  */
  {
    const char input[] = "-nan";
    char *ptr1;
    char *ptr2;
    float result1;
    float result2;
    errno = 0;
    result1 = my_strtof (input, &ptr1);
    result2 = my_strtof (input + 1, &ptr2);
#if 1 /* All known CPUs support NaNs.  */
    ASSERT (isnanf (result1));          /* OpenBSD 4.0, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (isnanf (result2));          /* OpenBSD 4.0, IRIX 6.5, OSF/1 5.1, mingw */
# if 0
    /* Sign bits of NaN is a portability sticking point, not worth
       worrying about.  */
    ASSERT (!!signbit (result1) != !!signbit (result2)); /* glibc-2.3.6, IRIX 6.5, OSF/1 5.1, mingw */
# endif
    ASSERT (ptr1 == input + 4);         /* OpenBSD 4.0, IRIX 6.5, OSF/1 5.1, Solaris 2.5.1, mingw */
    ASSERT (ptr2 == input + 4);         /* OpenBSD 4.0, IRIX 6.5, OSF/1 5.1, Solaris 2.5.1, mingw */
    ASSERT (errno == 0);                /* HP-UX 11.11 */
#else
    ASSERT (result1 == 0.0f);
    ASSERT (result2 == 0.0f);
    ASSERT (!signbit (result1));
    ASSERT (!signbit (result2));
    ASSERT (ptr1 == input);
    ASSERT (ptr2 == input + 1);
    ASSERT (errno == 0 || errno == EINVAL);
#endif
  }
  {
    const char input[] = "+nan(";
    char *ptr1;
    char *ptr2;
    float result1;
    float result2;
    errno = 0;
    result1 = my_strtof (input, &ptr1);
    result2 = my_strtof (input + 1, &ptr2);
#if 1 /* All known CPUs support NaNs.  */
    ASSERT (isnanf (result1));          /* OpenBSD 4.0, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (isnanf (result2));          /* OpenBSD 4.0, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (!!signbit (result1) == !!signbit (result2));
    ASSERT (ptr1 == input + 4);         /* OpenBSD 4.0, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 2.5.1, mingw */
    ASSERT (ptr2 == input + 4);         /* OpenBSD 4.0, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 2.5.1, mingw */
    ASSERT (errno == 0);
#else
    ASSERT (result1 == 0.0f);
    ASSERT (result2 == 0.0f);
    ASSERT (!signbit (result1));
    ASSERT (!signbit (result2));
    ASSERT (ptr1 == input);
    ASSERT (ptr2 == input + 1);
    ASSERT (errno == 0 || errno == EINVAL);
#endif
  }
  {
    const char input[] = "-nan()";
    char *ptr1;
    char *ptr2;
    float result1;
    float result2;
    errno = 0;
    result1 = my_strtof (input, &ptr1);
    result2 = my_strtof (input + 1, &ptr2);
#if 1 /* All known CPUs support NaNs.  */
    ASSERT (isnanf (result1));          /* OpenBSD 4.0, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (isnanf (result2));          /* OpenBSD 4.0, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, mingw */
# if 0
    /* Sign bits of NaN is a portability sticking point, not worth
       worrying about.  */
    ASSERT (!!signbit (result1) != !!signbit (result2)); /* glibc-2.3.6, IRIX 6.5, OSF/1 5.1, mingw */
# endif
    ASSERT (ptr1 == input + 6);         /* glibc-2.3.6, Mac OS X 10.3, FreeBSD 6.2, OpenBSD 4.0, AIX 7.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (ptr2 == input + 6);         /* glibc-2.3.6, Mac OS X 10.3, FreeBSD 6.2, OpenBSD 4.0, AIX 7.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (errno == 0);
#else
    ASSERT (result1 == 0.0f);
    ASSERT (result2 == 0.0f);
    ASSERT (!signbit (result1));
    ASSERT (!signbit (result2));
    ASSERT (ptr1 == input);
    ASSERT (ptr2 == input + 1);
    ASSERT (errno == 0 || errno == EINVAL);
#endif
  }
  {
    const char input[] = " nan().";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
#if 1 /* All known CPUs support NaNs.  */
    ASSERT (isnanf (result));           /* OpenBSD 4.0, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (ptr == input + 6);          /* glibc-2.3.6, Mac OS X 10.3, FreeBSD 6.2, OpenBSD 4.0, AIX 7.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (errno == 0);
#else
    ASSERT (result == 0.0f);
    ASSERT (!signbit (result));
    ASSERT (ptr == input);
    ASSERT (errno == 0 || errno == EINVAL);
#endif
  }
  {
    /* The behavior of nan(0) is implementation-defined, but all
       implementations we know of which handle optional
       n-char-sequences handle nan(0) the same as nan().  */
    const char input[] = "-nan(0).";
    char *ptr1;
    char *ptr2;
    float result1;
    float result2;
    errno = 0;
    result1 = my_strtof (input, &ptr1);
    result2 = my_strtof (input + 1, &ptr2);
#if 1 /* All known CPUs support NaNs.  */
    ASSERT (isnanf (result1));          /* OpenBSD 4.0, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (isnanf (result2));          /* OpenBSD 4.0, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, mingw */
# if 0
    /* Sign bits of NaN is a portability sticking point, not worth
       worrying about.  */
    ASSERT (!!signbit (result1) != !!signbit (result2)); /* glibc-2.3.6, IRIX 6.5, OSF/1 5.1, mingw */
# endif
    ASSERT (ptr1 == input + 7);         /* glibc-2.3.6, OpenBSD 4.0, AIX 7.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (ptr2 == input + 7);         /* glibc-2.3.6, OpenBSD 4.0, AIX 7.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, mingw */
    ASSERT (errno == 0);
#else
    ASSERT (result1 == 0.0f);
    ASSERT (result2 == 0.0f);
    ASSERT (!signbit (result1));
    ASSERT (!signbit (result2));
    ASSERT (ptr1 == input);
    ASSERT (ptr2 == input + 1);
    ASSERT (errno == 0 || errno == EINVAL);
#endif
  }

  /* Hex.  */
  {
    const char input[] = "0xa";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 10.0f);           /* NetBSD 3.0, OpenBSD 4.0, AIX 5.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (ptr == input + 3);          /* NetBSD 3.0, OpenBSD 4.0, AIX 5.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0XA";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 10.0f);           /* NetBSD 3.0, OpenBSD 4.0, AIX 5.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (ptr == input + 3);          /* NetBSD 3.0, OpenBSD 4.0, AIX 5.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0x1p";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);            /* NetBSD 3.0, OpenBSD 4.0, AIX 7.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (ptr == input + 3);          /* NetBSD 3.0, OpenBSD 4.0, AIX 7.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0x1p+";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);            /* NetBSD 3.0, OpenBSD 4.0, AIX 5.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (ptr == input + 3);          /* NetBSD 3.0, OpenBSD 4.0, AIX 5.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0x1P+";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);            /* NetBSD 3.0, OpenBSD 4.0, AIX 5.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (ptr == input + 3);          /* NetBSD 3.0, OpenBSD 4.0, AIX 5.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0x1p+1";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 2.0f);            /* NetBSD 3.0, OpenBSD 4.0, AIX 5.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (ptr == input + 6);          /* NetBSD 3.0, OpenBSD 4.0, AIX 5.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0X1P+1";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 2.0f);            /* NetBSD 3.0, OpenBSD 4.0, AIX 5.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (ptr == input + 6);          /* NetBSD 3.0, OpenBSD 4.0, AIX 5.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0x1p+1a";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 2.0f);            /* NetBSD 3.0, OpenBSD 4.0, AIX 5.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (ptr == input + 6);          /* NetBSD 3.0, OpenBSD 4.0, AIX 5.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (errno == 0);
  }
  {
    const char input[] = "0x1p 2";
    char *ptr;
    float result;
    errno = 0;
    result = my_strtof (input, &ptr);
    ASSERT (result == 1.0f);            /* NetBSD 3.0, OpenBSD 4.0, AIX 7.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (ptr == input + 3);          /* NetBSD 3.0, OpenBSD 4.0, AIX 7.1, HP-UX 11.11, IRIX 6.5, OSF/1 5.1, Solaris 10, mingw */
    ASSERT (errno == 0);
  }

  /* Large buffers.  */
  {
    size_t m = 1000000;
    char *input = malloc (m + 1);
    if (input)
      {
        char *ptr;
        float result;
        memset (input, '\t', m - 1);
        input[m - 1] = '1';
        input[m] = '\0';
        errno = 0;
        result = my_strtof (input, &ptr);
        ASSERT (result == 1.0f);
        ASSERT (ptr == input + m);
        ASSERT (errno == 0);
      }
    free (input);
  }
  {
    size_t m = 1000000;
    char *input = malloc (m + 1);
    if (input)
      {
        char *ptr;
        float result;
        memset (input, '0', m - 1);
        input[m - 1] = '1';
        input[m] = '\0';
        errno = 0;
        result = my_strtof (input, &ptr);
        ASSERT (result == 1.0f);
        ASSERT (ptr == input + m);
        ASSERT (errno == 0);
      }
    free (input);
  }
#if 0
  /* Newlib has an artificial limit of 20000 for the exponent.  TODO -
     gnulib should fix this.  */
  {
    size_t m = 1000000;
    char *input = malloc (m + 1);
    if (input)
      {
        char *ptr;
        float result;
        input[0] = '.';
        memset (input + 1, '0', m - 10);
        input[m - 9] = '1';
        input[m - 8] = 'e';
        input[m - 7] = '+';
        input[m - 6] = '9';
        input[m - 5] = '9';
        input[m - 4] = '9';
        input[m - 3] = '9';
        input[m - 2] = '9';
        input[m - 1] = '1';
        input[m] = '\0';
        errno = 0;
        result = my_strtof (input, &ptr);
        ASSERT (result == 1.0f);        /* Mac OS X 10.3, FreeBSD 6.2, NetBSD 3.0, OpenBSD 4.0, IRIX 6.5, OSF/1 5.1, mingw */
        ASSERT (ptr == input + m);      /* OSF/1 5.1 */
        ASSERT (errno == 0);            /* Mac OS X 10.3, FreeBSD 6.2, NetBSD 3.0, OpenBSD 4.0, IRIX 6.5, OSF/1 5.1, mingw */
      }
    free (input);
  }
  {
    size_t m = 1000000;
    char *input = malloc (m + 1);
    if (input)
      {
        char *ptr;
        float result;
        input[0] = '1';
        memset (input + 1, '0', m - 9);
        input[m - 8] = 'e';
        input[m - 7] = '-';
        input[m - 6] = '9';
        input[m - 5] = '9';
        input[m - 4] = '9';
        input[m - 3] = '9';
        input[m - 2] = '9';
        input[m - 1] = '1';
        input[m] = '\0';
        errno = 0;
        result = my_strtof (input, &ptr);
        ASSERT (result == 1.0f);        /* Mac OS X 10.3, FreeBSD 6.2, NetBSD 3.0, OpenBSD 4.0, IRIX 6.5, OSF/1 5.1, mingw */
        ASSERT (ptr == input + m);
        ASSERT (errno == 0);            /* Mac OS X 10.3, FreeBSD 6.2, NetBSD 3.0, OpenBSD 4.0, IRIX 6.5, OSF/1 5.1, mingw */
      }
    free (input);
  }
#endif
  {
    size_t m = 1000000;
    char *input = malloc (m + 1);
    if (input)
      {
        char *ptr;
        float result;
        input[0] = '-';
        input[1] = '0';
        input[2] = 'e';
        input[3] = '1';
        memset (input + 4, '0', m - 3);
        input[m] = '\0';
        errno = 0;
        result = my_strtof (input, &ptr);
        ASSERT (result == 0.0f);
        ASSERT (!!signbit (result) == !!signbit (minus_zerof)); /* IRIX 6.5, OSF/1 4.0 */
        ASSERT (ptr == input + m);
        ASSERT (errno == 0);
      }
    free (input);
  }

  /* Rounding.  */
  /* TODO - is it worth some tests of rounding for typical IEEE corner
     cases, such as .5 ULP rounding up to the smallest denormal and
     not causing underflow, or FLT_MIN - .5 ULP not causing an
     infinite loop?  */
}
