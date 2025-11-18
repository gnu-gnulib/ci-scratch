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

# This is actually already done in the pre-early phase.
# gl_USE_SYSTEM_EXTENSIONS
gl_USE_AIX_EXTENSIONS
gl_SET_LARGEFILE_SOURCE
gl_FP_IEEE
gl_SET_LARGEFILE_SOURCE
gl_SET_LARGEFILE_SOURCE
AC_SYS_LARGEFILE
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
  gl_FUNC_ACCESS
  gl_CONDITIONAL([GL_COND_OBJ_ACCESS], [test $REPLACE_ACCESS = 1])
  gl_UNISTD_MODULE_INDICATOR([access])
  gl_FUNC_ACL
  gl_CONDITIONAL([GL_COND_OBJ_ACL_ENTRIES], [test $NEED_ACL_ENTRIES = 1])
  gl_ALIGNASOF
  gl_FUNC_ALLOCA
  gl_CONDITIONAL_HEADER([alloca.h])
  AC_PROG_MKDIR_P
  gl_FUNC_ALPHASORT
  gl_CONDITIONAL([GL_COND_OBJ_ALPHASORT], [test $HAVE_ALPHASORT = 0])
  AM_COND_IF([GL_COND_OBJ_ALPHASORT], [
    gl_PREREQ_ALPHASORT
  ])
  gl_DIRENT_MODULE_INDICATOR([alphasort])
  gl_FUNC_ARGZ
  gl_CONDITIONAL_HEADER([argz.h])
  AC_PROG_MKDIR_P
  gl_CONDITIONAL([GL_COND_OBJ_ARGZ], [test -n "$ARGZ_H"])
  gl_ARPA_INET_H
  gl_ARPA_INET_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_ASSERT
  gl_ASSERT_H
  gl_CONDITIONAL_HEADER([assert.h])
  AC_PROG_MKDIR_P
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_REQUIRE([AC_C_INLINE])
  AC_REQUIRE([AC_C_INLINE])
  gl_C_BOOL
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
  gl_C_STRTOD
  gl_C_STRTOLD
  AC_REQUIRE([AC_C_RESTRICT])
  AC_LIBOBJ([printf-args])
  AC_LIBOBJ([printf-parse])
  gl_PREREQ_PRINTF_ARGS
  gl_PREREQ_PRINTF_PARSE
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  AC_REQUIRE([AC_C_RESTRICT])
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
  gl_UNISTD_MODULE_INDICATOR([chdir])
  gl_FUNC_CHDIR_LONG
  gl_CONDITIONAL([GL_COND_OBJ_CHDIR_LONG],
                 [test $gl_cv_have_unlimited_file_name_length = no])
  AM_COND_IF([GL_COND_OBJ_CHDIR_LONG], [
    gl_PREREQ_CHDIR_LONG
  ])
  AC_DEFINE([SIGNAL_SAFE_LIST], [1], [Define if lists must be signal-safe.])
  gl_CLOCK_TIME
  gl_MODULE_INDICATOR_FOR_TESTS([cloexec])
  gl_FUNC_CLOSE
  gl_CONDITIONAL([GL_COND_OBJ_CLOSE], [test $REPLACE_CLOSE = 1])
  gl_UNISTD_MODULE_INDICATOR([close])
  gl_MODULE_INDICATOR([close])
  gl_FUNC_CLOSEDIR
  gl_CONDITIONAL([GL_COND_OBJ_CLOSEDIR],
                 [test $HAVE_CLOSEDIR = 0 || test $REPLACE_CLOSEDIR = 1])
  gl_DIRENT_MODULE_INDICATOR([closedir])
  gl_CONFIGMAKE
  AC_PROG_MKDIR_P
  gl_COPY_FILE
  gl_FUNC_COPY_FILE_RANGE
  gl_CONDITIONAL([GL_COND_OBJ_COPY_FILE_RANGE],
                 [test $HAVE_COPY_FILE_RANGE = 0 ||
                  test $REPLACE_COPY_FILE_RANGE = 1])
  gl_UNISTD_MODULE_INDICATOR([copy-file-range])
  AC_REQUIRE([gl_CRC_SLICE_BY_8])
  gl_BUILD_CC
  AC_PROG_MKDIR_P
  AC_REQUIRE([AC_C_RESTRICT])
  AC_REQUIRE([AC_C_RESTRICT])
  gl_ARCTWO
  gl_GC
  gl_CONDITIONAL([GL_COND_OBJ_GC_LIBGCRYPT], [test "$ac_cv_libgcrypt" = yes])
  if test $gl_cond_libtool = false; then
    gl_ltlibdeps="$gl_ltlibdeps $LTLIBGCRYPT"
    gl_libdeps="$gl_libdeps $LIBGCRYPT"
  fi
  AC_REQUIRE([AC_C_RESTRICT])
  AC_REQUIRE([AC_C_RESTRICT])
  gl_MD4
  AC_REQUIRE([AC_C_RESTRICT])
  gl_SHA1
  AC_REQUIRE([AC_C_RESTRICT])
  gl_SHA256
  AC_REQUIRE([AC_C_RESTRICT])
  gl_SHA3
  AC_REQUIRE([AC_C_RESTRICT])
  gl_SHA512
  gl_SM3
  AC_REQUIRE([gt_CSHARPCOMP])
  AC_CONFIG_FILES([csharpcomp.sh:build-aux/csharpcomp.sh.in])
  # You need to invoke gt_CSHARPEXEC yourself, possibly with arguments.
  AC_CONFIG_FILES([csharpexec.sh:build-aux/csharpexec.sh.in])
  gl_CTYPE_H
  gl_CTYPE_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_CYCLE_CHECK
  gl_CHECK_TYPE_STRUCT_DIRENT_D_INO
  gl_CHECK_TYPE_STRUCT_DIRENT_D_TYPE
  AC_REQUIRE([AC_C_INLINE])
  gl_DIRENT_H
  gl_DIRENT_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_FUNC_DIRFD
  gl_CONDITIONAL([GL_COND_OBJ_DIRFD],
                 [test $HAVE_DIRFD = 0 || test $REPLACE_DIRFD = 1])
  AM_COND_IF([GL_COND_OBJ_DIRFD], [
    gl_PREREQ_DIRFD
  ])
  gl_DIRENT_MODULE_INDICATOR([dirfd])
  gl_MODULE_INDICATOR([dirname])
  gl_DOUBLE_SLASH_ROOT
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
  gl_FUNC_DUPLOCALE
  gl_CONDITIONAL([GL_COND_OBJ_DUPLOCALE],
                 [test $HAVE_LOCALE_T = 0 || { test $HAVE_DUPLOCALE = 1 && test $REPLACE_DUPLOCALE = 1; }])
  AM_COND_IF([GL_COND_OBJ_DUPLOCALE], [
    gl_PREREQ_DUPLOCALE
  ])
  gl_LOCALE_MODULE_INDICATOR([duplocale])
  gl_ENDIAN_H
  gl_CONDITIONAL_HEADER([endian.h])
  AC_PROG_MKDIR_P
  gl_ENVIRON
  gl_UNISTD_MODULE_INDICATOR([environ])
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
  gl_EXECINFO_H
  gl_CONDITIONAL_HEADER([execinfo.h])
  AC_PROG_MKDIR_P
  gl_CONDITIONAL([GL_COND_OBJ_EXECINFO], [$GL_GENERATE_EXECINFO_H])
  gl_EXECUTE
  gl_FUNC_EXECVE
  gl_CONDITIONAL([GL_COND_OBJ_EXECVE], [test $REPLACE_EXECVE = 1])
  gl_UNISTD_MODULE_INDICATOR([execve])
  AC_REQUIRE([gl_EXTERN_INLINE])
  gl_FATAL_SIGNAL
  gl_FUNC_FCHDIR
  gl_CONDITIONAL([GL_COND_OBJ_FCHDIR],
                 [test $HAVE_FCHDIR = 0 || test $REPLACE_FCHDIR = 1])
  AM_COND_IF([GL_COND_OBJ_FCHDIR], [
    gl_PREREQ_FCHDIR
  ])
  gl_UNISTD_MODULE_INDICATOR([fchdir])
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
  gl_FUNC_FDOPENDIR
  gl_CONDITIONAL([GL_COND_OBJ_FDOPENDIR],
                 [test $HAVE_FDOPENDIR = 0 || test $REPLACE_FDOPENDIR = 1])
  gl_DIRENT_MODULE_INDICATOR([fdopendir])
  gl_MODULE_INDICATOR([fdopendir])
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
  gl_CHECK_FUNCS_ANDROID([strtof], [[#include <stdlib.h>]])
  gl_FUNC_FTS
  dnl Use this version of fts unconditionally, since the GNU libc and
  dnl NetBSD versions have bugs and/or unnecessary limitations.
  gl_CONDITIONAL([GL_COND_OBJ_FTS], [true])
  gl_MODULE_INDICATOR([fwriteerror])
  AC_REQUIRE([AC_C_INLINE])
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
  gl_FUNC_GETDTABLESIZE
  gl_CONDITIONAL([GL_COND_OBJ_GETDTABLESIZE],
                 [test $HAVE_GETDTABLESIZE = 0 || test $REPLACE_GETDTABLESIZE = 1])
  AM_COND_IF([GL_COND_OBJ_GETDTABLESIZE], [
    gl_PREREQ_GETDTABLESIZE
  ])
  gl_UNISTD_MODULE_INDICATOR([getdtablesize])
  gl_FUNC_GETGROUPS
  gl_CONDITIONAL([GL_COND_OBJ_GETGROUPS],
                 [test $HAVE_GETGROUPS = 0 || test $REPLACE_GETGROUPS = 1])
  gl_UNISTD_MODULE_INDICATOR([getgroups])
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
  gl_FUNC_GETPAGESIZE
  gl_CONDITIONAL([GL_COND_OBJ_GETPAGESIZE],
                 [test $HAVE_GETPAGESIZE = 0 || test $REPLACE_GETPAGESIZE = 1])
  gl_UNISTD_MODULE_INDICATOR([getpagesize])
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
  gl_GETTEXT_H
  gl_GETTIME
  gl_FUNC_GETTIMEOFDAY
  gl_CONDITIONAL([GL_COND_OBJ_GETTIMEOFDAY],
                 [test $HAVE_GETTIMEOFDAY = 0 || test $REPLACE_GETTIMEOFDAY = 1])
  AM_COND_IF([GL_COND_OBJ_GETTIMEOFDAY], [
    gl_PREREQ_GETTIMEOFDAY
  ])
  gl_SYS_TIME_MODULE_INDICATOR([gettimeofday])
  gl_GETUGROUPS
  AC_PROG_MKDIR_P
  AC_PROG_MKDIR_P
  GNULIB_I18N
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
  AC_DEFUN([gl_HAVE_MODULE_HAVELIB])
  gl_HOSTENT
  gl_HUMAN
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
  gl_INTTYPES_INCOMPLETE
  gl_INTTYPES_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_ISFINITE
  gl_CONDITIONAL([GL_COND_OBJ_ISFINITE], [test $REPLACE_ISFINITE = 1])
  gl_MATH_MODULE_INDICATOR([isfinite])
  gl_ISINF
  gl_CONDITIONAL([GL_COND_OBJ_ISINF], [test $REPLACE_ISINF = 1])
  gl_MATH_MODULE_INDICATOR([isinf])
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
  gl_MODULE_INDICATOR([issymlink])
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
  # You need to invoke gt_JAVACOMP yourself, possibly with arguments.
  AC_CONFIG_FILES([javacomp.sh:build-aux/javacomp.sh.in])
  # You need to invoke gt_JAVAEXEC yourself, possibly with arguments.
  AC_CONFIG_FILES([javaexec.sh:build-aux/javaexec.sh.in])
  AC_REQUIRE([AC_C_INLINE])
  gl_LANGINFO_H
  gl_LANGINFO_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  AC_REQUIRE([gl_LARGEFILE])
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
  gl___INLINE
  gl_LIMITS_H
  gl_CONDITIONAL_HEADER([limits.h])
  AC_PROG_MKDIR_P
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
  gl_LOCK
  gl_MODULE_INDICATOR([lock])
  gl_FUNC_LSTAT
  gl_CONDITIONAL([GL_COND_OBJ_LSTAT], [test $REPLACE_LSTAT = 1])
  AM_COND_IF([GL_COND_OBJ_LSTAT], [
    gl_PREREQ_LSTAT
  ])
  gl_SYS_STAT_MODULE_INDICATOR([lstat])
  gl_MODULE_INDICATOR([lstat])
  gl_FUNC_MALLOC_GNU
  if test $REPLACE_MALLOC_FOR_MALLOC_GNU = 1; then
    AC_LIBOBJ([malloc])
  fi
  gl_STDLIB_MODULE_INDICATOR([malloc-gnu])
  AC_REQUIRE([gl_FUNC_MALLOC_POSIX])
  if test $REPLACE_MALLOC_FOR_MALLOC_POSIX = 1; then
    AC_LIBOBJ([malloc])
  fi
  gl_STDLIB_MODULE_INDICATOR([malloc-posix])
  gl_MALLOCA
  gl_MATH_H
  gl_MATH_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_MBCHAR
  gl_MBITER
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
  gl_STRING_MODULE_INDICATOR([mbscasestr])
  gl_FUNC_MBSINIT
  gl_CONDITIONAL([GL_COND_OBJ_MBSINIT],
                 [test $HAVE_MBSINIT = 0 || test $REPLACE_MBSINIT = 1])
  AM_COND_IF([GL_COND_OBJ_MBSINIT], [
    gl_PREREQ_MBSINIT
  ])
  gl_WCHAR_MODULE_INDICATOR([mbsinit])
  gl_FUNC_MBSLEN
  gl_STRING_MODULE_INDICATOR([mbslen])
  gl_STRING_MODULE_INDICATOR([mbsnlen])
  gl_STRING_MODULE_INDICATOR([mbsstr])
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
  gl_MEMCASECMP
  gl_FUNC_MEMCHR
  gl_CONDITIONAL([GL_COND_OBJ_MEMCHR], [test $REPLACE_MEMCHR = 1])
  AM_COND_IF([GL_COND_OBJ_MEMCHR], [
    gl_PREREQ_MEMCHR
  ])
  gl_STRING_MODULE_INDICATOR([memchr])
  gl_FUNC_MEMMEM
  if test $HAVE_MEMMEM = 0 || test $REPLACE_MEMMEM = 1; then
    AC_LIBOBJ([memmem])
  fi
  gl_FUNC_MEMMEM_SIMPLE
  if test $HAVE_MEMMEM = 0 || test $REPLACE_MEMMEM = 1; then
    AC_LIBOBJ([memmem])
  fi
  gl_STRING_MODULE_INDICATOR([memmem])
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
  gl_MGETGROUPS
  gl_MINMAX
  # Conditionally invoke gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS.
  gl_FUNC_MKDIR
  gl_CONDITIONAL([GL_COND_OBJ_MKDIR], [test $REPLACE_MKDIR = 1])
  gl_SYS_STAT_MODULE_INDICATOR([mkdir])
  gl_FUNC_MKDTEMP
  gl_CONDITIONAL([GL_COND_OBJ_MKDTEMP], [test $HAVE_MKDTEMP = 0])
  AM_COND_IF([GL_COND_OBJ_MKDTEMP], [
    gl_PREREQ_MKDTEMP
  ])
  gl_STDLIB_MODULE_INDICATOR([mkdtemp])
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
  gl_MODECHANGE
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
  gl_MULTIARCH
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
  gl_FUNC_NL_LANGINFO
  gl_CONDITIONAL([GL_COND_OBJ_NL_LANGINFO],
                 [test $HAVE_NL_LANGINFO = 0 || test $REPLACE_NL_LANGINFO = 1])
  gl_CONDITIONAL([GL_COND_OBJ_NL_LANGINFO_LOCK],
                 [test $REPLACE_NL_LANGINFO = 1 && test $NL_LANGINFO_MTSAFE = 0])
  if test $REPLACE_NL_LANGINFO = 1 && test $NL_LANGINFO_MTSAFE = 0; then
    gl_PREREQ_NL_LANGINFO_LOCK
  fi
  gl_LANGINFO_MODULE_INDICATOR([nl_langinfo])
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
  gl_FUNC_OPENDIR
  gl_CONDITIONAL([GL_COND_OBJ_OPENDIR],
                 [test $HAVE_OPENDIR = 0 || test $REPLACE_OPENDIR = 1])
  gl_DIRENT_MODULE_INDICATOR([opendir])
  gl_PATHMAX
  AC_CHECK_FUNCS_ONCE([select])
  gl_FUNC_PIPE
  gl_CONDITIONAL([GL_COND_OBJ_PIPE], [test $HAVE_PIPE = 0])
  gl_UNISTD_MODULE_INDICATOR([pipe])
  gl_FUNC_PIPE2
  gl_UNISTD_MODULE_INDICATOR([pipe2])
  gl_MODULE_INDICATOR([pipe2-safer])
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
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNATTR_SETSIGMASK],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawnattr_setsigmask])
  gl_POSIX_SPAWN
  gl_CONDITIONAL([GL_COND_OBJ_SPAWNP],
                 [test $HAVE_POSIX_SPAWN = 0 || test $REPLACE_POSIX_SPAWN = 1])
  gl_SPAWN_MODULE_INDICATOR([posix_spawnp])
  gl_FUNC_PRINTF_FREXP
  gl_FUNC_PRINTF_FREXPL
  m4_divert_text([INIT_PREPARE], [gl_printf_safe=yes])
  AC_CHECK_DECLS([program_invocation_name], [], [], [#include <errno.h>])
  AC_CHECK_DECLS([program_invocation_short_name], [], [], [#include <errno.h>])
  gl_FUNC_PSELECT
  gl_CONDITIONAL([GL_COND_OBJ_PSELECT],
                 [test $HAVE_PSELECT = 0 || test $REPLACE_PSELECT = 1])
  gl_SYS_SELECT_MODULE_INDICATOR([pselect])
  gl_PTHREAD_H
  gl_PTHREAD_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_PTHREAD_ONCE
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_ONCE],
                 [test $HAVE_PTHREAD_ONCE = 0 || test $REPLACE_PTHREAD_ONCE = 1])
  gl_PTHREAD_MODULE_INDICATOR([pthread-once])
  gl_FUNC_PTHREAD_SIGMASK
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_SIGMASK],
                 [test $HAVE_PTHREAD_SIGMASK = 0 || test $REPLACE_PTHREAD_SIGMASK = 1])
  AM_COND_IF([GL_COND_OBJ_PTHREAD_SIGMASK], [
    gl_PREREQ_PTHREAD_SIGMASK
  ])
  gl_SIGNAL_MODULE_INDICATOR([pthread_sigmask])
  gl_FUNC_PUTENV
  gl_CONDITIONAL([GL_COND_OBJ_PUTENV], [test $REPLACE_PUTENV = 1])
  AM_COND_IF([GL_COND_OBJ_PUTENV], [
    gl_PREREQ_PUTENV
  ])
  gl_STDLIB_MODULE_INDICATOR([putenv])
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
  gl_FUNC_READDIR
  gl_CONDITIONAL([GL_COND_OBJ_READDIR],
                 [test $HAVE_READDIR = 0 || test $REPLACE_READDIR = 1])
  gl_DIRENT_MODULE_INDICATOR([readdir])
  gl_FUNC_READLINK
  gl_CONDITIONAL([GL_COND_OBJ_READLINK],
                 [test $HAVE_READLINK = 0 || test $REPLACE_READLINK = 1])
  AM_COND_IF([GL_COND_OBJ_READLINK], [
    gl_PREREQ_READLINK
  ])
  gl_UNISTD_MODULE_INDICATOR([readlink])
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
  gl_REGEX
  gl_CONDITIONAL([GL_COND_OBJ_REGEX], [test $ac_use_included_regex = yes])
  AM_COND_IF([GL_COND_OBJ_REGEX], [
    gl_PREREQ_REGEX
  ])
  AC_REQUIRE([AC_C_RESTRICT])
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
  gl_FUNC_REWINDDIR
  gl_CONDITIONAL([GL_COND_OBJ_REWINDDIR],
                 [test $HAVE_REWINDDIR = 0 || test $REPLACE_REWINDDIR = 1])
  gl_DIRENT_MODULE_INDICATOR([rewinddir])
  gl_FUNC_RMDIR
  gl_CONDITIONAL([GL_COND_OBJ_RMDIR], [test $REPLACE_RMDIR = 1])
  gl_UNISTD_MODULE_INDICATOR([rmdir])
  gl_PREREQ_SAFE_READ
  gl_PREREQ_SAFE_WRITE
  gl_SAVE_CWD
  gl_FUNC_SCANDIR
  gl_CONDITIONAL([GL_COND_OBJ_SCANDIR], [test $HAVE_SCANDIR = 0])
  AM_COND_IF([GL_COND_OBJ_SCANDIR], [
    gl_PREREQ_SCANDIR
  ])
  gl_DIRENT_MODULE_INDICATOR([scandir])
  gl_SCHED_H
  gl_SCHED_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
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
  gl_SERVENT
  gl_FUNC_SETENV
  gl_CONDITIONAL([GL_COND_OBJ_SETENV],
                 [test $HAVE_SETENV = 0 || test $REPLACE_SETENV = 1])
  gl_STDLIB_MODULE_INDICATOR([setenv])
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
  gl_SH_FILENAME
  AC_REQUIRE([AC_C_RESTRICT])
  gl_FUNC_SIG2STR
  gl_CONDITIONAL([GL_COND_OBJ_SIG2STR],
                 [test $HAVE_SIG2STR = 0 || test $HAVE_STR2SIG = 0])
  AM_COND_IF([GL_COND_OBJ_SIG2STR], [
    gl_PREREQ_SIG2STR
  ])
  gl_SIGNAL_MODULE_INDICATOR([sig2str])
  gl_SIGACTION
  gl_CONDITIONAL([GL_COND_OBJ_SIGACTION], [test $HAVE_SIGACTION = 0])
  AM_COND_IF([GL_COND_OBJ_SIGACTION], [
    gl_PREREQ_SIGACTION
  ])
  gl_SIGNAL_MODULE_INDICATOR([sigaction])
  gl_SIGNAL_H
  gl_SIGNAL_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SIGNBIT
  gl_CONDITIONAL([GL_COND_OBJ_SIGNBIT3], [test $REPLACE_SIGNBIT = 1])
  gl_MATH_MODULE_INDICATOR([signbit])
  gl_SIGNALBLOCKING
  gl_CONDITIONAL([GL_COND_OBJ_SIGPROCMASK], [test $HAVE_POSIX_SIGNALBLOCKING = 0])
  AM_COND_IF([GL_COND_OBJ_SIGPROCMASK], [
    gl_PREREQ_SIGPROCMASK
  ])
  gl_SIGNAL_MODULE_INDICATOR([sigprocmask])
  gl_SIZE_MAX
  gl_FUNC_SNPRINTF
  gl_STDIO_MODULE_INDICATOR([snprintf])
  gl_MODULE_INDICATOR([snprintf])
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
  gl_STAT_TIME
  gl_STAT_BIRTHTIME
  gl_STDARG_H
  gl_CONDITIONAL_HEADER([stdarg.h])
  AC_PROG_MKDIR_P
  gl_STDCKDINT_H
  gl_CONDITIONAL_HEADER([stdckdint.h])
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
  AC_REQUIRE([AC_CANONICAL_HOST])
  USES_MSVCRT=0
  case "$host_os" in
    mingw* | windows*)
      AC_EGREP_CPP([Special], [
  #ifndef _UCRT
   Special
  #endif
        ],
        [USES_MSVCRT=1])
      ;;
  esac
  gl_CONDITIONAL([GL_COND_OBJ_STDIO_CONSOLESAFE], [test $USES_MSVCRT = 1])
  AC_CHECK_FUNCS([vasprintf])
  gl_STDLIB_H
  gl_STDLIB_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_FUNC_STPCPY
  gl_CONDITIONAL([GL_COND_OBJ_STPCPY],
                 [test $HAVE_STPCPY = 0 || test $REPLACE_STPCPY = 1])
  AM_COND_IF([GL_COND_OBJ_STPCPY], [
    gl_PREREQ_STPCPY
  ])
  gl_STRING_MODULE_INDICATOR([stpcpy])
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
  gl_FUNC_STRFMON_L
  gl_CONDITIONAL([GL_COND_OBJ_STRFMON_L], [test $REPLACE_STRFMON_L = 1])
  AM_COND_IF([GL_COND_OBJ_STRFMON_L], [
    gl_PREREQ_STRFMON_L
  ])
  gl_MONETARY_MODULE_INDICATOR([strfmon_l])
  if test $gl_cond_libtool = false; then
    gl_ltlibdeps="$gl_ltlibdeps $LTLIBICONV"
    gl_libdeps="$gl_libdeps $LIBICONV"
  fi
  gl_STRING_H
  gl_STRING_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_FUNC_STREQ
  gl_FUNC_MEMEQ
  gl_STRING_MODULE_INDICATOR([stringeq])
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
  gl_FUNC_STRPTIME
  gl_CONDITIONAL([GL_COND_OBJ_STRPTIME], [test $HAVE_STRPTIME = 0])
  AM_COND_IF([GL_COND_OBJ_STRPTIME], [
    gl_PREREQ_STRPTIME
  ])
  gl_TIME_MODULE_INDICATOR([strptime])
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
  gl_FUNC_STRTOF
  gl_CONDITIONAL([GL_COND_OBJ_STRTOF],
                 [test $HAVE_STRTOF = 0 || test $REPLACE_STRTOF = 1])
  AM_COND_IF([GL_COND_OBJ_STRTOF], [
    gl_PREREQ_STRTOF
  ])
  gl_STDLIB_MODULE_INDICATOR([strtof])
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
  gl_SYS_RANDOM_H
  gl_SYS_RANDOM_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_SELECT_H
  gl_SYS_SELECT_H_REQUIRE_DEFAULTS
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
  gl_SYS_TYPES_H
  gl_SYS_TYPES_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_UIO_H
  gl_SYS_UIO_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_WAIT_H
  gl_SYS_WAIT_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  AC_REQUIRE([AC_C_RESTRICT])
  gl_FUNC_GEN_TEMPNAME
  gl_MODULE_INDICATOR([tempname])
  AC_REQUIRE([AC_C_INLINE])
  gl_HAVE_TCGETATTR
  AC_CHECK_HEADERS([sys/single_threaded.h])
  AC_REQUIRE([gl_THREADLIB])
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
  gl_TIME_MODULE_INDICATOR([time_rz])
  gl_FUNC_TIMEGM
  gl_CONDITIONAL([GL_COND_OBJ_TIMEGM],
                 [test $HAVE_TIMEGM = 0 || test $REPLACE_TIMEGM = 1])
  AM_COND_IF([GL_COND_OBJ_TIMEGM], [
    gl_PREREQ_TIMEGM
  ])
  gl_TIME_MODULE_INDICATOR([timegm])
  gl_TIMESPEC
  gl_TLS
  gt_TMPDIR
  gl_FUNC_TSEARCH
  gl_CONDITIONAL([GL_COND_OBJ_TSEARCH],
                 [test $HAVE_TSEARCH = 0 || test $HAVE_TWALK = 0 || test $REPLACE_TSEARCH = 1 || test $REPLACE_TWALK = 1])
  AM_COND_IF([GL_COND_OBJ_TSEARCH], [
    gl_PREREQ_TSEARCH
  ])
  gl_SEARCH_MODULE_INDICATOR([tsearch])
  gl_FUNC_TZSET
  gl_CONDITIONAL([GL_COND_OBJ_TZSET], [test $REPLACE_TZSET = 1])
  gl_TIME_MODULE_INDICATOR([tzset])
  gl_UCHAR_H
  gl_UCHAR_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_LIBUNISTRING_LIBHEADER([1.2], [unicase.h])
  gl_UNICASE_H
  gl_UNICASE_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  AC_REQUIRE([AC_C_INLINE])
  AC_REQUIRE([AC_C_INLINE])
  AC_PROG_MKDIR_P
  gl_LIBUNISTRING_MODULE([1.4], [unicase/tolower])
  gl_LIBUNISTRING_MODULE([1.4], [unicase/totitle])
  gl_LIBUNISTRING_MODULE([1.4], [unicase/toupper])
  gl_LIBUNISTRING_MODULE([1.4], [unicase/u16-ct-totitle])
  gl_LIBUNISTRING_MODULE([1.4], [unicase/u32-ct-totitle])
  gl_LIBUNISTRING_MODULE([1.4], [unicase/u8-ct-totitle])
  gl_LIBUNISTRING_LIBHEADER([0.9.11], [uniconv.h])
  AC_PROG_MKDIR_P
  AC_REQUIRE([gl_BIGENDIAN])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u16-conv-from-enc])
  AC_REQUIRE([gl_BIGENDIAN])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u16-conv-to-enc])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u32-conv-from-enc])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u32-conv-to-enc])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u8-conv-from-enc])
  gl_LIBUNISTRING_MODULE([0.9], [uniconv/u8-conv-to-enc])
  gl_LIBUNISTRING_LIBHEADER([1.3], [unictype.h])
  gl_UNICTYPE_H
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_LIBUNISTRING_MODULE([1.4], [unictype/combining-class])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.4], [unictype/ctype-alnum])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.4], [unictype/ctype-alpha])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.4], [unictype/ctype-blank])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.4], [unictype/ctype-cntrl])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.4], [unictype/ctype-digit])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.4], [unictype/ctype-graph])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.4], [unictype/ctype-lower])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.4], [unictype/ctype-print])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.4], [unictype/ctype-punct])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.4], [unictype/ctype-space])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.4], [unictype/ctype-upper])
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.4], [unictype/ctype-xdigit])
  gl_LIBUNISTRING_MODULE([1.4], [unictype/incb-of])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.4], [unictype/property-extended-pictographic])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNICTYPE_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.4], [unictype/property-soft-dotted])
  gl_LIBUNISTRING_LIBHEADER([1.2], [unigbrk.h])
  AC_PROG_MKDIR_P
  gl_MODULE_INDICATOR([unigbrk/u8-grapheme-breaks])
  gl_LIBUNISTRING_MODULE([1.4], [unigbrk/u8-grapheme-breaks])
  gl_LIBUNISTRING_MODULE([1.4], [unigbrk/uc-gbrk-prop])
  gl_MODULE_INDICATOR([unigbrk/ulc-grapheme-breaks])
  gl_LIBUNISTRING_MODULE([1.4], [unigbrk/ulc-grapheme-breaks])
  gl_LIBUNISTRING_LIBHEADER([0.9.11], [unilbrk.h])
  AC_PROG_MKDIR_P
  AC_REQUIRE([AC_C_INLINE])
  gl_LIBUNISTRING_MODULE([1.4], [unilbrk/u8-possible-linebreaks])
  gl_LIBUNISTRING_MODULE([1.4], [unilbrk/u8-width-linebreaks])
  gl_LIBUNISTRING_MODULE([1.4], [unilbrk/ulc-possible-linebreaks])
  gl_LIBUNISTRING_MODULE([1.4], [unilbrk/ulc-width-linebreaks])
  gl_LIBUNISTRING_LIBHEADER([0.9.5], [uniname.h])
  AC_PROG_MKDIR_P
  gl_LIBUNISTRING_MODULE([1.4], [uniname/uniname])
  gl_LIBUNISTRING_LIBHEADER([1.2], [uninorm.h])
  gl_UNINORM_H
  gl_UNINORM_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_LIBUNISTRING_MODULE([1.4], [uninorm/filter])
  gl_MODULE_INDICATOR_FOR_TESTS([uninorm/u16-normalize])
  gl_LIBUNISTRING_MODULE([1.4], [uninorm/u16-normalize])
  gl_MODULE_INDICATOR_FOR_TESTS([uninorm/u32-normalize])
  gl_LIBUNISTRING_MODULE([1.4], [uninorm/u32-normalize])
  gl_MODULE_INDICATOR_FOR_TESTS([uninorm/u8-normalize])
  gl_LIBUNISTRING_MODULE([1.4], [uninorm/u8-normalize])
  gl_UNISTD_H
  gl_UNISTD_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_UNISTD_SAFER
  gl_MODULE_INDICATOR([unistd-safer])
  gl_LIBUNISTRING_LIBHEADER([0.9.11], [unistdio.h])
  AC_PROG_MKDIR_P
  gl_PREREQ_PRINTF_ARGS
  gl_PREREQ_PRINTF_PARSE
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-u16-vasnprintf])
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u16-vasnprintf])
  gl_PREREQ_PRINTF_PARSE
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-u32-vasnprintf])
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u32-vasnprintf])
  gl_PREREQ_PRINTF_PARSE
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-u8-vasnprintf])
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.2]), [unistdio/u8-vasnprintf])
  gl_PREREQ_PRINTF_PARSE
  gl_PREREQ_VASNPRINTF_WITH_POSIX_EXTRAS
  gl_LIBUNISTRING_MODULE(m4_ifdef([gl_PRINTF_SUPPORT_N_DIRECTIVE],[999.9],[1.4]), [unistdio/ulc-vasnprintf])
  gl_LIBUNISTRING_LIBHEADER([1.2], [unistr.h])
  AC_PROG_MKDIR_P
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-cpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-mblen])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-mbsnlen])
  gl_MODULE_INDICATOR([unistr/u16-mbtouc-unsafe])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-mbtouc-unsafe])
  gl_MODULE_INDICATOR([unistr/u16-mbtoucr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-mbtoucr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-set])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strlen])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strmblen])
  gl_LIBUNISTRING_MODULE([0.9.3], [unistr/u16-to-u32])
  gl_LIBUNISTRING_MODULE([0.9.3], [unistr/u16-to-u8])
  gl_MODULE_INDICATOR([unistr/u16-uctomb])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-uctomb])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-cpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-mblen])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-mbsnlen])
  gl_MODULE_INDICATOR([unistr/u32-mbtouc-unsafe])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-mbtouc-unsafe])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-set])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strlen])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strmblen])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-to-u16])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-to-u8])
  gl_MODULE_INDICATOR([unistr/u32-uctomb])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-uctomb])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-check])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-cpy])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-mblen])
  gl_LIBUNISTRING_MODULE([1.2], [unistr/u8-mbsnlen])
  gl_MODULE_INDICATOR([unistr/u8-mbtouc])
  gl_LIBUNISTRING_MODULE([1.2], [unistr/u8-mbtouc])
  gl_MODULE_INDICATOR([unistr/u8-mbtouc-unsafe])
  gl_LIBUNISTRING_MODULE([0.9.4], [unistr/u8-mbtouc-unsafe])
  gl_MODULE_INDICATOR([unistr/u8-mbtoucr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-mbtoucr])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-prev])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-set])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-strlen])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-strmblen])
  gl_LIBUNISTRING_MODULE([0.9.3], [unistr/u8-to-u16])
  gl_LIBUNISTRING_MODULE([0.9.3], [unistr/u8-to-u32])
  gl_MODULE_INDICATOR([unistr/u8-uctomb])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-uctomb])
  gl_LIBUNISTRING_LIBHEADER([0.9.11], [unitypes.h])
  AC_PROG_MKDIR_P
  gl_UNITYPES_H
  gl_LIBUNISTRING_LIBHEADER([0.9.11], [uniwbrk.h])
  AC_PROG_MKDIR_P
  gl_LIBUNISTRING_MODULE([1.4], [uniwbrk/u16-wordbreaks])
  gl_LIBUNISTRING_MODULE([1.4], [uniwbrk/u32-wordbreaks])
  gl_LIBUNISTRING_MODULE([1.4], [uniwbrk/u8-wordbreaks])
  gl_LIBUNISTRING_MODULE([1.4], [uniwbrk/ulc-wordbreaks])
  gl_LIBUNISTRING_MODULE([1.4], [uniwbrk/wordbreak-property])
  gl_LIBUNISTRING_LIBHEADER([0.9.11], [uniwidth.h])
  AC_PROG_MKDIR_P
  gl_LIBUNISTRING_MODULE([1.4], [uniwidth/width])
  gl_FUNC_GLIBC_UNLOCKED_IO
  gl_FUNC_UNSETENV
  gl_CONDITIONAL([GL_COND_OBJ_UNSETENV],
                 [test $HAVE_UNSETENV = 0 || test $REPLACE_UNSETENV = 1])
  AM_COND_IF([GL_COND_OBJ_UNSETENV], [
    gl_PREREQ_UNSETENV
  ])
  gl_STDLIB_MODULE_INDICATOR([unsetenv])
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
  gl_UTIMENS
  AC_C_VARARRAYS
  AC_REQUIRE([AC_C_RESTRICT])
  gl_FUNC_VASNPRINTF
  AC_REQUIRE([AC_C_RESTRICT])
  gl_FUNC_VASNWPRINTF
  gl_STDIO_MODULE_INDICATOR([vaszprintf])
  m4_ifdef([AM_XGETTEXT_OPTION],
    [AM_][XGETTEXT_OPTION([--flag=aszprintf:2:c-format])
     AM_][XGETTEXT_OPTION([--flag=vaszprintf:2:c-format])])
  gl_FUNC_MMAP_ANON
  AC_REQUIRE([AC_C_INLINE])
  AC_CHECK_FUNCS_ONCE([mquery pstat_getprocvm])
  gl_STDIO_MODULE_INDICATOR([vsnzprintf])
  gl_WAIT_PROCESS
  gl_FUNC_WAITPID
  gl_CONDITIONAL([GL_COND_OBJ_WAITPID], [test $HAVE_WAITPID = 0])
  gl_SYS_WAIT_MODULE_INDICATOR([waitpid])
  gl_WCHAR_H
  gl_WCHAR_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_FUNC_WCRTOMB
  gl_CONDITIONAL([GL_COND_OBJ_WCRTOMB],
                 [test $HAVE_WCRTOMB = 0 || test $REPLACE_WCRTOMB = 1])
  AM_COND_IF([GL_COND_OBJ_WCRTOMB], [
    gl_PREREQ_WCRTOMB
  ])
  gl_WCHAR_MODULE_INDICATOR([wcrtomb])
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
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_TIMEDRWLOCK],
                 [case "$host_os" in mingw* | windows*) true;; *) false;; esac])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_TLS],
                 [case "$host_os" in mingw* | windows*) true;; *) false;; esac])
  gl_FUNC_WMEMCPY
  gl_CONDITIONAL([GL_COND_OBJ_WMEMCPY], [test $HAVE_WMEMCPY = 0])
  gl_WCHAR_MODULE_INDICATOR([wmemcpy])
  gl_FUNC_WMEMSET
  gl_CONDITIONAL([GL_COND_OBJ_WMEMSET], [test $HAVE_WMEMSET = 0])
  gl_WCHAR_MODULE_INDICATOR([wmemset])
  gl_FUNC_WRITE
  gl_CONDITIONAL([GL_COND_OBJ_WRITE], [test $REPLACE_WRITE = 1])
  AM_COND_IF([GL_COND_OBJ_WRITE], [
    gl_PREREQ_WRITE
  ])
  gl_UNISTD_MODULE_INDICATOR([write])
  gl_XALLOC
  gl_MODULE_INDICATOR([xalloc])
  gl_MODULE_INDICATOR([xalloc-die])
  gl_XSIZE
  gl_XSTRTOL
  gl_XVASPRINTF
  m4_ifdef([AM_XGETTEXT_OPTION],
    [AM_][XGETTEXT_OPTION([--flag=xasprintf:1:c-format])])
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
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_ACCEPT], [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([accept])
  gl_MODULE_INDICATOR([accept])
  AC_CHECK_FUNCS_ONCE([geteuid])
  AC_CHECK_HEADERS_ONCE([semaphore.h])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_REQUIRE([gl_SEMAPHORE])
  gl_FUNC_ATOLL
  gl_CONDITIONAL([GL_COND_OBJ_ATOLL], [test $HAVE_ATOLL = 0])
  AM_COND_IF([GL_COND_OBJ_ATOLL], [
    gl_PREREQ_ATOLL
  ])
  gl_STDLIB_MODULE_INDICATOR([atoll])
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_BIND], [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([bind])
  gl_MODULE_INDICATOR([bind])
  gl_UCHAR_MODULE_INDICATOR([btoc32])
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
  gt_LOCALE_TR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_TR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
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
  gl_MUSL_LIBC
  gl_MODULE_INDICATOR([close-stream])
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_CONNECT], [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([connect])
  gl_MODULE_INDICATOR([connect])
  gl_FUNC_CREAT
  gl_CONDITIONAL([GL_COND_OBJ_CREAT], [test $REPLACE_CREAT = 1])
  gl_FCNTL_MODULE_INDICATOR([creat])
  AC_CHECK_FUNCS_ONCE([strfmon_l snprintf_l])
  gl_CHECK_FUNCS_ANDROID([duplocale], [[#include <locale.h>]])
  gl_CHECK_FUNCS_ANDROID([nl_langinfo_l], [[#include <langinfo.h>]])
  AC_CHECK_HEADERS_ONCE([monetary.h])
  gt_FUNC_USELOCALE
  dnl Test for Linux system call close_range(), declared in <unistd.h>.
  gl_CHECK_FUNCS_ANDROID([close_range], [[#include <unistd.h>]])
  AC_CHECK_DECLS_ONCE([alarm])
  gl_FUNC_FDOPEN
  gl_CONDITIONAL([GL_COND_OBJ_FDOPEN], [test $REPLACE_FDOPEN = 1])
  AM_COND_IF([GL_COND_OBJ_FDOPEN], [
    gl_PREREQ_FDOPEN
  ])
  gl_STDIO_MODULE_INDICATOR([fdopen])
  gl_FUNC_FFLUSH
  gl_CONDITIONAL([GL_COND_OBJ_FFLUSH], [test $REPLACE_FFLUSH = 1])
  AM_COND_IF([GL_COND_OBJ_FFLUSH], [
    gl_PREREQ_FFLUSH
  ])
  gl_MODULE_INDICATOR([fflush])
  gl_STDIO_MODULE_INDICATOR([fflush])
  AC_CHECK_DECLS_ONCE([alarm])
  gl_FUNC_FPENDING
  gl_CONDITIONAL([GL_COND_OBJ_FPENDING], [test $gl_cv_func___fpending = no])
  gl_FUNC_FPURGE
  gl_CONDITIONAL([GL_COND_OBJ_FPURGE],
                 [test $HAVE_FPURGE = 0 || test $REPLACE_FPURGE = 1])
  gl_STDIO_MODULE_INDICATOR([fpurge])
  gl_FUNC_FREADING
  gl_FUNC_FREOPEN
  gl_CONDITIONAL([GL_COND_OBJ_FREOPEN], [test $REPLACE_FREOPEN = 1])
  AM_COND_IF([GL_COND_OBJ_FREOPEN], [
    gl_PREREQ_FREOPEN
  ])
  gl_STDIO_MODULE_INDICATOR([freopen])
  gl_FUNC_FSEEK
  gl_CONDITIONAL([GL_COND_OBJ_FSEEK], [test $REPLACE_FSEEK = 1])
  gl_STDIO_MODULE_INDICATOR([fseek])
  gl_FUNC_UNGETC_WORKS
  gl_FUNC_FSEEKO
  gl_CONDITIONAL([GL_COND_OBJ_FSEEKO],
                 [test $HAVE_FSEEKO = 0 || test $REPLACE_FSEEKO = 1])
  AM_COND_IF([GL_COND_OBJ_FSEEKO], [
    gl_PREREQ_FSEEKO
  ])
  gl_STDIO_MODULE_INDICATOR([fseeko])
  gl_FUNC_UNGETC_WORKS
  gl_FUNC_FTELL
  gl_CONDITIONAL([GL_COND_OBJ_FTELL], [test $REPLACE_FTELL = 1])
  gl_STDIO_MODULE_INDICATOR([ftell])
  gl_FUNC_UNGETC_WORKS
  gl_FUNC_FTELLO
  gl_CONDITIONAL([GL_COND_OBJ_FTELLO],
                 [test $HAVE_FTELLO = 0 || test $REPLACE_FTELLO = 1])
  AM_COND_IF([GL_COND_OBJ_FTELLO], [
    gl_PREREQ_FTELLO
  ])
  gl_STDIO_MODULE_INDICATOR([ftello])
  gl_FUNC_UNGETC_WORKS
  gl_FUNC_FTRUNCATE
  gl_CONDITIONAL([GL_COND_OBJ_FTRUNCATE],
                 [test $HAVE_FTRUNCATE = 0 || test $REPLACE_FTRUNCATE = 1])
  AM_COND_IF([GL_COND_OBJ_FTRUNCATE], [
    gl_PREREQ_FTRUNCATE
  ])
  gl_UNISTD_MODULE_INDICATOR([ftruncate])
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
  gl_FUNC_GETRUSAGE
  gl_CONDITIONAL([GL_COND_OBJ_GETRUSAGE], [test $HAVE_GETRUSAGE = 0])
  gl_SYS_RESOURCE_MODULE_INDICATOR([getrusage])
  AM_GNU_GETTEXT([external])
AM_GNU_GETTEXT_VERSION([0.22])
  gl_MUSL_LIBC
  dnl Distinguish OpenBSD >= 6.2 from OpenBSD < 6.2.
  gl_CHECK_FUNCS_ANDROID([duplocale], [[#include <locale.h>]])
  gl_FUNC_HTONL
  AC_C_BIGENDIAN
  AC_C_BIGENDIAN
  gl_INTTOSTR
  gl_INTTYPES_H
  gl_FUNC_IOCTL
  gl_CONDITIONAL([GL_COND_OBJ_IOCTL],
                 [test $HAVE_IOCTL = 0 || test $REPLACE_IOCTL = 1])
  gl_SYS_IOCTL_MODULE_INDICATOR([ioctl])
  gl_MODULE_INDICATOR([ioctl])
  gl_FUNC_ISBLANK
  gl_CONDITIONAL([GL_COND_OBJ_ISBLANK], [test $HAVE_ISBLANK = 0])
  gl_MODULE_INDICATOR([isblank])
  gl_CTYPE_MODULE_INDICATOR([isblank])
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  gl_MODULE_INDICATOR([issymlinkat])
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
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_LISTEN], [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([listen])
  gl_MODULE_INDICATOR([listen])
  gl_WINDOWS_RC
  gl_CHECK_FUNCS_ANDROID([newlocale], [[#include <locale.h>]])
  gl_CHECK_FUNCS_ANDROID([newlocale], [[#include <locale.h>]])
  gl_MUSL_LIBC
  gl_WINDOWS_RC
  AC_CHECK_HEADERS_ONCE([semaphore.h])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_REQUIRE([gl_SEMAPHORE])
  gl_FUNC_LSEEK
  gl_CONDITIONAL([GL_COND_OBJ_LSEEK], [test $REPLACE_LSEEK = 1])
  gl_UNISTD_MODULE_INDICATOR([lseek])
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
  gt_LOCALE_TR_UTF8
  gt_LOCALE_ZH_CN
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR_UTF8
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR_UTF8
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR_UTF8
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR_UTF8
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
  AC_CHECK_DECLS_ONCE([alarm])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MEMSET_EXPLICIT
  gl_CONDITIONAL([GL_COND_OBJ_MEMSET_EXPLICIT],
                 [test $HAVE_MEMSET_EXPLICIT = 0 || test $REPLACE_MEMSET_EXPLICIT = 1])
  AM_COND_IF([GL_COND_OBJ_MEMSET_EXPLICIT], [
    gl_PREREQ_MEMSET_EXPLICIT
  ])
  gl_STRING_MODULE_INDICATOR([memset_explicit])
  gl_FUNC_MKFIFO
  gl_CONDITIONAL([GL_COND_OBJ_MKFIFO],
                 [test $HAVE_MKFIFO = 0 || test $REPLACE_MKFIFO = 1])
  gl_UNISTD_MODULE_INDICATOR([mkfifo])
  gl_FUNC_NANOSLEEP
  gl_CONDITIONAL([GL_COND_OBJ_NANOSLEEP],
                 [test $HAVE_NANOSLEEP = 0 || test $REPLACE_NANOSLEEP = 1])
  gl_TIME_MODULE_INDICATOR([nanosleep])
  AC_CHECK_DECLS_ONCE([alarm])
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
  gl_FUNC_PCLOSE
  gl_CONDITIONAL([GL_COND_OBJ_PCLOSE], [test $HAVE_PCLOSE = 0])
  AM_COND_IF([GL_COND_OBJ_PCLOSE], [
    gl_PREREQ_PCLOSE
  ])
  gl_STDIO_MODULE_INDICATOR([pclose])
  gl_FUNC_PERROR
  gl_CONDITIONAL([GL_COND_OBJ_PERROR], [test $REPLACE_PERROR = 1])
  gl_STRING_MODULE_INDICATOR([perror])
  AC_CHECK_HEADERS_ONCE([unistd.h sys/wait.h])
  gl_FUNC_POPEN
  gl_CONDITIONAL([GL_COND_OBJ_POPEN],
                 [test $HAVE_POPEN = 0 || test $REPLACE_POPEN = 1])
  AM_COND_IF([GL_COND_OBJ_POPEN], [
    gl_PREREQ_POPEN
  ])
  gl_STDIO_MODULE_INDICATOR([popen])
  gl_MUSL_LIBC
  gl_PRIV_SET
  AC_CHECK_HEADERS_ONCE([sys/wait.h])
  gl_PTHREAD_COND
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_COND],
                 [test $HAVE_PTHREAD_COND_INIT = 0 || test $REPLACE_PTHREAD_COND_INIT = 1])
  gl_PTHREAD_MODULE_INDICATOR([pthread-cond])
  AC_CHECK_DECLS_ONCE([alarm])
  gl_PTHREAD_MUTEX
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_MUTEX],
                 [test $HAVE_PTHREAD_MUTEX_INIT = 0 || test $REPLACE_PTHREAD_MUTEX_INIT = 1 || test $HAVE_PTHREAD_MUTEXATTR_GETROBUST = 0 || test $REPLACE_PTHREAD_MUTEXATTR_GETROBUST = 1])
  gl_PTHREAD_MODULE_INDICATOR([pthread-mutex])
  AC_CHECK_HEADERS_ONCE([semaphore.h])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_REQUIRE([gl_SEMAPHORE])
  AC_CHECK_DECLS_ONCE([alarm])
  gl_PTHREAD_RWLOCK
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_RWLOCK],
                 [test $REPLACE_PTHREAD_RWLOCK_INIT = 1 || test $HAVE_PTHREAD_RWLOCK_TIMEDRDLOCK = 0 || test $REPLACE_PTHREAD_RWLOCK_TIMEDRDLOCK = 1])
  gl_PTHREAD_MODULE_INDICATOR([pthread-rwlock])
  AC_CHECK_HEADERS_ONCE([semaphore.h])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_REQUIRE([gl_SEMAPHORE])
  gl_PTHREAD_THREAD
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_THREAD],
                 [test $HAVE_PTHREAD_CREATE = 0 || test $REPLACE_PTHREAD_CREATE = 1])
  gl_PTHREAD_MODULE_INDICATOR([pthread-thread])
  gl_FUNC_PTHREAD_MUTEX_TIMEDLOCK
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_MUTEX_TIMEDLOCK],
                 [test $HAVE_PTHREAD_T = 1 && test $HAVE_PTHREAD_MUTEX_TIMEDLOCK = 0])
  gl_PTHREAD_MODULE_INDICATOR([pthread_mutex_timedlock])
  dnl Check for prerequisites for memory fence checks.
  dnl FIXME: zerosize-ptr.h requires these: make a module for it
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gl_FUNC_RANDOM
  gl_CONDITIONAL([GL_COND_OBJ_RANDOM],
                 [test $HAVE_RANDOM = 0 || test $REPLACE_RANDOM = 1 || test $REPLACE_INITSTATE = 1 || test $REPLACE_SETSTATE = 1])
  AM_COND_IF([GL_COND_OBJ_RANDOM], [
    gl_PREREQ_RANDOM
  ])
  gl_STDLIB_MODULE_INDICATOR([random])
  dnl Check for prerequisites for memory fence checks.
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_PREREQ_READ_FILE
  gl_FUNC_READLINKAT
  gl_CONDITIONAL([GL_COND_OBJ_READLINKAT],
                 [test $HAVE_READLINKAT = 0 || test $REPLACE_READLINKAT = 1])
  gl_UNISTD_MODULE_INDICATOR([readlinkat])
  AC_CHECK_DECLS_ONCE([alarm])
  gl_FUNC_REMOVE
  gl_CONDITIONAL([GL_COND_OBJ_REMOVE], [test $REPLACE_REMOVE = 1])
  gl_STDIO_MODULE_INDICATOR([remove])
  gl_FUNC_SCHED_YIELD
  gl_CONDITIONAL([GL_COND_OBJ_SCHED_YIELD],
                 [test $HAVE_SCHED_YIELD = 0 || test $REPLACE_SCHED_YIELD = 1])
  gl_SCHED_MODULE_INDICATOR([sched_yield])
  AC_CHECK_HEADERS_ONCE([sys/wait.h])
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gl_WINDOWS_RC
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_SETSOCKOPT],
                 [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([setsockopt])
  gl_MODULE_INDICATOR([setsockopt])
  gl_FUNC_SLEEP
  gl_CONDITIONAL([GL_COND_OBJ_SLEEP],
                 [test $HAVE_SLEEP = 0 || test $REPLACE_SLEEP = 1])
  gl_UNISTD_MODULE_INDICATOR([sleep])
  AC_CHECK_DECLS_ONCE([alarm])
  gl_SNAN
  gl_NAN_MIPS
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
  AC_CHECK_HEADERS_ONCE([semaphore.h])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_REQUIRE([gl_SEMAPHORE])
  gl_FUNC_MMAP_ANON
  AC_REQUIRE([gt_TYPE_WINT_T])
  gl_DOUBLE_EXPONENT_LOCATION
  gl_STRING_MODULE_INDICATOR([str_endswith])
  gl_STRING_MODULE_INDICATOR([str_startswith])
  gl_FUNC_STRERROR_R
  AS_IF([test $HAVE_DECL_STRERROR_R = 0 || test $REPLACE_STRERROR_R = 1], [
    AC_LIBOBJ([strerror_r])
    gl_PREREQ_STRERROR_R
  ])
  gl_STRING_MODULE_INDICATOR([strerror_r])
  dnl For the modules argp, error, xstrerror.
  gl_MODULE_INDICATOR([strerror_r-posix])
  gt_LOCALE_FR
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
  gl_FUNC_SYMLINK
  gl_CONDITIONAL([GL_COND_OBJ_SYMLINK],
                 [test $HAVE_SYMLINK = 0 || test $REPLACE_SYMLINK = 1])
  gl_UNISTD_MODULE_INDICATOR([symlink])
  gl_FUNC_SYMLINKAT
  gl_CONDITIONAL([GL_COND_OBJ_SYMLINKAT],
                 [test $HAVE_SYMLINKAT = 0 || test $REPLACE_SYMLINKAT = 1])
  gl_UNISTD_MODULE_INDICATOR([symlinkat])
  gl_SYS_IOCTL_H
  gl_SYS_IOCTL_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_RESOURCE_H
  gl_SYS_RESOURCE_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  AC_CHECK_FUNCS_ONCE([shutdown])
  gl_SOCKET_FAMILIES
  gl_SOCKET_FAMILY_UNIX
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
  gl_THREAD
  gl_FUNC_TIME
  gl_CONDITIONAL([GL_COND_OBJ_TIME], [test $REPLACE_TIME = 1])
  AM_COND_IF([GL_COND_OBJ_TIME], [
    gl_PREREQ_TIME
  ])
  gl_TIME_MODULE_INDICATOR([time])
  gl_TM_GMTOFF
  AC_CHECK_DECLS_ONCE([alarm])
  gl_FUNC_TRUNC
  gl_CONDITIONAL([GL_COND_OBJ_TRUNC],
                 [test $HAVE_DECL_TRUNC = 0 || test $REPLACE_TRUNC = 1])
  gl_MATH_MODULE_INDICATOR([trunc])
  gl_FUNC_TRUNCL
  gl_CONDITIONAL([GL_COND_OBJ_TRUNCL],
                 [test $HAVE_DECL_TRUNCL = 0 || test $REPLACE_TRUNCL = 1])
  gl_MATH_MODULE_INDICATOR([truncl])
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
  gt_LOCALE_AR
  gl_LIBUNISTRING_MODULE([1.4], [uninorm/canonical-decomposition])
  gl_LIBUNISTRING_MODULE([1.3], [uninorm/composition])
  AC_REQUIRE([AC_C_INLINE])
  gl_UNINORM_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.4], [uninorm/nfc])
  AC_CHECK_DECLS_ONCE([alarm])
  gl_UNINORM_H_REQUIRE_DEFAULTS
  gl_LIBUNISTRING_MODULE_WITH_VARIABLE([1.4], [uninorm/nfd])
  AC_CHECK_DECLS_ONCE([alarm])
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-cmp])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u16-strcmp])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-cmp])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u32-strcmp])
  gl_LIBUNISTRING_MODULE([0.9], [unistr/u8-cmp])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_LIBUNISTRING_MODULE([0.9.4], [unistr/u8-strcmp])
  gt_LOCALE_FR
  gl_FUNC_UNLINK
  gl_CONDITIONAL([GL_COND_OBJ_UNLINK], [test $REPLACE_UNLINK = 1])
  gl_UNISTD_MODULE_INDICATOR([unlink])
  gl_FUNC_UNLINKAT
  gl_CONDITIONAL([GL_COND_OBJ_UNLINKAT],
                 [test $HAVE_UNLINKAT = 0 || test $REPLACE_UNLINKAT = 1])
  gl_UNISTD_MODULE_INDICATOR([unlinkat])
  gl_UNLINKDIR
  gl_FUNC_USLEEP
  gl_CONDITIONAL([GL_COND_OBJ_USLEEP],
                 [test $HAVE_USLEEP = 0 || test $REPLACE_USLEEP = 1])
  gl_UNISTD_MODULE_INDICATOR([usleep])
  gl_UTIMECMP
  gl_FUNC_UTIMENSAT
  gl_CONDITIONAL([GL_COND_OBJ_UTIMENSAT],
                 [test $HAVE_UTIMENSAT = 0 || test $REPLACE_UTIMENSAT = 1])
  gl_SYS_STAT_MODULE_INDICATOR([utimensat])
  gt_LOCALE_EN_UTF8
  gt_LOCALE_FR
  gt_LOCALE_FR_UTF8
  gt_LOCALE_JA
  gt_LOCALE_ZH_CN
  gl_FUNC_WCSCMP
  gl_CONDITIONAL([GL_COND_OBJ_WCSCMP],
                 [test $HAVE_WCSCMP = 0 || test $REPLACE_WCSCMP = 1])
  gl_WCHAR_MODULE_INDICATOR([wcscmp])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_THREAD],
                 [case "$host_os" in mingw* | windows*) true;; *) false;; esac])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_TIMEDMUTEX],
                 [case "$host_os" in mingw* | windows*) true;; *) false;; esac])
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl_CONDITIONAL([GL_COND_OBJ_WINDOWS_TIMEDRECMUTEX],
                 [case "$host_os" in mingw* | windows*) true;; *) false;; esac])
  gl_FUNC_WMEMCMP
  gl_CONDITIONAL([GL_COND_OBJ_WMEMCMP],
                 [test $HAVE_WMEMCMP = 0 || test $REPLACE_WMEMCMP = 1])
  gl_WCHAR_MODULE_INDICATOR([wmemcmp])
  gl_XGETCWD
  AC_REQUIRE([gl_YIELD])
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
