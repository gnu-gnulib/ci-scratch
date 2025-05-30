# pthread_sigmask.m4
# serial 23
dnl Copyright (C) 2011-2025 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.
dnl This file is offered as-is, without any warranty.

AC_DEFUN([gl_FUNC_PTHREAD_SIGMASK],
[
  AC_REQUIRE([gl_SIGNAL_H_DEFAULTS])

  AC_CHECK_FUNCS_ONCE([pthread_sigmask])

  dnl On MinGW pthread_sigmask is just a macro which always returns 0.
  dnl It does not exist as a real function, which is required by POSIX.
  AC_CACHE_CHECK([whether pthread_sigmask is a macro],
    [gl_cv_func_pthread_sigmask_macro],
    [AC_EGREP_CPP([headers_define_pthread_sigmask], [
#include <pthread.h>
#include <signal.h>
#ifdef pthread_sigmask
 headers_define_pthread_sigmask
#endif],
       [gl_cv_func_pthread_sigmask_macro=yes],
       [gl_cv_func_pthread_sigmask_macro=no])
    ])

  PTHREAD_SIGMASK_LIB=

  if test $gl_cv_func_pthread_sigmask_macro = yes; then
    dnl pthread_sigmask is a dummy macro.
    HAVE_PTHREAD_SIGMASK=0
    dnl Make sure to '#undef pthread_sigmask' before defining it.
    REPLACE_PTHREAD_SIGMASK=1
  else
    dnl Test whether the gnulib module 'threadlib' is in use.
    dnl Some packages like Emacs use --avoid=threadlib.
    dnl Write the symbol in such a way that it does not cause 'aclocal' to pick
    dnl the threadlib.m4 file that is installed in $PREFIX/share/aclocal/.
    m4_ifdef([gl_][THREADLIB], [
      AC_REQUIRE([gl_][THREADLIB])

      if test "$gl_threads_api" = posix; then
        if test $ac_cv_func_pthread_sigmask = yes; then
          dnl pthread_sigmask is available without -lpthread.
          :
        else
          if test -n "$LIBMULTITHREAD"; then
            AC_CACHE_CHECK([for pthread_sigmask in $LIBMULTITHREAD],
              [gl_cv_func_pthread_sigmask_in_LIBMULTITHREAD],
              [gl_saved_LIBS="$LIBS"
               LIBS="$LIBS $LIBMULTITHREAD"
               AC_LINK_IFELSE(
                 [AC_LANG_PROGRAM(
                    [[#include <pthread.h>
                      #include <signal.h>
                    ]],
                    [[return pthread_sigmask (0, (sigset_t *) 0, (sigset_t *) 0);]])
                 ],
                 [gl_cv_func_pthread_sigmask_in_LIBMULTITHREAD=yes],
                 [gl_cv_func_pthread_sigmask_in_LIBMULTITHREAD=no])
               LIBS="$gl_saved_LIBS"
              ])
            if test $gl_cv_func_pthread_sigmask_in_LIBMULTITHREAD = yes; then
              dnl pthread_sigmask is available with -pthread or -lpthread.
              PTHREAD_SIGMASK_LIB="$LIBMULTITHREAD"
            else
              dnl pthread_sigmask is not available at all.
              HAVE_PTHREAD_SIGMASK=0
            fi
          else
            dnl pthread_sigmask is not available at all.
            HAVE_PTHREAD_SIGMASK=0
          fi
        fi
      else
        dnl pthread_sigmask may exist but does not interoperate with the chosen
        dnl multithreading facility.
        if test $ac_cv_func_pthread_sigmask = yes; then
          REPLACE_PTHREAD_SIGMASK=1
        else
          HAVE_PTHREAD_SIGMASK=0
        fi
      fi
    ], [
      dnl The module 'threadlib' is not in use, due to --avoid=threadlib being
      dnl specified.
      dnl The package either has prepared CPPFLAGS and LIBS for use of
      dnl POSIX:2008 threads, or wants to build single-threaded programs.
      if test $ac_cv_func_pthread_sigmask = yes; then
        dnl pthread_sigmask exists and does not require extra libraries.
        dnl Assume that it is declared.
        :
      else
        dnl pthread_sigmask either does not exist or needs extra libraries.
        HAVE_PTHREAD_SIGMASK=0
        dnl Define the symbol rpl_pthread_sigmask, not pthread_sigmask,
        dnl so as to not accidentally override the system's pthread_sigmask
        dnl symbol from libpthread. This is necessary on IRIX 6.5.
        REPLACE_PTHREAD_SIGMASK=1
      fi
    ])
  fi

  AC_SUBST([PTHREAD_SIGMASK_LIB])
  dnl For backward compatibility.
  LIB_PTHREAD_SIGMASK="$PTHREAD_SIGMASK_LIB"
  AC_SUBST([LIB_PTHREAD_SIGMASK])
  dnl We don't need a variable LTLIB_PTHREAD_SIGMASK, because when
  dnl "$gl_threads_api" = posix, $LTLIBMULTITHREAD and $LIBMULTITHREAD are the
  dnl same.

  dnl Now test for some bugs in the system function.
  if test $HAVE_PTHREAD_SIGMASK = 1; then
    AC_REQUIRE([AC_PROG_CC])
    AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles

    dnl On FreeBSD 13.0, MidnightBSD 1.1, HP-UX 11.31, Solaris 9, in programs
    dnl that are not linked with -lpthread, the pthread_sigmask() function
    dnl always returns 0 and has no effect.
    if test -z "$PTHREAD_SIGMASK_LIB"; then
      case " $LIBS " in
        *' -pthread '*) ;;
        *' -lpthread '*) ;;
        *)
          AC_CACHE_CHECK([whether pthread_sigmask works without -lpthread],
            [gl_cv_func_pthread_sigmask_in_libc_works],
            [
              AC_RUN_IFELSE(
                [AC_LANG_SOURCE([[
                   #include <pthread.h>
                   #include <signal.h>
                   #include <stddef.h>
                   int main ()
                   {
                     sigset_t set;
                     sigemptyset (&set);
                     return pthread_sigmask (1729, &set, NULL) != 0;
                   }]])],
                [gl_cv_func_pthread_sigmask_in_libc_works=no],
                [gl_cv_func_pthread_sigmask_in_libc_works=yes],
                [
                 changequote(,)dnl
                 case "$host_os" in
                   freebsd* | midnightbsd* | hpux* | solaris | solaris2.[2-9]*)
                     gl_cv_func_pthread_sigmask_in_libc_works="guessing no";;
                   *)
                     gl_cv_func_pthread_sigmask_in_libc_works="guessing yes";;
                 esac
                 changequote([,])dnl
                ])
            ])
          case "$gl_cv_func_pthread_sigmask_in_libc_works" in
            *no)
              REPLACE_PTHREAD_SIGMASK=1
              AC_DEFINE([PTHREAD_SIGMASK_INEFFECTIVE], [1],
                [Define to 1 if pthread_sigmask may return 0 and have no effect.])
              ;;
          esac;;
      esac
    fi

    dnl On Cygwin 1.7.5, the pthread_sigmask() has a wrong return value
    dnl convention: Upon failure, it returns -1 and sets errno.
    AC_CACHE_CHECK([whether pthread_sigmask returns error numbers],
      [gl_cv_func_pthread_sigmask_return_works],
      [
        gl_saved_LIBS="$LIBS"
        LIBS="$LIBS $PTHREAD_SIGMASK_LIB"
        AC_RUN_IFELSE(
          [AC_LANG_SOURCE([[
#include <pthread.h>
#include <signal.h>
#include <stddef.h>
int main ()
{
  sigset_t set;
  sigemptyset (&set);
  if (pthread_sigmask (1729, &set, NULL) == -1)
    return 1;
  return 0;
}]])],
          [gl_cv_func_pthread_sigmask_return_works=yes],
          [gl_cv_func_pthread_sigmask_return_works=no],
          [case "$host_os" in
             cygwin*)
               gl_cv_func_pthread_sigmask_return_works="guessing no";;
             *)
               gl_cv_func_pthread_sigmask_return_works="guessing yes";;
           esac
          ])
        LIBS="$gl_saved_LIBS"
      ])
    case "$gl_cv_func_pthread_sigmask_return_works" in
      *no)
        REPLACE_PTHREAD_SIGMASK=1
        AC_DEFINE([PTHREAD_SIGMASK_FAILS_WITH_ERRNO], [1],
          [Define to 1 if pthread_sigmask(), when it fails, returns -1 and sets errno.])
        ;;
    esac

    dnl On IRIX 6.5, in a single-threaded program, pending signals are not
    dnl immediately delivered when they are unblocked through pthread_sigmask,
    dnl only a little while later.
    AC_CACHE_CHECK([whether pthread_sigmask unblocks signals correctly],
      [gl_cv_func_pthread_sigmask_unblock_works],
      [
        case "$host_os" in
          irix*)
            gl_cv_func_pthread_sigmask_unblock_works="guessing no";;
          *)
            gl_cv_func_pthread_sigmask_unblock_works="guessing yes";;
        esac
        m4_ifdef([gl_][THREADLIB],
          [dnl Link against $LIBMULTITHREAD, not only $PTHREAD_SIGMASK_LIB.
           dnl Otherwise we get a false positive on those platforms where
           dnl $gl_cv_func_pthread_sigmask_in_libc_works is "no".
           gl_saved_LIBS=$LIBS
           LIBS="$LIBS $LIBMULTITHREAD"])
        AC_RUN_IFELSE(
          [AC_LANG_SOURCE([[
#include <limits.h>
#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
]GL_MDA_DEFINES[
static volatile int sigint_occurred;
static void
sigint_handler (int sig)
{
  sigint_occurred++;
}
int main ()
{
  sigset_t set;
  pid_t pid = getpid ();
  char command[80];
  if (LONG_MAX < pid)
    return 6;
  signal (SIGINT, sigint_handler);
  sigemptyset (&set);
  sigaddset (&set, SIGINT);
  if (!(pthread_sigmask (SIG_BLOCK, &set, NULL) == 0))
    return 1;
  sprintf (command, "sh -c 'sleep 1; kill -INT %ld' &", (long) pid);
  if (!(system (command) == 0))
    return 2;
  sleep (2);
  if (!(sigint_occurred == 0))
    return 3;
  if (!(pthread_sigmask (SIG_UNBLOCK, &set, NULL) == 0))
    return 4;
  if (!(sigint_occurred == 1)) /* This fails on IRIX.  */
    return 5;
  return 0;
}]])],
          [:],
          [gl_cv_func_pthread_sigmask_unblock_works=no],
          [:])
        m4_ifdef([gl_][THREADLIB], [LIBS=$gl_saved_LIBS])
      ])
    case "$gl_cv_func_pthread_sigmask_unblock_works" in
      *no)
        REPLACE_PTHREAD_SIGMASK=1
        AC_DEFINE([PTHREAD_SIGMASK_UNBLOCK_BUG], [1],
          [Define to 1 if pthread_sigmask() unblocks signals incorrectly.])
        ;;
    esac
  fi
])

# Prerequisite of lib/pthread_sigmask.c.
AC_DEFUN([gl_PREREQ_PTHREAD_SIGMASK],
[
  if test $HAVE_PTHREAD_SIGMASK = 1; then
    AC_DEFINE([HAVE_PTHREAD_SIGMASK], [1],
      [Define to 1 if the pthread_sigmask function can be used (despite bugs).])
  fi
])
