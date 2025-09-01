# Process this file with autoconf to produce a configure script.
AC_INIT([dummy], [0])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE

AC_CONFIG_HEADERS([config.h])

AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_MAKE_SET

# For autobuild.
AC_CANONICAL_BUILD
AC_CANONICAL_HOST

m4_pattern_forbid([^gl_[A-Z]])dnl the gnulib macro namespace
m4_pattern_allow([^gl_ES$])dnl a valid locale name
m4_pattern_allow([^gl_LIBOBJS$])dnl a variable
m4_pattern_allow([^gl_LTLIBOBJS$])dnl a variable

# Pre-early section.
gl_USE_SYSTEM_EXTENSIONS
gl_PROG_AR_RANLIB

gl_ANSI_CXX
AB_INIT
# This is actually already done in the pre-early phase.
# gl_USE_SYSTEM_EXTENSIONS
gl_USE_AIX_EXTENSIONS
gl_SET_LARGEFILE_SOURCE
gl_FP_IEEE
gl_SET_LARGEFILE_SOURCE
gl_SET_LARGEFILE_SOURCE
AC_SYS_LARGEFILE
# Prefer mcel by default.  This can be overridden via
# './configure GNULIB_MCEL_PREFER=no'.
: ${GNULIB_MCEL_PREFER=yes}
gl_ANYTHREADLIB_EARLY
AC_SYS_LARGEFILE
gl_SPARC_V8PLUS
gl_STACK_TRACE_EARLY
export LDFLAGS
dnl Some compilers (e.g., AIX 5.3 cc) need to be in c99 mode
dnl for the builtin va_copy to work.  gl_PROG_CC_C99 arranges for this.
gl_PROG_CC_C99
gl_STDIO_H_EARLY
AC_USE_SYSTEM_EXTENSIONS
gl_THREADLIB_EARLY
gl_ANYTHREADLIB_EARLY
AC_DEFUN([gl_HAVE_MODULE_VERROR])
AC_SYS_YEAR2038
AM_CONDITIONAL([GL_COND_LIBTOOL], [false])
gl_cond_libtool=false
gl_libdeps=
gl_ltlibdeps=
AC_DEFUN([gl_INIT], [
gl_m4_base='glm4'
  m4_pushdef([AC_LIBOBJ], m4_defn([gl_LIBOBJ]))
  m4_pushdef([AC_REPLACE_FUNCS], m4_defn([gl_REPLACE_FUNCS]))
  m4_pushdef([AC_LIBSOURCES], m4_defn([gl_LIBSOURCES]))
  m4_pushdef([gl_LIBSOURCES_LIST], [])
  m4_pushdef([gl_LIBSOURCES_DIR], [])
  m4_pushdef([GL_MACRO_PREFIX], [gl])
  m4_pushdef([GL_MODULE_INDICATOR_PREFIX], [GL])
  gl_COMMON
  gl_source_base='gllib'
  gl_source_base_prefix=
  gl_FUNC__EXIT
  gl_CONDITIONAL([GL_COND_OBJ__EXIT],
                 [test $HAVE__EXIT = 0 || test $REPLACE__EXIT = 1])
  AM_COND_IF([GL_COND_OBJ__EXIT], [
    gl_PREREQ__EXIT
  ])
  gl_STDLIB_MODULE_INDICATOR([_Exit])
  gl_ABORT_DEBUG
  gl_CONDITIONAL([GL_COND_OBJ_ABORT_DEBUG], [test $REPLACE_ABORT = 1])
  gl_STDLIB_MODULE_INDICATOR([abort-debug])
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_ACCEPT], [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([accept])
  gl_MODULE_INDICATOR([accept])
  gl_FUNC_ACCEPT4
  gl_SYS_SOCKET_MODULE_INDICATOR([accept4])
  gl_FUNC_ACCESS
  gl_CONDITIONAL([GL_COND_OBJ_ACCESS], [test $REPLACE_ACCESS = 1])
  gl_UNISTD_MODULE_INDICATOR([access])
  gl_FUNC_ACL
  gl_FUNC_ACOS
  gl_FUNC_ACOSF
  gl_CONDITIONAL([GL_COND_OBJ_ACOSF], [test $HAVE_ACOSF = 0])
  gl_MATH_MODULE_INDICATOR([acosf])
  gl_FUNC_ACOSL
  gl_CONDITIONAL([GL_COND_OBJ_ACOSL], [test $HAVE_ACOSL = 0])
  gl_MATH_MODULE_INDICATOR([acosl])
  gl_ALIGNALLOC
  gl_ALIGNASOF
  gl_MALLOC_ALIGNMENT
  AC_REQUIRE([AC_C_INLINE])
  AC_CHECK_FUNCS_ONCE([memalign])
  gl_CHECK_FUNCS_ANDROID([aligned_alloc], [[#include <stdlib.h>]])
  gl_CHECK_FUNCS_ANDROID([posix_memalign], [[#include <stdlib.h>]])
  gl_FUNC_ALIGNED_ALLOC
  gl_CONDITIONAL([GL_COND_OBJ_ALIGNED_ALLOC], [test $REPLACE_ALIGNED_ALLOC = 1])
  gl_STDLIB_MODULE_INDICATOR([aligned_alloc])
  gl_FUNC_ALLOCA
  gl_CONDITIONAL_HEADER([alloca.h])
  AC_PROG_MKDIR_P
  gl_FUNC_ALPHASORT
  gl_CONDITIONAL([GL_COND_OBJ_ALPHASORT], [test $HAVE_ALPHASORT = 0])
  AM_COND_IF([GL_COND_OBJ_ALPHASORT], [
    gl_PREREQ_ALPHASORT
  ])
  gl_DIRENT_MODULE_INDICATOR([alphasort])
  AC_REQUIRE([AC_C_RESTRICT])
  gl_MODULE_INDICATOR([areadlinkat])
  gl_MODULE_INDICATOR([areadlinkat-with-size])
  gl_ARGP
  m4_ifdef([AM_XGETTEXT_OPTION],
    [AM_][XGETTEXT_OPTION([--flag=argp_error:2:c-format])
     AM_][XGETTEXT_OPTION([--flag=argp_failure:4:c-format])])
  gl_FUNC_ARGZ
  gl_CONDITIONAL_HEADER([argz.h])
  AC_PROG_MKDIR_P
  gl_CONDITIONAL([GL_COND_OBJ_ARGZ], [test -n "$ARGZ_H"])
  gl_ARPA_INET_H
  gl_ARPA_INET_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_FUNC_ASIN
  gl_FUNC_ASINF
  gl_CONDITIONAL([GL_COND_OBJ_ASINF], [test $HAVE_ASINF = 0])
  gl_MATH_MODULE_INDICATOR([asinf])
  gl_FUNC_ASINL
  gl_CONDITIONAL([GL_COND_OBJ_ASINL], [test $HAVE_ASINL = 0])
  gl_MATH_MODULE_INDICATOR([asinl])
  gl_ASSERT
  gl_ASSERT_H
  gl_CONDITIONAL_HEADER([assert.h])
  AC_PROG_MKDIR_P
  AC_REQUIRE([AC_C_RESTRICT])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_FUNC_ATAN
  gl_FUNC_ATAN2
  gl_FUNC_ATAN2F
  gl_CONDITIONAL([GL_COND_OBJ_ATAN2F], [test $HAVE_ATAN2F = 0])
  gl_MATH_MODULE_INDICATOR([atan2f])
  gl_FUNC_ATANF
  gl_CONDITIONAL([GL_COND_OBJ_ATANF], [test $HAVE_ATANF = 0])
  gl_MATH_MODULE_INDICATOR([atanf])
  gl_FUNC_ATANL
  gl_CONDITIONAL([GL_COND_OBJ_ATANL], [test $HAVE_ATANL = 0])
  gl_MATH_MODULE_INDICATOR([atanl])
  gl_FUNC_ATEXIT
  gl_CONDITIONAL([GL_COND_OBJ_ATEXIT], [test $ac_cv_func_atexit = no])
  AM_COND_IF([GL_COND_OBJ_ATEXIT], [
    gl_PREREQ_ATEXIT
  ])
  gl_FUNC_ATOLL
  gl_CONDITIONAL([GL_COND_OBJ_ATOLL], [test $HAVE_ATOLL = 0])
  AM_COND_IF([GL_COND_OBJ_ATOLL], [
    gl_PREREQ_ATOLL
  ])
  gl_STDLIB_MODULE_INDICATOR([atoll])
  AC_REQUIRE([AC_C_INLINE])
  gl_BACKUPFILE
  gl_BACKUPFILE
  gl_FUNC_BASE32
  gl_FUNC_BASE64
  AC_REPLACE_FUNCS(bcopy)
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_BIND], [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([bind])
  gl_MODULE_INDICATOR([bind])
  # See the comments in bison.m4.
  BISON_I18N
  AC_REQUIRE([AC_C_INLINE])
  gl_C_BOOL
  gl_PREREQ_READUTMP_H
  gl_UCHAR_MODULE_INDICATOR([btoc32])
  gl_FUNC_BTOWC
  gl_CONDITIONAL([GL_COND_OBJ_BTOWC],
                 [test $HAVE_BTOWC = 0 || test $REPLACE_BTOWC = 1])
  AM_COND_IF([GL_COND_OBJ_BTOWC], [
    gl_PREREQ_BTOWC
  ])
  gl_WCHAR_MODULE_INDICATOR([btowc])
  gl___BUILTIN_EXPECT
  gl_BYTESWAP
  gl_CONDITIONAL_HEADER([byteswap.h])
  AC_PROG_MKDIR_P
  gl_C_GNU_STRFTIME
  AC_REQUIRE([AC_C_RESTRICT])
  AC_REQUIRE([AC_C_RESTRICT])
  gl_PREREQ_VASNPRINTF_WITH_GNU_EXTRAS
  gl_C_STACK
  gl_C_STRTOD
  gl_C_STRTOF
  gl_C_STRTOLD
  AC_REQUIRE([AC_C_RESTRICT])
  AC_LIBOBJ([printf-args])
  AC_LIBOBJ([printf-parse])
  gl_PREREQ_PRINTF_ARGS
  gl_PREREQ_PRINTF_PARSE
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_PREREQ_VASNPRINTF_WITH_GNU_EXTRAS
  AC_REQUIRE([AC_C_RESTRICT])
  AC_REQUIRE([AC_C_RESTRICT])
  gl_PREREQ_VASNPRINTF_WITH_GNU_EXTRAS
  gl_OPTIONAL_STRERRORNAME_NP
  gl_UCHAR_MODULE_INDICATOR([c32_apply_mapping])
  gl_UCHAR_MODULE_INDICATOR([c32_apply_type_test])
  gl_UCHAR_MODULE_INDICATOR([c32_get_mapping])
  gl_UCHAR_MODULE_INDICATOR([c32_get_type_test])
  AC_REQUIRE([gl_UCHAR_H])
  dnl Determine REPLACE_MBSTATE_T, from which GNULIB_defined_mbstate_t is
  dnl determined.  It describes how mbrtoc32 is implemented.
  AC_REQUIRE([gl_MBSTATE_T_BROKEN])
  AC_REQUIRE([gl_MBRTOC32_SANITYCHECK])
  AC_REQUIRE([gl_C32RTOMB_SANITYCHECK])
  gl_UCHAR_MODULE_INDICATOR([c32isalnum])
  AC_REQUIRE([gl_UCHAR_H])
  dnl Determine REPLACE_MBSTATE_T, from which GNULIB_defined_mbstate_t is
  dnl determined.  It describes how mbrtoc32 is implemented.
  AC_REQUIRE([gl_MBSTATE_T_BROKEN])
  AC_REQUIRE([gl_MBRTOC32_SANITYCHECK])
  AC_REQUIRE([gl_C32RTOMB_SANITYCHECK])
  gl_UCHAR_MODULE_INDICATOR([c32isalpha])
  AC_REQUIRE([gl_UCHAR_H])
  dnl Determine REPLACE_MBSTATE_T, from which GNULIB_defined_mbstate_t is
  dnl determined.  It describes how mbrtoc32 is implemented.
  AC_REQUIRE([gl_MBSTATE_T_BROKEN])
  AC_REQUIRE([gl_MBRTOC32_SANITYCHECK])
  AC_REQUIRE([gl_C32RTOMB_SANITYCHECK])
  gl_UCHAR_MODULE_INDICATOR([c32isblank])
  AC_REQUIRE([gl_UCHAR_H])
  dnl Determine REPLACE_MBSTATE_T, from which GNULIB_defined_mbstate_t is
  dnl determined.  It describes how mbrtoc32 is implemented.
  AC_REQUIRE([gl_MBSTATE_T_BROKEN])
  AC_REQUIRE([gl_MBRTOC32_SANITYCHECK])
  AC_REQUIRE([gl_C32RTOMB_SANITYCHECK])
  gl_UCHAR_MODULE_INDICATOR([c32iscntrl])
  AC_REQUIRE([gl_UCHAR_H])
  dnl Determine REPLACE_MBSTATE_T, from which GNULIB_defined_mbstate_t is
  dnl determined.  It describes how mbrtoc32 is implemented.
  AC_REQUIRE([gl_MBSTATE_T_BROKEN])
  AC_REQUIRE([gl_MBRTOC32_SANITYCHECK])
  AC_REQUIRE([gl_C32RTOMB_SANITYCHECK])
  gl_UCHAR_MODULE_INDICATOR([c32isdigit])
  AC_REQUIRE([gl_UCHAR_H])
  dnl Determine REPLACE_MBSTATE_T, from which GNULIB_defined_mbstate_t is
  dnl determined.  It describes how mbrtoc32 is implemented.
  AC_REQUIRE([gl_MBSTATE_T_BROKEN])
  AC_REQUIRE([gl_MBRTOC32_SANITYCHECK])
  AC_REQUIRE([gl_C32RTOMB_SANITYCHECK])
  gl_UCHAR_MODULE_INDICATOR([c32isgraph])
  AC_REQUIRE([gl_UCHAR_H])
  dnl Determine REPLACE_MBSTATE_T, from which GNULIB_defined_mbstate_t is
  dnl determined.  It describes how mbrtoc32 is implemented.
  AC_REQUIRE([gl_MBSTATE_T_BROKEN])
  AC_REQUIRE([gl_MBRTOC32_SANITYCHECK])
  AC_REQUIRE([gl_C32RTOMB_SANITYCHECK])
  gl_UCHAR_MODULE_INDICATOR([c32islower])
  AC_REQUIRE([gl_UCHAR_H])
  dnl Determine REPLACE_MBSTATE_T, from which GNULIB_defined_mbstate_t is
  dnl determined.  It describes how mbrtoc32 is implemented.
  AC_REQUIRE([gl_MBSTATE_T_BROKEN])
  AC_REQUIRE([gl_MBRTOC32_SANITYCHECK])
  AC_REQUIRE([gl_C32RTOMB_SANITYCHECK])
  gl_UCHAR_MODULE_INDICATOR([c32isprint])
  AC_REQUIRE([gl_UCHAR_H])
  dnl Determine REPLACE_MBSTATE_T, from which GNULIB_defined_mbstate_t is
  dnl determined.  It describes how mbrtoc32 is implemented.
  AC_REQUIRE([gl_MBSTATE_T_BROKEN])
  AC_REQUIRE([gl_MBRTOC32_SANITYCHECK])
  AC_REQUIRE([gl_C32RTOMB_SANITYCHECK])
  gl_UCHAR_MODULE_INDICATOR([c32ispunct])
  AC_REQUIRE([gl_UCHAR_H])
  dnl Determine REPLACE_MBSTATE_T, from which GNULIB_defined_mbstate_t is
  dnl determined.  It describes how mbrtoc32 is implemented.
  AC_REQUIRE([gl_MBSTATE_T_BROKEN])
  AC_REQUIRE([gl_MBRTOC32_SANITYCHECK])
  AC_REQUIRE([gl_C32RTOMB_SANITYCHECK])
  gl_UCHAR_MODULE_INDICATOR([c32isspace])
  AC_REQUIRE([gl_UCHAR_H])
  dnl Determine REPLACE_MBSTATE_T, from which GNULIB_defined_mbstate_t is
  dnl determined.  It describes how mbrtoc32 is implemented.
  AC_REQUIRE([gl_MBSTATE_T_BROKEN])
  AC_REQUIRE([gl_MBRTOC32_SANITYCHECK])
  AC_REQUIRE([gl_C32RTOMB_SANITYCHECK])
  gl_UCHAR_MODULE_INDICATOR([c32isupper])
  AC_REQUIRE([gl_UCHAR_H])
  dnl Determine REPLACE_MBSTATE_T, from which GNULIB_defined_mbstate_t is
  dnl determined.  It describes how mbrtoc32 is implemented.
  AC_REQUIRE([gl_MBSTATE_T_BROKEN])
  AC_REQUIRE([gl_MBRTOC32_SANITYCHECK])
  AC_REQUIRE([gl_C32RTOMB_SANITYCHECK])
  gl_UCHAR_MODULE_INDICATOR([c32isxdigit])
  gl_FUNC_C32RTOMB
  gl_CONDITIONAL([GL_COND_OBJ_C32RTOMB],
                 [test $HAVE_C32RTOMB = 0 || test $REPLACE_C32RTOMB = 1])
  gl_UCHAR_MODULE_INDICATOR([c32rtomb])
  AC_REQUIRE([gl_UCHAR_H])
  AC_LIBOBJ([c32srtombs-state])
  gl_UCHAR_MODULE_INDICATOR([c32snrtombs])
  AC_REQUIRE([gl_UCHAR_H])
  AC_LIBOBJ([c32srtombs-state])
  gl_UCHAR_MODULE_INDICATOR([c32srtombs])
  gl_UCHAR_MODULE_INDICATOR([c32stombs])
  AC_REQUIRE([gl_UCHAR_H])
  dnl Determine REPLACE_MBSTATE_T, from which GNULIB_defined_mbstate_t is
  dnl determined.  It describes how mbrtoc32 is implemented.
  AC_REQUIRE([gl_MBSTATE_T_BROKEN])
  AC_REQUIRE([gl_MBRTOC32_SANITYCHECK])
  gl_UCHAR_MODULE_INDICATOR([c32swidth])
  AC_REQUIRE([gl_MBRTOC32_SANITYCHECK])
  AC_REQUIRE([gl_C32RTOMB_SANITYCHECK])
  gl_UCHAR_MODULE_INDICATOR([c32tob])
  AC_REQUIRE([gl_UCHAR_H])
  dnl Determine REPLACE_MBSTATE_T, from which GNULIB_defined_mbstate_t is
  dnl determined.  It describes how mbrtoc32 is implemented.
  AC_REQUIRE([gl_MBSTATE_T_BROKEN])
  AC_REQUIRE([gl_MBRTOC32_SANITYCHECK])
  AC_REQUIRE([gl_C32RTOMB_SANITYCHECK])
  gl_UCHAR_MODULE_INDICATOR([c32tolower])
  AC_REQUIRE([gl_UCHAR_H])
  dnl Determine REPLACE_MBSTATE_T, from which GNULIB_defined_mbstate_t is
  dnl determined.  It describes how mbrtoc32 is implemented.
  AC_REQUIRE([gl_MBSTATE_T_BROKEN])
  AC_REQUIRE([gl_MBRTOC32_SANITYCHECK])
  AC_REQUIRE([gl_C32RTOMB_SANITYCHECK])
  gl_UCHAR_MODULE_INDICATOR([c32toupper])
  AC_REQUIRE([gl_UCHAR_H])
  dnl Determine REPLACE_MBSTATE_T, from which GNULIB_defined_mbstate_t is
  dnl determined.  It describes how mbrtoc32 is implemented.
  AC_REQUIRE([gl_MBSTATE_T_BROKEN])
  AC_REQUIRE([gl_MBRTOC32_SANITYCHECK])
  AC_REQUIRE([gl_C32RTOMB_SANITYCHECK])
  gl_UCHAR_MODULE_INDICATOR([c32width])
  AC_REQUIRE([gl_THREADS_H])
  gl_FUNC_CALL_ONCE
  gl_CONDITIONAL([GL_COND_OBJ_CALL_ONCE],
                 [test $HAVE_THREADS_H = 0 || test $REPLACE_CALL_ONCE = 1])
  gl_THREADS_MODULE_INDICATOR([call_once])
  gl_FUNC_CALLOC_GNU
  if test $REPLACE_CALLOC_FOR_CALLOC_GNU = 1; then
    AC_LIBOBJ([calloc])
  fi
  gl_STDLIB_MODULE_INDICATOR([calloc-gnu])
  gl_FUNC_CALLOC_POSIX
  if test $REPLACE_CALLOC_FOR_CALLOC_POSIX = 1; then
    AC_LIBOBJ([calloc])
  fi
  gl_STDLIB_MODULE_INDICATOR([calloc-posix])
  gl_PREREQ_CANON_HOST
  gl_FUNC_CANONICALIZE_FILENAME_MODE
  gl_MODULE_INDICATOR([canonicalize])
  gl_MODULE_INDICATOR_FOR_TESTS([canonicalize])
  gl_STDLIB_MODULE_INDICATOR([canonicalize_file_name])
  gl_CANONICALIZE_LGPL
  gl_CONDITIONAL([GL_COND_OBJ_CANONICALIZE_LGPL],
                 [test $HAVE_CANONICALIZE_FILE_NAME = 0 || test $REPLACE_CANONICALIZE_FILE_NAME = 1])
  gl_MODULE_INDICATOR([canonicalize-lgpl])
  gl_STDLIB_MODULE_INDICATOR([canonicalize_file_name])
  gl_STDLIB_MODULE_INDICATOR([realpath])
  AC_REQUIRE([AC_C_RESTRICT])
  gl_CHECK_FUNCS_ANDROID([readlinkat], [[#include <unistd.h>]])
  gl_FUNC_CBRT
  gl_CONDITIONAL([GL_COND_OBJ_CBRT], [test $HAVE_CBRT = 0])
  gl_MATH_MODULE_INDICATOR([cbrt])
  gl_FUNC_CBRTF
  gl_CONDITIONAL([GL_COND_OBJ_CBRTF],
                 [test $HAVE_CBRTF = 0 || test $REPLACE_CBRTF = 1])
  gl_MATH_MODULE_INDICATOR([cbrtf])
  gl_FUNC_CBRTL
  gl_CONDITIONAL([GL_COND_OBJ_CBRTL],
                 [test $HAVE_CBRTL = 0 || test $REPLACE_CBRTL = 1])
  gl_MATH_MODULE_INDICATOR([cbrtl])
  gl_FUNC_CBRTL_IEEE
  gl_FUNC_CEIL
  gl_CONDITIONAL([GL_COND_OBJ_CEIL], [test $REPLACE_CEIL = 1])
  gl_MATH_MODULE_INDICATOR([ceil])
  gl_FUNC_CEIL_IEEE
  gl_FUNC_CEILF
  gl_CONDITIONAL([GL_COND_OBJ_CEILF],
                 [test $HAVE_DECL_CEILF = 0 || test $REPLACE_CEILF = 1])
  gl_MATH_MODULE_INDICATOR([ceilf])
  gl_FUNC_CEILF_IEEE
  gl_FUNC_CEILL
  gl_CONDITIONAL([GL_COND_OBJ_CEILL],
                 [test $HAVE_DECL_CEILL = 0 || test $REPLACE_CEILL = 1])
  gl_MATH_MODULE_INDICATOR([ceill])
  gl_FUNC_CEILL_IEEE
  gl_UNISTD_MODULE_INDICATOR([chdir])
  gl_FUNC_CHDIR_LONG
  gl_CONDITIONAL([GL_COND_OBJ_CHDIR_LONG],
                 [test $gl_cv_have_unlimited_file_name_length = no])
  AM_COND_IF([GL_COND_OBJ_CHDIR_LONG], [
    gl_PREREQ_CHDIR_LONG
  ])
  gl_FUNC_CHMOD
  gl_CONDITIONAL([GL_COND_OBJ_CHMOD], [test $REPLACE_CHMOD = 1])
  AM_COND_IF([GL_COND_OBJ_CHMOD], [
    gl_PREREQ_CHMOD
  ])
  gl_SYS_STAT_MODULE_INDICATOR([chmod])
  gl_MODULE_INDICATOR([chmodat]) dnl for lib/openat.h
  gl_FUNC_CHOWN
  gl_CONDITIONAL([GL_COND_OBJ_CHOWN],
                 [test $HAVE_CHOWN = 0 || test $REPLACE_CHOWN = 1])
  gl_CONDITIONAL([GL_COND_OBJ_FCHOWN_STUB],
                 [test $REPLACE_CHOWN = 1 && test $ac_cv_func_fchown = no])
  gl_UNISTD_MODULE_INDICATOR([chown])
  gl_MODULE_INDICATOR([chownat]) dnl for lib/openat.h
  AC_DEFINE([SIGNAL_SAFE_LIST], [1], [Define if lists must be signal-safe.])
  gl_CLOCK_TIME
  gl_MODULE_INDICATOR_FOR_TESTS([cloexec])
  gl_FUNC_CLOSE
  gl_CONDITIONAL([GL_COND_OBJ_CLOSE], [test $REPLACE_CLOSE = 1])
  gl_UNISTD_MODULE_INDICATOR([close])
  gl_MODULE_INDICATOR([close])
  gl_MODULE_INDICATOR([close-stream])
  gl_FUNC_CLOSEDIR
  gl_CONDITIONAL([GL_COND_OBJ_CLOSEDIR],
                 [test $HAVE_CLOSEDIR = 0 || test $REPLACE_CLOSEDIR = 1])
  gl_DIRENT_MODULE_INDICATOR([closedir])
  AC_REQUIRE([gl_THREADS_H])
  gl_FUNC_CND_INIT
  gl_CONDITIONAL([GL_COND_OBJ_CND],
                 [test $HAVE_THREADS_H = 0 || test $REPLACE_CND_INIT = 1])
  gl_THREADS_MODULE_INDICATOR([cnd])
  gl_COND
  gl_CONFIGMAKE
  AC_PROG_MKDIR_P
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_CONNECT], [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([connect])
  gl_MODULE_INDICATOR([connect])
  gl_COPY_FILE
  gl_FUNC_COPY_FILE_RANGE
  gl_CONDITIONAL([GL_COND_OBJ_COPY_FILE_RANGE],
                 [test $HAVE_COPY_FILE_RANGE = 0 ||
                  test $REPLACE_COPY_FILE_RANGE = 1])
  gl_UNISTD_MODULE_INDICATOR([copy-file-range])
  gl_FUNC_COPYSIGN
  gl_CONDITIONAL([GL_COND_OBJ_COPYSIGN], [test $HAVE_COPYSIGN = 0])
  gl_MATH_MODULE_INDICATOR([copysign])
  gl_FUNC_COPYSIGNF
  gl_CONDITIONAL([GL_COND_OBJ_COPYSIGNF], [test $HAVE_COPYSIGNF = 0])
  gl_MATH_MODULE_INDICATOR([copysignf])
  gl_FUNC_COPYSIGNL
  gl_CONDITIONAL([GL_COND_OBJ_COPYSIGNL], [test $HAVE_COPYSIGNL = 0])
  gl_MATH_MODULE_INDICATOR([copysignl])
  gl_FUNC_COS
  gl_FUNC_COSF
  gl_CONDITIONAL([GL_COND_OBJ_COSF], [test $HAVE_COSF = 0])
  gl_MATH_MODULE_INDICATOR([cosf])
  gl_FUNC_COSH
  gl_FUNC_COSHF
  gl_CONDITIONAL([GL_COND_OBJ_COSHF], [test $HAVE_COSHF = 0])
  gl_MATH_MODULE_INDICATOR([coshf])
  gl_FUNC_COSL
  gl_CONDITIONAL([GL_COND_OBJ_COSL], [test $HAVE_COSL = 0])
  AM_COND_IF([GL_COND_OBJ_COSL], [
    if test $HAVE_SAME_LONG_DOUBLE_AS_DOUBLE = 0; then
      AC_LIBOBJ([sincosl])
      AC_LIBOBJ([trigl])
    fi
  ])
  gl_MATH_MODULE_INDICATOR([cosl])
  AC_REQUIRE([gl_CRC_SLICE_BY_8])
  gl_BUILD_CC
  AC_PROG_MKDIR_P
  AC_REQUIRE([gl_CRC_X86_64_PCLMUL])
  gl_FUNC_CREAT
  gl_CONDITIONAL([GL_COND_OBJ_CREAT], [test $REPLACE_CREAT = 1])
  gl_FCNTL_MODULE_INDICATOR([creat])
  gl_AF_ALG
  AC_REQUIRE([AC_C_RESTRICT])
  AC_REQUIRE([AC_C_RESTRICT])
  gl_ARCTWO
  gl_GC
  gl_CONDITIONAL([GL_COND_OBJ_GC_LIBGCRYPT], [test "$ac_cv_libgcrypt" = yes])
  if test $gl_cond_libtool = false; then
    gl_ltlibdeps="$gl_ltlibdeps $LTLIBGCRYPT"
    gl_libdeps="$gl_libdeps $LIBGCRYPT"
  fi
  gl_GC_ARCFOUR
  gl_MODULE_INDICATOR([gc-arcfour])
  gl_GC_ARCTWO
  gl_MODULE_INDICATOR([gc-arctwo])
  gl_GC_CAMELLIA
  gl_GC_DES
  gl_MODULE_INDICATOR([gc-des])
  gl_GC_HMAC_MD5
  gl_MODULE_INDICATOR([gc-hmac-md5])
  gl_GC_HMAC_SHA1
  gl_MODULE_INDICATOR([gc-hmac-sha1])
  gl_GC_HMAC_SHA256
  gl_MODULE_INDICATOR([gc-hmac-sha256])
  gl_GC_HMAC_SHA512
  gl_MODULE_INDICATOR([gc-hmac-sha512])
  gl_GC_MD2
  gl_MODULE_INDICATOR([gc-md2])
  gl_GC_MD4
  gl_MODULE_INDICATOR([gc-md4])
  gl_GC_MD5
  gl_MODULE_INDICATOR([gc-md5])
  gl_MODULE_INDICATOR([gc-random])
  gl_GC_RIJNDAEL
  gl_MODULE_INDICATOR([gc-rijndael])
  gl_GC_SHA1
  gl_MODULE_INDICATOR([gc-sha1])
  gl_GC_SHA256
  gl_MODULE_INDICATOR([gc-sha256])
  gl_GC_SHA512
  gl_MODULE_INDICATOR([gc-sha512])
  gl_GC_SM3
  gl_MODULE_INDICATOR([gc-sm3])
  AC_REQUIRE([AC_C_RESTRICT])
  AC_REQUIRE([AC_C_RESTRICT])
  AC_REQUIRE([AC_C_RESTRICT])
  AC_REQUIRE([AC_C_RESTRICT])
  AC_REQUIRE([AC_C_RESTRICT])
  AC_REQUIRE([AC_C_RESTRICT])
  gl_MD4
  AC_REQUIRE([AC_C_RESTRICT])
  gl_MD5
  AC_REQUIRE([AC_C_RESTRICT])
  AC_REQUIRE([AC_C_RESTRICT])
  gl_SHA1
  AC_REQUIRE([AC_C_RESTRICT])
  gl_SHA256
  AC_REQUIRE([AC_C_RESTRICT])
  AC_REQUIRE([gl_BIGENDIAN])
  AC_REQUIRE([AC_C_RESTRICT])
  gl_SHA512
  gl_SM3
  AC_REQUIRE([gt_CSHARPCOMP])
  AC_CONFIG_FILES([csharpcomp.sh:build-aux/csharpcomp.sh.in])
  # You need to invoke gt_CSHARPEXEC yourself, possibly with arguments.
  AC_CONFIG_FILES([csharpexec.sh:build-aux/csharpexec.sh.in])
  gl_FUNC_CTIME
  gl_CONDITIONAL([GL_COND_OBJ_CTIME], [test $REPLACE_CTIME = 1])
  gl_TIME_MODULE_INDICATOR([ctime])
  gl_CTYPE_H
  gl_CTYPE_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_CYCLE_CHECK
  gl_CHECK_TYPE_STRUCT_DIRENT_D_INO
  gl_CHECK_TYPE_STRUCT_DIRENT_D_TYPE
  AC_REQUIRE([gt_DCOMP])
  AC_CONFIG_FILES([dcomp.sh:build-aux/dcomp.sh.in])
  AC_REQUIRE([AC_C_INLINE])
  gl_DIRENT_H
  gl_DIRENT_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_DIRENT_SAFER
  gl_MODULE_INDICATOR([dirent-safer])
  gl_FUNC_DIRFD
  gl_CONDITIONAL([GL_COND_OBJ_DIRFD],
                 [test $HAVE_DIRFD = 0 || test $REPLACE_DIRFD = 1])
  AM_COND_IF([GL_COND_OBJ_DIRFD], [
    gl_PREREQ_DIRFD
  ])
  gl_DIRENT_MODULE_INDICATOR([dirfd])
  gl_MODULE_INDICATOR([dirname])
  gl_DOUBLE_SLASH_ROOT
  gl_FUNC_DPRINTF
  gl_STDIO_MODULE_INDICATOR([dprintf])
  gl_FUNC_DPRINTF_GNU
  gl_FUNC_DPRINTF_POSIX
  gl_FUNC_DUP
  gl_CONDITIONAL([GL_COND_OBJ_DUP], [test $REPLACE_DUP = 1])
  AM_COND_IF([GL_COND_OBJ_DUP], [
    gl_PREREQ_DUP
  ])
  gl_UNISTD_MODULE_INDICATOR([dup])
  gl_FUNC_DUP2
  gl_CONDITIONAL([GL_COND_OBJ_DUP2], [test $REPLACE_DUP2 = 1])
  AM_COND_IF([GL_COND_OBJ_DUP2], [
    gl_PREREQ_DUP2
  ])
  gl_UNISTD_MODULE_INDICATOR([dup2])
  gl_FUNC_DUP3
  gl_UNISTD_MODULE_INDICATOR([dup3])
  gl_FUNC_DUPLOCALE
  gl_CONDITIONAL([GL_COND_OBJ_DUPLOCALE],
                 [test $HAVE_LOCALE_T = 0 || { test $HAVE_DUPLOCALE = 1 && test $REPLACE_DUPLOCALE = 1; }])
  AM_COND_IF([GL_COND_OBJ_DUPLOCALE], [
    gl_PREREQ_DUPLOCALE
  ])
  gl_LOCALE_MODULE_INDICATOR([duplocale])
  gl_STDIO_MODULE_INDICATOR([dzprintf])
  gl_PREREQ_VASNPRINTF_WITH_GNU_EXTRAS
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_EEALLOC
  gl_ENDIAN_H
  gl_CONDITIONAL_HEADER([endian.h])
  AC_PROG_MKDIR_P
  gl_ENVIRON
  gl_UNISTD_MODULE_INDICATOR([environ])
  gl_COMMON_DOUBLE_MATHFUNC([erf])
  gl_COMMON_DOUBLE_MATHFUNC([erfc])
  gl_HEADER_ERRNO_H
  gl_CONDITIONAL_HEADER([errno.h])
  AC_PROG_MKDIR_P
  AC_REQUIRE([gl_ERROR_H])
  gl_ERROR
  gl_CONDITIONAL([GL_COND_OBJ_ERROR], [test $COMPILE_ERROR_C = 1])
  AM_COND_IF([GL_COND_OBJ_ERROR], [
    gl_PREREQ_ERROR
  ])
  m4_ifdef([AM_XGETTEXT_OPTION],
    [AM_][XGETTEXT_OPTION([--flag=error:3:c-format])
     AM_][XGETTEXT_OPTION([--flag=error_at_line:5:c-format])])
  gl_ERROR_H
  AC_PROG_MKDIR_P
  gl_FUNC_EUIDACCESS
  gl_CONDITIONAL([GL_COND_OBJ_EUIDACCESS], [test $HAVE_EUIDACCESS = 0])
  AM_COND_IF([GL_COND_OBJ_EUIDACCESS], [
    gl_PREREQ_EUIDACCESS
  ])
  gl_UNISTD_MODULE_INDICATOR([euidaccess])
  gl_EXECINFO_H
  gl_CONDITIONAL_HEADER([execinfo.h])
  AC_PROG_MKDIR_P
  gl_CONDITIONAL([GL_COND_OBJ_EXECINFO], [$GL_GENERATE_EXECINFO_H])
  gl_FUNC_EXECL
  gl_CONDITIONAL([GL_COND_OBJ_EXECL], [test $REPLACE_EXECL = 1])
  gl_UNISTD_MODULE_INDICATOR([execl])
  gl_FUNC_EXECLE
  gl_CONDITIONAL([GL_COND_OBJ_EXECLE], [test $REPLACE_EXECLE = 1])
  gl_UNISTD_MODULE_INDICATOR([execle])
  gl_FUNC_EXECLP
  gl_CONDITIONAL([GL_COND_OBJ_EXECLP], [test $REPLACE_EXECLP = 1])
  gl_UNISTD_MODULE_INDICATOR([execlp])
  gl_EXECUTE
  gl_FUNC_EXECV
  gl_CONDITIONAL([GL_COND_OBJ_EXECV], [test $REPLACE_EXECV = 1])
  gl_UNISTD_MODULE_INDICATOR([execv])
  gl_FUNC_EXECVE
  gl_CONDITIONAL([GL_COND_OBJ_EXECVE], [test $REPLACE_EXECVE = 1])
  gl_UNISTD_MODULE_INDICATOR([execve])
  gl_FUNC_EXECVP
  gl_CONDITIONAL([GL_COND_OBJ_EXECVP], [test $REPLACE_EXECVP = 1])
  gl_UNISTD_MODULE_INDICATOR([execvp])
  gl_FUNC_EXECVPE
  gl_CONDITIONAL([GL_COND_OBJ_EXECVPE],
                 [test $HAVE_EXECVPE = 0 || test $REPLACE_EXECVPE = 1])
  gl_UNISTD_MODULE_INDICATOR([execvpe])
  gl_FUNC_EXP
  gl_FUNC_EXP2
  gl_CONDITIONAL([GL_COND_OBJ_EXP2],
                 [test $HAVE_EXP2 = 0 || test $REPLACE_EXP2 = 1])
  gl_MATH_MODULE_INDICATOR([exp2])
  gl_FUNC_EXP2F
  gl_CONDITIONAL([GL_COND_OBJ_EXP2F], [test $HAVE_EXP2F = 0])
  gl_MATH_MODULE_INDICATOR([exp2f])
  gl_FUNC_EXP2L
  gl_CONDITIONAL([GL_COND_OBJ_EXP2L],
                 [test $HAVE_EXP2L = 0 || test $REPLACE_EXP2L = 1])
  AM_COND_IF([GL_COND_OBJ_EXP2L], [
    AC_LIBOBJ([expl-table])
  ])
  gl_MATH_MODULE_INDICATOR([exp2l])
  gl_FUNC_EXP2L_IEEE
  gl_FUNC_EXPF
  gl_CONDITIONAL([GL_COND_OBJ_EXPF], [test $HAVE_EXPF = 0])
  gl_MATH_MODULE_INDICATOR([expf])
  gl_FUNC_EXPL
  gl_CONDITIONAL([GL_COND_OBJ_EXPL],
                 [test $HAVE_EXPL = 0 || test $REPLACE_EXPL = 1])
  AM_COND_IF([GL_COND_OBJ_EXPL], [
    AC_LIBOBJ([expl-table])
  ])
  gl_MATH_MODULE_INDICATOR([expl])
  gl_FUNC_EXPLICIT_BZERO
  gl_CONDITIONAL([GL_COND_OBJ_EXPLICIT_BZERO], [test $HAVE_EXPLICIT_BZERO = 0])
  gl_STRING_MODULE_INDICATOR([explicit_bzero])
  gl_FUNC_EXPM1
  gl_CONDITIONAL([GL_COND_OBJ_EXPM1],
                 [test $HAVE_EXPM1 = 0 || test $REPLACE_EXPM1 = 1])
  gl_MATH_MODULE_INDICATOR([expm1])
  gl_FUNC_EXPM1_IEEE
  gl_FUNC_EXPM1F
  gl_CONDITIONAL([GL_COND_OBJ_EXPM1F],
                 [test $HAVE_EXPM1F = 0 || test $REPLACE_EXPM1F = 1])
  gl_MATH_MODULE_INDICATOR([expm1f])
  gl_FUNC_EXPM1F_IEEE
  gl_FUNC_EXPM1L
  gl_CONDITIONAL([GL_COND_OBJ_EXPM1L],
                 [test $HAVE_EXPM1L = 0 || test $REPLACE_EXPM1L = 1])
  gl_MATH_MODULE_INDICATOR([expm1l])
  AC_REQUIRE([gl_FUNC_EXPM1L])
  AC_REQUIRE([gl_EXTERN_INLINE])
  gl_FUNC_FABS
  gl_FUNC_FABSF
  gl_CONDITIONAL([GL_COND_OBJ_FABSF], [test $HAVE_FABSF = 0])
  gl_MATH_MODULE_INDICATOR([fabsf])
  gl_FUNC_FABSL
  gl_CONDITIONAL([GL_COND_OBJ_FABSL],
                 [test $HAVE_FABSL = 0 || test $REPLACE_FABSL = 1])
  gl_MATH_MODULE_INDICATOR([fabsl])
  gl_FUNC_FACCESSAT
  gl_CONDITIONAL([GL_COND_OBJ_FACCESSAT],
                 [test $HAVE_FACCESSAT = 0 || test $REPLACE_FACCESSAT = 1])
  AM_COND_IF([GL_COND_OBJ_FACCESSAT], [
    gl_PREREQ_FACCESSAT
  ])
  gl_MODULE_INDICATOR([faccessat])
  gl_UNISTD_MODULE_INDICATOR([faccessat])
  gl_FATAL_SIGNAL
  gl_FUNC_FBUFMODE
  gl_FUNC_FCHDIR
  gl_CONDITIONAL([GL_COND_OBJ_FCHDIR],
                 [test $HAVE_FCHDIR = 0 || test $REPLACE_FCHDIR = 1])
  AM_COND_IF([GL_COND_OBJ_FCHDIR], [
    gl_PREREQ_FCHDIR
  ])
  gl_UNISTD_MODULE_INDICATOR([fchdir])
  gl_FUNC_FCHMODAT
  gl_CONDITIONAL([GL_COND_OBJ_FCHMODAT],
                 [test $HAVE_FCHMODAT = 0 || test $REPLACE_FCHMODAT = 1])
  AM_COND_IF([GL_COND_OBJ_FCHMODAT], [
    gl_PREREQ_FCHMODAT
  ])
  gl_SYS_STAT_MODULE_INDICATOR([fchmodat])
  gl_FUNC_FCHOWNAT
  gl_CONDITIONAL([GL_COND_OBJ_FCHOWNAT],
                 [test $HAVE_FCHOWNAT = 0 || test $REPLACE_FCHOWNAT = 1])
  gl_UNISTD_MODULE_INDICATOR([fchownat])
  gl_FUNC_FCLOSE
  gl_CONDITIONAL([GL_COND_OBJ_FCLOSE], [test $REPLACE_FCLOSE = 1])
  gl_STDIO_MODULE_INDICATOR([fclose])
  gl_FUNC_FCNTL
  gl_CONDITIONAL([GL_COND_OBJ_FCNTL],
                 [test $HAVE_FCNTL = 0 || test $REPLACE_FCNTL = 1])
  gl_FCNTL_MODULE_INDICATOR([fcntl])
  gl_FCNTL_H
  gl_FCNTL_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_FCNTL_SAFER
  gl_MODULE_INDICATOR([fcntl-safer])
  gl_MODULE_INDICATOR([fd-safer-flag])
  gl_FUNC_FDATASYNC
  gl_CONDITIONAL([GL_COND_OBJ_FDATASYNC], [test $HAVE_FDATASYNC = 0 || test $REPLACE_FDATASYNC = 1])
  gl_UNISTD_MODULE_INDICATOR([fdatasync])
  gl_FUNC_FDOPEN
  gl_CONDITIONAL([GL_COND_OBJ_FDOPEN], [test $REPLACE_FDOPEN = 1])
  AM_COND_IF([GL_COND_OBJ_FDOPEN], [
    gl_PREREQ_FDOPEN
  ])
  gl_STDIO_MODULE_INDICATOR([fdopen])
  gl_FUNC_FDOPENDIR
  gl_CONDITIONAL([GL_COND_OBJ_FDOPENDIR],
                 [test $HAVE_FDOPENDIR = 0 || test $REPLACE_FDOPENDIR = 1])
  gl_DIRENT_MODULE_INDICATOR([fdopendir])
  gl_MODULE_INDICATOR([fdopendir])
  gl_MODULE_INDICATOR([fdutimensat])
  gl_FENV_ENVIRONMENT
  gl_CONDITIONAL([GL_COND_OBJ_FENV_ENVIRONMENT],
                 [test $HAVE_FESETENV = 0 || test $REPLACE_FESETENV = 1])
  gl_CONDITIONAL([GL_COND_OBJ_FENV_ENVIRONMENT_UPDATE],
                 [test $HAVE_FEUPDATEENV = 0 || test $REPLACE_FEUPDATEENV = 1])
  gl_CONDITIONAL([GL_COND_OBJ_FENV_ENVIRONMENT_HOLD],
                 [test $HAVE_FEHOLDEXCEPT = 0 || test $REPLACE_FEHOLDEXCEPT = 1])
  gl_FENV_MODULE_INDICATOR([fegetenv])
  gl_FENV_MODULE_INDICATOR([fesetenv])
  gl_FENV_MODULE_INDICATOR([feupdateenv])
  gl_FENV_MODULE_INDICATOR([feholdexcept])
  gl_MUSL_LIBC
  gl_FENV_EXCEPTIONS_STATE_C23
  gl_CONDITIONAL([GL_COND_OBJ_FENV_EXCEPTIONS_STATE_C23],
                 [test $HAVE_FETESTEXCEPTFLAG = 0])
  gl_FENV_MODULE_INDICATOR([fetestexceptflag])
  gl_FENV_EXCEPTIONS_STATE
  gl_CONDITIONAL([GL_COND_OBJ_FENV_EXCEPTIONS_STATE_GET],
                 [test $HAVE_FEGETEXCEPTFLAG = 0 || test $REPLACE_FEGETEXCEPTFLAG = 1])
  gl_CONDITIONAL([GL_COND_OBJ_FENV_EXCEPTIONS_STATE_SET],
                 [test $HAVE_FESETEXCEPTFLAG = 0 || test $REPLACE_FESETEXCEPTFLAG = 1])
  gl_FENV_MODULE_INDICATOR([fegetexceptflag])
  gl_FENV_MODULE_INDICATOR([fesetexceptflag])
  gl_FENV_EXCEPTIONS_TRACKING_C23
  gl_CONDITIONAL([GL_COND_OBJ_FENV_EXCEPTIONS_TRACKING_C23],
                 [test $HAVE_FESETEXCEPT = 0 || test $REPLACE_FESETEXCEPT = 1])
  gl_FENV_MODULE_INDICATOR([fesetexcept])
  gl_FENV_EXCEPTIONS_TRACKING
  gl_CONDITIONAL([GL_COND_OBJ_FENV_EXCEPTIONS_TRACKING_CLEAR],
                 [test $HAVE_FECLEAREXCEPT = 0 || test $REPLACE_FECLEAREXCEPT = 1])
  gl_CONDITIONAL([GL_COND_OBJ_FENV_EXCEPTIONS_TRACKING_TEST],
                 [test $HAVE_FETESTEXCEPT = 0 || test $REPLACE_FETESTEXCEPT = 1])
  gl_CONDITIONAL([GL_COND_OBJ_FENV_EXCEPTIONS_TRACKING_RAISE],
                 [test $HAVE_FERAISEEXCEPT = 0 || test $REPLACE_FERAISEEXCEPT = 1])
  gl_FENV_MODULE_INDICATOR([feclearexcept])
  gl_FENV_MODULE_INDICATOR([fetestexcept])
  gl_FENV_MODULE_INDICATOR([feraiseexcept])
  gl_FENV_EXCEPTIONS_TRAPPING
  gl_CONDITIONAL([GL_COND_OBJ_FENV_EXCEPTIONS_TRAPPING],
                 [test $HAVE_FEENABLEEXCEPT = 0 || test $REPLACE_FEENABLEEXCEPT = 1])
  gl_FENV_MODULE_INDICATOR([feenableexcept])
  gl_FENV_MODULE_INDICATOR([fedisableexcept])
  gl_FENV_MODULE_INDICATOR([fegetexcept])
  gl_MODULE_INDICATOR([feenableexcept])
  gl_FENV_H
  gl_FENV_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_FENV_ROUNDING
  gl_CONDITIONAL([GL_COND_OBJ_FENV_ROUNDING],
                 [test $HAVE_FESETROUND = 0 || test $REPLACE_FESETROUND = 1])
  gl_FENV_MODULE_INDICATOR([fegetround])
  gl_FENV_MODULE_INDICATOR([fesetround])
  gl_FUNC_FFLUSH
  gl_CONDITIONAL([GL_COND_OBJ_FFLUSH], [test $REPLACE_FFLUSH = 1])
  AM_COND_IF([GL_COND_OBJ_FFLUSH], [
    gl_PREREQ_FFLUSH
  ])
  gl_MODULE_INDICATOR([fflush])
  gl_STDIO_MODULE_INDICATOR([fflush])
  gl_FUNC_FFS
  gl_CONDITIONAL([GL_COND_OBJ_FFS], [test $HAVE_FFS = 0])
  gl_STRINGS_MODULE_INDICATOR([ffs])
  gl_FUNC_FFSL
  gl_CONDITIONAL([GL_COND_OBJ_FFSL], [test $HAVE_FFSL = 0])
  gl_STRING_MODULE_INDICATOR([ffsl])
  gl_FUNC_FFSLL
  gl_CONDITIONAL([GL_COND_OBJ_FFSLL],
                 [test $HAVE_FFSLL = 0 || test $REPLACE_FFSLL = 1])
  gl_STRING_MODULE_INDICATOR([ffsll])
  gl_FILE_HAS_ACL
  gl_FILEBLOCKS
  gl_CONDITIONAL([GL_COND_OBJ_FILEBLOCKS],
                 [test $ac_cv_member_struct_stat_st_blocks = no])
  AM_COND_IF([GL_COND_OBJ_FILEBLOCKS], [
    gl_PREREQ_FILEBLOCKS
  ])
  gl_FILEMODE
  gl_FILE_NAME_CONCAT
  gl_MODULE_INDICATOR([filenamecat])
  gl_FILE_NAME_CONCAT_LGPL
  gl_FINDPROG
  gl_FINDPROG_IN
  gl_FINDPROG
  gl_MODULE_INDICATOR([findprog-lgpl])
  AC_C_FLEXIBLE_ARRAY_MEMBER
  gl_FLOAT_H
  gl_CONDITIONAL_HEADER([float.h])
  AC_PROG_MKDIR_P
  gl_CONDITIONAL([GL_COND_OBJ_FLOAT],
                 [test $REPLACE_FLOAT_LDBL = 1 || test $REPLACE_FLOAT_SNAN = 1])
  gl_CONDITIONAL([GL_COND_OBJ_ITOLD], [test $REPLACE_ITOLD = 1])
  dnl Prerequisites of lib/float.c.
  AC_REQUIRE([gl_BIGENDIAN])
  gl_FUNC_FLOCK
  gl_CONDITIONAL([GL_COND_OBJ_FLOCK], [test $HAVE_FLOCK = 0])
  AM_COND_IF([GL_COND_OBJ_FLOCK], [
    gl_PREREQ_FLOCK
  ])
  gl_SYS_FILE_MODULE_INDICATOR([flock])
  AC_REQUIRE([gl_FUNC_FLOOR])
  gl_CONDITIONAL([GL_COND_OBJ_FLOOR], [test $REPLACE_FLOOR = 1])
  gl_MATH_MODULE_INDICATOR([floor])
  gl_FUNC_FLOOR_IEEE
  gl_FUNC_FLOORF
  gl_CONDITIONAL([GL_COND_OBJ_FLOORF],
                 [test $HAVE_DECL_FLOORF = 0 || test $REPLACE_FLOORF = 1])
  gl_MATH_MODULE_INDICATOR([floorf])
  gl_FUNC_FLOORF_IEEE
  AC_REQUIRE([gl_FUNC_FLOORL])
  gl_CONDITIONAL([GL_COND_OBJ_FLOORL],
                 [test $HAVE_DECL_FLOORL = 0 || test $REPLACE_FLOORL = 1])
  gl_MATH_MODULE_INDICATOR([floorl])
  gl_FUNC_FMA
  gl_CONDITIONAL([GL_COND_OBJ_FMA], [test $HAVE_FMA = 0 || test $REPLACE_FMA = 1])
  AM_COND_IF([GL_COND_OBJ_FMA], [
    gl_PREREQ_FMA
  ])
  gl_MATH_MODULE_INDICATOR([fma])
  gl_FUNC_FMAF
  gl_CONDITIONAL([GL_COND_OBJ_FMAF],
                 [test $HAVE_FMAF = 0 || test $REPLACE_FMAF = 1])
  AM_COND_IF([GL_COND_OBJ_FMAF], [
    gl_PREREQ_FMAF
  ])
  gl_MATH_MODULE_INDICATOR([fmaf])
  gl_FUNC_FMAL
  gl_CONDITIONAL([GL_COND_OBJ_FMAL],
                 [test $HAVE_FMAL = 0 || test $REPLACE_FMAL = 1])
  AM_COND_IF([GL_COND_OBJ_FMAL], [
    gl_PREREQ_FMAL
  ])
  gl_MATH_MODULE_INDICATOR([fmal])
  gl_FUNC_FMOD
  gl_CONDITIONAL([GL_COND_OBJ_FMOD], [test $REPLACE_FMOD = 1])
  gl_MATH_MODULE_INDICATOR([fmod])
  gl_FUNC_FMOD_IEEE
  gl_FUNC_FMODF
  gl_CONDITIONAL([GL_COND_OBJ_FMODF],
                 [test $HAVE_FMODF = 0 || test $REPLACE_FMODF = 1])
  gl_MATH_MODULE_INDICATOR([fmodf])
  gl_FUNC_FMODF_IEEE
  gl_FUNC_FMODL
  gl_CONDITIONAL([GL_COND_OBJ_FMODL],
                 [test $HAVE_FMODL = 0 || test $REPLACE_FMODL = 1])
  gl_MATH_MODULE_INDICATOR([fmodl])
  gl_FUNC_FMODL_IEEE
  gl_FUNC_FNMATCH_POSIX
  dnl Because of gl_REPLACE_FNMATCH_H:
  gl_CONDITIONAL_HEADER([fnmatch.h])
  if test $HAVE_FNMATCH = 0 || test $REPLACE_FNMATCH = 1; then
    AC_LIBOBJ([fnmatch])
    gl_PREREQ_FNMATCH
  fi
  gl_FNMATCH_MODULE_INDICATOR([fnmatch])
  gl_FUNC_FNMATCH_GNU
  if test $HAVE_FNMATCH = 0 || test $REPLACE_FNMATCH = 1; then
    AC_LIBOBJ([fnmatch])
    gl_PREREQ_FNMATCH
  fi
  gl_MODULE_INDICATOR([fnmatch-gnu])
  gl_FNMATCH_H
  gl_FNMATCH_H_REQUIRE_DEFAULTS
  gl_CONDITIONAL_HEADER([fnmatch.h])
  AC_PROG_MKDIR_P
  gl_FUNC_FOPEN
  if test $REPLACE_FOPEN = 1; then
    AC_LIBOBJ([fopen])
    gl_PREREQ_FOPEN
  fi
  gl_STDIO_MODULE_INDICATOR([fopen])
  gl_FUNC_FOPEN_GNU
  if test $REPLACE_FOPEN_FOR_FOPEN_GNU = 1; then
    AC_LIBOBJ([fopen])
    gl_PREREQ_FOPEN
  fi
  gl_MODULE_INDICATOR([fopen-gnu])
  gl_STDIO_MODULE_INDICATOR([fopen-gnu])
  gl_MODULE_INDICATOR([fopen-safer])
  gl_FUNC_FORKPTY
  gl_CONDITIONAL([GL_COND_OBJ_FORKPTY],
                 [test $HAVE_FORKPTY = 0 || test $REPLACE_FORKPTY = 1])
  gl_PTY_MODULE_INDICATOR([forkpty])
  gl_FPE_TRAPPING
  gl_FUNC_FPENDING
  gl_CONDITIONAL([GL_COND_OBJ_FPENDING], [test $gl_cv_func___fpending = no])
  gl_FUNC_FPRINTF_GNU
  gl_FUNC_FPRINTF_POSIX
  gl_STDIO_MODULE_INDICATOR([fprintf-posix])
  gl_FUNC_FPURGE
  gl_CONDITIONAL([GL_COND_OBJ_FPURGE],
                 [test $HAVE_FPURGE = 0 || test $REPLACE_FPURGE = 1])
  gl_STDIO_MODULE_INDICATOR([fpurge])
  gl_FUNC_FREADABLE
  gl_CONDITIONAL([GL_COND_OBJ_FREADABLE], [test $ac_cv_func___freadable = no])
  gl_FUNC_FREADAHEAD
  gl_CONDITIONAL([GL_COND_OBJ_FREADAHEAD], [test $ac_cv_func___freadahead = no])
  gl_FUNC_FREADING
  gl_FUNC_FREADPTR
  gl_CONDITIONAL([GL_COND_OBJ_FREADPTR], [test $ac_cv_func___freadptr = no])
  gl_FUNC_FREADSEEK
  gl_FUNC_FREE
  gl_CONDITIONAL([GL_COND_OBJ_FREE], [test $REPLACE_FREE = 1])
  AM_COND_IF([GL_COND_OBJ_FREE], [
    gl_PREREQ_FREE
  ])
  gl_STDLIB_MODULE_INDICATOR([free-posix])
  gl_FUNC_FREELOCALE
  gl_CONDITIONAL([GL_COND_OBJ_FREELOCALE], [test $HAVE_LOCALE_T = 0])
  AM_COND_IF([GL_COND_OBJ_FREELOCALE], [
    gl_PREREQ_FREELOCALE
  ])
  gl_LOCALE_MODULE_INDICATOR([freelocale])
  gl_FUNC_FREOPEN
  gl_CONDITIONAL([GL_COND_OBJ_FREOPEN], [test $REPLACE_FREOPEN = 1])
  AM_COND_IF([GL_COND_OBJ_FREOPEN], [
    gl_PREREQ_FREOPEN
  ])
  gl_STDIO_MODULE_INDICATOR([freopen])
  gl_MODULE_INDICATOR([freopen-safer])
  AC_REQUIRE([gl_FUNC_FREXP])
  if test $gl_func_frexp != yes; then
    AC_LIBOBJ([frexp])
  fi
  gl_MATH_MODULE_INDICATOR([frexp])
  gl_FUNC_FREXP_NO_LIBM
  if test $gl_func_frexp_no_libm != yes; then
    AC_LIBOBJ([frexp])
  fi
  gl_MATH_MODULE_INDICATOR([frexp])
  gl_FUNC_FREXPF
  gl_CONDITIONAL([GL_COND_OBJ_FREXPF],
                 [test $HAVE_FREXPF = 0 || test $REPLACE_FREXPF = 1])
  gl_MATH_MODULE_INDICATOR([frexpf])
  AC_REQUIRE([gl_FUNC_FREXPL])
  if test $HAVE_DECL_FREXPL = 0 || test $gl_func_frexpl = no; then
    AC_LIBOBJ([frexpl])
  fi
  gl_MATH_MODULE_INDICATOR([frexpl])
  gl_FUNC_FREXPL_NO_LIBM
  if test $HAVE_DECL_FREXPL = 0 || test $gl_func_frexpl_no_libm = no; then
    AC_LIBOBJ([frexpl])
  fi
  gl_MATH_MODULE_INDICATOR([frexpl])
  gl_FUNC_FSEEK
  gl_CONDITIONAL([GL_COND_OBJ_FSEEK], [test $REPLACE_FSEEK = 1])
  gl_STDIO_MODULE_INDICATOR([fseek])
  gl_FUNC_FSEEKO
  gl_CONDITIONAL([GL_COND_OBJ_FSEEKO],
                 [test $HAVE_FSEEKO = 0 || test $REPLACE_FSEEKO = 1])
  AM_COND_IF([GL_COND_OBJ_FSEEKO], [
    gl_PREREQ_FSEEKO
  ])
  gl_STDIO_MODULE_INDICATOR([fseeko])
  gl_FUNC_FSETERR
  gl_CONDITIONAL([GL_COND_OBJ_FSETERR], [test $ac_cv_func___fseterr = no])
  gl_FUNC_FSTAT
  gl_CONDITIONAL([GL_COND_OBJ_FSTAT], [test $REPLACE_FSTAT = 1])
  AM_COND_IF([GL_COND_OBJ_FSTAT], [
    case "$host_os" in
      mingw* | windows*)
        AC_LIBOBJ([stat-w32])
        ;;
    esac
    gl_PREREQ_FSTAT
  ])
  gl_SYS_STAT_MODULE_INDICATOR([fstat])
  gl_MODULE_INDICATOR([fstat])
  gl_FUNC_FSTATAT
  gl_CONDITIONAL([GL_COND_OBJ_FSTATAT],
                 [test $HAVE_FSTATAT = 0 || test $REPLACE_FSTATAT = 1])
  gl_SYS_STAT_MODULE_INDICATOR([fstatat])
  gl_MODULE_INDICATOR([fstatat])
  gl_FSUSAGE
  gl_CONDITIONAL([GL_COND_OBJ_FSUSAGE], [test $gl_cv_fs_space = yes])
  AM_COND_IF([GL_COND_OBJ_FSUSAGE], [
    gl_PREREQ_FSUSAGE_EXTRA
  ])
  gl_FUNC_FSYNC
  gl_CONDITIONAL([GL_COND_OBJ_FSYNC], [test $HAVE_FSYNC = 0])
  AM_COND_IF([GL_COND_OBJ_FSYNC], [
    gl_PREREQ_FSYNC
  ])
  gl_UNISTD_MODULE_INDICATOR([fsync])
  gl_FUNC_FTELL
  gl_CONDITIONAL([GL_COND_OBJ_FTELL], [test $REPLACE_FTELL = 1])
  gl_STDIO_MODULE_INDICATOR([ftell])
  gl_FUNC_FTELLO
  gl_CONDITIONAL([GL_COND_OBJ_FTELLO],
                 [test $HAVE_FTELLO = 0 || test $REPLACE_FTELLO = 1])
  AM_COND_IF([GL_COND_OBJ_FTELLO], [
    gl_PREREQ_FTELLO
  ])
  gl_STDIO_MODULE_INDICATOR([ftello])
  gl_CHECK_FUNCS_ANDROID([strtof], [[#include <stdlib.h>]])
  gl_FUNC_FTRUNCATE
  gl_CONDITIONAL([GL_COND_OBJ_FTRUNCATE],
                 [test $HAVE_FTRUNCATE = 0 || test $REPLACE_FTRUNCATE = 1])
  AM_COND_IF([GL_COND_OBJ_FTRUNCATE], [
    gl_PREREQ_FTRUNCATE
  ])
  gl_UNISTD_MODULE_INDICATOR([ftruncate])
  gl_FUNC_FTS
  dnl Use this version of fts unconditionally, since the GNU libc and
  dnl NetBSD versions have bugs and/or unnecessary limitations.
  gl_CONDITIONAL([GL_COND_OBJ_FTS], [true])
  gl_FUNC
  gl_FUNC_FUTIMENS
  gl_CONDITIONAL([GL_COND_OBJ_FUTIMENS],
                 [test $HAVE_FUTIMENS = 0 || test $REPLACE_FUTIMENS = 1])
  gl_SYS_STAT_MODULE_INDICATOR([futimens])
  gl_FUNC_FWRITABLE
  gl_CONDITIONAL([GL_COND_OBJ_FWRITABLE], [test $ac_cv_func___fwritable = no])
  gl_MODULE_INDICATOR([fwriteerror])
  gl_FUNC_FWRITING
  gl_CONDITIONAL([GL_COND_OBJ_FWRITING], [test $ac_cv_func___fwriting = no])
  gl_STDIO_MODULE_INDICATOR([fzprintf])
  gl_PREREQ_VASNPRINTF_WITH_GNU_EXTRAS
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  AC_REQUIRE([AC_C_INLINE])
  AC_CHECK_FUNCS_ONCE([setrlimit])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  AC_CHECK_FUNCS_ONCE([sbrk setrlimit])
  gl_FUNC_MMAP_ANON
  gl_GETADDRINFO
  gl_CONDITIONAL([GL_COND_OBJ_GETADDRINFO],
                 [test $HAVE_GETADDRINFO = 0 || test $REPLACE_GETADDRINFO = 1])
  gl_CONDITIONAL([GL_COND_OBJ_GAI_STRERROR],
                 [test $HAVE_DECL_GAI_STRERROR = 0 || test $REPLACE_GAI_STRERROR = 1])
  gl_NETDB_MODULE_INDICATOR([getaddrinfo])
  gl_FUNC_GETCWD
  gl_CONDITIONAL([GL_COND_OBJ_GETCWD], [test $REPLACE_GETCWD = 1])
  AM_COND_IF([GL_COND_OBJ_GETCWD], [
    gl_PREREQ_GETCWD
  ])
  gl_MODULE_INDICATOR([getcwd])
  gl_UNISTD_MODULE_INDICATOR([getcwd])
  gl_FUNC_GETCWD_LGPL
  gl_CONDITIONAL([GL_COND_OBJ_GETCWD_LGPL], [test $REPLACE_GETCWD = 1])
  gl_UNISTD_MODULE_INDICATOR([getcwd])
  gl_FUNC_GETDELIM
  gl_CONDITIONAL([GL_COND_OBJ_GETDELIM],
                 [test $HAVE_GETDELIM = 0 || test $REPLACE_GETDELIM = 1])
  AM_COND_IF([GL_COND_OBJ_GETDELIM], [
    gl_PREREQ_GETDELIM
  ])
  gl_STDIO_MODULE_INDICATOR([getdelim])
  gl_FUNC_GETDOMAINNAME
  gl_CONDITIONAL([GL_COND_OBJ_GETDOMAINNAME],
                 [test $HAVE_DECL_GETDOMAINNAME = 0 || test $REPLACE_GETDOMAINNAME = 1])
  AM_COND_IF([GL_COND_OBJ_GETDOMAINNAME], [
    gl_PREREQ_GETDOMAINNAME
  ])
  gl_UNISTD_MODULE_INDICATOR([getdomainname])
  gl_FUNC_GETDTABLESIZE
  gl_CONDITIONAL([GL_COND_OBJ_GETDTABLESIZE],
                 [test $HAVE_GETDTABLESIZE = 0 || test $REPLACE_GETDTABLESIZE = 1])
  AM_COND_IF([GL_COND_OBJ_GETDTABLESIZE], [
    gl_PREREQ_GETDTABLESIZE
  ])
  gl_UNISTD_MODULE_INDICATOR([getdtablesize])
  gl_FUNC_GETENTROPY
  gl_CONDITIONAL([GL_COND_OBJ_GETENTROPY],
                 [test $HAVE_GETENTROPY = 0 || test $REPLACE_GETENTROPY = 1])
  gl_UNISTD_MODULE_INDICATOR([getentropy])
  gl_FUNC_GETGROUPS
  gl_CONDITIONAL([GL_COND_OBJ_GETGROUPS],
                 [test $HAVE_GETGROUPS = 0 || test $REPLACE_GETGROUPS = 1])
  gl_UNISTD_MODULE_INDICATOR([getgroups])
  gl_FUNC_GETHOSTNAME
  gl_CONDITIONAL([GL_COND_OBJ_GETHOSTNAME], [test $HAVE_GETHOSTNAME = 0])
  AM_COND_IF([GL_COND_OBJ_GETHOSTNAME], [
    gl_PREREQ_GETHOSTNAME
  ])
  gl_UNISTD_MODULE_INDICATOR([gethostname])
  gl_MODULE_INDICATOR([gethostname])
  gl_GETHRXTIME
  gl_FUNC_GETLINE
  gl_CONDITIONAL([GL_COND_OBJ_GETLINE], [test $REPLACE_GETLINE = 1])
  AM_COND_IF([GL_COND_OBJ_GETLINE], [
    gl_PREREQ_GETLINE
  ])
  gl_STDIO_MODULE_INDICATOR([getline])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_GETLOADAVG
  gl_CONDITIONAL([GL_COND_OBJ_GETLOADAVG],
                 [test $HAVE_GETLOADAVG = 0 || test $REPLACE_GETLOADAVG = 1])
  AM_COND_IF([GL_COND_OBJ_GETLOADAVG], [
    gl_PREREQ_GETLOADAVG
  ])
  gl_STDLIB_MODULE_INDICATOR([getloadavg])
  gl_FUNC_GETLOCALENAME_L_SIMPLE
  gl_CONDITIONAL([GL_COND_OBJ_GETLOCALENAME_L],
                 [test $HAVE_GETLOCALENAME_L = 0 || test $REPLACE_GETLOCALENAME_L = 1])
  AM_COND_IF([GL_COND_OBJ_GETLOCALENAME_L], [
    gl_PREREQ_GETLOCALENAME_L_SIMPLE
  ])
  gl_MODULE_INDICATOR([getlocalename_l])
  gl_LOCALE_MODULE_INDICATOR([getlocalename_l])
  gl_FUNC_GETLOCALENAME_L_UNSAFE
  gl_PREREQ_GETLOCALENAME_L_UNSAFE
  gl_LOCALE_MODULE_INDICATOR([getlocalename_l-unsafe])
  gl_FUNC_GETLOCALENAME_L_UNSAFE
  gl_PREREQ_GETLOCALENAME_L_UNSAFE
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_GETLOCALENAME_L_UNSAFE_LIMITED],
                 [case "$host_os" in openbsd* | aix* | *-android*) false;; *) true;; esac])
  gl_FUNC_GETLOGIN
  gl_CONDITIONAL([GL_COND_OBJ_GETLOGIN],
                 [test $HAVE_GETLOGIN = 0 || test $REPLACE_GETLOGIN = 1])
  gl_UNISTD_MODULE_INDICATOR([getlogin])
  AC_REQUIRE([gl_LIB_GETLOGIN])
  gl_FUNC_GETLOGIN_R
  gl_CONDITIONAL([GL_COND_OBJ_GETLOGIN_R],
                 [test $HAVE_GETLOGIN_R = 0 || test $REPLACE_GETLOGIN_R = 1])
  AM_COND_IF([GL_COND_OBJ_GETLOGIN_R], [
    gl_PREREQ_GETLOGIN_R
  ])
  gl_UNISTD_MODULE_INDICATOR([getlogin_r])
  AC_REQUIRE([gl_LIB_GETLOGIN])
  gl_GETNDELIM2
  gl_GETNLINE
  gl_FUNC_GETOPT_GNU
  dnl Because of the way gl_FUNC_GETOPT_GNU is implemented (the gl_getopt_required
  dnl mechanism), there is no need to do any AC_LIBOBJ or AC_SUBST here; they are
  dnl done in the getopt-posix module.
  gl_FUNC_GETOPT_POSIX
  gl_CONDITIONAL_HEADER([getopt.h])
  gl_CONDITIONAL_HEADER([getopt-cdefs.h])
  AC_PROG_MKDIR_P
  gl_CONDITIONAL([GL_COND_OBJ_GETOPT], [test $REPLACE_GETOPT = 1])
  AM_COND_IF([GL_COND_OBJ_GETOPT], [
    dnl Define the substituted variable GNULIB_UNISTD_H_GETOPT to 1.
    gl_UNISTD_H_REQUIRE_DEFAULTS
    gl_MODULE_INDICATOR_INIT_VARIABLE([GNULIB_UNISTD_H_GETOPT], [1])
  ])
  gl_UNISTD_MODULE_INDICATOR([getopt-posix])
  gl_MUSL_LIBC
  gl_FUNC_GETPAGESIZE
  gl_CONDITIONAL([GL_COND_OBJ_GETPAGESIZE],
                 [test $HAVE_GETPAGESIZE = 0 || test $REPLACE_GETPAGESIZE = 1])
  gl_UNISTD_MODULE_INDICATOR([getpagesize])
  gl_FUNC_GETPASS
  if test $HAVE_GETPASS = 0 || test $REPLACE_GETPASS = 1; then
    AC_LIBOBJ([getpass])
    gl_PREREQ_GETPASS
  fi
  gl_UNISTD_MODULE_INDICATOR([getpass])
  gl_FUNC_GETPASS_GNU
  if test $HAVE_GETPASS = 0 || test $REPLACE_GETPASS_FOR_GETPASS_GNU = 1; then
    AC_LIBOBJ([getpass])
    gl_PREREQ_GETPASS
  fi
  gl_UNISTD_MODULE_INDICATOR([getpass-gnu])
  gl_FUNC_GETPAYLOAD
  gl_CONDITIONAL([GL_COND_OBJ_GETPAYLOAD],
                 [test $HAVE_GETPAYLOAD = 0 || test $REPLACE_GETPAYLOAD = 1])
  gl_MATH_MODULE_INDICATOR([getpayload])
  gl_FUNC_GETPAYLOADF
  gl_CONDITIONAL([GL_COND_OBJ_GETPAYLOADF],
                 [test $HAVE_GETPAYLOADF = 0 || test $REPLACE_GETPAYLOADF = 1])
  gl_MATH_MODULE_INDICATOR([getpayloadf])
  gl_FUNC_GETPAYLOADL
  gl_CONDITIONAL([GL_COND_OBJ_GETPAYLOADL],
                 [test $HAVE_GETPAYLOADL = 0 || test $REPLACE_GETPAYLOADL = 1])
  gl_MATH_MODULE_INDICATOR([getpayloadl])
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_GETPEERNAME],
                 [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([getpeername])
  gl_MODULE_INDICATOR([getpeername])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_FUNC_GETPROGNAME
  gl_CONDITIONAL([GL_COND_OBJ_GETPROGNAME],
                 [test $HAVE_GETPROGNAME = 0 || test $REPLACE_GETPROGNAME = 1])
  AM_COND_IF([GL_COND_OBJ_GETPROGNAME], [
    gl_PREREQ_GETPROGNAME
  ])
  gl_STDLIB_MODULE_INDICATOR([getprogname])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_FUNC_GETRANDOM
  gl_CONDITIONAL([GL_COND_OBJ_GETRANDOM],
                 [test $HAVE_GETRANDOM = 0 || test $REPLACE_GETRANDOM = 1])
  gl_SYS_RANDOM_MODULE_INDICATOR([getrandom])
  gl_FUNC_GETRUSAGE
  gl_CONDITIONAL([GL_COND_OBJ_GETRUSAGE], [test $HAVE_GETRUSAGE = 0])
  gl_SYS_RESOURCE_MODULE_INDICATOR([getrusage])
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_GETSOCKNAME],
                 [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([getsockname])
  gl_MODULE_INDICATOR([getsockname])
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_GETSOCKOPT],
                 [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([getsockopt])
  gl_MODULE_INDICATOR([getsockopt])
  gl_FUNC_GETSUBOPT
  gl_CONDITIONAL([GL_COND_OBJ_GETSUBOPT],
                 [test $HAVE_GETSUBOPT = 0 || test $REPLACE_GETSUBOPT = 1])
  AM_COND_IF([GL_COND_OBJ_GETSUBOPT], [
    gl_PREREQ_GETSUBOPT
  ])
  gl_STDLIB_MODULE_INDICATOR([getsubopt])
  AM_GNU_GETTEXT([external])
AM_GNU_GETTEXT_VERSION([0.22])
  AC_SUBST([LIBINTL])
  AC_SUBST([LTLIBINTL])
  gl_GETTIME
  gl_GETTIME_RES
  gl_FUNC_GETTIMEOFDAY
  gl_CONDITIONAL([GL_COND_OBJ_GETTIMEOFDAY],
                 [test $HAVE_GETTIMEOFDAY = 0 || test $REPLACE_GETTIMEOFDAY = 1])
  AM_COND_IF([GL_COND_OBJ_GETTIMEOFDAY], [
    gl_PREREQ_GETTIMEOFDAY
  ])
  gl_SYS_TIME_MODULE_INDICATOR([gettimeofday])
  gl_GETUGROUPS
  gl_FUNC_GETUMASK
  gl_CONDITIONAL([GL_COND_OBJ_GETUMASK], [test $HAVE_GETUMASK = 0])
  AM_COND_IF([GL_COND_OBJ_GETUMASK], [
    gl_PREREQ_GETUMASK
  ])
  gl_SYS_STAT_MODULE_INDICATOR([getumask])
  gl_FUNC_GETUSERSHELL
  gl_CONDITIONAL([GL_COND_OBJ_GETUSERSHELL],
                 [test $HAVE_GETUSERSHELL = 0 || test $REPLACE_GETUSERSHELL = 1])
  AM_COND_IF([GL_COND_OBJ_GETUSERSHELL], [
    gl_PREREQ_GETUSERSHELL
  ])
  gl_UNISTD_MODULE_INDICATOR([getusershell])
  AC_PROG_MKDIR_P
  AC_PROG_MKDIR_P
  gl_GLOB
  dnl Because of gl_REPLACE_GLOB_H:
  gl_CONDITIONAL_HEADER([glob.h])
  gl_CONDITIONAL([GL_COND_OBJ_GLOB],
                 [test $HAVE_GLOB = 0 || test $REPLACE_GLOB = 1])
  AM_COND_IF([GL_COND_OBJ_GLOB], [
    gl_PREREQ_GLOB
  ])
  gl_CONDITIONAL([GL_COND_OBJ_GLOB_PATTERN_P],
                 [test $HAVE_GLOB_PATTERN_P = 0 || test $REPLACE_GLOB_PATTERN_P = 1])
  gl_GLOB_MODULE_INDICATOR([glob])
  gl_GLOB_H
  gl_GLOB_H_REQUIRE_DEFAULTS
  gl_CONDITIONAL_HEADER([glob.h])
  AC_PROG_MKDIR_P
  gl_GNU_MAKE
  GNULIB_I18N
  # Autoconf 2.61a.99 and earlier don't support linking a file only
  # in VPATH builds.  But since GNUmakefile is for maintainer use
  # only, it does not matter if we skip the link with older autoconf.
  # Automake 1.10.1 and earlier try to remove GNUmakefile in non-VPATH
  # builds, so use a shell variable to bypass this.
  GNUmakefile=GNUmakefile
  m4_if(m4_version_compare([2.61a.100],
          m4_defn([m4_PACKAGE_VERSION])), [1], [],
        [AC_CONFIG_LINKS([$GNUmakefile:$GNUmakefile], [],
          [GNUmakefile=$GNUmakefile])])
  AC_REQUIRE([gt_GOCOMP])
  AC_CONFIG_FILES([gocomp.sh:build-aux/gocomp.sh.in])
  gl_FUNC_GRANTPT
  gl_CONDITIONAL([GL_COND_OBJ_GRANTPT], [test $HAVE_GRANTPT = 0])
  AM_COND_IF([GL_COND_OBJ_GRANTPT], [
    gl_PREREQ_GRANTPT
  ])
  gl_STDLIB_MODULE_INDICATOR([grantpt])
  gl_FUNC_GROUP_MEMBER
  gl_CONDITIONAL([GL_COND_OBJ_GROUP_MEMBER], [test $HAVE_GROUP_MEMBER = 0])
  AM_COND_IF([GL_COND_OBJ_GROUP_MEMBER], [
    gl_PREREQ_GROUP_MEMBER
  ])
  gl_UNISTD_MODULE_INDICATOR([group-member])
  AC_REQUIRE([gl_FUNC_SETLOCALE_NULL])
  HARD_LOCALE_LIB="$SETLOCALE_NULL_LIB"
  AC_SUBST([HARD_LOCALE_LIB])
  dnl For backward compatibility.
  LIB_HARD_LOCALE="$HARD_LOCALE_LIB"
  AC_SUBST([LIB_HARD_LOCALE])
  gl_MODULE_INDICATOR([hashcode-string1])
  gl_FUNC_HASMNTOPT
  gl_CONDITIONAL([GL_COND_OBJ_HASMNTOPT],
                 [test $HAVE_SETMNTENT = 1 && { test $HAVE_HASMNTOPT = 0 || test $REPLACE_HASMNTOPT = 1; }])
  AM_COND_IF([GL_COND_OBJ_HASMNTOPT], [
    gl_PREREQ_HASMNTOPT
  ])
  gl_MNTENT_MODULE_INDICATOR([hasmntopt])
  AC_DEFUN([gl_HAVE_MODULE_HAVELIB])
  AC_REQUIRE([gl_HOST_CPU_C_ABI])
  gl_HOST_OS
  gl_HOSTENT
  gl_FUNC_HTONL
  gl_HUMAN
  gl_FUNC_HYPOT
  gl_CONDITIONAL([GL_COND_OBJ_HYPOT], [test $REPLACE_HYPOT = 1])
  gl_MATH_MODULE_INDICATOR([hypot])
  gl_FUNC_HYPOT_IEEE
  gl_FUNC_HYPOTF
  gl_CONDITIONAL([GL_COND_OBJ_HYPOTF],
                 [test $HAVE_HYPOTF = 0 || test $REPLACE_HYPOTF = 1])
  gl_MATH_MODULE_INDICATOR([hypotf])
  gl_FUNC_HYPOTF_IEEE
  gl_FUNC_HYPOTL
  gl_CONDITIONAL([GL_COND_OBJ_HYPOTL],
                 [test $HAVE_HYPOTL = 0 || test $REPLACE_HYPOTL = 1])
  gl_MATH_MODULE_INDICATOR([hypotl])
  gl_FUNC_HYPOTL_IEEE
  gl_I_RING
  AM_ICONV
  m4_ifdef([gl_ICONV_MODULE_INDICATOR],
    [gl_ICONV_MODULE_INDICATOR([iconv])])
  gl_ICONV_H
  gl_ICONV_H_REQUIRE_DEFAULTS
  gl_CONDITIONAL_HEADER([iconv.h])
  AC_PROG_MKDIR_P
  gl_FUNC_ICONV_OPEN
  dnl Because of gl_REPLACE_ICONV_H:
  gl_CONDITIONAL_HEADER([iconv.h])
  gl_CONDITIONAL([GL_COND_OBJ_ICONV_OPEN], [test $REPLACE_ICONV_OPEN = 1])
  gl_CONDITIONAL([GL_COND_OBJ_ICONV], [test $REPLACE_ICONV = 1])
  gl_FUNC_ICONV_OPEN_UTF
  gl_IDCACHE
  gl_IDPRIV
  gl_IDPRIV
  gl_IEEE754_H
  gl_CONDITIONAL_HEADER([ieee754.h])
  AC_PROG_MKDIR_P
  gl_FUNC_ILOGB
  gl_CONDITIONAL([GL_COND_OBJ_ILOGB],
                 [test $HAVE_ILOGB = 0 || test $REPLACE_ILOGB = 1])
  gl_MATH_MODULE_INDICATOR([ilogb])
  gl_FUNC_ILOGBF
  gl_CONDITIONAL([GL_COND_OBJ_ILOGBF],
                 [test $HAVE_ILOGBF = 0 || test $REPLACE_ILOGBF = 1])
  gl_MATH_MODULE_INDICATOR([ilogbf])
  gl_FUNC_ILOGBL
  gl_CONDITIONAL([GL_COND_OBJ_ILOGBL],
                 [test $HAVE_ILOGBL = 0 || test $REPLACE_ILOGBL = 1])
  gl_MATH_MODULE_INDICATOR([ilogbl])
  gl_FUNC_IMAXABS
  gl_CONDITIONAL([GL_COND_OBJ_IMAXABS],
                 [test $HAVE_IMAXABS = 0 || test $REPLACE_IMAXABS = 1])
  AM_COND_IF([GL_COND_OBJ_IMAXABS], [
    gl_PREREQ_IMAXABS
  ])
  gl_INTTYPES_MODULE_INDICATOR([imaxabs])
  gl_FUNC_IMAXDIV
  gl_CONDITIONAL([GL_COND_OBJ_IMAXDIV],
                 [test $HAVE_IMAXDIV = 0 || test $REPLACE_IMAXDIV = 1])
  AM_COND_IF([GL_COND_OBJ_IMAXDIV], [
    gl_PREREQ_IMAXDIV
  ])
  gl_INTTYPES_MODULE_INDICATOR([imaxdiv])
  gl_IMMUTABLE
  gl_FUNC_INET_NTOP
  gl_CONDITIONAL([GL_COND_OBJ_INET_NTOP],
                 [test $HAVE_INET_NTOP = 0 || test $REPLACE_INET_NTOP = 1])
  AM_COND_IF([GL_COND_OBJ_INET_NTOP], [
    gl_PREREQ_INET_NTOP
  ])
  gl_ARPA_INET_MODULE_INDICATOR([inet_ntop])
  gl_FUNC_INET_PTON
  gl_CONDITIONAL([GL_COND_OBJ_INET_PTON],
                 [test $HAVE_INET_PTON = 0 || test $REPLACE_INET_PTON = 1])
  AM_COND_IF([GL_COND_OBJ_INET_PTON], [
    gl_PREREQ_INET_PTON
  ])
  gl_ARPA_INET_MODULE_INDICATOR([inet_pton])
  gl_INLINE
  AC_REQUIRE([gl_DOUBLE_EXPONENT_LOCATION])
  gl_INTTOSTR
  gl_INTTYPES_H
  gl_INTTYPES_INCOMPLETE
  gl_INTTYPES_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_FUNC_IOCTL
  gl_CONDITIONAL([GL_COND_OBJ_IOCTL],
                 [test $HAVE_IOCTL = 0 || test $REPLACE_IOCTL = 1])
  gl_SYS_IOCTL_MODULE_INDICATOR([ioctl])
  gl_MODULE_INDICATOR([ioctl])
  gl_FUNC_ISALNUM_L
  gl_CONDITIONAL([GL_COND_OBJ_ISALNUM_L], [test $HAVE_ISALNUM_L = 0])
  gl_MODULE_INDICATOR([isalnum_l])
  gl_CTYPE_MODULE_INDICATOR([isalnum_l])
  gl_FUNC_ISALPHA_L
  gl_CONDITIONAL([GL_COND_OBJ_ISALPHA_L], [test $HAVE_ISALPHA_L = 0])
  gl_MODULE_INDICATOR([isalpha_l])
  gl_CTYPE_MODULE_INDICATOR([isalpha_l])
  gl_ISAPIPE
  gl_CONDITIONAL([GL_COND_OBJ_ISAPIPE], [test $HAVE_ISAPIPE = 0])
  AM_COND_IF([GL_COND_OBJ_ISAPIPE], [
    gl_PREREQ_ISAPIPE
  ])
  gl_FUNC_ISATTY
  gl_CONDITIONAL([GL_COND_OBJ_ISATTY], [test $REPLACE_ISATTY = 1])
  AM_COND_IF([GL_COND_OBJ_ISATTY], [
    gl_PREREQ_ISATTY
  ])
  gl_UNISTD_MODULE_INDICATOR([isatty])
  gl_FUNC_ISBLANK
  gl_CONDITIONAL([GL_COND_OBJ_ISBLANK], [test $HAVE_ISBLANK = 0])
  gl_MODULE_INDICATOR([isblank])
  gl_CTYPE_MODULE_INDICATOR([isblank])
  gl_FUNC_ISBLANK_L
  gl_CONDITIONAL([GL_COND_OBJ_ISBLANK_L], [test $HAVE_ISBLANK_L = 0])
  gl_MODULE_INDICATOR([isblank_l])
  gl_CTYPE_MODULE_INDICATOR([isblank_l])
  gl_FUNC_ISCNTRL_L
  gl_CONDITIONAL([GL_COND_OBJ_ISCNTRL_L], [test $HAVE_ISCNTRL_L = 0])
  gl_MODULE_INDICATOR([iscntrl_l])
  gl_CTYPE_MODULE_INDICATOR([iscntrl_l])
  gl_FUNC_ISDIGIT_L
  gl_CONDITIONAL([GL_COND_OBJ_ISDIGIT_L], [test $HAVE_ISDIGIT_L = 0])
  gl_MODULE_INDICATOR([isdigit_l])
  gl_CTYPE_MODULE_INDICATOR([isdigit_l])
  gl_ISFINITE
  gl_CONDITIONAL([GL_COND_OBJ_ISFINITE], [test $REPLACE_ISFINITE = 1])
  gl_MATH_MODULE_INDICATOR([isfinite])
  gl_FUNC_ISGRAPH_L
  gl_CONDITIONAL([GL_COND_OBJ_ISGRAPH_L], [test $HAVE_ISGRAPH_L = 0])
  gl_MODULE_INDICATOR([isgraph_l])
  gl_CTYPE_MODULE_INDICATOR([isgraph_l])
  gl_ISINF
  gl_CONDITIONAL([GL_COND_OBJ_ISINF], [test $REPLACE_ISINF = 1])
  gl_MATH_MODULE_INDICATOR([isinf])
  gl_FUNC_ISLOWER_L
  gl_CONDITIONAL([GL_COND_OBJ_ISLOWER_L], [test $HAVE_ISLOWER_L = 0])
  gl_MODULE_INDICATOR([islower_l])
  gl_CTYPE_MODULE_INDICATOR([islower_l])
  gl_ISNAN
  gl_MATH_MODULE_INDICATOR([isnan])
  gl_FUNC_ISNAND
  m4_ifdef([gl_ISNAN], [
    AC_REQUIRE([gl_ISNAN])
  ])
  if test $HAVE_ISNAND = 0 || test $REPLACE_ISNAN = 1; then
    AC_LIBOBJ([isnand])
    gl_PREREQ_ISNAND
  fi
  gl_MATH_MODULE_INDICATOR([isnand])
  gl_FUNC_ISNAND_NO_LIBM
  if test $gl_func_isnand_no_libm != yes; then
    AC_LIBOBJ([isnand])
    gl_PREREQ_ISNAND
  fi
  gl_FUNC_ISNANF
  m4_ifdef([gl_ISNAN], [
    AC_REQUIRE([gl_ISNAN])
  ])
  if test $HAVE_ISNANF = 0 || test $REPLACE_ISNAN = 1; then
    AC_LIBOBJ([isnanf])
    gl_PREREQ_ISNANF
  fi
  gl_MATH_MODULE_INDICATOR([isnanf])
  gl_FUNC_ISNANF_NO_LIBM
  if test $gl_func_isnanf_no_libm != yes; then
    AC_LIBOBJ([isnanf])
    gl_PREREQ_ISNANF
  fi
  gl_FUNC_ISNANL
  m4_ifdef([gl_ISNAN], [
    AC_REQUIRE([gl_ISNAN])
  ])
  if test $HAVE_ISNANL = 0 || test $REPLACE_ISNAN = 1; then
    AC_LIBOBJ([isnanl])
    gl_PREREQ_ISNANL
  fi
  gl_MATH_MODULE_INDICATOR([isnanl])
  gl_FUNC_ISNANL_NO_LIBM
  if test $gl_func_isnanl_no_libm != yes; then
    AC_LIBOBJ([isnanl])
    gl_PREREQ_ISNANL
  fi
  gl_FUNC_ISPRINT_L
  gl_CONDITIONAL([GL_COND_OBJ_ISPRINT_L], [test $HAVE_ISPRINT_L = 0])
  gl_MODULE_INDICATOR([isprint_l])
  gl_CTYPE_MODULE_INDICATOR([isprint_l])
  gl_FUNC_ISPUNCT_L
  gl_CONDITIONAL([GL_COND_OBJ_ISPUNCT_L], [test $HAVE_ISPUNCT_L = 0])
  gl_MODULE_INDICATOR([ispunct_l])
  gl_CTYPE_MODULE_INDICATOR([ispunct_l])
  gl_FUNC_ISSPACE_L
  gl_CONDITIONAL([GL_COND_OBJ_ISSPACE_L], [test $HAVE_ISSPACE_L = 0])
  gl_MODULE_INDICATOR([isspace_l])
  gl_CTYPE_MODULE_INDICATOR([isspace_l])
  gl_MODULE_INDICATOR([issymlink])
  gl_MODULE_INDICATOR([issymlinkat])
  gl_FUNC_ISUPPER_L
  gl_CONDITIONAL([GL_COND_OBJ_ISUPPER_L], [test $HAVE_ISUPPER_L = 0])
  gl_MODULE_INDICATOR([isupper_l])
  gl_CTYPE_MODULE_INDICATOR([isupper_l])
  gl_FUNC_ISWBLANK
  gl_CONDITIONAL([GL_COND_OBJ_ISWBLANK],
                 [! { test $HAVE_ISWCNTRL = 0 || test $REPLACE_ISWCNTRL = 1; } && { test $HAVE_ISWBLANK = 0 || test $REPLACE_ISWBLANK = 1; }])
  gl_WCTYPE_MODULE_INDICATOR([iswblank])
  gl_FUNC_ISWCTYPE
  gl_CONDITIONAL([GL_COND_OBJ_ISWCTYPE],
                 [test $HAVE_WCTYPE_T = 0 || test $GNULIBHEADERS_OVERRIDE_WINT_T = 1 || test $REPLACE_WCTYPE = 1])
  gl_WCTYPE_MODULE_INDICATOR([iswctype])
  gl_FUNC_ISWDIGIT
  gl_CONDITIONAL([GL_COND_OBJ_ISWDIGIT],
                 [! { test $HAVE_ISWCNTRL = 0 || test $REPLACE_ISWCNTRL = 1; } && test $REPLACE_ISWDIGIT = 1])
  gl_WCTYPE_MODULE_INDICATOR([iswdigit])
  gl_FUNC_ISWPUNCT
  gl_CONDITIONAL([GL_COND_OBJ_ISWPUNCT],
                 [! { test $HAVE_ISWCNTRL = 0 || test $REPLACE_ISWCNTRL = 1; } && test $REPLACE_ISWPUNCT = 1])
  gl_WCTYPE_MODULE_INDICATOR([iswpunct])
  gl_FUNC_ISWXDIGIT
  gl_CONDITIONAL([GL_COND_OBJ_ISWXDIGIT],
                 [! { test $HAVE_ISWCNTRL = 0 || test $REPLACE_ISWCNTRL = 1; } && test $REPLACE_ISWXDIGIT = 1])
  gl_WCTYPE_MODULE_INDICATOR([iswxdigit])
  gl_FUNC_ISXDIGIT_L
  gl_CONDITIONAL([GL_COND_OBJ_ISXDIGIT_L], [test $HAVE_ISXDIGIT_L = 0])
  gl_MODULE_INDICATOR([isxdigit_l])
  gl_CTYPE_MODULE_INDICATOR([isxdigit_l])
  gl_COMMON_DOUBLE_MATHFUNC([j0])
  gl_COMMON_DOUBLE_MATHFUNC([j1])
  # You need to invoke gt_JAVACOMP yourself, possibly with arguments.
  AC_CONFIG_FILES([javacomp.sh:build-aux/javacomp.sh.in])
  # You need to invoke gt_JAVAEXEC yourself, possibly with arguments.
  AC_CONFIG_FILES([javaexec.sh:build-aux/javaexec.sh.in])
  gl_VALGRIND_HELPER
  AC_REQUIRE([AC_C_INLINE])
  AC_CHECK_FUNCS([__clear_cache])
  gl_COMMON_DOUBLE_MATHFUNC([jn])
  AC_REQUIRE([AC_C_INLINE])
  gl_LANGINFO_H
  gl_LANGINFO_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  AC_REQUIRE([gl_LARGEFILE])
  gl_FUNC_LCHMOD
  gl_CONDITIONAL([GL_COND_OBJ_LCHMOD], [test $HAVE_LCHMOD = 0])
  AM_COND_IF([GL_COND_OBJ_LCHMOD], [
    gl_PREREQ_LCHMOD
  ])
  gl_SYS_STAT_MODULE_INDICATOR([lchmod])
  gl_FUNC_LCHOWN
  gl_CONDITIONAL([GL_COND_OBJ_LCHOWN],
                 [test $HAVE_LCHOWN = 0 || test $REPLACE_LCHOWN = 1])
  gl_UNISTD_MODULE_INDICATOR([lchown])
  gl_LDD
  AC_CONFIG_FILES([ldd.sh:build-aux/ldd.sh.in])
  gl_FUNC_LDEXP
  gl_CONDITIONAL([GL_COND_OBJ_LDEXP], [test $REPLACE_LDEXP = 1])
  gl_MATH_MODULE_INDICATOR([ldexp])
  gl_FUNC_LDEXPF
  gl_CONDITIONAL([GL_COND_OBJ_LDEXPF], [test $HAVE_LDEXPF = 0])
  gl_MATH_MODULE_INDICATOR([ldexpf])
  gl_FUNC_LDEXPL
  gl_CONDITIONAL([GL_COND_OBJ_LDEXPL],
                 [test $HAVE_DECL_LDEXPL = 0 || test $gl_func_ldexpl = no])
  gl_MATH_MODULE_INDICATOR([ldexpl])
  gl_COMMON_DOUBLE_MATHFUNC([lgamma])
  gl_LD_OUTPUT_DEF
  gl_LD_VERSION_SCRIPT
  gl_VISIBILITY
  gl___INLINE
  gl_LIBGMP
  gl_CONDITIONAL([GL_COND_OBJ_MINI_MPQ_GNULIB], [test $HAVE_LIBGMP != yes])
  gl_MODULE_INDICATOR([libgmp-mpq])
  gl_LIBGMP
  gl_CONDITIONAL_HEADER([gmp.h])
  AC_PROG_MKDIR_P
  gl_CONDITIONAL([GL_COND_OBJ_MINI_GMP_GNULIB], [test $HAVE_LIBGMP != yes])
  gl_LIBSIGSEGV
  # You need to invoke gl_LIBTEXTSTYLE yourself, possibly with arguments.
  # You need to invoke gl_LIBTEXTSTYLE_OPTIONAL yourself, possibly with arguments.
  if test -z "$GL_GENERATE_TEXTSTYLE_H"; then
    GL_GENERATE_TEXTSTYLE_H=false
  fi
  gl_CONDITIONAL_HEADER([textstyle.h])
  AC_PROG_MKDIR_P
  gl_LIBUNISTRING
  gl_LIBUNISTRING_OPTIONAL
  gl_LIMITS_H
  gl_CONDITIONAL_HEADER([limits.h])
  AC_PROG_MKDIR_P
  gl_FUNC_LINK
  gl_CONDITIONAL([GL_COND_OBJ_LINK],
                 [test $HAVE_LINK = 0 || test $REPLACE_LINK = 1])
  gl_UNISTD_MODULE_INDICATOR([link])
  gl_FUNC_LINK_FOLLOWS_SYMLINK
  gl_FUNC_LINKAT
  gl_CONDITIONAL([GL_COND_OBJ_LINKAT],
                 [test $HAVE_LINKAT = 0 || test $REPLACE_LINKAT = 1])
  AM_COND_IF([GL_COND_OBJ_LINKAT], [
    AC_LIBOBJ([at-func2])
  ])
  gl_UNISTD_MODULE_INDICATOR([linkat])
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_LISTEN], [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([listen])
  gl_MODULE_INDICATOR([listen])
  gl_LOCALCHARSET
  dnl For backward compatibility. Some packages still use this.
  LOCALCHARSET_TESTS_ENVIRONMENT=
  AC_SUBST([LOCALCHARSET_TESTS_ENVIRONMENT])
  gl_LOCALE_H
  gl_LOCALE_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_FUNC_LOCALECONV
  gl_CONDITIONAL([GL_COND_OBJ_LOCALECONV], [test $REPLACE_LOCALECONV = 1])
  AM_COND_IF([GL_COND_OBJ_LOCALECONV], [
    gl_PREREQ_LOCALECONV
  ])
  gl_LOCALE_MODULE_INDICATOR([localeconv])
  gl_MODULE_INDICATOR([localeconv])
  gl_LOCALENAME_ENVIRON
  gl_LOCALE_MODULE_INDICATOR([localename-environ])
  gl_LOCALENAME_UNSAFE
  gl_LOCALE_MODULE_INDICATOR([localename-unsafe])
  gl_MUSL_LIBC
  gl_LOCALENAME_UNSAFE_LIMITED
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_LOCALENAME_UNSAFE_LIMITED],
                 [case "$host_os" in openbsd* | aix* | *-android*) false;; *) true;; esac])
  gl_MUSL_LIBC
  gl_FUNC_LOCALTIME
  gl_CONDITIONAL([GL_COND_OBJ_LOCALTIME], [test $REPLACE_LOCALTIME = 1])
  gl_TIME_MODULE_INDICATOR([localtime])
  gl_LOCK
  gl_MODULE_INDICATOR([lock])
  AC_REQUIRE([gl_FUNC_LOG])
  gl_CONDITIONAL([GL_COND_OBJ_LOG], [test $REPLACE_LOG = 1])
  gl_MATH_MODULE_INDICATOR([log])
  gl_FUNC_LOG_IEEE
  gl_FUNC_LOG10
  gl_CONDITIONAL([GL_COND_OBJ_LOG10], [test $REPLACE_LOG10 = 1])
  gl_MATH_MODULE_INDICATOR([log10])
  gl_FUNC_LOG10_IEEE
  gl_FUNC_LOG10F
  gl_CONDITIONAL([GL_COND_OBJ_LOG10F],
                 [test $HAVE_LOG10F = 0 || test $REPLACE_LOG10F = 1])
  gl_MATH_MODULE_INDICATOR([log10f])
  gl_FUNC_LOG10F_IEEE
  gl_FUNC_LOG10L
  gl_CONDITIONAL([GL_COND_OBJ_LOG10L],
                 [test $HAVE_LOG10L = 0 || test $REPLACE_LOG10L = 1])
  gl_MATH_MODULE_INDICATOR([log10l])
  gl_FUNC_LOG1P
  gl_CONDITIONAL([GL_COND_OBJ_LOG1P],
                 [test $HAVE_LOG1P = 0 || test $REPLACE_LOG1P = 1])
  gl_MATH_MODULE_INDICATOR([log1p])
  gl_FUNC_LOG1P_IEEE
  gl_FUNC_LOG1PF
  gl_CONDITIONAL([GL_COND_OBJ_LOG1PF],
                 [test $HAVE_LOG1PF = 0 || test $REPLACE_LOG1PF = 1])
  gl_MATH_MODULE_INDICATOR([log1pf])
  gl_FUNC_LOG1PF_IEEE
  gl_FUNC_LOG1PL
  gl_CONDITIONAL([GL_COND_OBJ_LOG1PL],
                 [test $HAVE_LOG1PL = 0 || test $REPLACE_LOG1PL = 1])
  gl_MATH_MODULE_INDICATOR([log1pl])
  gl_FUNC_LOG1PL_IEEE
  gl_FUNC_LOG2
  gl_CONDITIONAL([GL_COND_OBJ_LOG2],
                 [test $HAVE_LOG2 = 0 || test $REPLACE_LOG2 = 1])
  gl_MATH_MODULE_INDICATOR([log2])
  gl_FUNC_LOG2_IEEE
  gl_FUNC_LOG2F
  gl_CONDITIONAL([GL_COND_OBJ_LOG2F],
                 [test $HAVE_LOG2F = 0 || test $REPLACE_LOG2F = 1])
  gl_MATH_MODULE_INDICATOR([log2f])
  gl_FUNC_LOG2F_IEEE
  gl_FUNC_LOG2L
  gl_CONDITIONAL([GL_COND_OBJ_LOG2L],
                 [test $HAVE_LOG2L = 0 || test $REPLACE_LOG2L = 1])
  gl_MATH_MODULE_INDICATOR([log2l])
  gl_FUNC_LOGB
  gl_CONDITIONAL([GL_COND_OBJ_LOGB],
                 [test $HAVE_LOGB = 0 || test $REPLACE_LOGB = 1])
  gl_MATH_MODULE_INDICATOR([logb])
  gl_FUNC_LOGBF
  gl_CONDITIONAL([GL_COND_OBJ_LOGBF],
                 [test $HAVE_LOGBF = 0 || test $REPLACE_LOGBF = 1])
  gl_MATH_MODULE_INDICATOR([logbf])
  gl_FUNC_LOGBL
  gl_CONDITIONAL([GL_COND_OBJ_LOGBL],
                 [test $HAVE_LOGBL = 0 || test $REPLACE_LOGBL = 1])
  gl_MATH_MODULE_INDICATOR([logbl])
  gl_FUNC_LOGF
  gl_CONDITIONAL([GL_COND_OBJ_LOGF],
                 [test $HAVE_LOGF = 0 || test $REPLACE_LOGF = 1])
  gl_MATH_MODULE_INDICATOR([logf])
  gl_FUNC_LOGF_IEEE
  gl_FUNC_LOGIN_TTY
  gl_CONDITIONAL([GL_COND_OBJ_LOGIN_TTY], [test $HAVE_LOGIN_TTY = 0])
  gl_UTMP_MODULE_INDICATOR([login_tty])
  gl_FUNC_LOGL
  gl_CONDITIONAL([GL_COND_OBJ_LOGL],
                 [test $HAVE_LOGL = 0 || test $REPLACE_LOGL = 1])
  gl_MATH_MODULE_INDICATOR([logl])
  gl_FUNC_LOGP1
  gl_CONDITIONAL([GL_COND_OBJ_LOGP1], [test $HAVE_LOGP1 = 0])
  gl_MATH_MODULE_INDICATOR([logp1])
  gl_FUNC_LOGP1F
  gl_CONDITIONAL([GL_COND_OBJ_LOGP1F], [test $HAVE_LOGP1F = 0])
  gl_MATH_MODULE_INDICATOR([logp1f])
  gl_FUNC_LOGP1L
  gl_CONDITIONAL([GL_COND_OBJ_LOGP1L], [test $HAVE_LOGP1L = 0])
  gl_MATH_MODULE_INDICATOR([logp1l])
  AC_REQUIRE([AC_TYPE_LONG_LONG_INT])
  AC_REQUIRE([AC_TYPE_UNSIGNED_LONG_LONG_INT])
  gl_FUNC_LSEEK
  gl_CONDITIONAL([GL_COND_OBJ_LSEEK], [test $REPLACE_LSEEK = 1])
  gl_UNISTD_MODULE_INDICATOR([lseek])
  gl_FUNC_LSTAT
  gl_CONDITIONAL([GL_COND_OBJ_LSTAT], [test $REPLACE_LSTAT = 1])
  AM_COND_IF([GL_COND_OBJ_LSTAT], [
    gl_PREREQ_LSTAT
  ])
  gl_SYS_STAT_MODULE_INDICATOR([lstat])
  gl_MODULE_INDICATOR([lstat])
  AC_CONFIG_COMMANDS_PRE([m4_ifdef([AH_HEADER],
    [AC_SUBST([CONFIG_INCLUDE], m4_defn([AH_HEADER]))])])
  AC_REQUIRE([AC_PROG_SED])
  AC_REQUIRE([AC_PROG_GREP])
  gl_FUNC_MALLOC_GNU
  if test $REPLACE_MALLOC_FOR_MALLOC_GNU = 1; then
    AC_LIBOBJ([malloc])
  fi
  gl_STDLIB_MODULE_INDICATOR([malloc-gnu])
  gl_MALLOC_H
  gl_MALLOC_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  AC_REQUIRE([gl_FUNC_MALLOC_POSIX])
  if test $REPLACE_MALLOC_FOR_MALLOC_POSIX = 1; then
    AC_LIBOBJ([malloc])
  fi
  gl_STDLIB_MODULE_INDICATOR([malloc-posix])
  gl_MALLOCA
  gl_MATH_H
  gl_MATH_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  AC_REQUIRE([gl_FUNC_FLOORL])
  AC_REQUIRE([gl_FUNC_CEILL])
  AC_REQUIRE([gl_FUNC_ACOSL])
  AC_REQUIRE([gl_FUNC_ASINL])
  AC_REQUIRE([gl_FUNC_ATANL])
  AC_REQUIRE([gl_FUNC_COSL])
  AC_REQUIRE([gl_FUNC_EXPL])
  AC_REQUIRE([gl_FUNC_LOGL])
  AC_REQUIRE([gl_FUNC_SINL])
  AC_REQUIRE([gl_FUNC_SQRTL])
  AC_REQUIRE([gl_FUNC_TANL])
  LIBS="$LIBS $FLOORL_LIBM $CEILL_LIBM $ACOSL_LIBM $ASINL_LIBM $ATANL_LIBM $COSL_LIBM $EXPL_LIBM $LOGL_LIBM $SINL_LIBM $SQRTL_LIBM $TANL_LIBM"
  gl_MBCHAR
  gl_MBFILE
  dnl Do not use gl_MODULE_INDICATOR([mbfile]) here: we don't want 'struct mbchar'
  dnl to have a different size in lib/ than in tests/.
  AC_DEFINE([GNULIB_MBFILE], [1],
    [Define to 1 if the gnulib module 'mbfile' is in use.])
  gl_MBITER
  gl_MBITER
  gl_FUNC_MBRLEN
  gl_CONDITIONAL([GL_COND_OBJ_MBRLEN],
                 [test $HAVE_MBRLEN = 0 || test $REPLACE_MBRLEN = 1])
  AM_COND_IF([GL_COND_OBJ_MBRLEN], [
    gl_PREREQ_MBRLEN
  ])
  gl_WCHAR_MODULE_INDICATOR([mbrlen])
  gl_FUNC_MBRTOC16
  gl_CONDITIONAL([GL_COND_OBJ_MBRTOC16],
                 [test $HAVE_MBRTOC16 = 0 || test $REPLACE_MBRTOC16 = 1])
  AM_COND_IF([GL_COND_OBJ_MBRTOC16], [
    gl_PREREQ_MBRTOC16
  ])
  gl_UCHAR_MODULE_INDICATOR([mbrtoc16])
  gl_FUNC_MBRTOC32
  gl_CONDITIONAL([GL_COND_OBJ_MBRTOC32],
                 [test $HAVE_MBRTOC32 = 0 || test $REPLACE_MBRTOC32 = 1])
  AM_COND_IF([GL_COND_OBJ_MBRTOC32], [
    if test $REPLACE_MBSTATE_T = 1; then
      AC_LIBOBJ([lc-charset-dispatch])
      AC_LIBOBJ([mbtowc-lock])
      gl_PREREQ_MBTOWC_LOCK
    fi
    gl_PREREQ_MBRTOC32
  ])
  gl_UCHAR_MODULE_INDICATOR([mbrtoc32])
  gl_MODULE_INDICATOR([mbrtoc32-regular])
  gl_FUNC_MBRTOWC
  gl_CONDITIONAL([GL_COND_OBJ_MBRTOWC],
                 [test $HAVE_MBRTOWC = 0 || test $REPLACE_MBRTOWC = 1])
  AM_COND_IF([GL_COND_OBJ_MBRTOWC], [
    if test $REPLACE_MBSTATE_T = 1; then
      AC_LIBOBJ([lc-charset-dispatch])
      AC_LIBOBJ([mbtowc-lock])
      gl_PREREQ_MBTOWC_LOCK
    fi
    gl_PREREQ_MBRTOWC
  ])
  gl_WCHAR_MODULE_INDICATOR([mbrtowc])
  gl_STRING_MODULE_INDICATOR([mbs_endswith])
  gl_STRING_MODULE_INDICATOR([mbs_startswith])
  gl_STRING_MODULE_INDICATOR([mbscasecmp])
  gl_STRING_MODULE_INDICATOR([mbscasestr])
  gl_STRING_MODULE_INDICATOR([mbschr])
  gl_STRING_MODULE_INDICATOR([mbscspn])
  gl_FUNC_MBSINIT
  gl_CONDITIONAL([GL_COND_OBJ_MBSINIT],
                 [test $HAVE_MBSINIT = 0 || test $REPLACE_MBSINIT = 1])
  AM_COND_IF([GL_COND_OBJ_MBSINIT], [
    gl_PREREQ_MBSINIT
  ])
  gl_WCHAR_MODULE_INDICATOR([mbsinit])
  gl_FUNC_MBSLEN
  gl_STRING_MODULE_INDICATOR([mbslen])
  gl_STRING_MODULE_INDICATOR([mbsncasecmp])
  gl_STRING_MODULE_INDICATOR([mbsnlen])
  AC_REQUIRE([gl_UCHAR_H])
  AC_LIBOBJ([mbsrtoc32s-state])
  gl_UCHAR_MODULE_INDICATOR([mbsnrtoc32s])
  gl_FUNC_MBSNRTOWCS
  gl_CONDITIONAL([GL_COND_OBJ_MBSNRTOWCS],
                 [test $HAVE_MBSNRTOWCS = 0 || test $REPLACE_MBSNRTOWCS = 1])
  AM_COND_IF([GL_COND_OBJ_MBSNRTOWCS], [
    AC_LIBOBJ([mbsrtowcs-state])
    gl_PREREQ_MBSNRTOWCS
  ])
  gl_WCHAR_MODULE_INDICATOR([mbsnrtowcs])
  gl_STRING_MODULE_INDICATOR([mbspbrk])
  gl_STRING_MODULE_INDICATOR([mbspcasecmp])
  gl_STRING_MODULE_INDICATOR([mbsrchr])
  AC_REQUIRE([gl_UCHAR_H])
  AC_LIBOBJ([mbsrtoc32s-state])
  gl_UCHAR_MODULE_INDICATOR([mbsrtoc32s])
  gl_FUNC_MBSRTOWCS
  gl_CONDITIONAL([GL_COND_OBJ_MBSRTOWCS],
                 [test $HAVE_MBSRTOWCS = 0 || test $REPLACE_MBSRTOWCS = 1])
  AM_COND_IF([GL_COND_OBJ_MBSRTOWCS], [
    AC_LIBOBJ([mbsrtowcs-state])
    gl_PREREQ_MBSRTOWCS
  ])
  gl_WCHAR_MODULE_INDICATOR([mbsrtowcs])
  gl_STRING_MODULE_INDICATOR([mbssep])
  gl_STRING_MODULE_INDICATOR([mbsspn])
  gl_STRING_MODULE_INDICATOR([mbsstr])
  gl_UCHAR_MODULE_INDICATOR([mbstoc32s])
  gl_STRING_MODULE_INDICATOR([mbstok_r])
  gl_FUNC_MBSTOWCS
  gl_CONDITIONAL([GL_COND_OBJ_MBSTOWCS], [test $REPLACE_MBSTOWCS = 1])
  AM_COND_IF([GL_COND_OBJ_MBSTOWCS], [
    gl_PREREQ_MBSTOWCS
  ])
  gl_STDLIB_MODULE_INDICATOR([mbstowcs])
  gl_MBSWIDTH
  AC_REQUIRE([AC_TYPE_MBSTATE_T])
  gl_MBSTATE_T_BROKEN
  gl_MUSL_LIBC
  gl_WCHAR_MODULE_INDICATOR([mbszero])
  gl_FUNC_MBTOWC
  gl_CONDITIONAL([GL_COND_OBJ_MBTOWC],
                 [test $HAVE_MBTOWC = 0 || test $REPLACE_MBTOWC = 1])
  AM_COND_IF([GL_COND_OBJ_MBTOWC], [
    gl_PREREQ_MBTOWC
  ])
  gl_STDLIB_MODULE_INDICATOR([mbtowc])
  gl_MBITER
  gl_MBITER
  gl_MODULE_INDICATOR([mcel-prefer])
  gl_FUNC_MEMALIGN
  gl_CONDITIONAL([GL_COND_OBJ_MEMALIGN], [test $REPLACE_MEMALIGN = 1])
  gl_MALLOC_MODULE_INDICATOR([memalign])
  gl_MEMCASECMP
  gl_FUNC_MEMCHR
  gl_CONDITIONAL([GL_COND_OBJ_MEMCHR], [test $REPLACE_MEMCHR = 1])
  AM_COND_IF([GL_COND_OBJ_MEMCHR], [
    gl_PREREQ_MEMCHR
  ])
  gl_STRING_MODULE_INDICATOR([memchr])
  gl_FUNC_MEMCMP
  gl_CONDITIONAL([GL_COND_OBJ_MEMCMP], [test $gl_func_memcmp = no])
  AM_COND_IF([GL_COND_OBJ_MEMCMP], [
    gl_PREREQ_MEMCMP
  ])
  gl_MEMCOLL
  gl_FUNC_MEMCPY
  gl_CONDITIONAL([GL_COND_OBJ_MEMCPY], [test $ac_cv_func_memcpy = no])
  AM_COND_IF([GL_COND_OBJ_MEMCPY], [
    gl_PREREQ_MEMCPY
  ])
  gl_FUNC_MEMMEM
  if test $HAVE_MEMMEM = 0 || test $REPLACE_MEMMEM = 1; then
    AC_LIBOBJ([memmem])
  fi
  gl_FUNC_MEMMEM_SIMPLE
  if test $HAVE_MEMMEM = 0 || test $REPLACE_MEMMEM = 1; then
    AC_LIBOBJ([memmem])
  fi
  gl_STRING_MODULE_INDICATOR([memmem])
  gl_FUNC_MEMMOVE
  gl_CONDITIONAL([GL_COND_OBJ_MEMMOVE], [test $ac_cv_func_memmove = no])
  AM_COND_IF([GL_COND_OBJ_MEMMOVE], [
    gl_PREREQ_MEMMOVE
  ])
  gl_FUNC_MEMPCPY
  gl_CONDITIONAL([GL_COND_OBJ_MEMPCPY],
                 [test $HAVE_MEMPCPY = 0 || test $REPLACE_MEMPCPY = 1])
  AM_COND_IF([GL_COND_OBJ_MEMPCPY], [
    gl_PREREQ_MEMPCPY
  ])
  gl_STRING_MODULE_INDICATOR([mempcpy])
  gl_FUNC_MEMRCHR
  gl_CONDITIONAL([GL_COND_OBJ_MEMRCHR], [test $ac_cv_func_memrchr = no])
  AM_COND_IF([GL_COND_OBJ_MEMRCHR], [
    gl_PREREQ_MEMRCHR
  ])
  gl_STRING_MODULE_INDICATOR([memrchr])
  gl_FUNC_MEMSET
  gl_CONDITIONAL([GL_COND_OBJ_MEMSET], [test $ac_cv_func_memset = no])
  AM_COND_IF([GL_COND_OBJ_MEMSET], [
    gl_PREREQ_MEMSET
  ])
  gl_FUNC_MEMSET_EXPLICIT
  gl_CONDITIONAL([GL_COND_OBJ_MEMSET_EXPLICIT],
                 [test $HAVE_MEMSET_EXPLICIT = 0 || test $REPLACE_MEMSET_EXPLICIT = 1])
  AM_COND_IF([GL_COND_OBJ_MEMSET_EXPLICIT], [
    gl_PREREQ_MEMSET_EXPLICIT
  ])
  gl_STRING_MODULE_INDICATOR([memset_explicit])
  gl_MEMXOR
  gl_MGETGROUPS
  gl_MINMAX
  # Conditionally invoke gl_PREREQ_VASNPRINTF_WITH_GNU_EXTRAS.
  # Conditionally invoke gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS.
  gl_MKANCESDIRS
  gl_FUNC_MKDIR
  gl_CONDITIONAL([GL_COND_OBJ_MKDIR], [test $REPLACE_MKDIR = 1])
  gl_SYS_STAT_MODULE_INDICATOR([mkdir])
  gl_MKDIR_PARENTS
  gl_FUNC_MKDIRAT
  gl_CONDITIONAL([GL_COND_OBJ_MKDIRAT], [test $HAVE_MKDIRAT = 0])
  AM_COND_IF([GL_COND_OBJ_MKDIRAT], [
    gl_PREREQ_MKDIRAT
  ])
  gl_SYS_STAT_MODULE_INDICATOR([mkdirat])
  gl_FUNC_MKDTEMP
  gl_CONDITIONAL([GL_COND_OBJ_MKDTEMP], [test $HAVE_MKDTEMP = 0])
  AM_COND_IF([GL_COND_OBJ_MKDTEMP], [
    gl_PREREQ_MKDTEMP
  ])
  gl_STDLIB_MODULE_INDICATOR([mkdtemp])
  gl_FUNC_MKFIFO
  gl_CONDITIONAL([GL_COND_OBJ_MKFIFO],
                 [test $HAVE_MKFIFO = 0 || test $REPLACE_MKFIFO = 1])
  gl_UNISTD_MODULE_INDICATOR([mkfifo])
  gl_FUNC_MKFIFOAT
  gl_CONDITIONAL([GL_COND_OBJ_MKFIFOAT],
                 [test $HAVE_MKFIFOAT = 0 || test $REPLACE_MKFIFOAT = 1])
  gl_CONDITIONAL([GL_COND_OBJ_MKNODAT],
                 [test $HAVE_MKNODAT = 0 || test $REPLACE_MKNODAT = 1])
  gl_SYS_STAT_MODULE_INDICATOR([mkfifoat])
  gl_SYS_STAT_MODULE_INDICATOR([mknodat])
  gl_FUNC_MKNOD
  gl_CONDITIONAL([GL_COND_OBJ_MKNOD],
                 [test $HAVE_MKNOD = 0 || test $REPLACE_MKNOD = 1])
  gl_UNISTD_MODULE_INDICATOR([mknod])
  gl_FUNC_MKOSTEMP
  gl_CONDITIONAL([GL_COND_OBJ_MKOSTEMP],
                 [test $HAVE_MKOSTEMP = 0 || test $REPLACE_MKOSTEMP = 1])
  AM_COND_IF([GL_COND_OBJ_MKOSTEMP], [
    gl_PREREQ_MKOSTEMP
  ])
  gl_MODULE_INDICATOR([mkostemp])
  gl_STDLIB_MODULE_INDICATOR([mkostemp])
  gl_FUNC_MKOSTEMPS
  gl_CONDITIONAL([GL_COND_OBJ_MKOSTEMPS],
                 [test $HAVE_MKOSTEMPS = 0 || test $REPLACE_MKOSTEMPS = 1])
  gl_MODULE_INDICATOR([mkostemps])
  gl_STDLIB_MODULE_INDICATOR([mkostemps])
  gl_FUNC_MKSTEMP
  gl_CONDITIONAL([GL_COND_OBJ_MKSTEMP],
                 [test $HAVE_MKSTEMP = 0 || test $REPLACE_MKSTEMP = 1])
  AM_COND_IF([GL_COND_OBJ_MKSTEMP], [
    gl_PREREQ_MKSTEMP
  ])
  gl_STDLIB_MODULE_INDICATOR([mkstemp])
  gl_FUNC_MKSTEMPS
  gl_CONDITIONAL([GL_COND_OBJ_MKSTEMPS], [test $HAVE_MKSTEMPS = 0])
  gl_MODULE_INDICATOR([mkstemps])
  gl_STDLIB_MODULE_INDICATOR([mkstemps])
  gl_FUNC_MKTIME
  if test $REPLACE_MKTIME = 1; then
    AC_LIBOBJ([mktime])
    gl_PREREQ_MKTIME
  fi
  gl_TIME_MODULE_INDICATOR([mktime])
  gl_FUNC_MKTIME_INTERNAL
  if test $WANT_MKTIME_INTERNAL = 1; then
    AC_LIBOBJ([mktime])
    gl_PREREQ_MKTIME
  fi
  gl_MNTENT_H
  gl_MNTENT_H_REQUIRE_DEFAULTS
  gl_CONDITIONAL_HEADER([mntent.h])
  AC_PROG_MKDIR_P
  gl_MODECHANGE
  gl_FUNC_MODF
  gl_CONDITIONAL([GL_COND_OBJ_MODF], [test $REPLACE_MODF = 1])
  gl_MATH_MODULE_INDICATOR([modf])
  gl_FUNC_MODF_IEEE
  gl_FUNC_MODFF
  gl_CONDITIONAL([GL_COND_OBJ_MODFF],
                 [test $HAVE_MODFF = 0 || test $REPLACE_MODFF = 1])
  gl_MATH_MODULE_INDICATOR([modff])
  gl_FUNC_MODFF_IEEE
  gl_FUNC_MODFL
  gl_CONDITIONAL([GL_COND_OBJ_MODFL],
                 [test $HAVE_MODFL = 0 || test $REPLACE_MODFL = 1])
  gl_MATH_MODULE_INDICATOR([modfl])
  gl_FUNC_MODFL_IEEE
  AC_REQUIRE([gt_MODULA2COMP])
  gl_MONETARY_H
  gl_MONETARY_H_REQUIRE_DEFAULTS
  gl_CONDITIONAL_HEADER([monetary.h])
  AC_PROG_MKDIR_P
  gl_MOUNTLIST
  gl_PREREQ_MOUNTLIST_EXTRA
  gl_MPSORT
  AC_REQUIRE([gl_MSVC_INVAL])
  gl_CONDITIONAL([GL_COND_OBJ_MSVC_INVAL],
                 [test $HAVE_MSVC_INVALID_PARAMETER_HANDLER = 1])
  AC_REQUIRE([gl_MSVC_NOTHROW])
  gl_CONDITIONAL([GL_COND_OBJ_MSVC_NOTHROW],
                 [test $HAVE_MSVC_INVALID_PARAMETER_HANDLER = 1])
  gl_MODULE_INDICATOR([msvc-nothrow])
  AC_REQUIRE([gl_THREADS_H])
  gl_FUNC_MTX_INIT
  gl_CONDITIONAL([GL_COND_OBJ_MTX],
                 [test $HAVE_THREADS_H = 0 || test $REPLACE_MTX_INIT = 1])
  gl_THREADS_MODULE_INDICATOR([mtx])
  gl_MULTIARCH
  gl_FUNC_NANOSLEEP
  gl_CONDITIONAL([GL_COND_OBJ_NANOSLEEP],
                 [test $HAVE_NANOSLEEP = 0 || test $REPLACE_NANOSLEEP = 1])
  gl_TIME_MODULE_INDICATOR([nanosleep])
  gl_HEADER_NET_IF
  gl_CONDITIONAL_HEADER([net/if.h])
  AC_PROG_MKDIR_P
  gl_NETDB_H
  gl_NETDB_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_HEADER_NETINET_IN
  gl_CONDITIONAL_HEADER([netinet/in.h])
  AC_PROG_MKDIR_P
  gl_FUNC_NEWLOCALE
  gl_CONDITIONAL([GL_COND_OBJ_NEWLOCALE],
                 [test $HAVE_LOCALE_T = 0 || { test $REPLACE_NEWLOCALE = 1 && test "$gt_localename_enhances_locale_funcs" != yes; }])
  AM_COND_IF([GL_COND_OBJ_NEWLOCALE], [
    gl_PREREQ_NEWLOCALE
  ])
  gl_LOCALE_MODULE_INDICATOR([newlocale])
  gl_MATHFUNC([nextafter], [double], [(double, double)])
  gl_FUNC_NL_LANGINFO
  gl_CONDITIONAL([GL_COND_OBJ_NL_LANGINFO],
                 [test $HAVE_NL_LANGINFO = 0 || test $REPLACE_NL_LANGINFO = 1])
  gl_CONDITIONAL([GL_COND_OBJ_NL_LANGINFO_LOCK],
                 [test $REPLACE_NL_LANGINFO = 1 && test $NL_LANGINFO_MTSAFE = 0])
  if test $REPLACE_NL_LANGINFO = 1 && test $NL_LANGINFO_MTSAFE = 0; then
    gl_PREREQ_NL_LANGINFO_LOCK
  fi
  gl_LANGINFO_MODULE_INDICATOR([nl_langinfo])
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_CONFIG_FILES([nlcanon.sh:build-aux/nlcanon.sh.in])
  gt_NO_CXX
  gl_NONBLOCKING_IO
  gl_FCNTL_MODULE_INDICATOR([nonblocking])
  dnl Define the C macro GNULIB_NONBLOCKING to 1.
  gl_MODULE_INDICATOR([nonblocking])
  dnl Define the substituted variable GNULIB_STDIO_H_NONBLOCKING to 1.
  gl_STDIO_H_REQUIRE_DEFAULTS
  AC_REQUIRE([gl_ASM_SYMBOL_PREFIX])
  gl_MODULE_INDICATOR_INIT_VARIABLE([GNULIB_STDIO_H_NONBLOCKING], [1])
  dnl Define the substituted variable GNULIB_UNISTD_H_NONBLOCKING to 1.
  gl_UNISTD_H_REQUIRE_DEFAULTS
  gl_MODULE_INDICATOR_INIT_VARIABLE([GNULIB_UNISTD_H_NONBLOCKING], [1])
  gl_NPROC
  gl_FUNC_GNU_STRFTIME
  gl_MODULE_INDICATOR([nstrftime])
  gl_FUNC_GNU_STRFTIME
  gl_NULLPTR
  gl_FUNC_OBSTACK
  gl_CONDITIONAL_HEADER([obstack.h])
  gl_CONDITIONAL([GL_COND_OBJ_OBSTACK],
                 [test $HAVE_OBSTACK = 0 || test $REPLACE_OBSTACK = 1])
  AC_PROG_MKDIR_P
  gl_FUNC_OBSTACK_PRINTF
  if test $ac_cv_func_obstack_printf = no || test $REPLACE_OBSTACK_PRINTF = 1; then
    AC_LIBOBJ([obstack_printf])
  fi
  gl_STDIO_MODULE_INDICATOR([obstack-printf])
  gl_FUNC_OBSTACK_PRINTF_GNU
  if test $ac_cv_func_obstack_printf = no || test $REPLACE_OBSTACK_PRINTF = 1; then
    AC_LIBOBJ([obstack_printf])
  fi
  gl_FUNC_OBSTACK_PRINTF_POSIX
  if test $ac_cv_func_obstack_printf = no || test $REPLACE_OBSTACK_PRINTF = 1; then
    AC_LIBOBJ([obstack_printf])
  fi
  gl_STDIO_MODULE_INDICATOR([obstack-printf-posix])
  gl_STDIO_MODULE_INDICATOR([obstack-zprintf])
  gl_PREREQ_VASNPRINTF_WITH_GNU_EXTRAS
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_ONCE
  gl_FUNC_OPEN
  gl_CONDITIONAL([GL_COND_OBJ_OPEN], [test $REPLACE_OPEN = 1])
  AM_COND_IF([GL_COND_OBJ_OPEN], [
    gl_PREREQ_OPEN
  ])
  gl_FCNTL_MODULE_INDICATOR([open])
  gl_FUNC_OPENAT
  gl_CONDITIONAL([GL_COND_OBJ_OPENAT],
                 [test $HAVE_OPENAT = 0 || test $REPLACE_OPENAT = 1])
  AM_COND_IF([GL_COND_OBJ_OPENAT], [
    gl_PREREQ_OPENAT
  ])
  gl_MODULE_INDICATOR([openat]) dnl for lib/getcwd.c
  gl_FCNTL_MODULE_INDICATOR([openat])
  gl_OPENAT_SAFER
  gl_MODULE_INDICATOR([openat-safer])
  gl_FUNC_OPENDIR
  gl_CONDITIONAL([GL_COND_OBJ_OPENDIR],
                 [test $HAVE_OPENDIR = 0 || test $REPLACE_OPENDIR = 1])
  gl_DIRENT_MODULE_INDICATOR([opendir])
  AC_OPENMP
  gl_OMP_H
  AC_PROG_MKDIR_P
  gl_FUNC_OPENPTY
  gl_CONDITIONAL([GL_COND_OBJ_OPENPTY],
                 [test $HAVE_OPENPTY = 0 || test $REPLACE_OPENPTY = 1])
  gl_PTY_MODULE_INDICATOR([openpty])
  gl_PAGEALIGN_ALLOC
  gl_PARSE_DATETIME
  AC_DEFINE([GNULIB_PARSE_DATETIME2], [1], [Define to support parse_datetime2.])
  gl_PASSFD
  gl_PATHMAX
  gl_FUNC_PCLOSE
  gl_CONDITIONAL([GL_COND_OBJ_PCLOSE], [test $HAVE_PCLOSE = 0])
  AM_COND_IF([GL_COND_OBJ_PCLOSE], [
    gl_PREREQ_PCLOSE
  ])
  gl_STDIO_MODULE_INDICATOR([pclose])
  gl_PERL
  gl_FUNC_PERROR
  gl_CONDITIONAL([GL_COND_OBJ_PERROR], [test $REPLACE_PERROR = 1])
  gl_STRING_MODULE_INDICATOR([perror])
  gl_PHYSMEM
  AC_CHECK_FUNCS_ONCE([select])
  AC_CHECK_FUNCS_ONCE([select])
  gl_FUNC_PIPE
  gl_CONDITIONAL([GL_COND_OBJ_PIPE], [test $HAVE_PIPE = 0])
  gl_UNISTD_MODULE_INDICATOR([pipe])
  gl_FUNC_PIPE2
  gl_UNISTD_MODULE_INDICATOR([pipe2])
  gl_MODULE_INDICATOR([pipe2-safer])
  AC_PATH_PROG([PMCCABE], [pmccabe], [false])
  gl_FUNC_POLL
  gl_CONDITIONAL([GL_COND_OBJ_POLL],
                 [test $HAVE_POLL = 0 || test $REPLACE_POLL = 1])
  AM_COND_IF([GL_COND_OBJ_POLL], [
    gl_PREREQ_POLL
  ])
  gl_POLL_MODULE_INDICATOR([poll])
  gl_POLL_H
  gl_POLL_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_FUNC_POPEN
  gl_CONDITIONAL([GL_COND_OBJ_POPEN],
                 [test $HAVE_POPEN = 0 || test $REPLACE_POPEN = 1])
  AM_COND_IF([GL_COND_OBJ_POPEN], [
    gl_PREREQ_POPEN
  ])
  gl_STDIO_MODULE_INDICATOR([popen])
  gl_MODULE_INDICATOR([popen-safer])
  gl_POSIX_SHELL
  AC_PROG_MKDIR_P
  gl_FUNC_POSIX_MEMALIGN
  gl_CONDITIONAL([GL_COND_OBJ_POSIX_MEMALIGN], [test $REPLACE_POSIX_MEMALIGN = 1])
  gl_STDLIB_MODULE_INDICATOR([posix_memalign])
  gl_FUNC_POSIX_OPENPT
  gl_CONDITIONAL([GL_COND_OBJ_POSIX_OPENPT],
                 [test $HAVE_POSIX_OPENPT = 0 || test $REPLACE_POSIX_OPENPT = 1])
  gl_STDLIB_MODULE_INDICATOR([posix_openpt])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWN],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawn])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNI],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1])
  AM_COND_IF([GL_COND_OBJ_SPAWNI], [
    gl_PREREQ_POSIX_SPAWN_INTERNAL
  ])
  gl_FUNC_POSIX_SPAWN_FILE_ACTIONS_ADDCHDIR
  gl_CONDITIONAL([GL_COND_OBJ_SPAWN_FACTION_ADDCHDIR],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1 || test $HAVE_POSIX_SPAWN_FILE_ACTIONS_ADDCHDIR = 0 || test $REPLACE_POSIX_SPAWN_FILE_ACTIONS_ADDCHDIR = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawn_file_actions_addchdir])
  gl_FUNC_POSIX_SPAWN_FILE_ACTIONS_ADDCLOSE
  gl_CONDITIONAL([GL_COND_OBJ_SPAWN_FACTION_ADDCLOSE],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1 || test $REPLACE_POSIX_SPAWN_FILE_ACTIONS_ADDCLOSE = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawn_file_actions_addclose])
  gl_FUNC_POSIX_SPAWN_FILE_ACTIONS_ADDDUP2
  gl_CONDITIONAL([GL_COND_OBJ_SPAWN_FACTION_ADDDUP2],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1 || test $REPLACE_POSIX_SPAWN_FILE_ACTIONS_ADDDUP2 = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawn_file_actions_adddup2])
  gl_FUNC_POSIX_SPAWN_FILE_ACTIONS_ADDFCHDIR
  gl_CONDITIONAL([GL_COND_OBJ_SPAWN_FACTION_ADDFCHDIR],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1 || test $HAVE_POSIX_SPAWN_FILE_ACTIONS_ADDFCHDIR = 0 || test $REPLACE_POSIX_SPAWN_FILE_ACTIONS_ADDFCHDIR = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawn_file_actions_addfchdir])
  gl_FUNC_POSIX_SPAWN_FILE_ACTIONS_ADDOPEN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWN_FACTION_ADDOPEN],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1 || test $REPLACE_POSIX_SPAWN_FILE_ACTIONS_ADDOPEN = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawn_file_actions_addopen])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWN_FACTION_DESTROY],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawn_file_actions_destroy])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWN_FACTION_INIT],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawn_file_actions_init])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNATTR_DESTROY],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawnattr_destroy])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNATTR_GETFLAGS],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawnattr_getflags])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNATTR_GETPGROUP],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawnattr_getpgroup])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNATTR_GETSCHEDPARAM],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1 || test $gl_cv_func_spawnattr_setschedparam = no])
  gl_SPAWN_MODULE_INDICATOR([posix_spawnattr_getschedparam])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNATTR_GETSCHEDPOLICY],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1 || test $gl_cv_func_spawnattr_setschedpolicy = no])
  gl_SPAWN_MODULE_INDICATOR([posix_spawnattr_getschedpolicy])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNATTR_GETDEFAULT],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawnattr_getsigdefault])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNATTR_GETSIGMASK],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawnattr_getsigmask])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNATTR_INIT],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawnattr_init])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNATTR_SETFLAGS],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawnattr_setflags])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNATTR_SETPGROUP],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawnattr_setpgroup])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNATTR_SETSCHEDPARAM],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1 || test $gl_cv_func_spawnattr_setschedparam = no])
  gl_SPAWN_MODULE_INDICATOR([posix_spawnattr_setschedparam])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNATTR_SETSCHEDPOLICY],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1 || test $gl_cv_func_spawnattr_setschedpolicy = no])
  gl_SPAWN_MODULE_INDICATOR([posix_spawnattr_setschedpolicy])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNATTR_SETDEFAULT],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawnattr_setsigdefault])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNATTR_SETSIGMASK],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawnattr_setsigmask])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNP],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawnp])
  gl_POSIXCHECK
  gl_POSIXTM
  gl_POSIXVER
  gl_FUNC_POW
  gl_FUNC_POWF
  gl_CONDITIONAL([GL_COND_OBJ_POWF], [test $HAVE_POWF = 0])
  gl_MATH_MODULE_INDICATOR([powf])
  gl_FUNC_PREAD
  gl_CONDITIONAL([GL_COND_OBJ_PREAD],
                 [test $HAVE_PREAD = 0 || test $REPLACE_PREAD = 1])
  gl_UNISTD_MODULE_INDICATOR([pread])
  gl_FUNC_PRINTF_FREXP
  gl_FUNC_PRINTF_FREXPL
  gl_FUNC_PRINTF_GNU
  gl_FUNC_PRINTF_POSIX
  gl_STDIO_MODULE_INDICATOR([printf-posix])
  m4_divert_text([INIT_PREPARE], [gl_printf_safe=yes])
  gl_PRINTF_SUPPORT_N_DIRECTIVE
  gl_PRIV_SET
  AC_CHECK_DECLS([program_invocation_name], [], [], [#include <errno.h>])
  AC_CHECK_DECLS([program_invocation_short_name], [], [], [#include <errno.h>])
  m4_ifdef([AM_XGETTEXT_OPTION],
    [AM_][XGETTEXT_OPTION([--keyword='proper_name:1,\"This is a proper name. See the gettext manual, section Names.\"'])
     AM_][XGETTEXT_OPTION([--keyword='proper_name_utf8:1,\"This is a proper name. See the gettext manual, section Names.\"'])])
  m4_ifdef([AM_XGETTEXT_OPTION],
    [AM_][XGETTEXT_OPTION([--keyword='proper_name_lite:1,\"This is a proper name. See the gettext manual, section Names.\"'])])
  gl_FUNC_PSELECT
  gl_CONDITIONAL([GL_COND_OBJ_PSELECT],
                 [test $HAVE_PSELECT = 0 || test $REPLACE_PSELECT = 1])
  gl_SYS_SELECT_MODULE_INDICATOR([pselect])
  gl_PTHREAD_COND
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_COND],
                 [test $HAVE_PTHREAD_COND_INIT = 0 || test $REPLACE_PTHREAD_COND_INIT = 1])
  gl_PTHREAD_MODULE_INDICATOR([pthread-cond])
  gl_PTHREAD_H
  gl_PTHREAD_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_PTHREAD_MUTEX
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_MUTEX],
                 [test $HAVE_PTHREAD_MUTEX_INIT = 0 || test $REPLACE_PTHREAD_MUTEX_INIT = 1 || test $HAVE_PTHREAD_MUTEXATTR_GETROBUST = 0 || test $REPLACE_PTHREAD_MUTEXATTR_GETROBUST = 1])
  gl_PTHREAD_MODULE_INDICATOR([pthread-mutex])
  gl_PTHREAD_ONCE
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_ONCE],
                 [test $HAVE_PTHREAD_ONCE = 0 || test $REPLACE_PTHREAD_ONCE = 1])
  gl_PTHREAD_MODULE_INDICATOR([pthread-once])
  gl_PTHREAD_RWLOCK
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_RWLOCK],
                 [test $REPLACE_PTHREAD_RWLOCK_INIT = 1 || test $HAVE_PTHREAD_RWLOCK_TIMEDRDLOCK = 0 || test $REPLACE_PTHREAD_RWLOCK_TIMEDRDLOCK = 1])
  gl_PTHREAD_MODULE_INDICATOR([pthread-rwlock])
  gl_PTHREAD_SPIN
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_SPIN],
                 [test $HAVE_PTHREAD_SPIN_INIT = 0 || test $REPLACE_PTHREAD_SPIN_INIT = 1])
  gl_PTHREAD_MODULE_INDICATOR([pthread-spin])
  AC_REQUIRE([gl_ATOMIC_COMPARE_AND_SWAP])
  gl_PTHREAD_THREAD
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_THREAD],
                 [test $HAVE_PTHREAD_CREATE = 0 || test $REPLACE_PTHREAD_CREATE = 1])
  gl_PTHREAD_MODULE_INDICATOR([pthread-thread])
  gl_PTHREAD_TSS
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_TSS],
                 [test $HAVE_PTHREAD_KEY_CREATE = 0 || test $REPLACE_PTHREAD_KEY_CREATE = 1])
  gl_PTHREAD_MODULE_INDICATOR([pthread-tss])
  gl_FUNC_PTHREAD_MUTEX_TIMEDLOCK
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_MUTEX_TIMEDLOCK],
                 [test $HAVE_PTHREAD_T = 1 && test $HAVE_PTHREAD_MUTEX_TIMEDLOCK = 0])
  gl_PTHREAD_MODULE_INDICATOR([pthread_mutex_timedlock])
  gl_FUNC_PTHREAD_SIGMASK
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_SIGMASK],
                 [test $HAVE_PTHREAD_SIGMASK = 0 || test $REPLACE_PTHREAD_SIGMASK = 1])
  AM_COND_IF([GL_COND_OBJ_PTHREAD_SIGMASK], [
    gl_PREREQ_PTHREAD_SIGMASK
  ])
  gl_SIGNAL_MODULE_INDICATOR([pthread_sigmask])
  gl_FUNC_PTSNAME
  gl_CONDITIONAL([GL_COND_OBJ_PTSNAME],
                 [test $HAVE_PTSNAME = 0 || test $REPLACE_PTSNAME = 1])
  AM_COND_IF([GL_COND_OBJ_PTSNAME], [
    gl_PREREQ_PTSNAME
  ])
  gl_STDLIB_MODULE_INDICATOR([ptsname])
  gl_FUNC_PTSNAME_R
  gl_CONDITIONAL([GL_COND_OBJ_PTSNAME_R],
                 [test $HAVE_PTSNAME_R = 0 || test $REPLACE_PTSNAME_R = 1])
  AM_COND_IF([GL_COND_OBJ_PTSNAME_R], [
    gl_PREREQ_PTSNAME_R
  ])
  gl_STDLIB_MODULE_INDICATOR([ptsname_r])
  gl_PTY_H
  gl_PTY_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_FUNC_PUTENV
  gl_CONDITIONAL([GL_COND_OBJ_PUTENV], [test $REPLACE_PUTENV = 1])
  AM_COND_IF([GL_COND_OBJ_PUTENV], [
    gl_PREREQ_PUTENV
  ])
  gl_STDLIB_MODULE_INDICATOR([putenv])
  gl_FUNC_PWRITE
  gl_CONDITIONAL([GL_COND_OBJ_PWRITE],
                 [test $HAVE_PWRITE = 0 || test $REPLACE_PWRITE = 1])
  gl_UNISTD_MODULE_INDICATOR([pwrite])
  gl_QCOPY_ACL
  gl_FUNC_QSORT_R
  dnl If the function is missing from the system or has an unknown signature:
  gl_CONDITIONAL([GL_COND_OBJ_QSORT], [test $HAVE_QSORT_R = 0])
  dnl If the function exists, but it has the FreeBSD signature:
  gl_CONDITIONAL([GL_COND_OBJ_QSORT_R],
                 [test $HAVE_QSORT_R = 1 && test $REPLACE_QSORT_R = 1])
  gl_STDLIB_MODULE_INDICATOR([qsort_r])
  gl_QUOTE
  gl_QUOTEARG
  gl_FUNC_RAISE
  gl_CONDITIONAL([GL_COND_OBJ_RAISE],
                 [test $HAVE_RAISE = 0 || test $REPLACE_RAISE = 1])
  AM_COND_IF([GL_COND_OBJ_RAISE], [
    gl_PREREQ_RAISE
  ])
  gl_SIGNAL_MODULE_INDICATOR([raise])
  gl_FUNC_RAND
  gl_CONDITIONAL([GL_COND_OBJ_RAND], [test $REPLACE_RAND = 1])
  gl_STDLIB_MODULE_INDICATOR([rand])
  gl_FUNC_RANDOM
  gl_CONDITIONAL([GL_COND_OBJ_RANDOM],
                 [test $HAVE_RANDOM = 0 || test $REPLACE_RANDOM = 1 || test $REPLACE_INITSTATE = 1 || test $REPLACE_SETSTATE = 1])
  AM_COND_IF([GL_COND_OBJ_RANDOM], [
    gl_PREREQ_RANDOM
  ])
  gl_STDLIB_MODULE_INDICATOR([random])
  gl_FUNC_RANDOM_R
  gl_CONDITIONAL([GL_COND_OBJ_RANDOM_R],
                 [test $HAVE_RANDOM_R = 0 || test $REPLACE_RANDOM_R = 1])
  AM_COND_IF([GL_COND_OBJ_RANDOM_R], [
    gl_PREREQ_RANDOM_R
  ])
  gl_STDLIB_MODULE_INDICATOR([random_r])
  gl_FUNC_RAWMEMCHR
  gl_CONDITIONAL([GL_COND_OBJ_RAWMEMCHR], [test $HAVE_RAWMEMCHR = 0])
  AM_COND_IF([GL_COND_OBJ_RAWMEMCHR], [
    gl_PREREQ_RAWMEMCHR
  ])
  gl_STRING_MODULE_INDICATOR([rawmemchr])
  AC_REQUIRE([AC_C_INLINE])
  gl_FUNC_READ
  gl_CONDITIONAL([GL_COND_OBJ_READ], [test $REPLACE_READ = 1])
  AM_COND_IF([GL_COND_OBJ_READ], [
    gl_PREREQ_READ
  ])
  gl_UNISTD_MODULE_INDICATOR([read])
  gl_PREREQ_READ_FILE
  gl_FUNC_READDIR
  gl_CONDITIONAL([GL_COND_OBJ_READDIR],
                 [test $HAVE_READDIR = 0 || test $REPLACE_READDIR = 1])
  gl_DIRENT_MODULE_INDICATOR([readdir])
  gl_FUNC_READLINE
  gl_CONDITIONAL([GL_COND_OBJ_READLINE], [test "$gl_cv_lib_readline" = no])
  AM_COND_IF([GL_COND_OBJ_READLINE], [
    gl_PREREQ_READLINE
  ])
  gl_FUNC_READLINK
  gl_CONDITIONAL([GL_COND_OBJ_READLINK],
                 [test $HAVE_READLINK = 0 || test $REPLACE_READLINK = 1])
  AM_COND_IF([GL_COND_OBJ_READLINK], [
    gl_PREREQ_READLINK
  ])
  gl_UNISTD_MODULE_INDICATOR([readlink])
  gl_FUNC_READLINKAT
  gl_CONDITIONAL([GL_COND_OBJ_READLINKAT],
                 [test $HAVE_READLINKAT = 0 || test $REPLACE_READLINKAT = 1])
  gl_UNISTD_MODULE_INDICATOR([readlinkat])
  gl_READTOKENS
  gl_READUTMP
  gl_FUNC_REALLOC_POSIX
  gl_FUNC_REALLOC_0_NONNULL
  gl_CONDITIONAL([GL_COND_OBJ_REALLOC_POSIX],
                 [test $REPLACE_REALLOC_FOR_REALLOC_POSIX != 0])
  gl_STDLIB_MODULE_INDICATOR([realloc-posix])
  gl_FUNC_REALLOCARRAY
  gl_CONDITIONAL([GL_COND_OBJ_REALLOCARRAY],
                 [test $HAVE_REALLOCARRAY = 0 || test $REPLACE_REALLOCARRAY = 1])
  AM_COND_IF([GL_COND_OBJ_REALLOCARRAY], [
    gl_PREREQ_REALLOCARRAY
  ])
  gl_MODULE_INDICATOR([reallocarray])
  gl_STDLIB_MODULE_INDICATOR([reallocarray])
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_RECV], [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([recv])
  gl_MODULE_INDICATOR([recv])
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_RECVFROM], [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([recvfrom])
  gl_MODULE_INDICATOR([recvfrom])
  gl_REGEX
  gl_CONDITIONAL([GL_COND_OBJ_REGEX], [test $ac_use_included_regex = yes])
  AM_COND_IF([GL_COND_OBJ_REGEX], [
    gl_PREREQ_REGEX
  ])
  AC_REQUIRE([AC_C_RESTRICT])
  gl_RELOCATABLE_LIBRARY
  if test $RELOCATABLE = yes; then
    AC_LIBOBJ([relocatable])
  fi
  gl_RELOCATABLE_LIBRARY
  if test $RELOCATABLE = yes; then
    AC_LIBOBJ([relocatable])
  fi
  AC_REQUIRE([gl_RELOCATABLE_NOP])
  relocatable_pl=$ac_aux_dir/relocatable.pl.in
  AC_SUBST_FILE([relocatable_pl])
  gl_RELOCATABLE([$gl_source_base])
  gl_CONDITIONAL([GL_COND_OBJ_PROGRELOC], [test $RELOCATABLE = yes])
  AM_COND_IF([GL_COND_OBJ_PROGRELOC], [
    AC_LIBOBJ([relocatable])
  ])
  AC_REQUIRE([AC_C_RESTRICT])
  gl_FUNC_READLINK_SEPARATE
  gl_CANONICALIZE_LGPL_SEPARATE
  AC_REQUIRE([gl_FUNC_MALLOC_POSIX])
  gl_FUNC_REALLOC_POSIX
  gl_FUNC_FREE
  gl_FUNC_MEMPCPY
  gl_FUNC_RAWMEMCHR
  gl_MALLOCA
  gl_RELOCATABLE_LIBRARY
  gl_FUNC_SETENV_SEPARATE
  AC_REQUIRE([gl_RELOCATABLE_NOP])
  relocatable_sh=$ac_aux_dir/relocatable.sh.in
  AC_SUBST_FILE([relocatable_sh])
  gl_FUNC_REMAINDER
  gl_CONDITIONAL([GL_COND_OBJ_REMAINDER],
                 [test $HAVE_REMAINDER = 0 || test $REPLACE_REMAINDER = 1])
  gl_MATH_MODULE_INDICATOR([remainder])
  gl_FUNC_REMAINDER_IEEE
  gl_FUNC_REMAINDERF
  gl_CONDITIONAL([GL_COND_OBJ_REMAINDERF],
                 [test $HAVE_REMAINDERF = 0 || test $REPLACE_REMAINDERF = 1])
  gl_MATH_MODULE_INDICATOR([remainderf])
  gl_FUNC_REMAINDERF_IEEE
  gl_FUNC_REMAINDERL
  gl_CONDITIONAL([GL_COND_OBJ_REMAINDERL],
                 [test $HAVE_REMAINDERL = 0 || test $REPLACE_REMAINDERL = 1])
  gl_MATH_MODULE_INDICATOR([remainderl])
  gl_FUNC_REMAINDERL_IEEE
  gl_FUNC_REMOVE
  gl_CONDITIONAL([GL_COND_OBJ_REMOVE], [test $REPLACE_REMOVE = 1])
  gl_STDIO_MODULE_INDICATOR([remove])
  gl_FUNC_RENAME
  gl_CONDITIONAL([GL_COND_OBJ_RENAME], [test $REPLACE_RENAME = 1])
  gl_STDIO_MODULE_INDICATOR([rename])
  gl_FUNC_RENAMEAT
  gl_CONDITIONAL([GL_COND_OBJ_RENAMEAT],
                 [test $HAVE_RENAMEAT = 0 || test $REPLACE_RENAMEAT = 1])
  if test $HAVE_RENAMEAT = 0; then
    AC_LIBOBJ([at-func2])
  fi
  gl_STDIO_MODULE_INDICATOR([renameat])
  gl_FUNC_RENAMEAT
  if test $HAVE_RENAMEAT = 0; then
    AC_LIBOBJ([at-func2])
  fi
  gl_FUNC_REWINDDIR
  gl_CONDITIONAL([GL_COND_OBJ_REWINDDIR],
                 [test $HAVE_REWINDDIR = 0 || test $REPLACE_REWINDDIR = 1])
  gl_DIRENT_MODULE_INDICATOR([rewinddir])
  gl_FUNC_RINT
  gl_CONDITIONAL([GL_COND_OBJ_RINT], [test $HAVE_RINT = 0])
  gl_MATH_MODULE_INDICATOR([rint])
  gl_FUNC_RINTF
  gl_CONDITIONAL([GL_COND_OBJ_RINTF], [test $HAVE_RINTF = 0])
  gl_MATH_MODULE_INDICATOR([rintf])
  gl_FUNC_RINTL
  gl_CONDITIONAL([GL_COND_OBJ_RINTL],
                 [test $HAVE_RINTL = 0 || test $REPLACE_RINTL = 1])
  gl_MATH_MODULE_INDICATOR([rintl])
  gl_FUNC_RMDIR
  gl_CONDITIONAL([GL_COND_OBJ_RMDIR], [test $REPLACE_RMDIR = 1])
  gl_UNISTD_MODULE_INDICATOR([rmdir])
  gl_FUNC_RMDIR_NOTEMPTY
  gl_FUNC_ROUND
  gl_CONDITIONAL([GL_COND_OBJ_ROUND],
                 [test $HAVE_ROUND = 0 || test $REPLACE_ROUND = 1])
  gl_MATH_MODULE_INDICATOR([round])
  gl_FUNC_ROUND_IEEE
  gl_FUNC_ROUNDF
  gl_CONDITIONAL([GL_COND_OBJ_ROUNDF],
                 [test $HAVE_ROUNDF = 0 || test $REPLACE_ROUNDF = 1])
  gl_MATH_MODULE_INDICATOR([roundf])
  gl_FUNC_ROUNDF_IEEE
  gl_FUNC_ROUNDL
  gl_CONDITIONAL([GL_COND_OBJ_ROUNDL],
                 [test $HAVE_ROUNDL = 0 || test $REPLACE_ROUNDL = 1])
  gl_MATH_MODULE_INDICATOR([roundl])
  gl_FUNC_ROUNDL_IEEE
  gl_FUNC_RPMATCH
  gl_CONDITIONAL([GL_COND_OBJ_RPMATCH], [test $HAVE_RPMATCH = 0])
  AM_COND_IF([GL_COND_OBJ_RPMATCH], [
    gl_PREREQ_RPMATCH
  ])
  gl_STDLIB_MODULE_INDICATOR([rpmatch])
  gl_SAFE_ALLOC
  gl_PREREQ_SAFE_READ
  gl_PREREQ_SAFE_WRITE
  gl_SAME
  gl_SAVE_CWD
  gl_SAVEDIR
  gl_SAVEWD
  gl_FUNC_SCANDIR
  gl_CONDITIONAL([GL_COND_OBJ_SCANDIR], [test $HAVE_SCANDIR = 0])
  AM_COND_IF([GL_COND_OBJ_SCANDIR], [
    gl_PREREQ_SCANDIR
  ])
  gl_DIRENT_MODULE_INDICATOR([scandir])
  gl_SCHED_H
  gl_SCHED_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_FUNC_SCHED_YIELD
  gl_CONDITIONAL([GL_COND_OBJ_SCHED_YIELD],
                 [test $HAVE_SCHED_YIELD = 0 || test $REPLACE_SCHED_YIELD = 1])
  gl_SCHED_MODULE_INDICATOR([sched_yield])
  gl_SEARCH_H
  gl_SEARCH_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_FUNC_SECURE_GETENV
  gl_CONDITIONAL([GL_COND_OBJ_SECURE_GETENV], [test $HAVE_SECURE_GETENV = 0])
  AM_COND_IF([GL_COND_OBJ_SECURE_GETENV], [
    gl_PREREQ_SECURE_GETENV
  ])
  gl_STDLIB_MODULE_INDICATOR([secure_getenv])
  gl_FUNC_SELECT
  gl_CONDITIONAL([GL_COND_OBJ_SELECT], [test $REPLACE_SELECT = 1])
  gl_SYS_SELECT_MODULE_INDICATOR([select])
  gl_MODULE_INDICATOR([select])
  AC_CHECK_HEADERS([selinux/flask.h])
  gl_HEADERS_SELINUX_SELINUX_H
  gl_HEADERS_SELINUX_CONTEXT_H
  gl_HEADERS_SELINUX_LABEL_H
  gl_CONDITIONAL_HEADER([selinux/context.h])
  gl_CONDITIONAL_HEADER([selinux/label.h])
  AC_PROG_MKDIR_P
  gl_CONDITIONAL([GL_COND_OBJ_GETFILECON],
                 [test "$with_selinux" != no && test "$ac_cv_header_selinux_selinux_h" = yes])
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_SEND], [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([send])
  gl_MODULE_INDICATOR([send])
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_SENDTO], [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([sendto])
  gl_MODULE_INDICATOR([sendto])
  gl_SERVENT
  gl_FUNC_SETENV
  gl_CONDITIONAL([GL_COND_OBJ_SETENV],
                 [test $HAVE_SETENV = 0 || test $REPLACE_SETENV = 1])
  gl_STDLIB_MODULE_INDICATOR([setenv])
  gl_FUNC_SETHOSTNAME
  gl_CONDITIONAL([GL_COND_OBJ_SETHOSTNAME],
                 [test $HAVE_SETHOSTNAME = 0 || test $REPLACE_SETHOSTNAME = 1])
  gl_UNISTD_MODULE_INDICATOR([sethostname])
  gl_FUNC_SETLOCALE
  gl_CONDITIONAL([GL_COND_OBJ_SETLOCALE], [test $REPLACE_SETLOCALE = 1])
  AM_COND_IF([GL_COND_OBJ_SETLOCALE], [
    gl_PREREQ_SETLOCALE
  ])
  gl_LOCALE_MODULE_INDICATOR([setlocale])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_SETLOCALE_FIXES],
                 [case "$host_os" in mingw* | windows* | *-android*) true;; *) false;; esac])
  gl_FUNC_SETLOCALE_NULL
  gl_CONDITIONAL([GL_COND_OBJ_SETLOCALE_LOCK],
                 [test $SETLOCALE_NULL_ALL_MTSAFE = 0 || test $SETLOCALE_NULL_ONE_MTSAFE = 0])
  AM_COND_IF([GL_COND_OBJ_SETLOCALE_LOCK], [
    gl_PREREQ_SETLOCALE_LOCK
  ])
  gl_LOCALE_MODULE_INDICATOR([setlocale_null])
  gl_FUNC_SETPAYLOAD
  gl_CONDITIONAL([GL_COND_OBJ_SETPAYLOAD], [test $HAVE_SETPAYLOAD = 0])
  gl_MATH_MODULE_INDICATOR([setpayload])
  gl_FUNC_SETPAYLOADF
  gl_CONDITIONAL([GL_COND_OBJ_SETPAYLOADF], [test $HAVE_SETPAYLOADF = 0])
  gl_MATH_MODULE_INDICATOR([setpayloadf])
  gl_FUNC_SETPAYLOADL
  gl_CONDITIONAL([GL_COND_OBJ_SETPAYLOADL], [test $HAVE_SETPAYLOADL = 0])
  gl_MATH_MODULE_INDICATOR([setpayloadl])
  gl_FUNC_SETPAYLOADSIG
  gl_CONDITIONAL([GL_COND_OBJ_SETPAYLOADSIG], [test $HAVE_SETPAYLOADSIG = 0])
  gl_MATH_MODULE_INDICATOR([setpayloadsig])
  gl_FUNC_SETPAYLOADSIGF
  gl_CONDITIONAL([GL_COND_OBJ_SETPAYLOADSIGF], [test $HAVE_SETPAYLOADSIGF = 0])
  gl_MATH_MODULE_INDICATOR([setpayloadsigf])
  gl_FUNC_SETPAYLOADSIGL
  gl_CONDITIONAL([GL_COND_OBJ_SETPAYLOADSIGL], [test $HAVE_SETPAYLOADSIGL = 0])
  gl_MATH_MODULE_INDICATOR([setpayloadsigl])
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_SETSOCKOPT],
                 [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([setsockopt])
  gl_MODULE_INDICATOR([setsockopt])
  gl_SETTIME
  gl_SH_FILENAME
  AC_REQUIRE([AC_C_RESTRICT])
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_SHUTDOWN], [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([shutdown])
  gl_MODULE_INDICATOR([shutdown])
  gl_FUNC_SIG2STR
  gl_CONDITIONAL([GL_COND_OBJ_SIG2STR],
                 [test $HAVE_SIG2STR = 0 || test $HAVE_STR2SIG = 0])
  AM_COND_IF([GL_COND_OBJ_SIG2STR], [
    gl_PREREQ_SIG2STR
  ])
  gl_SIGNAL_MODULE_INDICATOR([sig2str])
  gl_FUNC_SIGABBREV_NP
  gl_CONDITIONAL([GL_COND_OBJ_SIGABBREV_NP], [test $HAVE_SIGABBREV_NP = 0])
  gl_STRING_MODULE_INDICATOR([sigabbrev_np])
  gl_SIGACTION
  gl_CONDITIONAL([GL_COND_OBJ_SIGACTION], [test $HAVE_SIGACTION = 0])
  AM_COND_IF([GL_COND_OBJ_SIGACTION], [
    gl_PREREQ_SIGACTION
  ])
  gl_SIGNAL_MODULE_INDICATOR([sigaction])
  gl_FUNC_SIGDESCR_NP
  gl_CONDITIONAL([GL_COND_OBJ_SIGDESCR_NP], [test $HAVE_SIGDESCR_NP = 0])
  gl_STRING_MODULE_INDICATOR([sigdescr_np])
  gl_SIGNAL_H
  gl_SIGNAL_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SIGNBIT
  gl_CONDITIONAL([GL_COND_OBJ_SIGNBIT3], [test $REPLACE_SIGNBIT = 1])
  gl_MATH_MODULE_INDICATOR([signbit])
  gl_SIGNAL_SIGPIPE
  dnl Define the C macro GNULIB_SIGPIPE to 1.
  gl_MODULE_INDICATOR([sigpipe])
  dnl Define the substituted variable GNULIB_SIGNAL_H_SIGPIPE to 1.
  gl_SIGNAL_H_REQUIRE_DEFAULTS
  gl_MODULE_INDICATOR_INIT_VARIABLE([GNULIB_SIGNAL_H_SIGPIPE], [1])
  dnl Define the substituted variable GNULIB_STDIO_H_SIGPIPE to 1.
  gl_STDIO_H_REQUIRE_DEFAULTS
  AC_REQUIRE([gl_ASM_SYMBOL_PREFIX])
  gl_MODULE_INDICATOR_INIT_VARIABLE([GNULIB_STDIO_H_SIGPIPE], [1])
  dnl Define the substituted variable GNULIB_UNISTD_H_SIGPIPE to 1.
  gl_UNISTD_H_REQUIRE_DEFAULTS
  gl_MODULE_INDICATOR_INIT_VARIABLE([GNULIB_UNISTD_H_SIGPIPE], [1])
  gl_SIGNALBLOCKING
  gl_CONDITIONAL([GL_COND_OBJ_SIGPROCMASK], [test $HAVE_POSIX_SIGNALBLOCKING = 0])
  AM_COND_IF([GL_COND_OBJ_SIGPROCMASK], [
    gl_PREREQ_SIGPROCMASK
  ])
  gl_SIGNAL_MODULE_INDICATOR([sigprocmask])
  AC_REQUIRE([gl_SIGSEGV])
  if test $gl_sigsegv_uses_libsigsegv = yes; then
    GL_GENERATE_SIGSEGV_H=false
  else
    GL_GENERATE_SIGSEGV_H=true
  fi
  gl_CONDITIONAL_HEADER([sigsegv.h])
  AC_PROG_MKDIR_P
  if $GL_GENERATE_SIGSEGV_H; then
    dnl Persuade glibc <sys/ucontext.h> to declare macros designating register
    dnl indices: REG_RSP on x86_64, REG_ESP on i386.
    dnl Persuade Solaris OpenIndiana <ucontext.h> to include <sys/regset.h>,
    dnl which declares macros designating register indices, such as ESP on i386.
    dnl Persuade Solaris OpenIndiana <unistd.h> to declare mincore().
    AC_REQUIRE([gl_USE_SYSTEM_EXTENSIONS])
    gl_MUSL_LIBC
    AC_REQUIRE([AC_CANONICAL_HOST])
    case "$host_os" in
      solaris2.11)
        AC_DEFINE([SOLARIS11], [1], [Define on Solaris 11 and its derivates.])
        ;;
    esac
    gl_FUNC_MMAP_ANON
    dnl Stack direction.
    SV_STACK_DIRECTION
    dnl Catching stack overflow requires an alternate signal stack.
    dnl The old "install a guard page" trick would be unreliable, because
    dnl we don't know where exactly to place the guard page.
    SV_SIGALTSTACK
    AC_CHECK_FUNCS_ONCE([getrlimit])
  fi
  AC_CHECK_HEADERS_ONCE([pthread.h])
  AC_REQUIRE([gl_ATOMIC_COMPARE_AND_SWAP])
  gl_FUNC_SIN
  gl_FUNC_SINF
  gl_CONDITIONAL([GL_COND_OBJ_SINF], [test $HAVE_SINF = 0])
  gl_MATH_MODULE_INDICATOR([sinf])
  gl_FUNC_SINH
  gl_FUNC_SINHF
  gl_CONDITIONAL([GL_COND_OBJ_SINHF], [test $HAVE_SINHF = 0])
  gl_MATH_MODULE_INDICATOR([sinhf])
  gl_FUNC_SINL
  gl_CONDITIONAL([GL_COND_OBJ_SINL], [test $HAVE_SINL = 0])
  AM_COND_IF([GL_COND_OBJ_SINL], [
    if test $HAVE_SAME_LONG_DOUBLE_AS_DOUBLE = 0; then
      AC_LIBOBJ([sincosl])
      AC_LIBOBJ([trigl])
    fi
  ])
  gl_MATH_MODULE_INDICATOR([sinl])
  gl_SIZE_MAX
  gl_FUNC_SLEEP
  gl_CONDITIONAL([GL_COND_OBJ_SLEEP],
                 [test $HAVE_SLEEP = 0 || test $REPLACE_SLEEP = 1])
  gl_UNISTD_MODULE_INDICATOR([sleep])
  gl_SNAN
  gl_NAN_MIPS
  AC_REQUIRE([gl_FEATURES_H])
  AC_PROG_MKDIR_P
  gl_FUNC_SNPRINTF
  gl_STDIO_MODULE_INDICATOR([snprintf])
  gl_MODULE_INDICATOR([snprintf])
  gl_FUNC_SNPRINTF_GNU
  gl_FUNC_SNPRINTF_POSIX
  gl_STDIO_MODULE_INDICATOR([snzprintf])
  gl_PREREQ_VASNPRINTF_WITH_GNU_EXTRAS
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_SOCKET], [test "$ac_cv_header_winsock2_h" = yes])
  # When this module is used, sockets may actually occur as file descriptors,
  # hence it is worth warning if the modules 'close' and 'ioctl' are not used.
  m4_ifdef([gl_UNISTD_H_DEFAULTS], [gl_UNISTD_H_REQUIRE_DEFAULTS])
  m4_ifdef([gl_SYS_IOCTL_H_DEFAULTS], [gl_SYS_IOCTL_H_REQUIRE_DEFAULTS])
  AC_REQUIRE([gl_PREREQ_SYS_H_WINSOCK2])
  if test "$ac_cv_header_winsock2_h" = yes; then
    UNISTD_H_HAVE_WINSOCK2_H_AND_USE_SOCKETS=1
    SYS_IOCTL_H_HAVE_WINSOCK2_H_AND_USE_SOCKETS=1
  fi
  gl_SYS_SOCKET_MODULE_INDICATOR([socket])
  gl_MODULE_INDICATOR([socket])
  AC_REQUIRE([gl_SOCKETLIB])
  AC_REQUIRE([gl_SOCKETS])
  gl_TYPE_SOCKLEN_T
  gl_SPAWN_H
  gl_SPAWN_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SPAWN_PIPE
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_OS2_SPAWN],
                 [case "$host_os" in os2*) true;; *) false;; esac])
  AC_REQUIRE([gl_ATOMIC_COMPARE_AND_SWAP])
  gl_CONDITIONAL([GL_COND_OBJ_SPIN],
                 [case "$host_os" in mingw* | windows*) false;; *) true;; esac])
  gl_FUNC_SPRINTF_GNU
  gl_FUNC_SPRINTF_POSIX
  gl_STDIO_MODULE_INDICATOR([sprintf-posix])
  gl_FUNC_SQRT
  gl_FUNC_SQRTF
  gl_CONDITIONAL([GL_COND_OBJ_SQRTF], [test $HAVE_SQRTF = 0])
  gl_MATH_MODULE_INDICATOR([sqrtf])
  gl_FUNC_SQRTL
  gl_CONDITIONAL([GL_COND_OBJ_SQRTL],
                 [test $HAVE_SQRTL = 0 || test $REPLACE_SQRTL = 1])
  gl_MATH_MODULE_INDICATOR([sqrtl])
  gt_TYPE_SSIZE_T
  gl_STACK_TRACE
  gl_CONDITIONAL([GL_COND_OBJ_STACK_TRACE], [test $CAN_PRINT_STACK_TRACE = 1])
  gl_STDLIB_MODULE_INDICATOR([stack-trace])
  gl_MODULE_INDICATOR([stack-trace])
  gl_FUNC_STAT
  gl_CONDITIONAL([GL_COND_OBJ_STAT], [test $REPLACE_STAT = 1])
  AM_COND_IF([GL_COND_OBJ_STAT], [
    case "$host_os" in
      mingw* | windows*)
        AC_LIBOBJ([stat-w32])
        ;;
    esac
    gl_PREREQ_STAT
  ])
  gl_SYS_STAT_MODULE_INDICATOR([stat])
  gl_MODULE_INDICATOR([stat])
  gl_STAT_SIZE
  gl_STAT_TIME
  gl_STAT_BIRTHTIME
  gl_MODULE_INDICATOR([statat]) dnl for lib/openat.h
  gl_STDALIGN_H
  gl_CONDITIONAL_HEADER([stdalign.h])
  AC_PROG_MKDIR_P
  gl_STDARG_H
  gl_CONDITIONAL_HEADER([stdarg.h])
  AC_PROG_MKDIR_P
  gl_STDBIT_H
  gl_CONDITIONAL_HEADER([stdbit.h])
  AC_PROG_MKDIR_P
  gl_STDBOOL_H
  gl_CONDITIONAL_HEADER([stdbool.h])
  AC_PROG_MKDIR_P
  AC_REQUIRE([gl_STDBIT_H])
  GL_STDC_BIT_CEIL=1
  AC_REQUIRE([gl_STDBIT_H])
  GL_STDC_BIT_FLOOR=1
  AC_REQUIRE([gl_STDBIT_H])
  GL_STDC_BIT_WIDTH=1
  AC_REQUIRE([gl_STDBIT_H])
  GL_STDC_COUNT_ONES=1
  AC_REQUIRE([gl_STDBIT_H])
  GL_STDC_COUNT_ZEROS=1
  AC_REQUIRE([gl_STDBIT_H])
  GL_STDC_FIRST_LEADING_ONE=1
  AC_REQUIRE([gl_STDBIT_H])
  GL_STDC_FIRST_LEADING_ZERO=1
  AC_REQUIRE([gl_STDBIT_H])
  GL_STDC_FIRST_TRAILING_ONE=1
  AC_REQUIRE([gl_STDBIT_H])
  GL_STDC_FIRST_TRAILING_ZERO=1
  AC_REQUIRE([gl_STDBIT_H])
  GL_STDC_HAS_SINGLE_BIT=1
  AC_REQUIRE([gl_STDBIT_H])
  GL_STDC_LEADING_ONES=1
  AC_REQUIRE([gl_STDBIT_H])
  GL_STDC_LEADING_ZEROS=1
  AC_REQUIRE([gl_STDBIT_H])
  GL_STDC_TRAILING_ONES=1
  AC_REQUIRE([gl_STDBIT_H])
  GL_STDC_TRAILING_ZEROS=1
  gl_STDCKDINT_H
  gl_CONDITIONAL_HEADER([stdckdint.h])
  AC_PROG_MKDIR_P
  gl_STDCOUNTOF_H
  gl_CONDITIONAL_HEADER([stdcountof.h])
  AC_PROG_MKDIR_P
  gl_STDDEF_H
  gl_STDDEF_H_REQUIRE_DEFAULTS
  gl_CONDITIONAL_HEADER([stddef.h])
  AC_PROG_MKDIR_P
  gl_STDINT_H
  gl_CONDITIONAL_HEADER([stdint.h])
  dnl Because of gl_REPLACE_LIMITS_H:
  gl_CONDITIONAL_HEADER([limits.h])
  AC_PROG_MKDIR_P
  gl_STDIO_H
  gl_STDIO_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_CONDITIONAL([GL_COND_OBJ_STDIO_READ], [test $REPLACE_STDIO_READ_FUNCS = 1])
  gl_CONDITIONAL([GL_COND_OBJ_STDIO_WRITE], [test $REPLACE_STDIO_WRITE_FUNCS = 1])
  dnl No need to create extra modules for these functions. Everyone who uses
  dnl <stdio.h> likely needs them.
  gl_STDIO_MODULE_INDICATOR([fscanf])
  gl_MODULE_INDICATOR([fscanf])
  gl_STDIO_MODULE_INDICATOR([scanf])
  gl_MODULE_INDICATOR([scanf])
  gl_STDIO_MODULE_INDICATOR([fgetc])
  gl_STDIO_MODULE_INDICATOR([getc])
  gl_STDIO_MODULE_INDICATOR([getchar])
  gl_STDIO_MODULE_INDICATOR([fgets])
  gl_STDIO_MODULE_INDICATOR([fread])
  dnl No need to create extra modules for these functions. Everyone who uses
  dnl <stdio.h> likely needs them.
  gl_STDIO_MODULE_INDICATOR([fprintf])
  gl_STDIO_MODULE_INDICATOR([printf])
  gl_STDIO_MODULE_INDICATOR([vfprintf])
  gl_STDIO_MODULE_INDICATOR([vprintf])
  gl_STDIO_MODULE_INDICATOR([fputc])
  gl_STDIO_MODULE_INDICATOR([putc])
  gl_STDIO_MODULE_INDICATOR([putchar])
  gl_STDIO_MODULE_INDICATOR([fputs])
  gl_STDIO_MODULE_INDICATOR([puts])
  gl_STDIO_MODULE_INDICATOR([fwrite])
  gl_STDLIB_H
  gl_STDLIB_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_STDNORETURN_H
  gl_CONDITIONAL_HEADER([stdnoreturn.h])
  AC_PROG_MKDIR_P
  gl_FUNC_STPCPY
  gl_CONDITIONAL([GL_COND_OBJ_STPCPY],
                 [test $HAVE_STPCPY = 0 || test $REPLACE_STPCPY = 1])
  AM_COND_IF([GL_COND_OBJ_STPCPY], [
    gl_PREREQ_STPCPY
  ])
  gl_STRING_MODULE_INDICATOR([stpcpy])
  gl_FUNC_STPNCPY
  gl_CONDITIONAL([GL_COND_OBJ_STPNCPY],
                 [test $HAVE_STPNCPY = 0 || test $REPLACE_STPNCPY = 1])
  AM_COND_IF([GL_COND_OBJ_STPNCPY], [
    gl_PREREQ_STPNCPY
  ])
  gl_STRING_MODULE_INDICATOR([stpncpy])
  gl_STRING_MODULE_INDICATOR([str_endswith])
  gl_STRING_MODULE_INDICATOR([str_startswith])
  gl_FUNC_STRCASECMP
  gl_CONDITIONAL([GL_COND_OBJ_STRCASECMP],
                 [test $HAVE_STRCASECMP = 0 || test $REPLACE_STRCASECMP = 1])
  AM_COND_IF([GL_COND_OBJ_STRCASECMP], [
    gl_PREREQ_STRCASECMP
  ])
  gl_STRINGS_MODULE_INDICATOR([strcasecmp])
  gl_FUNC_STRCASECMP_L
  gl_CONDITIONAL([GL_COND_OBJ_STRCASECMP_L],
                 [test $HAVE_STRCASECMP_L = 0 || test $REPLACE_STRCASECMP_L = 1])
  AM_COND_IF([GL_COND_OBJ_STRCASECMP_L], [
    gl_PREREQ_STRCASECMP_L
  ])
  gl_MODULE_INDICATOR([strcasecmp_l])
  gl_STRINGS_MODULE_INDICATOR([strcasecmp_l])
  gl_FUNC_STRCASESTR
  if test $HAVE_STRCASESTR = 0 || test $REPLACE_STRCASESTR = 1; then
    AC_LIBOBJ([strcasestr])
    gl_PREREQ_STRCASESTR
  fi
  gl_FUNC_STRCASESTR_SIMPLE
  if test $HAVE_STRCASESTR = 0 || test $REPLACE_STRCASESTR = 1; then
    AC_LIBOBJ([strcasestr])
    gl_PREREQ_STRCASESTR
  fi
  gl_STRING_MODULE_INDICATOR([strcasestr])
  gl_FUNC_STRCHRNUL
  gl_CONDITIONAL([GL_COND_OBJ_STRCHRNUL],
                 [test $HAVE_STRCHRNUL = 0 || test $REPLACE_STRCHRNUL = 1])
  AM_COND_IF([GL_COND_OBJ_STRCHRNUL], [
    gl_PREREQ_STRCHRNUL
  ])
  gl_STRING_MODULE_INDICATOR([strchrnul])
  gl_FUNC_STRCSPN
  gl_CONDITIONAL([GL_COND_OBJ_STRCSPN], [test $ac_cv_func_strcspn = no])
  AM_COND_IF([GL_COND_OBJ_STRCSPN], [
    gl_PREREQ_STRCSPN
  ])
  gl_FUNC_STRDUP
  gl_STRING_MODULE_INDICATOR([strdup])
  gl_FUNC_STRDUP_POSIX
  gl_CONDITIONAL([GL_COND_OBJ_STRDUP], [test $REPLACE_STRDUP = 1])
  AM_COND_IF([GL_COND_OBJ_STRDUP], [
    gl_PREREQ_STRDUP
  ])
  gl_STRING_MODULE_INDICATOR([strdup])
  gl_FUNC_STRERROR
  gl_CONDITIONAL([GL_COND_OBJ_STRERROR], [test $REPLACE_STRERROR = 1])
  gl_MODULE_INDICATOR([strerror])
  gl_STRING_MODULE_INDICATOR([strerror])
  AC_REQUIRE([gl_HEADER_ERRNO_H])
  AC_REQUIRE([gl_FUNC_STRERROR_0])
  gl_CONDITIONAL([GL_COND_OBJ_STRERROR_OVERRIDE],
                 [test -n "$ERRNO_H" || test $REPLACE_STRERROR_0 = 1])
  AM_COND_IF([GL_COND_OBJ_STRERROR_OVERRIDE], [
    gl_PREREQ_SYS_H_WINSOCK2
  ])
  gl_FUNC_STRERROR_L
  gl_CONDITIONAL([GL_COND_OBJ_STRERROR_L],
                 [test $HAVE_STRERROR_L = 0 || test $REPLACE_STRERROR_L = 1])
  AM_COND_IF([GL_COND_OBJ_STRERROR_L], [
    gl_PREREQ_STRERROR_L
  ])
  gl_MODULE_INDICATOR([strerror_l])
  gl_STRING_MODULE_INDICATOR([strerror_l])
  gl_FUNC_STRERROR_R
  AS_IF([test $HAVE_DECL_STRERROR_R = 0 || test $REPLACE_STRERROR_R = 1], [
    AC_LIBOBJ([strerror_r])
    gl_PREREQ_STRERROR_R
  ])
  gl_STRING_MODULE_INDICATOR([strerror_r])
  dnl For the modules argp, error, xstrerror.
  gl_MODULE_INDICATOR([strerror_r-posix])
  gl_FUNC_STRERRORNAME_NP
  gl_CONDITIONAL([GL_COND_OBJ_STRERRORNAME_NP],
                 [test $HAVE_STRERRORNAME_NP = 0 || test $REPLACE_STRERRORNAME_NP = 1])
  gl_STRING_MODULE_INDICATOR([strerrorname_np])
  gl_FUNC_STRFMON_L
  gl_CONDITIONAL([GL_COND_OBJ_STRFMON_L], [test $REPLACE_STRFMON_L = 1])
  AM_COND_IF([GL_COND_OBJ_STRFMON_L], [
    gl_PREREQ_STRFMON_L
  ])
  gl_MONETARY_MODULE_INDICATOR([strfmon_l])
  gl_FUNC_STRFTIME
  gl_CONDITIONAL([GL_COND_OBJ_STRFTIME_FIXES], [test $REPLACE_STRFTIME = 1])
  gl_TIME_MODULE_INDICATOR([strftime])
  if test $gl_cond_libtool = false; then
    gl_ltlibdeps="$gl_ltlibdeps $LTLIBICONV"
    gl_libdeps="$gl_libdeps $LIBICONV"
  fi
  if test $gl_cond_libtool = false; then
    gl_ltlibdeps="$gl_ltlibdeps $LTLIBICONV"
    gl_libdeps="$gl_libdeps $LIBICONV"
  fi
  gl_STRING_H
  gl_STRING_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_STRINGS_H
  gl_STRINGS_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_FUNC_STRNCASECMP
  gl_CONDITIONAL([GL_COND_OBJ_STRNCASECMP],
                 [test $HAVE_STRNCASECMP = 0 || test $REPLACE_STRNCASECMP = 1])
  AM_COND_IF([GL_COND_OBJ_STRNCASECMP], [
    gl_PREREQ_STRNCASECMP
  ])
  gl_STRINGS_MODULE_INDICATOR([strncasecmp])
  gl_FUNC_STRNCASECMP_L
  gl_CONDITIONAL([GL_COND_OBJ_STRNCASECMP_L],
                 [test $HAVE_STRNCASECMP_L = 0 || test $REPLACE_STRNCASECMP_L = 1])
  AM_COND_IF([GL_COND_OBJ_STRNCASECMP_L], [
    gl_PREREQ_STRNCASECMP_L
  ])
  gl_MODULE_INDICATOR([strncasecmp_l])
  gl_STRINGS_MODULE_INDICATOR([strncasecmp_l])
  gl_FUNC_STRNCAT
  gl_CONDITIONAL([GL_COND_OBJ_STRNCAT], [test $REPLACE_STRNCAT = 1])
  AM_COND_IF([GL_COND_OBJ_STRNCAT], [
    gl_PREREQ_STRNCAT
  ])
  gl_STRING_MODULE_INDICATOR([strncat])
  gl_FUNC_STRNDUP
  gl_CONDITIONAL([GL_COND_OBJ_STRNDUP],
                 [test $HAVE_STRNDUP = 0 || test $REPLACE_STRNDUP = 1])
  gl_STRING_MODULE_INDICATOR([strndup])
  gl_FUNC_STRNLEN
  gl_CONDITIONAL([GL_COND_OBJ_STRNLEN],
                 [test $HAVE_DECL_STRNLEN = 0 || test $REPLACE_STRNLEN = 1])
  AM_COND_IF([GL_COND_OBJ_STRNLEN], [
    gl_PREREQ_STRNLEN
  ])
  gl_STRING_MODULE_INDICATOR([strnlen])
  gl_FUNC_STRPBRK
  gl_CONDITIONAL([GL_COND_OBJ_STRPBRK], [test $HAVE_STRPBRK = 0])
  AM_COND_IF([GL_COND_OBJ_STRPBRK], [
    gl_PREREQ_STRPBRK
  ])
  gl_STRING_MODULE_INDICATOR([strpbrk])
  gl_FUNC_STRPTIME
  gl_CONDITIONAL([GL_COND_OBJ_STRPTIME], [test $HAVE_STRPTIME = 0])
  AM_COND_IF([GL_COND_OBJ_STRPTIME], [
    gl_PREREQ_STRPTIME
  ])
  gl_TIME_MODULE_INDICATOR([strptime])
  gl_FUNC_STRSEP
  gl_CONDITIONAL([GL_COND_OBJ_STRSEP], [test $HAVE_STRSEP = 0])
  AM_COND_IF([GL_COND_OBJ_STRSEP], [
    gl_PREREQ_STRSEP
  ])
  gl_STRING_MODULE_INDICATOR([strsep])
  gl_FUNC_STRSIGNAL
  gl_CONDITIONAL([GL_COND_OBJ_STRSIGNAL],
                 [test $HAVE_STRSIGNAL = 0 || test $REPLACE_STRSIGNAL = 1])
  AM_COND_IF([GL_COND_OBJ_STRSIGNAL], [
    gl_PREREQ_STRSIGNAL
  ])
  gl_STRING_MODULE_INDICATOR([strsignal])
  gl_FUNC_STRSTR
  if test $REPLACE_STRSTR = 1; then
    AC_LIBOBJ([strstr])
  fi
  gl_FUNC_STRSTR_SIMPLE
  if test $REPLACE_STRSTR = 1; then
    AC_LIBOBJ([strstr])
  fi
  gl_STRING_MODULE_INDICATOR([strstr])
  gl_FUNC_STRTOD
  gl_CONDITIONAL([GL_COND_OBJ_STRTOD],
                 [test $HAVE_STRTOD = 0 || test $REPLACE_STRTOD = 1])
  AM_COND_IF([GL_COND_OBJ_STRTOD], [
    gl_PREREQ_STRTOD
  ])
  gl_STDLIB_MODULE_INDICATOR([strtod])
  gl_FUNC_STRTOD_OBSOLETE
  gl_FUNC_STRTOF
  gl_CONDITIONAL([GL_COND_OBJ_STRTOF],
                 [test $HAVE_STRTOF = 0 || test $REPLACE_STRTOF = 1])
  AM_COND_IF([GL_COND_OBJ_STRTOF], [
    gl_PREREQ_STRTOF
  ])
  gl_STDLIB_MODULE_INDICATOR([strtof])
  gl_FUNC_STRTOIMAX
  gl_CONDITIONAL([GL_COND_OBJ_STRTOIMAX],
                 [test $HAVE_DECL_STRTOIMAX = 0 || test $REPLACE_STRTOIMAX = 1])
  AM_COND_IF([GL_COND_OBJ_STRTOIMAX], [
    gl_PREREQ_STRTOIMAX
  ])
  gl_INTTYPES_MODULE_INDICATOR([strtoimax])
  gl_FUNC_STRTOK_R
  gl_CONDITIONAL([GL_COND_OBJ_STRTOK_R],
                 [test $HAVE_STRTOK_R = 0 || test $REPLACE_STRTOK_R = 1])
  AM_COND_IF([GL_COND_OBJ_STRTOK_R], [
    gl_PREREQ_STRTOK_R
  ])
  gl_STRING_MODULE_INDICATOR([strtok_r])
  gl_FUNC_STRTOL
  gl_CONDITIONAL([GL_COND_OBJ_STRTOL],
                 [test $HAVE_STRTOL = 0 || test $REPLACE_STRTOL = 1])
  gl_STDLIB_MODULE_INDICATOR([strtol])
  gl_FUNC_STRTOLD
  gl_CONDITIONAL([GL_COND_OBJ_STRTOLD],
                 [test $HAVE_STRTOLD = 0 || test $REPLACE_STRTOLD = 1])
  AM_COND_IF([GL_COND_OBJ_STRTOLD], [
    gl_PREREQ_STRTOLD
  ])
  gl_STDLIB_MODULE_INDICATOR([strtold])
  gl_FUNC_STRTOLL
  gl_CONDITIONAL([GL_COND_OBJ_STRTOLL],
                 [test $HAVE_STRTOLL = 0 || test $REPLACE_STRTOLL = 1])
  AM_COND_IF([GL_COND_OBJ_STRTOLL], [
    gl_PREREQ_STRTOLL
  ])
  gl_STDLIB_MODULE_INDICATOR([strtoll])
  gl_FUNC_STRTOUL
  gl_CONDITIONAL([GL_COND_OBJ_STRTOUL],
                 [test $HAVE_STRTOUL = 0 || test $REPLACE_STRTOUL = 1])
  gl_STDLIB_MODULE_INDICATOR([strtoul])
  gl_FUNC_STRTOULL
  gl_CONDITIONAL([GL_COND_OBJ_STRTOULL],
                 [test $HAVE_STRTOULL = 0 || test $REPLACE_STRTOULL = 1])
  AM_COND_IF([GL_COND_OBJ_STRTOULL], [
    gl_PREREQ_STRTOULL
  ])
  gl_STDLIB_MODULE_INDICATOR([strtoull])
  gl_FUNC_STRTOUMAX
  gl_CONDITIONAL([GL_COND_OBJ_STRTOUMAX],
                 [test $HAVE_DECL_STRTOUMAX = 0 || test $REPLACE_STRTOUMAX = 1])
  AM_COND_IF([GL_COND_OBJ_STRTOUMAX], [
    gl_PREREQ_STRTOUMAX
  ])
  gl_INTTYPES_MODULE_INDICATOR([strtoumax])
  gl_FUNC_STRVERSCMP
  gl_CONDITIONAL([GL_COND_OBJ_STRVERSCMP],
                 [test $HAVE_STRVERSCMP = 0 || test $REPLACE_STRVERSCMP = 1])
  AM_COND_IF([GL_COND_OBJ_STRVERSCMP], [
    gl_PREREQ_STRVERSCMP
  ])
  gl_STRING_MODULE_INDICATOR([strverscmp])
  gl_SUPERSEDE
  gl_FUNC_SYMLINK
  gl_CONDITIONAL([GL_COND_OBJ_SYMLINK],
                 [test $HAVE_SYMLINK = 0 || test $REPLACE_SYMLINK = 1])
  gl_UNISTD_MODULE_INDICATOR([symlink])
  gl_FUNC_SYMLINKAT
  gl_CONDITIONAL([GL_COND_OBJ_SYMLINKAT],
                 [test $HAVE_SYMLINKAT = 0 || test $REPLACE_SYMLINKAT = 1])
  gl_UNISTD_MODULE_INDICATOR([symlinkat])
  gl_SYS_FILE_H
  gl_SYS_FILE_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_IOCTL_H
  gl_SYS_IOCTL_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_MSG_H
  gl_CONDITIONAL_HEADER([sys/msg.h])
  AC_PROG_MKDIR_P
  gl_SYS_RANDOM_H
  gl_SYS_RANDOM_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_RESOURCE_H
  gl_SYS_RESOURCE_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_SELECT_H
  gl_SYS_SELECT_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_SEM_H
  gl_CONDITIONAL_HEADER([sys/sem.h])
  AC_PROG_MKDIR_P
  gl_SYS_SHM_H
  gl_CONDITIONAL_HEADER([sys/shm.h])
  AC_PROG_MKDIR_P
  gl_SYS_SOCKET_H
  gl_SYS_SOCKET_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_STAT_H
  gl_SYS_STAT_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_TIME_H
  gl_SYS_TIME_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_TIMES_H
  gl_SYS_TIMES_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_TYPES_H
  gl_SYS_TYPES_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_UIO_H
  gl_SYS_UIO_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_UN_H
  gl_CONDITIONAL_HEADER([sys/un.h])
  AC_PROG_MKDIR_P
  gl_SYS_UTSNAME_H
  gl_SYS_UTSNAME_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_WAIT_H
  gl_SYS_WAIT_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYSEXITS
  gl_CONDITIONAL_HEADER([sysexits.h])
  AC_PROG_MKDIR_P
  gl_STDLIB_MODULE_INDICATOR([system-posix])
  AC_REQUIRE([AC_C_RESTRICT])
  gl_STDIO_MODULE_INDICATOR([szprintf])
  gl_PREREQ_VASNPRINTF_WITH_GNU_EXTRAS
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_FUNC_TAN
  gl_FUNC_TANF
  gl_CONDITIONAL([GL_COND_OBJ_TANF], [test $HAVE_TANF = 0])
  gl_MATH_MODULE_INDICATOR([tanf])
  gl_FUNC_TANH
  gl_FUNC_TANHF
  gl_CONDITIONAL([GL_COND_OBJ_TANHF], [test $HAVE_TANHF = 0])
  gl_MATH_MODULE_INDICATOR([tanhf])
  gl_FUNC_TANL
  gl_CONDITIONAL([GL_COND_OBJ_TANL], [test $HAVE_TANL = 0])
  AM_COND_IF([GL_COND_OBJ_TANL], [
    if test $HAVE_SAME_LONG_DOUBLE_AS_DOUBLE = 0; then
      AC_LIBOBJ([trigl])
    fi
  ])
  gl_MATH_MODULE_INDICATOR([tanl])
  gl_FUNC_TCGETSID
  gl_CONDITIONAL([GL_COND_OBJ_TCGETSID], [test $HAVE_TCGETSID = 0])
  AM_COND_IF([GL_COND_OBJ_TCGETSID], [
    gl_PREREQ_TCGETSID
  ])
  gl_TERMIOS_MODULE_INDICATOR([tcgetsid])
  gl_FUNC_GEN_TEMPNAME
  gl_MODULE_INDICATOR([tempname])
  AC_REQUIRE([AC_C_INLINE])
  gl_HAVE_TCGETATTR
  gl_TERMCAP
  gl_TERMINFO
  gl_TERMIOS_H
  gl_TERMIOS_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_MUSL_LIBC
  gl_CONDITIONAL([LIBC_IS_GNU],
                 [case "$host_os" in *-gnu* | gnu*) true ;; *) false ;; esac])
  gl_CONDITIONAL([LIBC_IS_MUSL],
                 [case "$host_os" in *-musl* | midipix*) true ;; *) false ;; esac])
  gl_CONDITIONAL([OS_IS_MACOS],
                 [case "$host_os" in darwin*) true ;; *) false ;; esac])
  gl_CONDITIONAL([OS_IS_MACOS11],
                 [case "$host_os" in darwin20.*) true ;; *) false ;; esac])
  gl_CONDITIONAL([OS_IS_MACOS12],
                 [case "$host_os" in darwin21.*) true ;; *) false ;; esac])
  gl_CONDITIONAL([OS_IS_MACOS13],
                 [case "$host_os" in darwin22.*) true ;; *) false ;; esac])
  gl_CONDITIONAL([OS_IS_MACOS14],
                 [case "$host_os" in darwin23.*) true ;; *) false ;; esac])
  gl_CONDITIONAL([OS_IS_FREEBSD],
                 [case "$host_os" in freebsd* | dragonfly*) true ;; *) false ;; esac])
  gl_CONDITIONAL([OS_IS_NETBSD],
                 [case "$host_os" in netbsd*) true ;; *) false ;; esac])
  gl_CONDITIONAL([OS_IS_OPENBSD],
                 [case "$host_os" in openbsd*) true ;; *) false ;; esac])
  gl_CONDITIONAL([OS_IS_AIX],
                 [case "$host_os" in aix*) true ;; *) false ;; esac])
  gl_CONDITIONAL([OS_IS_SOLARIS11],
                 [case "$host_os" in solaris2.11*) true ;; *) false ;; esac])
  gl_CONDITIONAL([OS_IS_CYGWIN],
                 [case "$host_os" in cygwin*) true ;; *) false ;; esac])
  gl_CONDITIONAL([OS_IS_NATIVE_WINDOWS],
                 [case "$host_os" in mingw* | windows*) true ;; *) false ;; esac])
  is_mingw=false; is_msvc=false
  case "$host_os" in
    windows*-msvc*) is_msvc=true ;;
    mingw* | windows*)
      AC_EGREP_CPP([Special], [
  #ifdef _MSC_VER
   Special
  #endif
  ], [is_msvc=true], [is_mingw=true])
      ;;
  esac
  gl_CONDITIONAL([PLATFORM_IS_MINGW], [$is_mingw])
  gl_CONDITIONAL([PLATFORM_IS_MSVC], [$is_msvc])
  gl_CONDITIONAL([OS_IS_HAIKU],
                 [case "$host_os" in haiku*) true ;; *) false ;; esac])
  gl_CONDITIONAL([OS_IS_ANDROID],
                 [case "$host_os" in linux-androideabi*) true ;; *) false ;; esac])
  AC_REQUIRE([gl_THREADS_H])
  gl_FUNC_THRD_CREATE
  gl_FUNC_THRD_JOIN
  gl_CONDITIONAL([GL_COND_OBJ_THRD],
                 [test $HAVE_THREADS_H = 0 || test $REPLACE_THRD_CREATE = 1 || test $REPLACE_THRD_JOIN = 1])
  gl_THREADS_MODULE_INDICATOR([thrd])
  gl_THREAD
  AC_CHECK_HEADERS([sys/single_threaded.h])
  AC_REQUIRE([gl_THREADLIB])
  gl_THREADS_H
  gl_THREADS_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_FUNC_TIME
  gl_CONDITIONAL([GL_COND_OBJ_TIME], [test $REPLACE_TIME = 1])
  AM_COND_IF([GL_COND_OBJ_TIME], [
    gl_PREREQ_TIME
  ])
  gl_TIME_MODULE_INDICATOR([time])
  gl_TIME_H
  gl_TIME_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_TIME_R
  gl_CONDITIONAL([GL_COND_OBJ_TIME_R],
                 [test $HAVE_LOCALTIME_R = 0 || test $REPLACE_LOCALTIME_R = 1])
  AM_COND_IF([GL_COND_OBJ_TIME_R], [
    gl_PREREQ_TIME_R
  ])
  gl_TIME_MODULE_INDICATOR([time_r])
  gl_TIME_RZ
  gl_CONDITIONAL([GL_COND_OBJ_TIME_RZ],
                 [test $HAVE_TZALLOC = 0 || test $REPLACE_LOCALTIME_RZ = 1 || test $REPLACE_MKTIME_Z = 1])
  gl_TIME_MODULE_INDICATOR([time_rz])
  gl_FUNC_TIMEGM
  gl_CONDITIONAL([GL_COND_OBJ_TIMEGM],
                 [test $HAVE_TIMEGM = 0 || test $REPLACE_TIMEGM = 1])
  AM_COND_IF([GL_COND_OBJ_TIMEGM], [
    gl_PREREQ_TIMEGM
  ])
  gl_TIME_MODULE_INDICATOR([timegm])
  gl_TIMER_TIME
  gl_FUNC_TIMES
  gl_CONDITIONAL([GL_COND_OBJ_TIMES], [test $HAVE_TIMES = 0])
  gl_SYS_TIMES_MODULE_INDICATOR([times])
  gl_TIMESPEC
  gl_FUNC_TIMESPEC_GET
  gl_CONDITIONAL([GL_COND_OBJ_TIMESPEC_GET],
                 [test $HAVE_TIMESPEC_GET = 0 || test $REPLACE_TIMESPEC_GET = 1])
  gl_TIME_MODULE_INDICATOR([timespec_get])
  AC_REQUIRE([gl_FUNC_TIMESPEC_GETRES])
  gl_CONDITIONAL([GL_COND_OBJ_TIMESPEC_GETRES],
                 [test $HAVE_TIMESPEC_GETRES = 0 || test $REPLACE_TIMESPEC_GETRES = 1])
  gl_TIME_MODULE_INDICATOR([timespec_getres])
  gl_TLS
  gt_TMPDIR
  gl_FUNC_TMPFILE
  gl_CONDITIONAL([GL_COND_OBJ_TMPFILE], [test $REPLACE_TMPFILE = 1])
  AM_COND_IF([GL_COND_OBJ_TMPFILE], [
    gl_PREREQ_TMPFILE
  ])
  gl_STDIO_MODULE_INDICATOR([tmpfile])
  gl_MODULE_INDICATOR([tmpfile-safer])
  gl_FUNC_TOLOWER_L
  gl_CONDITIONAL([GL_COND_OBJ_TOLOWER_L], [test $HAVE_TOLOWER_L = 0])
  gl_MODULE_INDICATOR([tolower_l])
  gl_CTYPE_MODULE_INDICATOR([tolower_l])
  gl_FUNC_TOTALORDER
  gl_CONDITIONAL([GL_COND_OBJ_TOTALORDER],
                 [test $HAVE_TOTALORDER = 0 || test $REPLACE_TOTALORDER = 1])
  gl_MATH_MODULE_INDICATOR([totalorder])
  gl_FUNC_TOTALORDERF
  gl_CONDITIONAL([GL_COND_OBJ_TOTALORDERF],
                 [test $HAVE_TOTALORDERF = 0 || test $REPLACE_TOTALORDERF = 1])
  gl_MATH_MODULE_INDICATOR([totalorderf])
  gl_FUNC_TOTALORDERL
  gl_CONDITIONAL([GL_COND_OBJ_TOTALORDERL],
                 [test $HAVE_TOTALORDERL = 0 || test $REPLACE_TOTALORDERL = 1])
  gl_MATH_MODULE_INDICATOR([totalorderl])
  gl_FUNC_TOTALORDERMAG
  gl_CONDITIONAL([GL_COND_OBJ_TOTALORDERMAG],
                 [test $HAVE_TOTALORDERMAG = 0 || test $REPLACE_TOTALORDERMAG = 1])
  gl_MATH_MODULE_INDICATOR([totalordermag])
  gl_FUNC_TOTALORDERMAGF
  gl_CONDITIONAL([GL_COND_OBJ_TOTALORDERMAGF],
                 [test $HAVE_TOTALORDERMAGF = 0 || test $REPLACE_TOTALORDERMAGF = 1])
  gl_MATH_MODULE_INDICATOR([totalordermagf])
  gl_FUNC_TOTALORDERMAGL
  gl_CONDITIONAL([GL_COND_OBJ_TOTALORDERMAGL],
                 [test $HAVE_TOTALORDERMAGL = 0 || test $REPLACE_TOTALORDERMAGL = 1])
  gl_MATH_MODULE_INDICATOR([totalordermagl])
  gl_FUNC_TOUPPER_L
  gl_CONDITIONAL([GL_COND_OBJ_TOUPPER_L], [test $HAVE_TOUPPER_L = 0])
  gl_MODULE_INDICATOR([toupper_l])
  gl_CTYPE_MODULE_INDICATOR([toupper_l])
  gl_FUNC_TOWCTRANS
  gl_CONDITIONAL([GL_COND_OBJ_TOWCTRANS], [test $HAVE_TOWCTRANS = 0 || test $REPLACE_WCTRANS = 1])
  gl_WCTYPE_MODULE_INDICATOR([towctrans])
  gl_FUNC_TRUNC
  gl_CONDITIONAL([GL_COND_OBJ_TRUNC],
                 [test $HAVE_DECL_TRUNC = 0 || test $REPLACE_TRUNC = 1])
  gl_MATH_MODULE_INDICATOR([trunc])
  gl_FUNC_TRUNC_IEEE
  gl_FUNC_TRUNCATE
  gl_CONDITIONAL([GL_COND_OBJ_TRUNCATE],
                 [test $HAVE_DECL_TRUNCATE = 0 || test $REPLACE_TRUNCATE = 1])
  AM_COND_IF([GL_COND_OBJ_TRUNCATE], [
    gl_PREREQ_TRUNCATE
  ])
  gl_UNISTD_MODULE_INDICATOR([truncate])
  gl_FUNC_TRUNCF
  gl_CONDITIONAL([GL_COND_OBJ_TRUNCF],
                 [test $HAVE_DECL_TRUNCF = 0 || test $REPLACE_TRUNCF = 1])
  gl_MATH_MODULE_INDICATOR([truncf])
  gl_FUNC_TRUNCF_IEEE
  gl_FUNC_TRUNCL
  gl_CONDITIONAL([GL_COND_OBJ_TRUNCL],
                 [test $HAVE_DECL_TRUNCL = 0 || test $REPLACE_TRUNCL = 1])
  gl_MATH_MODULE_INDICATOR([truncl])
  gl_FUNC_TRUNCL_IEEE
  gl_FUNC_TSEARCH
  gl_CONDITIONAL([GL_COND_OBJ_TSEARCH],
                 [test $HAVE_TSEARCH = 0 || test $HAVE_TWALK = 0 || test $REPLACE_TSEARCH = 1 || test $REPLACE_TWALK = 1])
  AM_COND_IF([GL_COND_OBJ_TSEARCH], [
    gl_PREREQ_TSEARCH
  ])
  gl_SEARCH_MODULE_INDICATOR([tsearch])
  AC_REQUIRE([gl_THREADS_H])
  gl_FUNC_TSS_CREATE
  gl_CONDITIONAL([GL_COND_OBJ_TSS],
                 [test $HAVE_THREADS_H = 0 || test $REPLACE_TSS_CREATE = 1])
  gl_THREADS_MODULE_INDICATOR([tss])
  gl_FUNC_TTYNAME_R
  gl_CONDITIONAL([GL_COND_OBJ_TTYNAME_R],
                 [test $HAVE_TTYNAME_R = 0 || test $REPLACE_TTYNAME_R = 1])
  AM_COND_IF([GL_COND_OBJ_TTYNAME_R], [
    gl_PREREQ_TTYNAME_R
  ])
  gl_UNISTD_MODULE_INDICATOR([ttyname_r])
  gl_TZNAME
  gl_TIME_MODULE_INDICATOR([tzname])
  gl_FUNC_TZSET
  gl_CONDITIONAL([GL_COND_OBJ_TZSET], [test $REPLACE_TZSET = 1])
  gl_TIME_MODULE_INDICATOR([tzset])
  gl_UCHAR_H
  gl_UCHAR_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_REQUIRE([AM_ICONV])
  AC_DEFINE([GL_CHAR32_T_IS_UNICODE], [1],
    [Define if gnulib's char32_t values are always Unicode code points.])
  dnl On macOS, FreeBSD, NetBSD, Solaris, the functions mbrtoc32 and c32rtomb
  dnl need to convert between the wchar_t encoding and Unicode.
  case "$host_os" in
    darwin* | freebsd* | dragonfly* | netbsd* | solaris*)
      AC_DEFINE([GL_CHAR32_T_VS_WCHAR_T_NEEDS_CONVERSION], [1],
        [Define if gnulib needs to convert between the wchar_t encoding and Unicode.])
      LIBC32CONV="$LIBICONV"
      LTLIBC32CONV="$LTLIBICONV"
      ;;
    *)
      LIBC32CONV=
      LTLIBC32CONV=
      ;;
  esac
  AC_SUBST([LIBC32CONV])
  AC_SUBST([LTLIBC32CONV])
  gl_FUNC_UNAME
  gl_CONDITIONAL([GL_COND_OBJ_UNAME], [test $HAVE_UNAME = 0])
  AM_COND_IF([GL_COND_OBJ_UNAME], [
    gl_PREREQ_UNAME
  ])
  gl_SYS_UTSNAME_MODULE_INDICATOR([uname])
  gl_LIBUNISTRING_LIBHEADER([1.2], [unicase.h])
  gl_UNICASE_H
  gl_UNICASE_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICASE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.11], [unicase/empty-prefix-context])
  gl_UNICASE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.11], [unicase/empty-suffix-context])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([0.9.3], [unicase/locale-language])
  AC_PROG_MKDIR_P
  gl_LIBUNISTRING_MODULE([1.3], [unicase/tolower])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/totitle])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/toupper])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u16-casecmp])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u16-casecoll])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u16-casefold])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u16-casexfrm])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u16-ct-casefold])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u16-ct-tolower])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u16-ct-totitle])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u16-ct-toupper])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u16-is-cased])
  gl_LIBUNISTRING_MODULE([1.2], [unicase/u16-is-casefolded])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u16-is-lowercase])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u16-is-titlecase])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u16-is-uppercase])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u16-prefix-context])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u16-suffix-context])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u16-tolower])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u16-totitle])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u16-toupper])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-casecmp])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-casecoll])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-casefold])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-casexfrm])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-ct-casefold])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-ct-tolower])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-ct-totitle])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-ct-toupper])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-is-cased])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-is-casefolded])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-is-lowercase])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-is-titlecase])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-is-uppercase])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-prefix-context])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-suffix-context])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-tolower])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-totitle])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u32-toupper])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-casecmp])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-casecoll])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-casefold])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-casexfrm])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-ct-casefold])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-ct-tolower])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-ct-totitle])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-ct-toupper])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-is-cased])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-is-casefolded])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-is-lowercase])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-is-titlecase])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-is-uppercase])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-prefix-context])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-suffix-context])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-tolower])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-totitle])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/u8-toupper])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/ulc-casecmp])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/ulc-casecoll])
  gl_LIBUNISTRING_MODULE([1.3], [unicase/ulc-casexfrm])
  gl_UNICODEIO
  gl_LIBUNISTRING_LIBHEADER([0.9.11], [uniconv.h])
  AC_PROG_MKDIR_P
  AC_REQUIRE([gl_BIGENDIAN])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u16-conv-from-enc])
  AC_REQUIRE([gl_BIGENDIAN])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u16-conv-to-enc])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u16-strconv-from-enc])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u16-strconv-from-locale])
  AC_REQUIRE([gl_BIGENDIAN])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u16-strconv-to-enc])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u16-strconv-to-locale])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u32-conv-from-enc])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u32-conv-to-enc])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u32-strconv-from-enc])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u32-strconv-from-locale])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u32-strconv-to-enc])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u32-strconv-to-locale])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u8-conv-from-enc])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u8-conv-to-enc])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u8-strconv-from-enc])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u8-strconv-from-locale])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u8-strconv-to-enc])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u8-strconv-to-locale])
  gl_LIBUNISTRING_LIBHEADER([1.3], [unictype.h])
  gl_UNICTYPE_H
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_LIBUNISTRING_MODULE([0.9.11], [unictype/bidiclass-byname])
  gl_LIBUNISTRING_MODULE([0.9.11], [unictype/bidiclass-longname])
  gl_LIBUNISTRING_MODULE([0.9.11], [unictype/bidiclass-name])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/bidiclass-of])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/bidiclass-test])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/block-list])
  gl_LIBUNISTRING_MODULE([0.9.11], [unictype/block-test])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-C])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/category-Cc])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.1], [unictype/category-Cf])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-Cn])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/category-Co])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/category-Cs])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-L])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-LC])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-Ll])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-Lm])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-Lo])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/category-Lt])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-Lu])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-M])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-Mc])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/category-Me])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-Mn])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-N])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-Nd])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/category-Nl])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.1], [unictype/category-No])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-P])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/category-Pc])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-Pd])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.11], [unictype/category-Pe])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/category-Pf])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/category-Pi])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-Po])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.11], [unictype/category-Ps])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-S])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.11], [unictype/category-Sc])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.11], [unictype/category-Sk])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-Sm])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/category-So])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/category-Z])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/category-Zl])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/category-Zp])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/category-Zs])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/category-and])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/category-and-not])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/category-byname])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/category-longname])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/category-name])
  dnl Since _UC_CATEGORY_NONE is not exported from an installed libunistring,
  dnl don't use gl_LIBUNISTRING_MODULE here.
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/category-of])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/category-or])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/category-test])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/combining-class])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/combining-class-byname])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/combining-class-longname])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/combining-class-name])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/ctype-alnum])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/ctype-alpha])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/ctype-blank])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/ctype-cntrl])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/ctype-digit])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/ctype-graph])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/ctype-lower])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/ctype-print])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/ctype-punct])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/ctype-space])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/ctype-upper])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/ctype-xdigit])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/decimal-digit])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/digit])
  gl_LIBUNISTRING_MODULE([1.2], [unictype/incb-byname])
  gl_LIBUNISTRING_MODULE([1.2], [unictype/incb-name])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/incb-of])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/joininggroup-byname])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/joininggroup-name])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/joininggroup-of])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/joiningtype-byname])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/joiningtype-longname])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/joiningtype-name])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/joiningtype-of])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/mirror])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/numeric])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-alphabetic])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-ascii-hex-digit])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-bidi-arabic-digit])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-bidi-arabic-right-to-left])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-bidi-block-separator])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-bidi-boundary-neutral])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-bidi-common-separator])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-bidi-control])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-bidi-embedding-or-override])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-bidi-eur-num-separator])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-bidi-eur-num-terminator])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-bidi-european-digit])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-bidi-hebrew-right-to-left])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-bidi-left-to-right])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-bidi-non-spacing-mark])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-bidi-other-neutral])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-bidi-pdf])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-bidi-segment-separator])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-bidi-whitespace])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/property-byname])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-case-ignorable])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-cased])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-changes-when-casefolded])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-changes-when-casemapped])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-changes-when-lowercased])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-changes-when-titlecased])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-changes-when-uppercased])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-combining])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-composite])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.11], [unictype/property-currency-symbol])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-dash])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-decimal-digit])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.11], [unictype/property-default-ignorable-code-point])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-deprecated])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-diacritic])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-emoji])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.11], [unictype/property-emoji-component])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.11], [unictype/property-emoji-modifier])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.1], [unictype/property-emoji-modifier-base])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-emoji-presentation])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.11], [unictype/property-extended-pictographic])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-extender])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-format-control])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-grapheme-base])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-grapheme-extend])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-grapheme-link])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-hex-digit])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-hyphen])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.2], [unictype/property-id-compat-math-continue])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.2], [unictype/property-id-compat-math-start])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-id-continue])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-id-start])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-ideographic])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.2], [unictype/property-ids-binary-operator])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-ids-trinary-operator])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.2], [unictype/property-ids-unary-operator])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.1], [unictype/property-ignorable-control])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-iso-control])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-join-control])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-left-of-pair])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-line-separator])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-logical-order-exception])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-lowercase])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-math])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-modifier-combining-mark])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-non-break])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-not-a-character])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-numeric])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-other-alphabetic])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-other-default-ignorable-code-point])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-other-grapheme-extend])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.2], [unictype/property-other-id-continue])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-other-id-start])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.1], [unictype/property-other-lowercase])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-other-math])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-other-uppercase])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-paired-punctuation])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-paragraph-separator])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-pattern-syntax])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-pattern-white-space])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.2], [unictype/property-prepended-concatenation-mark])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-private-use])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-punctuation])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-quotation-mark])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-radical])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.11], [unictype/property-regional-indicator])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-sentence-terminal])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.1], [unictype/property-soft-dotted])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-space])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-terminal-punctuation])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/property-test])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-titlecase])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-unassigned-code-value])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.2], [unictype/property-unified-ideograph])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-uppercase])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.11], [unictype/property-variation-selector])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([0.9.8], [unictype/property-white-space])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-xid-continue])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unictype/property-xid-start])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.1], [unictype/property-zero-width])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/scripts])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/syntax-c-ident])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/syntax-c-whitespace])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.3], [unictype/syntax-java-ident])
  gl_LIBUNISTRING_MODULE([0.9.8], [unictype/syntax-java-whitespace])
  gl_LIBUNISTRING_LIBHEADER([1.2], [unigbrk.h])
  AC_PROG_MKDIR_P
  gl_MODULE_INDICATOR([unigbrk/u16-grapheme-breaks])
  gl_LIBUNISTRING_MODULE([1.3], [unigbrk/u16-grapheme-breaks])
  gl_MODULE_INDICATOR([unigbrk/u16-grapheme-next])
  gl_LIBUNISTRING_MODULE([1.4], [unigbrk/u16-grapheme-next])
  gl_MODULE_INDICATOR([unigbrk/u16-grapheme-prev])
  gl_LIBUNISTRING_MODULE([1.4], [unigbrk/u16-grapheme-prev])
  gl_MODULE_INDICATOR([unigbrk/u32-grapheme-breaks])
  gl_LIBUNISTRING_MODULE([1.3], [unigbrk/u32-grapheme-breaks])
  gl_MODULE_INDICATOR([unigbrk/u32-grapheme-next])
  gl_LIBUNISTRING_MODULE([1.4], [unigbrk/u32-grapheme-next])
  gl_MODULE_INDICATOR([unigbrk/u32-grapheme-prev])
  gl_LIBUNISTRING_MODULE([1.4], [unigbrk/u32-grapheme-prev])
  gl_MODULE_INDICATOR([unigbrk/u8-grapheme-breaks])
  gl_LIBUNISTRING_MODULE([1.3], [unigbrk/u8-grapheme-breaks])
  gl_MODULE_INDICATOR([unigbrk/u8-grapheme-next])
  gl_LIBUNISTRING_MODULE([1.4], [unigbrk/u8-grapheme-next])
  gl_MODULE_INDICATOR([unigbrk/u8-grapheme-prev])
  gl_LIBUNISTRING_MODULE([1.4], [unigbrk/u8-grapheme-prev])
  gl_LIBUNISTRING_MODULE([1.3], [unigbrk/uc-gbrk-prop])
  gl_MODULE_INDICATOR([unigbrk/uc-grapheme-breaks])
  gl_LIBUNISTRING_MODULE([1.3], [unigbrk/uc-grapheme-breaks])
  gl_LIBUNISTRING_MODULE([1.3], [unigbrk/uc-is-grapheme-break])
  gl_MODULE_INDICATOR([unigbrk/ulc-grapheme-breaks])
  gl_LIBUNISTRING_MODULE([1.3], [unigbrk/ulc-grapheme-breaks])
  gl_LIBUNISTRING_LIBHEADER([0.9.11], [unilbrk.h])
  AC_PROG_MKDIR_P
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.3], [unilbrk/u16-possible-linebreaks])
  gl_LIBUNISTRING_MODULE([1.3], [unilbrk/u16-width-linebreaks])
  gl_LIBUNISTRING_MODULE([1.3], [unilbrk/u32-possible-linebreaks])
  gl_LIBUNISTRING_MODULE([1.3], [unilbrk/u32-width-linebreaks])
  gl_LIBUNISTRING_MODULE([1.3], [unilbrk/u8-possible-linebreaks])
  gl_LIBUNISTRING_MODULE([1.3], [unilbrk/u8-width-linebreaks])
  gl_LIBUNISTRING_MODULE([1.3], [unilbrk/ulc-possible-linebreaks])
  gl_LIBUNISTRING_MODULE([1.3], [unilbrk/ulc-width-linebreaks])
  gl_LIBUNISTRING_LIBHEADER([1.2], [unimetadata.h])
  gl_UNIMETADATA_H
  gl_UNIMETADATA_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_UNIMETADATA_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [unimetadata/u-version])
  gl_LIBUNISTRING_LIBHEADER([0.9.5], [uniname.h])
  AC_PROG_MKDIR_P
  gl_LIBUNISTRING_MODULE([1.3], [uniname/uniname])
  gl_LIBUNISTRING_LIBHEADER([1.2], [uninorm.h])
  gl_UNINORM_H
  gl_UNINORM_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_LIBUNISTRING_MODULE([1.3], [uninorm/canonical-decomposition])
  gl_LIBUNISTRING_MODULE([1.3], [uninorm/composition])
  gl_LIBUNISTRING_MODULE([0.9.11], [uninorm/decomposing-form])
  gl_LIBUNISTRING_MODULE([1.3], [uninorm/decomposition])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.3], [uninorm/filter])
  gl_UNINORM_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [uninorm/nfc])
  gl_UNINORM_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [uninorm/nfd])
  gl_UNINORM_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [uninorm/nfkc])
  gl_UNINORM_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.3], [uninorm/nfkd])
  gl_MODULE_INDICATOR_FOR_TESTS([uninorm/u16-normalize])
  gl_LIBUNISTRING_MODULE([1.3], [uninorm/u16-normalize])
  gl_LIBUNISTRING_MODULE([1.3], [uninorm/u16-normcmp])
  gl_LIBUNISTRING_MODULE([1.3], [uninorm/u16-normcoll])
  gl_LIBUNISTRING_MODULE([1.3], [uninorm/u16-normxfrm])
  gl_MODULE_INDICATOR_FOR_TESTS([uninorm/u32-normalize])
  gl_LIBUNISTRING_MODULE([1.3], [uninorm/u32-normalize])
  gl_LIBUNISTRING_MODULE([1.3], [uninorm/u32-normcmp])
  gl_LIBUNISTRING_MODULE([1.3], [uninorm/u32-normcoll])
  gl_LIBUNISTRING_MODULE([1.3], [uninorm/u32-normxfrm])
  gl_MODULE_INDICATOR_FOR_TESTS([uninorm/u8-normalize])
  gl_LIBUNISTRING_MODULE([1.3], [uninorm/u8-normalize])
  gl_LIBUNISTRING_MODULE([1.3], [uninorm/u8-normcmp])
  gl_LIBUNISTRING_MODULE([1.3], [uninorm/u8-normcoll])
  gl_LIBUNISTRING_MODULE([1.3], [uninorm/u8-normxfrm])
  gl_UNISTD_H
  gl_UNISTD_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_UNISTD_SAFER
  gl_MODULE_INDICATOR([unistd-safer])
  gl_LIBUNISTRING_LIBHEADER([0.9.11], [unistdio.h])
  AC_PROG_MKDIR_P
  gl_PREREQ_PRINTF_ARGS
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-asnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-asprintf])
  gl_PREREQ_PRINTF_PARSE
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-snprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-sprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-u16-asnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-u16-asprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-u16-snprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-u16-sprintf])
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-u16-vasnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-u16-vasprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-u16-vsnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-u16-vsprintf])
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-vasnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-vasprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-vsnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-vsprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-asnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-asprintf])
  gl_PREREQ_PRINTF_PARSE
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-snprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-sprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-u32-asnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-u32-asprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-u32-snprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-u32-sprintf])
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-u32-vasnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-u32-vasprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-u32-vsnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-u32-vsprintf])
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-vasnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-vasprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-vsnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-vsprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-asnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-asprintf])
  gl_PREREQ_PRINTF_PARSE
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-snprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-sprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-u8-asnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-u8-asprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-u8-snprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-u8-sprintf])
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-u8-vasnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-u8-vasprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-u8-vsnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-u8-vsprintf])
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-vasnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-vasprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-vsnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-vsprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.3]), [unistdio/ulc-asnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.3]), [unistdio/ulc-asprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.3]), [unistdio/ulc-fprintf])
  gl_PREREQ_PRINTF_PARSE
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.3]), [unistdio/ulc-snprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.3]), [unistdio/ulc-sprintf])
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.3]), [unistdio/ulc-vasnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.3]), [unistdio/ulc-vasprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.3]), [unistdio/ulc-vfprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.3]), [unistdio/ulc-vsnprintf])
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.3]), [unistdio/ulc-vsprintf])
  gl_LIBUNISTRING_LIBHEADER([1.2], [unistr.h])
  AC_PROG_MKDIR_P
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-check])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-chr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-cmp])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-cmp2])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-cpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-cpy-alloc])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-endswith])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-mblen])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-mbsnlen])
  gl_MODULE_INDICATOR([unistr/u16-mbtouc])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-mbtouc])
  gl_MODULE_INDICATOR([unistr/u16-mbtouc-unsafe])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-mbtouc-unsafe])
  gl_MODULE_INDICATOR([unistr/u16-mbtoucr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-mbtoucr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-move])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-next])
  gl_LIBUNISTRING_MODULE([1.2], [unistr/u16-pcpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-prev])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-set])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-startswith])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-stpcpy])
  gl_LIBUNISTRING_MODULE([0.9.3], [unistr/u16-stpncpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strcat])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strchr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strcmp])
  gl_LIBUNISTRING_MODULE([0.9.4], [unistr/u16-strcoll])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strcpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strcspn])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strdup])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strlen])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strmblen])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strmbtouc])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strncat])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strncmp])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strncpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strnlen])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strpbrk])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strrchr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strspn])
  gl_LIBUNISTRING_MODULE([0.9.4], [unistr/u16-strstr])
  gl_LIBUNISTRING_MODULE([0.9.6], [unistr/u16-strtok])
  gl_LIBUNISTRING_MODULE([0.9.3], [unistr/u16-to-u32])
  gl_LIBUNISTRING_MODULE([0.9.3], [unistr/u16-to-u8])
  gl_MODULE_INDICATOR([unistr/u16-uctomb])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-uctomb])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-check])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-chr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-cmp])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-cmp2])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-cpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-cpy-alloc])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-endswith])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-mblen])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-mbsnlen])
  gl_MODULE_INDICATOR([unistr/u32-mbtouc])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-mbtouc])
  gl_MODULE_INDICATOR([unistr/u32-mbtouc-unsafe])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-mbtouc-unsafe])
  gl_MODULE_INDICATOR([unistr/u32-mbtoucr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-mbtoucr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-move])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-next])
  gl_LIBUNISTRING_MODULE([1.2], [unistr/u32-pcpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-prev])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-set])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-startswith])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-stpcpy])
  gl_LIBUNISTRING_MODULE([0.9.3], [unistr/u32-stpncpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strcat])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strchr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strcmp])
  gl_LIBUNISTRING_MODULE([0.9.4], [unistr/u32-strcoll])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strcpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strcspn])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strdup])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strlen])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strmblen])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strmbtouc])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strncat])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strncmp])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strncpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strnlen])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strpbrk])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strrchr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strspn])
  gl_LIBUNISTRING_MODULE([0.9.4], [unistr/u32-strstr])
  gl_LIBUNISTRING_MODULE([0.9.6], [unistr/u32-strtok])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-to-u16])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-to-u8])
  gl_MODULE_INDICATOR([unistr/u32-uctomb])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-uctomb])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-check])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-chr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-cmp])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-cmp2])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-cpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-cpy-alloc])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-endswith])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-mblen])
  gl_LIBUNISTRING_MODULE([1.2], [unistr/u8-mbsnlen])
  gl_MODULE_INDICATOR([unistr/u8-mbtouc])
  gl_LIBUNISTRING_MODULE([1.2], [unistr/u8-mbtouc])
  gl_MODULE_INDICATOR([unistr/u8-mbtouc-unsafe])
  gl_LIBUNISTRING_MODULE([0.9.4], [unistr/u8-mbtouc-unsafe])
  gl_MODULE_INDICATOR([unistr/u8-mbtoucr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-mbtoucr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-move])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-next])
  gl_LIBUNISTRING_MODULE([1.2], [unistr/u8-pcpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-prev])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-set])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-startswith])
  gl_CHECK_FUNCS_ANDROID([stpcpy], [[#include <string.h>]])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-stpcpy])
  gl_LIBUNISTRING_MODULE([0.9.3], [unistr/u8-stpncpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-strcat])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-strchr])
  gl_LIBUNISTRING_MODULE([0.9.4], [unistr/u8-strcmp])
  gl_LIBUNISTRING_MODULE([0.9.4], [unistr/u8-strcoll])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-strcpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-strcspn])
  AC_CHECK_FUNCS_ONCE([strdup])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-strdup])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-strlen])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-strmblen])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-strmbtouc])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-strncat])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-strncmp])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-strncpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-strnlen])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-strpbrk])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-strrchr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-strspn])
  gl_LIBUNISTRING_MODULE([0.9.4], [unistr/u8-strstr])
  gl_LIBUNISTRING_MODULE([0.9.6], [unistr/u8-strtok])
  gl_LIBUNISTRING_MODULE([0.9.3], [unistr/u8-to-u16])
  gl_LIBUNISTRING_MODULE([0.9.3], [unistr/u8-to-u32])
  gl_MODULE_INDICATOR([unistr/u8-uctomb])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-uctomb])
  gl_LIBUNISTRING_LIBHEADER([0.9.11], [unitypes.h])
  AC_PROG_MKDIR_P
  gl_UNITYPES_H
  gl_LIBUNISTRING_LIBHEADER([0.9.11], [uniwbrk.h])
  AC_PROG_MKDIR_P
  gl_LIBUNISTRING_MODULE([1.3], [uniwbrk/u16-wordbreaks])
  gl_LIBUNISTRING_MODULE([1.3], [uniwbrk/u32-wordbreaks])
  gl_LIBUNISTRING_MODULE([1.3], [uniwbrk/u8-wordbreaks])
  gl_LIBUNISTRING_MODULE([1.3], [uniwbrk/ulc-wordbreaks])
  gl_LIBUNISTRING_MODULE([1.3], [uniwbrk/wordbreak-property])
  gl_LIBUNISTRING_LIBHEADER([0.9.11], [uniwidth.h])
  AC_PROG_MKDIR_P
  gl_LIBUNISTRING_MODULE([1.3], [uniwidth/u16-strwidth])
  gl_LIBUNISTRING_MODULE([1.3], [uniwidth/u16-width])
  gl_LIBUNISTRING_MODULE([1.3], [uniwidth/u32-strwidth])
  gl_LIBUNISTRING_MODULE([1.3], [uniwidth/u32-width])
  gl_LIBUNISTRING_MODULE([1.3], [uniwidth/u8-strwidth])
  gl_LIBUNISTRING_MODULE([1.3], [uniwidth/u8-width])
  gl_LIBUNISTRING_MODULE([1.3], [uniwidth/width])
  gl_FUNC_UNLINK
  gl_CONDITIONAL([GL_COND_OBJ_UNLINK], [test $REPLACE_UNLINK = 1])
  gl_UNISTD_MODULE_INDICATOR([unlink])
  gl_FUNC_UNLINK_BUSY_TEXT
  gl_FUNC_UNLINKAT
  gl_CONDITIONAL([GL_COND_OBJ_UNLINKAT],
                 [test $HAVE_UNLINKAT = 0 || test $REPLACE_UNLINKAT = 1])
  gl_UNISTD_MODULE_INDICATOR([unlinkat])
  gl_UNLINKDIR
  AC_DEFINE([GNULIB_STDIO_SINGLE_THREAD], [1],
    [Define to 1 if you want the FILE stream functions getc, putc, etc.
     to use unlocked I/O if available, throughout the package.
     Unlocked I/O can improve performance, sometimes dramatically.
     But unlocked I/O is safe only in single-threaded programs,
     as well as in multithreaded programs for which you can guarantee that
     every FILE stream, including stdin, stdout, stderr, is used only
     in a single thread.])
  AC_DEFINE([USE_UNLOCKED_IO], [GNULIB_STDIO_SINGLE_THREAD],
    [An alias of GNULIB_STDIO_SINGLE_THREAD.])
  gl_FUNC_GLIBC_UNLOCKED_IO
  gl_FUNC_UNLOCKPT
  gl_CONDITIONAL([GL_COND_OBJ_UNLOCKPT], [test $HAVE_UNLOCKPT = 0])
  AM_COND_IF([GL_COND_OBJ_UNLOCKPT], [
    gl_PREREQ_UNLOCKPT
  ])
  gl_STDLIB_MODULE_INDICATOR([unlockpt])
  gl_FUNC_UNSETENV
  gl_CONDITIONAL([GL_COND_OBJ_UNSETENV],
                 [test $HAVE_UNSETENV = 0 || test $REPLACE_UNSETENV = 1])
  AM_COND_IF([GL_COND_OBJ_UNSETENV], [
    gl_PREREQ_UNSETENV
  ])
  gl_STDLIB_MODULE_INDICATOR([unsetenv])
  gl_SYS_PROC_UPTIME
  gl_USERSPEC
  gl_FUNC_USLEEP
  gl_CONDITIONAL([GL_COND_OBJ_USLEEP],
                 [test $HAVE_USLEEP = 0 || test $REPLACE_USLEEP = 1])
  gl_UNISTD_MODULE_INDICATOR([usleep])
  gl_FUNC_UTIME
  gl_CONDITIONAL([GL_COND_OBJ_UTIME],
                 [test $HAVE_UTIME = 0 || test $REPLACE_UTIME = 1])
  AM_COND_IF([GL_COND_OBJ_UTIME], [
    gl_PREREQ_UTIME
  ])
  gl_UTIME_MODULE_INDICATOR([utime])
  gl_UTIME_H
  gl_UTIME_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_UTIMECMP
  gl_UTIMENS
  gl_FUNC_UTIMENSAT
  gl_CONDITIONAL([GL_COND_OBJ_UTIMENSAT],
                 [test $HAVE_UTIMENSAT = 0 || test $REPLACE_UTIMENSAT = 1])
  gl_SYS_STAT_MODULE_INDICATOR([utimensat])
  gl_UTMP_H
  gl_UTMP_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_VA_ARGS
  gl_VALGRIND_TESTS
  AC_C_VARARRAYS
  AC_REQUIRE([AC_C_RESTRICT])
  gl_FUNC_VASNPRINTF
  gl_FUNC_VASNPRINTF_GNU
  gl_FUNC_VASNPRINTF_POSIX
  AC_REQUIRE([AC_C_RESTRICT])
  gl_FUNC_VASNWPRINTF
  gl_FUNC_VASNWPRINTF_GNU
  gl_FUNC_VASNWPRINTF_POSIX
  gl_FUNC_VASPRINTF
  gl_STDIO_MODULE_INDICATOR([vasprintf])
  m4_ifdef([AM_XGETTEXT_OPTION],
    [AM_][XGETTEXT_OPTION([--flag=asprintf:2:c-format])
     AM_][XGETTEXT_OPTION([--flag=vasprintf:2:c-format])])
  gl_FUNC_VASPRINTF_GNU
  gl_FUNC_VASPRINTF_POSIX
  gl_STDIO_MODULE_INDICATOR([vaszprintf])
  m4_ifdef([AM_XGETTEXT_OPTION],
    [AM_][XGETTEXT_OPTION([--flag=aszprintf:2:c-format])
     AM_][XGETTEXT_OPTION([--flag=vaszprintf:2:c-format])])
  gl_PREREQ_VASNPRINTF_WITH_GNU_EXTRAS
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_FUNC_VDPRINTF
  gl_STDIO_MODULE_INDICATOR([vdprintf])
  gl_FUNC_VDPRINTF_GNU
  gl_FUNC_VDPRINTF_POSIX
  gl_STDIO_MODULE_INDICATOR([vdzprintf])
  gl_PREREQ_VASNPRINTF_WITH_GNU_EXTRAS
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  m4_ifdef([AM_XGETTEXT_OPTION],
    [AM_][XGETTEXT_OPTION([--flag=verror:3:c-format])
     AM_][XGETTEXT_OPTION([--flag=verror_at_line:5:c-format])])
  gl_VERSION_ETC
  gl_FUNC_VFPRINTF_GNU
  gl_FUNC_VFPRINTF_POSIX
  gl_STDIO_MODULE_INDICATOR([vfprintf-posix])
  gl_MODULE_INDICATOR([vfprintf-posix])
  gl_STDIO_MODULE_INDICATOR([vfscanf])
  gl_MODULE_INDICATOR([vfscanf])
  gl_STDIO_MODULE_INDICATOR([vfzprintf])
  gl_PREREQ_VASNPRINTF_WITH_GNU_EXTRAS
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_FUNC_MMAP_ANON
  AC_REQUIRE([AC_C_INLINE])
  AC_CHECK_FUNCS_ONCE([mquery pstat_getprocvm])
  gl_FUNC_VPRINTF_GNU
  gl_FUNC_VPRINTF_POSIX
  gl_STDIO_MODULE_INDICATOR([vprintf-posix])
  gl_MODULE_INDICATOR([vprintf-posix])
  gl_STDIO_MODULE_INDICATOR([vscanf])
  gl_MODULE_INDICATOR([vscanf])
  gl_FUNC_VSNPRINTF
  gl_STDIO_MODULE_INDICATOR([vsnprintf])
  gl_FUNC_VSNPRINTF_GNU
  gl_FUNC_VSNPRINTF_POSIX
  gl_STDIO_MODULE_INDICATOR([vsnzprintf])
  gl_PREREQ_VASNPRINTF_WITH_GNU_EXTRAS
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_FUNC_VSPRINTF_GNU
  gl_FUNC_VSPRINTF_POSIX
  gl_STDIO_MODULE_INDICATOR([vsprintf-posix])
  gl_STDIO_MODULE_INDICATOR([vszprintf])
  gl_PREREQ_VASNPRINTF_WITH_GNU_EXTRAS
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_STDIO_MODULE_INDICATOR([vzprintf])
  gl_PREREQ_VASNPRINTF_WITH_GNU_EXTRAS
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_WAIT_PROCESS
  gl_FUNC_WAITPID
  gl_CONDITIONAL([GL_COND_OBJ_WAITPID], [test $HAVE_WAITPID = 0])
  gl_SYS_WAIT_MODULE_INDICATOR([waitpid])
  gl_WCHAR_H
  gl_WCHAR_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  AC_DEFINE([GNULIB_WCHAR_SINGLE_LOCALE], [1],
    [Define to 1 to enable more efficient wchar replacements,
     where we know the locale charset will not change between calls.])
  dnl For backward compatibility:
  gl_MODULE_INDICATOR([wchar-single])
  gl_FUNC_WCPCPY
  gl_CONDITIONAL([GL_COND_OBJ_WCPCPY], [test $HAVE_WCPCPY = 0])
  gl_WCHAR_MODULE_INDICATOR([wcpcpy])
  gl_FUNC_WCPNCPY
  gl_CONDITIONAL([GL_COND_OBJ_WCPNCPY], [test $HAVE_WCPNCPY = 0])
  gl_WCHAR_MODULE_INDICATOR([wcpncpy])
  gl_FUNC_WCRTOMB
  gl_CONDITIONAL([GL_COND_OBJ_WCRTOMB],
                 [test $HAVE_WCRTOMB = 0 || test $REPLACE_WCRTOMB = 1])
  AM_COND_IF([GL_COND_OBJ_WCRTOMB], [
    gl_PREREQ_WCRTOMB
  ])
  gl_WCHAR_MODULE_INDICATOR([wcrtomb])
  gl_FUNC_WCSCASECMP
  gl_CONDITIONAL([GL_COND_OBJ_WCSCASECMP], [test $HAVE_WCSCASECMP = 0])
  gl_WCHAR_MODULE_INDICATOR([wcscasecmp])
  gl_FUNC_WCSCAT
  gl_CONDITIONAL([GL_COND_OBJ_WCSCAT], [test $HAVE_WCSCAT = 0])
  gl_WCHAR_MODULE_INDICATOR([wcscat])
  gl_FUNC_WCSCHR
  gl_CONDITIONAL([GL_COND_OBJ_WCSCHR], [test $HAVE_WCSCHR = 0])
  gl_WCHAR_MODULE_INDICATOR([wcschr])
  gl_FUNC_WCSCMP
  gl_CONDITIONAL([GL_COND_OBJ_WCSCMP],
                 [test $HAVE_WCSCMP = 0 || test $REPLACE_WCSCMP = 1])
  gl_WCHAR_MODULE_INDICATOR([wcscmp])
  gl_FUNC_WCSCOLL
  gl_CONDITIONAL([GL_COND_OBJ_WCSCOLL], [test $HAVE_WCSCOLL = 0])
  gl_WCHAR_MODULE_INDICATOR([wcscoll])
  gl_FUNC_WCSCPY
  gl_CONDITIONAL([GL_COND_OBJ_WCSCPY], [test $HAVE_WCSCPY = 0])
  gl_WCHAR_MODULE_INDICATOR([wcscpy])
  gl_FUNC_WCSCSPN
  gl_CONDITIONAL([GL_COND_OBJ_WCSCSPN], [test $HAVE_WCSCSPN = 0])
  gl_WCHAR_MODULE_INDICATOR([wcscspn])
  gl_FUNC_WCSDUP
  gl_CONDITIONAL([GL_COND_OBJ_WCSDUP], [test $HAVE_WCSDUP = 0])
  gl_WCHAR_MODULE_INDICATOR([wcsdup])
  gl_FUNC_WCSFTIME
  gl_CONDITIONAL([GL_COND_OBJ_WCSFTIME], [test $REPLACE_WCSFTIME = 1])
  gl_WCHAR_MODULE_INDICATOR([wcsftime])
  gl_FUNC_WCSLEN
  gl_CONDITIONAL([GL_COND_OBJ_WCSLEN], [test $HAVE_WCSLEN = 0])
  gl_WCHAR_MODULE_INDICATOR([wcslen])
  gl_FUNC_WCSNCASECMP
  gl_CONDITIONAL([GL_COND_OBJ_WCSNCASECMP], [test $HAVE_WCSNCASECMP = 0])
  gl_WCHAR_MODULE_INDICATOR([wcsncasecmp])
  gl_FUNC_WCSNCAT
  gl_CONDITIONAL([GL_COND_OBJ_WCSNCAT],
                 [test $HAVE_WCSNCAT = 0 || test $REPLACE_WCSNCAT = 1])
  gl_WCHAR_MODULE_INDICATOR([wcsncat])
  gl_FUNC_WCSNCMP
  gl_CONDITIONAL([GL_COND_OBJ_WCSNCMP],
                 [test $HAVE_WCSNCMP = 0 || test $REPLACE_WCSNCMP = 1])
  gl_WCHAR_MODULE_INDICATOR([wcsncmp])
  gl_FUNC_WCSNCPY
  gl_CONDITIONAL([GL_COND_OBJ_WCSNCPY], [test $HAVE_WCSNCPY = 0])
  gl_WCHAR_MODULE_INDICATOR([wcsncpy])
  gl_FUNC_WCSNLEN
  gl_CONDITIONAL([GL_COND_OBJ_WCSNLEN], [test $HAVE_WCSNLEN = 0])
  gl_WCHAR_MODULE_INDICATOR([wcsnlen])
  gl_FUNC_WCSNRTOMBS
  gl_CONDITIONAL([GL_COND_OBJ_WCSNRTOMBS],
                 [test $HAVE_WCSNRTOMBS = 0 || test $REPLACE_WCSNRTOMBS = 1])
  AM_COND_IF([GL_COND_OBJ_WCSNRTOMBS], [
    AC_LIBOBJ([wcsrtombs-state])
    gl_PREREQ_WCSNRTOMBS
  ])
  gl_WCHAR_MODULE_INDICATOR([wcsnrtombs])
  gl_FUNC_WCSPBRK
  gl_CONDITIONAL([GL_COND_OBJ_WCSPBRK], [test $HAVE_WCSPBRK = 0])
  gl_WCHAR_MODULE_INDICATOR([wcspbrk])
  gl_FUNC_WCSRCHR
  gl_CONDITIONAL([GL_COND_OBJ_WCSRCHR], [test $HAVE_WCSRCHR = 0])
  gl_WCHAR_MODULE_INDICATOR([wcsrchr])
  gl_FUNC_WCSRTOMBS
  gl_CONDITIONAL([GL_COND_OBJ_WCSRTOMBS],
                 [test $HAVE_WCSRTOMBS = 0 || test $REPLACE_WCSRTOMBS = 1])
  AM_COND_IF([GL_COND_OBJ_WCSRTOMBS], [
    AC_LIBOBJ([wcsrtombs-state])
    gl_PREREQ_WCSRTOMBS
  ])
  gl_WCHAR_MODULE_INDICATOR([wcsrtombs])
  gl_FUNC_WCSSPN
  gl_CONDITIONAL([GL_COND_OBJ_WCSSPN], [test $HAVE_WCSSPN = 0])
  gl_WCHAR_MODULE_INDICATOR([wcsspn])
  gl_FUNC_WCSSTR
  if test $HAVE_WCSSTR = 0 || test $REPLACE_WCSSTR = 1; then
    AC_LIBOBJ([wcsstr])
  fi
  gl_FUNC_WCSSTR_SIMPLE
  if test $HAVE_WCSSTR = 0; then
    AC_LIBOBJ([wcsstr])
  fi
  gl_WCHAR_MODULE_INDICATOR([wcsstr])
  gl_FUNC_WCSTOK
  gl_CONDITIONAL([GL_COND_OBJ_WCSTOK],
                 [test $HAVE_WCSTOK = 0 || test $REPLACE_WCSTOK = 1])
  gl_WCHAR_MODULE_INDICATOR([wcstok])
  gl_FUNC_WCSWIDTH
  gl_CONDITIONAL([GL_COND_OBJ_WCSWIDTH],
                 [test $HAVE_WCSWIDTH = 0 || test $REPLACE_WCSWIDTH = 1])
  gl_WCHAR_MODULE_INDICATOR([wcswidth])
  gl_FUNC_WCSXFRM
  gl_CONDITIONAL([GL_COND_OBJ_WCSXFRM], [test $HAVE_WCSXFRM = 0])
  gl_WCHAR_MODULE_INDICATOR([wcsxfrm])
  gl_FUNC_WCTOB
  gl_CONDITIONAL([GL_COND_OBJ_WCTOB],
                 [test $HAVE_WCTOB = 0 || test $REPLACE_WCTOB = 1])
  AM_COND_IF([GL_COND_OBJ_WCTOB], [
    gl_PREREQ_WCTOB
  ])
  gl_WCHAR_MODULE_INDICATOR([wctob])
  gl_FUNC_WCTOMB
  gl_CONDITIONAL([GL_COND_OBJ_WCTOMB], [test $REPLACE_WCTOMB = 1])
  AM_COND_IF([GL_COND_OBJ_WCTOMB], [
    gl_PREREQ_WCTOMB
  ])
  gl_STDLIB_MODULE_INDICATOR([wctomb])
  gl_FUNC_WCTRANS
  gl_CONDITIONAL([GL_COND_OBJ_WCTRANS], [test $HAVE_WCTRANS = 0 || test $REPLACE_WCTRANS = 1])
  gl_WCTYPE_MODULE_INDICATOR([wctrans])
  gl_FUNC_WCTYPE
  gl_CONDITIONAL([GL_COND_OBJ_WCTYPE], [test $HAVE_WCTYPE = 0 || test $REPLACE_WCTYPE = 1])
  gl_WCTYPE_MODULE_INDICATOR([wctype])
  gl_WCTYPE_H
  gl_WCTYPE_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_FUNC_WCWIDTH
  gl_CONDITIONAL([GL_COND_OBJ_WCWIDTH],
                 [test $HAVE_WCWIDTH = 0 || test $REPLACE_WCWIDTH = 1])
  AM_COND_IF([GL_COND_OBJ_WCWIDTH], [
    gl_PREREQ_WCWIDTH
  ])
  gl_WCHAR_MODULE_INDICATOR([wcwidth])
  gl_WCHAR_MODULE_INDICATOR([wgetcwd])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_COND],
                 [case "$host_os" in mingw* | windows*) true;; *) false;; esac])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_MUTEX],
                 [case "$host_os" in mingw* | windows*) true;; *) false;; esac])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_ONCE],
                 [case "$host_os" in mingw* | windows*) true;; *) false;; esac])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_RECMUTEX],
                 [case "$host_os" in mingw* | windows*) true;; *) false;; esac])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_RWLOCK],
                 [case "$host_os" in mingw* | windows*) true;; *) false;; esac])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_PATH],
                 [case "$host_os" in cygwin* | mingw* | windows*) true;; *) false;; esac])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_SPAWN],
                 [case "$host_os" in mingw* | windows*) true;; *) false;; esac])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_SPIN],
                 [case "$host_os" in mingw* | windows*) true;; *) false;; esac])
  AC_REQUIRE([gl_WINDOWS_STAT_INODES])
  gl_SYS_STAT_H_REQUIRE_DEFAULTS
  AC_REQUIRE([AC_CANONICAL_HOST])
  case "$host_os" in
    mingw* | windows*) gl_MODULE_INDICATOR_INIT_VARIABLE([GNULIB_OVERRIDES_STRUCT_STAT], [1]) ;;
  esac
  AC_REQUIRE([gl_WINDOWS_STAT_TIMESPEC])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_THREAD],
                 [case "$host_os" in mingw* | windows*) true;; *) false;; esac])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_TIMEDMUTEX],
                 [case "$host_os" in mingw* | windows*) true;; *) false;; esac])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_TIMEDRECMUTEX],
                 [case "$host_os" in mingw* | windows*) true;; *) false;; esac])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_TIMEDRWLOCK],
                 [case "$host_os" in mingw* | windows*) true;; *) false;; esac])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_TLS],
                 [case "$host_os" in mingw* | windows*) true;; *) false;; esac])
  gl_HEADER_TIOCGWINSZ_NEEDS_SYS_IOCTL
  gl_HEADER_TIOCGWINSZ_IN_TERMIOS_H
  gl_WINSIZE_IN_PTEM
  gl_FUNC_WMEMCHR
  gl_CONDITIONAL([GL_COND_OBJ_WMEMCHR], [test $HAVE_WMEMCHR = 0])
  gl_WCHAR_MODULE_INDICATOR([wmemchr])
  gl_FUNC_WMEMCMP
  gl_CONDITIONAL([GL_COND_OBJ_WMEMCMP],
                 [test $HAVE_WMEMCMP = 0 || test $REPLACE_WMEMCMP = 1])
  gl_WCHAR_MODULE_INDICATOR([wmemcmp])
  gl_FUNC_WMEMCPY
  gl_CONDITIONAL([GL_COND_OBJ_WMEMCPY], [test $HAVE_WMEMCPY = 0])
  gl_WCHAR_MODULE_INDICATOR([wmemcpy])
  gl_FUNC_WMEMMOVE
  gl_CONDITIONAL([GL_COND_OBJ_WMEMMOVE], [test $HAVE_WMEMMOVE = 0])
  gl_WCHAR_MODULE_INDICATOR([wmemmove])
  gl_FUNC_WMEMPCPY
  gl_CONDITIONAL([GL_COND_OBJ_WMEMPCPY],
                 [test $HAVE_WMEMPCPY = 0 || test $REPLACE_WMEMPCPY = 1])
  gl_WCHAR_MODULE_INDICATOR([wmempcpy])
  gl_FUNC_WMEMSET
  gl_CONDITIONAL([GL_COND_OBJ_WMEMSET], [test $HAVE_WMEMSET = 0])
  gl_WCHAR_MODULE_INDICATOR([wmemset])
  gl_FUNC_WRITE
  gl_CONDITIONAL([GL_COND_OBJ_WRITE], [test $REPLACE_WRITE = 1])
  AM_COND_IF([GL_COND_OBJ_WRITE], [
    gl_PREREQ_WRITE
  ])
  gl_UNISTD_MODULE_INDICATOR([write])
  gl_WRITE_ANY_FILE
  gl_XALLOC
  gl_MODULE_INDICATOR([xalloc])
  gl_MODULE_INDICATOR([xalloc-die])
  gl_XGETCWD
  gl_XGETCWD
  gl_MODULE_INDICATOR([xgetgroups])
  AC_REQUIRE([AC_C_RESTRICT])
  gl_XNANOSLEEP
  m4_ifdef([AM_XGETTEXT_OPTION],
    [AM_][XGETTEXT_OPTION([--flag=xprintf:1:c-format])
     AM_][XGETTEXT_OPTION([--flag=xvprintf:1:c-format])
     AM_][XGETTEXT_OPTION([--flag=xfprintf:2:c-format])
     AM_][XGETTEXT_OPTION([--flag=xvfprintf:2:c-format])])
  gl_MODULE_INDICATOR([xreadlinkat])
  gl_XSIZE
  gl_MODULE_INDICATOR([xstdopen])
  gl_MODULE_INDICATOR([xstring-buffer])
  gl_MODULE_INDICATOR([xstring-buffer-reversed])
  gl_XSTRNDUP
  gl_XSTRTOD
  gl_XSTRTOL
  gl_XSTRTOLD
  gl_XVASPRINTF
  m4_ifdef([AM_XGETTEXT_OPTION],
    [AM_][XGETTEXT_OPTION([--flag=xasprintf:1:c-format])])
  gl_COMMON_DOUBLE_MATHFUNC([y0])
  gl_COMMON_DOUBLE_MATHFUNC([y1])
  gl_YESNO
  AC_REQUIRE([gl_YIELD])
  gl_COMMON_DOUBLE_MATHFUNC([yn])
  gl_STDIO_MODULE_INDICATOR([zprintf])
  gl_PREREQ_VASNPRINTF_WITH_GNU_EXTRAS
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  m4_ifval(gl_LIBSOURCES_LIST, [
    m4_syscmd([test ! -d ]m4_defn([gl_LIBSOURCES_DIR])[ ||
      for gl_file in ]gl_LIBSOURCES_LIST[ ; do
        if test ! -r ]m4_defn([gl_LIBSOURCES_DIR])[/$gl_file ; then
          echo "missing file ]m4_defn([gl_LIBSOURCES_DIR])[/$gl_file" >&2
          exit 1
        fi
      done])dnl
      m4_if(m4_sysval, [0], [],
        [AC_FATAL([expected source file, required through AC_LIBSOURCES, not found])])
  ])
  m4_popdef([GL_MODULE_INDICATOR_PREFIX])
  m4_popdef([GL_MACRO_PREFIX])
  m4_popdef([gl_LIBSOURCES_DIR])
  m4_popdef([gl_LIBSOURCES_LIST])
  m4_popdef([AC_LIBSOURCES])
  m4_popdef([AC_REPLACE_FUNCS])
  m4_popdef([AC_LIBOBJ])
  AC_CONFIG_COMMANDS_PRE([
    gl_libobjs=
    gl_ltlibobjs=
    gl_libobjdeps=
    gl_libgnu_libobjs=
    gl_libgnu_ltlibobjs=
    gl_libgnu_libobjdeps=
    if test -n "$gl_LIBOBJS"; then
      # Remove the extension.
changequote(,)dnl
      sed_drop_objext='s/\.o$//;s/\.obj$//'
      sed_dirname1='s,//*,/,g'
      sed_dirname2='s,\(.\)/$,\1,'
      sed_dirname3='s,[^/]*$,,'
      sed_basename1='s,.*/,,'
changequote([, ])dnl
      for i in `for i in $gl_LIBOBJS; do echo "$i"; done | sed -e "$sed_drop_objext" | sort | uniq`; do
        gl_libobjs="$gl_libobjs $i.$ac_objext"
        gl_ltlibobjs="$gl_ltlibobjs $i.lo"
        i_dir=`echo "$i" | sed -e "$sed_dirname1" -e "$sed_dirname2" -e "$sed_dirname3"`
        i_base=`echo "$i" | sed -e "$sed_basename1"`
        gl_libgnu_libobjs="$gl_libgnu_libobjs $i_dir""libgnu_a-$i_base.$ac_objext"
        gl_libgnu_ltlibobjs="$gl_libgnu_ltlibobjs $i_dir""libgnu_la-$i_base.lo"
        gl_libobjdeps="$gl_libobjdeps $i_dir\$(DEPDIR)/$i_base.Po"
        gl_libgnu_libobjdeps="$gl_libgnu_libobjdeps $i_dir\$(DEPDIR)/libgnu_a-$i_base.Po"
      done
    fi
    AC_SUBST([gl_LIBOBJS], [$gl_libobjs])
    AC_SUBST([gl_LTLIBOBJS], [$gl_ltlibobjs])
    AC_SUBST([gl_LIBOBJDEPS], [$gl_libobjdeps])
    AC_SUBST([gl_libgnu_LIBOBJS], [$gl_libgnu_libobjs])
    AC_SUBST([gl_libgnu_LTLIBOBJS], [$gl_libgnu_ltlibobjs])
    AC_SUBST([gl_libgnu_LIBOBJDEPS], [$gl_libgnu_libobjdeps])
  ])
  gltests_libdeps=
  gltests_ltlibdeps=
  m4_pushdef([AC_LIBOBJ], m4_defn([gltests_LIBOBJ]))
  m4_pushdef([AC_REPLACE_FUNCS], m4_defn([gltests_REPLACE_FUNCS]))
  m4_pushdef([AC_LIBSOURCES], m4_defn([gltests_LIBSOURCES]))
  m4_pushdef([gltests_LIBSOURCES_LIST], [])
  m4_pushdef([gltests_LIBSOURCES_DIR], [])
  m4_pushdef([GL_MACRO_PREFIX], [gltests])
  m4_pushdef([GL_MODULE_INDICATOR_PREFIX], [GL])
  gl_COMMON
  AC_REQUIRE([gl_CC_ALLOW_WARNINGS])
  AC_REQUIRE([gl_CXX_ALLOW_WARNINGS])
  gl_source_base='gltests'
  gl_source_base_prefix=
  gltests_WITNESS=IN_GNULIB_TESTS
  AC_SUBST([gltests_WITNESS])
  gl_module_indicator_condition=$gltests_WITNESS
  m4_pushdef([gl_MODULE_INDICATOR_CONDITION], [$gl_module_indicator_condition])
  AC_CHECK_FUNCS_ONCE([geteuid])
  AC_CHECK_HEADERS_ONCE([semaphore.h])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_REQUIRE([gl_SEMAPHORE])
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR
  gt_LOCALE_FR
  gt_LOCALE_TR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_TR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR
  gt_LOCALE_FR
  gt_LOCALE_FR
  gt_LOCALE_FR
  gt_LOCALE_FR
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gl_MUSL_LIBC
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gl_MUSL_LIBC
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gl_MUSL_LIBC
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gl_MUSL_LIBC
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gl_MUSL_LIBC
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gl_MUSL_LIBC
  AC_CHECK_DECLS_ONCE([alarm])
  AC_CHECK_FUNCS_ONCE([getgid getegid])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_CHECK_FUNCS_ONCE([getrlimit setrlimit])
  AC_CHECK_FUNCS_ONCE([strfmon_l snprintf_l])
  gl_CHECK_FUNCS_ANDROID([duplocale], [[#include <locale.h>]])
  gl_CHECK_FUNCS_ANDROID([nl_langinfo_l], [[#include <langinfo.h>]])
  AC_CHECK_HEADERS_ONCE([monetary.h])
  gt_FUNC_USELOCALE
  AC_CHECK_FUNCS_ONCE([geteuid])
  dnl Test for Linux system call close_range(), declared in <unistd.h>.
  gl_CHECK_FUNCS_ANDROID([close_range], [[#include <unistd.h>]])
  AC_CHECK_FUNCS_ONCE([getgid getegid])
  AC_CHECK_DECLS_ONCE([alarm])
  gl_MUSL_LIBC
  gl_MUSL_LIBC
  gl_MUSL_LIBC
  gl_MUSL_LIBC
  gl_MUSL_LIBC
  AC_CHECK_DECLS_ONCE([alarm])
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  AC_CHECK_FUNCS_ONCE([getrlimit setrlimit])
  gl_FUNC_UNGETC_WORKS
  gl_FUNC_UNGETC_WORKS
  gl_FUNC_UNGETC_WORKS
  gl_FUNC_UNGETC_WORKS
  gl_MUSL_LIBC
  gl_MUSL_LIBC
  dnl Distinguish OpenBSD >= 6.2 from OpenBSD < 6.2.
  gl_CHECK_FUNCS_ANDROID([duplocale], [[#include <locale.h>]])
  AC_C_BIGENDIAN
  AC_C_BIGENDIAN
  gl_MUSL_LIBC
  gl_MUSL_LIBC
  gl_MUSL_LIBC
  gl_MUSL_LIBC
  gl_MUSL_LIBC
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  gl_MUSL_LIBC
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  gl_MUSL_LIBC
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  gl_MUSL_LIBC
  gl_MUSL_LIBC
  gl_MUSL_LIBC
  gl_MUSL_LIBC
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gl_MUSL_LIBC
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  gl_FUNC_MMAP_ANON
  gl_LIBDL
  dnl Disable the OpenBSD "retguard" stack protector for this test.
  gl_COMPILER_OPTION_IF([-fno-ret-protector],
    [DISABLE_OPENBSD_RETGUARD='-fno-ret-protector'],
    [DISABLE_OPENBSD_RETGUARD=])
  AC_SUBST([DISABLE_OPENBSD_RETGUARD])
  AC_REQUIRE([AC_C_INLINE])
  AC_CHECK_FUNCS_ONCE([getgid getegid])
  gl_LIBTEXTSTYLE_OPTIONAL
  gl_WINDOWS_RC
  gl_CHECK_FUNCS_ANDROID([newlocale], [[#include <locale.h>]])
  gl_CHECK_FUNCS_ANDROID([newlocale], [[#include <locale.h>]])
  gl_MUSL_LIBC
  gl_WINDOWS_RC
  AC_CHECK_HEADERS_ONCE([semaphore.h])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_REQUIRE([gl_SEMAPHORE])
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_TR_UTF8
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_TR_UTF8
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gl_WINDOWS_RC
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR_UTF8
  gt_LOCALE_ZH_CN
  gt_LOCALE_TR_UTF8
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR_UTF8
  gt_LOCALE_TR_UTF8
  gt_LOCALE_ZH_CN
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR_UTF8
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR_UTF8
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR_UTF8
  gt_LOCALE_TR_UTF8
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR_UTF8
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR_UTF8
  gt_LOCALE_TR_UTF8
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR_UTF8
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR_UTF8
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  dnl Check for prerequisites for memory fence checks.
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  AC_CHECK_DECLS_ONCE([alarm])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  AC_CHECK_HEADERS_ONCE([semaphore.h])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_REQUIRE([gl_SEMAPHORE])
  AC_CHECK_DECLS_ONCE([alarm])
  NET_IF_LIB=
  gl_saved_libs="$LIBS"
  AC_SEARCH_LIBS([if_nameindex], [socket],
    [AC_DEFINE([HAVE_IF_NAMEINDEX], [1], [Define if you have if_nameindex.])
     if test "$ac_cv_search_if_nameindex" != "none required"; then
       NET_IF_LIB="$ac_cv_search_if_nameindex"
     fi])
  LIBS="$gl_saved_libs"
  AC_SUBST([NET_IF_LIB])
  gl_CHECK_FUNCS_ANDROID([nl_langinfo_l], [[#include <langinfo.h>]])
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_FUNC_USELOCALE
  gl_MUSL_LIBC
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gl_MUSL_LIBC
  gl_WINDOWS_RC
  AC_CHECK_DECLS_ONCE([alarm])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_CHECK_FUNCS_ONCE([socketpair])
  AC_CHECK_HEADERS_ONCE([unistd.h sys/wait.h])
  gl_MUSL_LIBC
  AC_EGREP_CPP([notposix], [[
  #if defined _MSC_VER || defined __MINGW32__
    notposix
  #endif
    ]],
    [posix_spawn_ported=no],
    [posix_spawn_ported=yes])
  gl_CONDITIONAL([POSIX_SPAWN_PORTED], [test $posix_spawn_ported = yes])
  AC_CHECK_FUNCS_ONCE([getrlimit setrlimit])
  AC_CHECK_HEADERS_ONCE([sys/wait.h])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_CHECK_HEADERS_ONCE([semaphore.h])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_REQUIRE([gl_SEMAPHORE])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_CHECK_HEADERS_ONCE([semaphore.h])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_REQUIRE([gl_SEMAPHORE])
  AC_CHECK_HEADERS_ONCE([semaphore.h])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_REQUIRE([gl_SEMAPHORE])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_CHECK_DECLS_ONCE([alarm])
  dnl Check for prerequisites for memory fence checks.
  dnl FIXME: zerosize-ptr.h requires these: make a module for it
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  dnl Check for prerequisites for memory fence checks.
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_CHECK_HEADERS_ONCE([sys/wait.h])
  AC_CHECK_FUNCS_ONCE([geteuid])
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gl_WINDOWS_RC
  AC_CHECK_FUNCS_ONCE([setrlimit])
  gl_FUNC_MMAP_ANON
  AC_CHECK_DECLS_ONCE([alarm])
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  AC_REQUIRE([gl_FEATURES_H])
  AC_PROG_MKDIR_P
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  AC_DEFINE([CHECK_SNPRINTF_POSIX], 1,
    [Define to 1 for strict checking in test-snprintf.c.])
  AC_CHECK_HEADERS_ONCE([semaphore.h])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_REQUIRE([gl_SEMAPHORE])
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  gl_FUNC_MMAP_ANON
  AC_REQUIRE([gt_TYPE_WINT_T])
  gl_DOUBLE_EXPONENT_LOCATION
  gt_LOCALE_FR
  gl_MUSL_LIBC
  AC_CHECK_DECLS_ONCE([alarm])
  gt_LOCALE_FR
  gl_MUSL_LIBC
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  dnl Check for prerequisites for memory fence checks.
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  AC_CHECK_DECLS_ONCE([alarm])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  AC_CHECK_FUNCS_ONCE([shutdown])
  gl_SOCKET_FAMILIES
  gl_SOCKET_FAMILY_UNIX
  AC_CHECK_DECLS_ONCE([alarm])
  gl_TM_GMTOFF
  AC_CHECK_DECLS_ONCE([alarm])
  gl_MUSL_LIBC
  gl_MUSL_LIBC
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR_UTF8
  gt_LOCALE_ZH_CN
  TEST_TSEARCH_LIBM=
  AC_LINK_IFELSE(
    [AC_LANG_PROGRAM(
       [[#ifndef __NO_MATH_INLINES
         # define __NO_MATH_INLINES 1 /* for glibc */
         #endif
         #include <math.h>
         double x;]],
       [[x = log (x);]])],
    [],
    [TEST_TSEARCH_LIBM=-lm])
  AC_SUBST([TEST_TSEARCH_LIBM])
  gl_CHECK_FUNCS_ANDROID([initstate], [[#include <stdlib.h>]])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_REQUIRE([gl_ANSI_CXX])
  if test "$CXX" != no; then
    dnl On FreeBSD 12, 'c++' defines __cplusplus to 201402, although it does not
    dnl have the <cuchar> header file from C++11.
    AC_CACHE_CHECK([whether the C++ compiler has <cuchar>],
      [gl_cv_cxxheader_cuchar],
      [AC_LANG_PUSH([C++])
       AC_COMPILE_IFELSE(
         [AC_LANG_PROGRAM(
            [[#include <cuchar>]],
            [[]])
         ],
         [gl_cv_cxxheader_cuchar=yes],
         [gl_cv_cxxheader_cuchar=no])
       AC_LANG_POP([C++])
      ])
  else
    gl_cv_cxxheader_cuchar=no
  fi
  gl_CONDITIONAL([CXX_HAVE_CUCHAR], [test $gl_cv_cxxheader_cuchar != no])
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_TR_UTF8
  gt_LOCALE_ZH_CN
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR_UTF8
  gt_LOCALE_ZH_CN
  gt_LOCALE_AR
  AC_CHECK_DECLS_ONCE([alarm])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_CHECK_DECLS_ONCE([alarm])
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  AC_CHECK_DECLS_ONCE([alarm])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  AC_CHECK_DECLS_ONCE([alarm])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  AC_CHECK_DECLS_ONCE([alarm])
  gt_LOCALE_FR
  abs_aux_dir=`cd "$ac_aux_dir"; pwd`
  AC_SUBST([abs_aux_dir])
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  gl_MUSL_LIBC
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  abs_aux_dir=`cd "$ac_aux_dir"; pwd`
  AC_SUBST([abs_aux_dir])
  gl_FUNC_MMAP_ANON
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  AC_DEFINE([CHECK_VSNPRINTF_POSIX], 1,
    [Define to 1 for strict checking in test-vsnprintf.c.])
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  AC_CHECK_DECLS_ONCE([alarm])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  m4_popdef([gl_MODULE_INDICATOR_CONDITION])
  m4_ifval(gltests_LIBSOURCES_LIST, [
    m4_syscmd([test ! -d ]m4_defn([gltests_LIBSOURCES_DIR])[ ||
      for gl_file in ]gltests_LIBSOURCES_LIST[ ; do
        if test ! -r ]m4_defn([gltests_LIBSOURCES_DIR])[/$gl_file ; then
          echo "missing file ]m4_defn([gltests_LIBSOURCES_DIR])[/$gl_file" >&2
          exit 1
        fi
      done])dnl
      m4_if(m4_sysval, [0], [],
        [AC_FATAL([expected source file, required through AC_LIBSOURCES, not found])])
  ])
  m4_popdef([GL_MODULE_INDICATOR_PREFIX])
  m4_popdef([GL_MACRO_PREFIX])
  m4_popdef([gltests_LIBSOURCES_DIR])
  m4_popdef([gltests_LIBSOURCES_LIST])
  m4_popdef([AC_LIBSOURCES])
  m4_popdef([AC_REPLACE_FUNCS])
  m4_popdef([AC_LIBOBJ])
  AC_CONFIG_COMMANDS_PRE([
    gltests_libobjs=
    gltests_ltlibobjs=
    gltests_libobjdeps=
    gltests_libgnu_libobjs=
    gltests_libgnu_ltlibobjs=
    gltests_libgnu_libobjdeps=
    if test -n "$gltests_LIBOBJS"; then
      # Remove the extension.
changequote(,)dnl
      sed_drop_objext='s/\.o$//;s/\.obj$//'
      sed_dirname1='s,//*,/,g'
      sed_dirname2='s,\(.\)/$,\1,'
      sed_dirname3='s,[^/]*$,,'
      sed_basename1='s,.*/,,'
changequote([, ])dnl
      for i in `for i in $gltests_LIBOBJS; do echo "$i"; done | sed -e "$sed_drop_objext" | sort | uniq`; do
        gltests_libobjs="$gltests_libobjs $i.$ac_objext"
        gltests_ltlibobjs="$gltests_ltlibobjs $i.lo"
        i_dir=`echo "$i" | sed -e "$sed_dirname1" -e "$sed_dirname2" -e "$sed_dirname3"`
        i_base=`echo "$i" | sed -e "$sed_basename1"`
        gltests_libgnu_libobjs="$gltests_libgnu_libobjs $i_dir""libgnu_a-$i_base.$ac_objext"
        gltests_libgnu_ltlibobjs="$gltests_libgnu_ltlibobjs $i_dir""libgnu_la-$i_base.lo"
        gltests_libobjdeps="$gltests_libobjdeps $i_dir\$(DEPDIR)/$i_base.Po"
        gltests_libgnu_libobjdeps="$gltests_libgnu_libobjdeps $i_dir\$(DEPDIR)/libgnu_a-$i_base.Po"
      done
    fi
    AC_SUBST([gltests_LIBOBJS], [$gltests_libobjs])
    AC_SUBST([gltests_LTLIBOBJS], [$gltests_ltlibobjs])
    AC_SUBST([gltests_LIBOBJDEPS], [$gltests_libobjdeps])
    AC_SUBST([gltests_libgnu_LIBOBJS], [$gltests_libgnu_libobjs])
    AC_SUBST([gltests_libgnu_LTLIBOBJS], [$gltests_libgnu_ltlibobjs])
    AC_SUBST([gltests_libgnu_LIBOBJDEPS], [$gltests_libgnu_libobjdeps])
  ])
  LIBGNU_LIBDEPS="$gl_libdeps"
  AC_SUBST([LIBGNU_LIBDEPS])
  LIBGNU_LTLIBDEPS="$gl_ltlibdeps"
  AC_SUBST([LIBGNU_LTLIBDEPS])
  LIBTESTS_LIBDEPS="$gltests_libdeps"
  AC_SUBST([LIBTESTS_LIBDEPS])
])

# Like AC_LIBOBJ, except that the module name goes
# into gl_LIBOBJS instead of into LIBOBJS.
AC_DEFUN([gl_LIBOBJ], [
  AS_LITERAL_IF([$1], [gl_LIBSOURCES([$1.c])])dnl
  gl_LIBOBJS="$gl_LIBOBJS $1.$ac_objext"
])

# Like AC_REPLACE_FUNCS, except that the module name goes
# into gl_LIBOBJS instead of into LIBOBJS.
AC_DEFUN([gl_REPLACE_FUNCS], [
  m4_foreach_w([gl_NAME], [$1], [AC_LIBSOURCES(gl_NAME[.c])])dnl
  AC_CHECK_FUNCS([$1], , [gl_LIBOBJ($ac_func)])
])

# Like AC_LIBSOURCES, except the directory where the source file is
# expected is derived from the gnulib-tool parameterization,
# and alloca is special cased (for the alloca-opt module).
# We could also entirely rely on EXTRA_lib..._SOURCES.
AC_DEFUN([gl_LIBSOURCES], [
  m4_foreach([_gl_NAME], [$1], [
    m4_if(_gl_NAME, [alloca.c], [], [
      m4_define([gl_LIBSOURCES_DIR], [gllib])
      m4_append([gl_LIBSOURCES_LIST], _gl_NAME, [ ])
    ])
  ])
])

# Like AC_LIBOBJ, except that the module name goes
# into gltests_LIBOBJS instead of into LIBOBJS.
AC_DEFUN([gltests_LIBOBJ], [
  AS_LITERAL_IF([$1], [gltests_LIBSOURCES([$1.c])])dnl
  gltests_LIBOBJS="$gltests_LIBOBJS $1.$ac_objext"
])

# Like AC_REPLACE_FUNCS, except that the module name goes
# into gltests_LIBOBJS instead of into LIBOBJS.
AC_DEFUN([gltests_REPLACE_FUNCS], [
  m4_foreach_w([gl_NAME], [$1], [AC_LIBSOURCES(gl_NAME[.c])])dnl
  AC_CHECK_FUNCS([$1], , [gltests_LIBOBJ($ac_func)])
])

# Like AC_LIBSOURCES, except the directory where the source file is
# expected is derived from the gnulib-tool parameterization,
# and alloca is special cased (for the alloca-opt module).
# We could also entirely rely on EXTRA_lib..._SOURCES.
AC_DEFUN([gltests_LIBSOURCES], [
  m4_foreach([_gl_NAME], [$1], [
    m4_if(_gl_NAME, [alloca.c], [], [
      m4_define([gltests_LIBSOURCES_DIR], [gltests])
      m4_append([gltests_LIBSOURCES_LIST], _gl_NAME, [ ])
    ])
  ])
])

gl_INIT

AC_CONFIG_FILES([Makefile gllib/Makefile glm4/Makefile gltests/Makefile])
AC_OUTPUT
