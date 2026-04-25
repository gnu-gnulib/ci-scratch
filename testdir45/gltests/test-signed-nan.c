#include <config.h>

/* Specification.  */
#include "signed-nan.h"

#include <stdio.h>
#include <stdlib.h>

#include "c-strtod.h"

#include "macros.h"

static void
test_posix ()
{
  {
    double x = positive_NaNd ();
    printf ("positive_NaNd() -> %g\n", x);
  }
  {
    double x = negative_NaNd ();
    printf ("negative_NaNd() -> %g\n", x);
  }

  {
    long double x = positive_NaNl ();
    printf ("positive_NaNl() -> %Lg\n", x);
  }
  {
    long double x = negative_NaNl ();
    printf ("negative_NaNl() -> %Lg\n", x);
  }

  {
    char *endptr;
    float p = positive_NaNf ();
    float n = negative_NaNf ();
    float x = strtof ("nan", &endptr);
    if (*endptr)
      printf ("strtof failed\n");
    else
      printf ("strtof(\"nan\") -> %g [%g,%g]\n", (double) x, (double) p, (double) n);
  }
  {
    char *endptr;
    float p = positive_NaNf ();
    float n = negative_NaNf ();
    float x = strtof ("-nan", &endptr);
    if (*endptr)
      printf ("strtof failed\n");
    else
      printf ("strtof(\"-nan\") -> %g [%g,%g]\n", (double) x, (double) p, (double) n);
  }
  {
    char *endptr;
    float p = positive_NaNf ();
    float n = negative_NaNf ();
    float x = c_strtof ("nan", &endptr);
    if (*endptr)
      printf ("c_strtof failed\n");
    else
      printf ("c_strtof(\"nan\") -> %g [%g,%g]\n", (double) x, (double) p, (double) n);
  }
  {
    char *endptr;
    float p = positive_NaNf ();
    float n = negative_NaNf ();
    float x = c_strtof ("-nan", &endptr);
    if (*endptr)
      printf ("c_strtof failed\n");
    else
      printf ("c_strtof(\"-nan\") -> %g [%g,%g]\n", (double) x, (double) p, (double) n);
  }

  {
    char *endptr;
    double p = positive_NaNd ();
    double n = negative_NaNd ();
    double x = strtod ("nan", &endptr);
    if (*endptr)
      printf ("strtod failed\n");
    else
      printf ("strtod(\"nan\") -> %g [%g,%g]\n", x, p, n);
  }
  {
    char *endptr;
    double p = positive_NaNd ();
    double n = negative_NaNd ();
    double x = strtod ("-nan", &endptr);
    if (*endptr)
      printf ("strtod failed\n");
    else
      printf ("strtod(\"-nan\") -> %g [%g,%g]\n", x, p, n);
  }
  {
    char *endptr;
    double p = positive_NaNd ();
    double n = negative_NaNd ();
    double x = c_strtod ("nan", &endptr);
    if (*endptr)
      printf ("c_strtod failed\n");
    else
      printf ("c_strtod(\"nan\") -> %g [%g,%g]\n", x, p, n);
  }
  {
    char *endptr;
    double p = positive_NaNd ();
    double n = negative_NaNd ();
    double x = c_strtod ("-nan", &endptr);
    if (*endptr)
      printf ("c_strtod failed\n");
    else
      printf ("c_strtod(\"-nan\") -> %g [%g,%g]\n", x, p, n);
  }

  {
    char *endptr;
    long double p = positive_NaNl ();
    long double n = negative_NaNl ();
    long double x = strtold ("nan", &endptr);
    if (*endptr)
      printf ("strtold failed\n");
    else
      printf ("strtold(\"nan\") -> %Lg [%Lg,%Lg]\n", x, p, n);
  }
  {
    char *endptr;
    long double p = positive_NaNl ();
    long double n = negative_NaNl ();
    long double x = strtold ("-nan", &endptr);
    if (*endptr)
      printf ("strtold failed\n");
    else
      printf ("strtold(\"-nan\") -> %Lg [%Lg,%Lg]\n", x, p, n);
  }
  {
    char *endptr;
    long double p = positive_NaNl ();
    long double n = negative_NaNl ();
    long double x = c_strtold ("nan", &endptr);
    if (*endptr)
      printf ("c_strtold failed\n");
    else
      printf ("c_strtold(\"nan\") -> %Lg [%Lg,%Lg]\n", x, p, n);
  }
  {
    char *endptr;
    long double p = positive_NaNl ();
    long double n = negative_NaNl ();
    long double x = c_strtold ("-nan", &endptr);
    if (*endptr)
      printf ("c_strtold failed\n");
    else
      printf ("c_strtold(\"-nan\") -> %Lg [%Lg,%Lg]\n", x, p, n);
  }
}

#undef printf
#undef strtof
#undef strtod
#undef strtold

static void
test_native ()
{
  {
    double x = positive_NaNd ();
    printf ("positive_NaNd() -> %g\n", x);
  }
  {
    double x = negative_NaNd ();
    printf ("negative_NaNd() -> %g\n", x);
  }

  {
    long double x = positive_NaNl ();
    printf ("positive_NaNl() -> %Lg\n", x);
  }
  {
    long double x = negative_NaNl ();
    printf ("negative_NaNl() -> %Lg\n", x);
  }

  {
    char *endptr;
    float p = positive_NaNf ();
    float n = negative_NaNf ();
    float x = strtof ("nan", &endptr);
    if (*endptr)
      printf ("strtof failed\n");
    else
      printf ("strtof(\"nan\") -> %g [%g,%g]\n", (double) x, (double) p, (double) n);
  }
  {
    char *endptr;
    float p = positive_NaNf ();
    float n = negative_NaNf ();
    float x = strtof ("-nan", &endptr);
    if (*endptr)
      printf ("strtof failed\n");
    else
      printf ("strtof(\"-nan\") -> %g [%g,%g]\n", (double) x, (double) p, (double) n);
  }

  {
    char *endptr;
    double p = positive_NaNd ();
    double n = negative_NaNd ();
    double x = strtod ("nan", &endptr);
    if (*endptr)
      printf ("strtod failed\n");
    else
      printf ("strtod(\"nan\") -> %g [%g,%g]\n", x, p, n);
  }
  {
    char *endptr;
    double p = positive_NaNd ();
    double n = negative_NaNd ();
    double x = strtod ("-nan", &endptr);
    if (*endptr)
      printf ("strtod failed\n");
    else
      printf ("strtod(\"-nan\") -> %g [%g,%g]\n", x, p, n);
  }

  {
    char *endptr;
    long double p = positive_NaNl ();
    long double n = negative_NaNl ();
    long double x = strtold ("nan", &endptr);
    if (*endptr)
      printf ("strtold failed\n");
    else
      printf ("strtold(\"nan\") -> %Lg [%Lg,%Lg]\n", x, p, n);
  }
  {
    char *endptr;
    long double p = positive_NaNl ();
    long double n = negative_NaNl ();
    long double x = strtold ("-nan", &endptr);
    if (*endptr)
      printf ("strtold failed\n");
    else
      printf ("strtold(\"-nan\") -> %Lg [%Lg,%Lg]\n", x, p, n);
  }
}

int
main ()
{
  printf ("===== Native functions\n");
  test_native ();
  printf ("===== Gnulib functions\n");
  test_posix ();
  return test_exit_status;
}
