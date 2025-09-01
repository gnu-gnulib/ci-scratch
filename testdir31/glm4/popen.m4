# popen.m4
# serial 8
dnl Copyright (C) 2009-2025 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.
dnl This file is offered as-is, without any warranty.

AC_DEFUN([gl_FUNC_POPEN],
[
  AC_REQUIRE([gl_STDIO_H_DEFAULTS])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CHECK_FUNCS_ONCE([popen])
  if test $ac_cv_func_popen = no; then
    HAVE_POPEN=0
  else
    AC_CACHE_CHECK([whether popen works with closed stdin],
      [gl_cv_func_popen_works],
      [
        case "$host_os" in
          os2*)
            # On OS/2 kLIBC, popen() with closed stdios hangs on.
            gl_cv_func_popen_works="guessing no"
            ;;
          *)
            AC_RUN_IFELSE(
              [AC_LANG_PROGRAM(
                 [[#include <stdio.h>]],
                 [[int result = 0;
                   FILE *child;
                   fclose (stdin);
                   fclose (stdout);
                   child = popen ("echo a", "r");
                   if (fgetc (child) != 'a')
                     result |= 1;
                   if (pclose (child) != 0)
                     result |= 2;
                   return result;
                 ]])],
              [gl_cv_func_popen_works=yes],
              [gl_cv_func_popen_works=no],
              [case "$host_os" in
                                    # For now, only cygwin 1.5 or older is known to be broken.
                 cygwin*)           gl_cv_func_popen_works="guessing no" ;;
                                    # Guess yes on native Windows.
                 mingw* | windows*) gl_cv_func_popen_works="guessing yes" ;;
                 *)                 gl_cv_func_popen_works="guessing yes" ;;
               esac
              ])
            ;;
        esac
      ])
    case "$gl_cv_func_popen_works" in
      *yes) ;;
      *) REPLACE_POPEN=1 ;;
    esac
  fi
])

# Prerequisites of lib/popen.c.
AC_DEFUN([gl_PREREQ_POPEN],
[
  :
])
