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

gl_FP_IEEE
AC_SYS_LARGEFILE
gl_ANYTHREADLIB_EARLY
gl_STDIO_H_EARLY
AC_USE_SYSTEM_EXTENSIONS
gl_THREADLIB_EARLY
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
  gl_FUNC_ALLOCA
  gl_CONDITIONAL_HEADER([alloca.h])
  AC_PROG_MKDIR_P
  gl_ASSERT_H
  gl_CONDITIONAL_HEADER([assert.h])
  AC_PROG_MKDIR_P
  AC_REQUIRE([AC_CANONICAL_HOST])
  gl___BUILTIN_EXPECT
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
  gl_UNISTD_MODULE_INDICATOR([chdir])
  gl_FUNC_CHDIR_LONG
  gl_CONDITIONAL([GL_COND_OBJ_CHDIR_LONG],
                 [test $gl_cv_have_unlimited_file_name_length = no])
  AM_COND_IF([GL_COND_OBJ_CHDIR_LONG], [
    gl_PREREQ_CHDIR_LONG
  ])
  gl_MODULE_INDICATOR_FOR_TESTS([cloexec])
  gl_FUNC_CLOSE
  gl_CONDITIONAL([GL_COND_OBJ_CLOSE], [test $REPLACE_CLOSE = 1])
  gl_UNISTD_MODULE_INDICATOR([close])
  gl_FUNC_CLOSEDIR
  gl_CONDITIONAL([GL_COND_OBJ_CLOSEDIR],
                 [test $HAVE_CLOSEDIR = 0 || test $REPLACE_CLOSEDIR = 1])
  gl_DIRENT_MODULE_INDICATOR([closedir])
  gl_CHECK_TYPE_STRUCT_DIRENT_D_INO
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
  AC_REQUIRE([gl_EXTERN_INLINE])
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
  gl_MODULE_INDICATOR([fd-safer-flag])
  gl_FUNC_FDOPENDIR
  gl_CONDITIONAL([GL_COND_OBJ_FDOPENDIR],
                 [test $HAVE_FDOPENDIR = 0 || test $REPLACE_FDOPENDIR = 1])
  gl_DIRENT_MODULE_INDICATOR([fdopendir])
  gl_MODULE_INDICATOR([fdopendir])
  gl_FILE_NAME_CONCAT_LGPL
  gl_FUNC_FREE
  gl_CONDITIONAL([GL_COND_OBJ_FREE], [test $REPLACE_FREE = 1])
  AM_COND_IF([GL_COND_OBJ_FREE], [
    gl_PREREQ_FREE
  ])
  gl_STDLIB_MODULE_INDICATOR([free-posix])
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
  gl_FUNC_FSTATAT
  gl_CONDITIONAL([GL_COND_OBJ_FSTATAT],
                 [test $HAVE_FSTATAT = 0 || test $REPLACE_FSTATAT = 1])
  gl_SYS_STAT_MODULE_INDICATOR([fstatat])
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
  gl_FUNC_GETDTABLESIZE
  gl_CONDITIONAL([GL_COND_OBJ_GETDTABLESIZE],
                 [test $HAVE_GETDTABLESIZE = 0 || test $REPLACE_GETDTABLESIZE = 1])
  AM_COND_IF([GL_COND_OBJ_GETDTABLESIZE], [
    gl_PREREQ_GETDTABLESIZE
  ])
  gl_UNISTD_MODULE_INDICATOR([getdtablesize])
  gl_FUNC_GETPROGNAME
  gl_CONDITIONAL([GL_COND_OBJ_GETPROGNAME],
                 [test $HAVE_GETPROGNAME = 0 || test $REPLACE_GETPROGNAME = 1])
  AM_COND_IF([GL_COND_OBJ_GETPROGNAME], [
    gl_PREREQ_GETPROGNAME
  ])
  gl_STDLIB_MODULE_INDICATOR([getprogname])
  AC_SUBST([LIBINTL])
  AC_SUBST([LTLIBINTL])
  AC_PROG_MKDIR_P
  gl_INTTYPES_INCOMPLETE
  gl_INTTYPES_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  AC_REQUIRE([gl_LARGEFILE])
  gl___INLINE
  gl_LIMITS_H
  gl_CONDITIONAL_HEADER([limits.h])
  AC_PROG_MKDIR_P
  gl_FUNC_LSTAT
  gl_CONDITIONAL([GL_COND_OBJ_LSTAT], [test $REPLACE_LSTAT = 1])
  AM_COND_IF([GL_COND_OBJ_LSTAT], [
    gl_PREREQ_LSTAT
  ])
  gl_SYS_STAT_MODULE_INDICATOR([lstat])
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
  gl_FUNC_MEMCHR
  gl_CONDITIONAL([GL_COND_OBJ_MEMCHR], [test $REPLACE_MEMCHR = 1])
  AM_COND_IF([GL_COND_OBJ_MEMCHR], [
    gl_PREREQ_MEMCHR
  ])
  gl_STRING_MODULE_INDICATOR([memchr])
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
  gl_MINMAX
  AC_REQUIRE([gl_MSVC_INVAL])
  gl_CONDITIONAL([GL_COND_OBJ_MSVC_INVAL],
                 [test $HAVE_MSVC_INVALID_PARAMETER_HANDLER = 1])
  AC_REQUIRE([gl_MSVC_NOTHROW])
  gl_CONDITIONAL([GL_COND_OBJ_MSVC_NOTHROW],
                 [test $HAVE_MSVC_INVALID_PARAMETER_HANDLER = 1])
  gl_MODULE_INDICATOR([msvc-nothrow])
  gl_MULTIARCH
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
  gl_FUNC_PIPE
  gl_CONDITIONAL([GL_COND_OBJ_PIPE], [test $HAVE_PIPE = 0])
  gl_UNISTD_MODULE_INDICATOR([pipe])
  gl_FUNC_RAWMEMCHR
  gl_CONDITIONAL([GL_COND_OBJ_RAWMEMCHR], [test $HAVE_RAWMEMCHR = 0])
  AM_COND_IF([GL_COND_OBJ_RAWMEMCHR], [
    gl_PREREQ_RAWMEMCHR
  ])
  gl_STRING_MODULE_INDICATOR([rawmemchr])
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
  gl_FUNC_REALLOC_GNU
  if test $REPLACE_REALLOC_FOR_REALLOC_GNU = 1; then
    AC_LIBOBJ([realloc])
  fi
  gl_STDLIB_MODULE_INDICATOR([realloc-gnu])
  gl_FUNC_REALLOC_POSIX
  if test $REPLACE_REALLOC_FOR_REALLOC_POSIX = 1; then
    AC_LIBOBJ([realloc])
  fi
  gl_STDLIB_MODULE_INDICATOR([realloc-posix])
  gl_FUNC_REALLOCARRAY
  gl_CONDITIONAL([GL_COND_OBJ_REALLOCARRAY],
                 [test $HAVE_REALLOCARRAY = 0 || test $REPLACE_REALLOCARRAY = 1])
  AM_COND_IF([GL_COND_OBJ_REALLOCARRAY], [
    gl_PREREQ_REALLOCARRAY
  ])
  gl_MODULE_INDICATOR([reallocarray])
  gl_STDLIB_MODULE_INDICATOR([reallocarray])
  gl_FUNC_REWINDDIR
  gl_CONDITIONAL([GL_COND_OBJ_REWINDDIR],
                 [test $HAVE_REWINDDIR = 0 || test $REPLACE_REWINDDIR = 1])
  gl_DIRENT_MODULE_INDICATOR([rewinddir])
  gl_SAVE_CWD
  gt_TYPE_SSIZE_T
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
  gl_STAT_TIME
  gl_STAT_BIRTHTIME
  gl_C_BOOL
  AC_CHECK_HEADERS_ONCE([stdckdint.h])
  if test $ac_cv_header_stdckdint_h = yes; then
    GL_GENERATE_STDCKDINT_H=false
  else
    GL_GENERATE_STDCKDINT_H=true
  fi
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
  gl_STDLIB_H
  gl_STDLIB_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
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
  gl_STRING_H
  gl_STRING_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_STAT_H
  gl_SYS_STAT_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_TYPES_H
  gl_SYS_TYPES_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_TIME_H
  gl_TIME_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_UNISTD_H
  gl_UNISTD_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_UNISTD_SAFER
  AC_C_VARARRAYS
  gl_WCHAR_H
  gl_WCHAR_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_XALLOC
  gl_MODULE_INDICATOR([xalloc])
  gl_MODULE_INDICATOR([xalloc-die])
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
    if test -n "$gl_LIBOBJS"; then
      # Remove the extension.
changequote(,)dnl
      sed_drop_objext='s/\.o$//;s/\.obj$//'
      sed_dirname1='s,//*,/,g'
      sed_dirname2='s,\(.\)/$,\1,'
      sed_dirname3='s,^[^/]*$,.,'
      sed_dirname4='s,\(.\)/[^/]*$,\1,'
      sed_basename1='s,.*/,,'
changequote([, ])dnl
      for i in `for i in $gl_LIBOBJS; do echo "$i"; done | sed -e "$sed_drop_objext" | sort | uniq`; do
        gl_libobjs="$gl_libobjs $i.$ac_objext"
        gl_ltlibobjs="$gl_ltlibobjs $i.lo"
        i_dir=`echo "$i" | sed -e "$sed_dirname1" -e "$sed_dirname2" -e "$sed_dirname3" -e "$sed_dirname4"`
        i_base=`echo "$i" | sed -e "$sed_basename1"`
        gl_libobjdeps="$gl_libobjdeps $i_dir/\$(DEPDIR)/$i_base.Po"
      done
    fi
    AC_SUBST([gl_LIBOBJS], [$gl_libobjs])
    AC_SUBST([gl_LTLIBOBJS], [$gl_ltlibobjs])
    AC_SUBST([gl_LIBOBJDEPS], [$gl_libobjdeps])
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
  gl_ALIGNASOF
  gl_ARPA_INET_H
  gl_ARPA_INET_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_BIND], [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([bind])
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_CONNECT], [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([connect])
  gl_CTYPE_H
  gl_CTYPE_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_ENVIRON
  gl_UNISTD_MODULE_INDICATOR([environ])
  gl_FUNC_FDOPEN
  gl_CONDITIONAL([GL_COND_OBJ_FDOPEN], [test $REPLACE_FDOPEN = 1])
  AM_COND_IF([GL_COND_OBJ_FDOPEN], [
    gl_PREREQ_FDOPEN
  ])
  gl_STDIO_MODULE_INDICATOR([fdopen])
  gl_FLOAT_H
  gl_CONDITIONAL_HEADER([float.h])
  AC_PROG_MKDIR_P
  gl_CONDITIONAL([GL_COND_OBJ_FLOAT], [test $REPLACE_FLOAT_LDBL = 1])
  gl_CONDITIONAL([GL_COND_OBJ_ITOLD], [test $REPLACE_ITOLD = 1])
  gl_FUNC_FTRUNCATE
  gl_CONDITIONAL([GL_COND_OBJ_FTRUNCATE],
                 [test $HAVE_FTRUNCATE = 0 || test $REPLACE_FTRUNCATE = 1])
  AM_COND_IF([GL_COND_OBJ_FTRUNCATE], [
    gl_PREREQ_FTRUNCATE
  ])
  gl_UNISTD_MODULE_INDICATOR([ftruncate])
  gl_FUNC_GETPAGESIZE
  gl_CONDITIONAL([GL_COND_OBJ_GETPAGESIZE], [test $REPLACE_GETPAGESIZE = 1])
  gl_UNISTD_MODULE_INDICATOR([getpagesize])
  gl_FUNC_GETTIMEOFDAY
  gl_CONDITIONAL([GL_COND_OBJ_GETTIMEOFDAY],
                 [test $HAVE_GETTIMEOFDAY = 0 || test $REPLACE_GETTIMEOFDAY = 1])
  AM_COND_IF([GL_COND_OBJ_GETTIMEOFDAY], [
    gl_PREREQ_GETTIMEOFDAY
  ])
  gl_SYS_TIME_MODULE_INDICATOR([gettimeofday])
  gl_FUNC_INET_PTON
  gl_CONDITIONAL([GL_COND_OBJ_INET_PTON],
                 [test $HAVE_INET_PTON = 0 || test $REPLACE_INET_PTON = 1])
  AM_COND_IF([GL_COND_OBJ_INET_PTON], [
    gl_PREREQ_INET_PTON
  ])
  gl_ARPA_INET_MODULE_INDICATOR([inet_pton])
  AC_C_BIGENDIAN
  gl_INTTOSTR
  gl_INTTYPES_H
  gl_FUNC_IOCTL
  gl_CONDITIONAL([GL_COND_OBJ_IOCTL],
                 [test $HAVE_IOCTL = 0 || test $REPLACE_IOCTL = 1])
  gl_SYS_IOCTL_MODULE_INDICATOR([ioctl])
  gl_FUNC_ISBLANK
  gl_CONDITIONAL([GL_COND_OBJ_ISBLANK], [test $HAVE_ISBLANK = 0])
  gl_MODULE_INDICATOR([isblank])
  gl_CTYPE_MODULE_INDICATOR([isblank])
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
  gl_FUNC_ISNANL_NO_LIBM
  if test $gl_func_isnanl_no_libm != yes; then
    AC_LIBOBJ([isnanl])
    gl_PREREQ_ISNANL
  fi
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_LISTEN], [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([listen])
  gl_LOCK
  gl_MODULE_INDICATOR([lock])
  AC_CHECK_HEADERS_ONCE([semaphore.h])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_REQUIRE([gl_SEMAPHORE])
  gl_MATH_H
  gl_MATH_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  AC_REQUIRE([AC_TYPE_MBSTATE_T])
  gl_MBSTATE_T_BROKEN
  gl_MUSL_LIBC
  gl_WCHAR_MODULE_INDICATOR([mbszero])
  dnl Check for prerequisites for memory fence checks.
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_FUNC_NANOSLEEP
  gl_CONDITIONAL([GL_COND_OBJ_NANOSLEEP],
                 [test $HAVE_NANOSLEEP = 0 || test $REPLACE_NANOSLEEP = 1])
  gl_TIME_MODULE_INDICATOR([nanosleep])
  AC_CHECK_DECLS_ONCE([alarm])
  gl_HEADER_NETINET_IN
  gl_CONDITIONAL_HEADER([netinet/in.h])
  AC_PROG_MKDIR_P
  gl_FUNC_PERROR
  gl_CONDITIONAL([GL_COND_OBJ_PERROR], [test $REPLACE_PERROR = 1])
  gl_STRING_MODULE_INDICATOR([perror])
  gl_FUNC_PSELECT
  gl_CONDITIONAL([GL_COND_OBJ_PSELECT],
                 [test $HAVE_PSELECT = 0 || test $REPLACE_PSELECT = 1])
  gl_SYS_SELECT_MODULE_INDICATOR([pselect])
  AC_CHECK_HEADERS_ONCE([sys/wait.h])
  gl_PTHREAD_COND
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_COND],
                 [test $HAVE_PTHREAD_COND_INIT = 0 || test $REPLACE_PTHREAD_COND_INIT = 1])
  gl_PTHREAD_MODULE_INDICATOR([pthread-cond])
  AC_CHECK_DECLS_ONCE([alarm])
  gl_PTHREAD_H
  gl_PTHREAD_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_PTHREAD_MUTEX
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_MUTEX],
                 [test $HAVE_PTHREAD_MUTEX_INIT = 0 || test $REPLACE_PTHREAD_MUTEX_INIT = 1 || test $HAVE_PTHREAD_MUTEXATTR_GETROBUST = 0 || test $REPLACE_PTHREAD_MUTEXATTR_GETROBUST = 1])
  gl_PTHREAD_MODULE_INDICATOR([pthread-mutex])
  AC_CHECK_HEADERS_ONCE([semaphore.h])
  AC_CHECK_DECLS_ONCE([alarm])
  AC_REQUIRE([gl_SEMAPHORE])
  gl_PTHREAD_ONCE
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_ONCE],
                 [test $HAVE_PTHREAD_ONCE = 0 || test $REPLACE_PTHREAD_ONCE = 1])
  gl_PTHREAD_MODULE_INDICATOR([pthread-once])
  AC_CHECK_DECLS_ONCE([alarm])
  gl_PTHREAD_RWLOCK
  gl_CONDITIONAL([GL_COND_OBJ_PTHREAD_RWLOCK],
                 [test $HAVE_PTHREAD_RWLOCK_TIMEDRDLOCK = 0 || test $REPLACE_PTHREAD_RWLOCK_TIMEDRDLOCK = 1])
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
  gl_FUNC_RAISE
  gl_CONDITIONAL([GL_COND_OBJ_RAISE],
                 [test $HAVE_RAISE = 0 || test $REPLACE_RAISE = 1])
  AM_COND_IF([GL_COND_OBJ_RAISE], [
    gl_PREREQ_RAISE
  ])
  gl_SIGNAL_MODULE_INDICATOR([raise])
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
  dnl Check for prerequisites for memory fence checks.
  gl_FUNC_MMAP_ANON
  AC_CHECK_HEADERS_ONCE([sys/mman.h])
  AC_CHECK_FUNCS_ONCE([mprotect])
  gl_SCHED_H
  gl_SCHED_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_FUNC_SCHED_YIELD
  gl_CONDITIONAL([GL_COND_OBJ_SCHED_YIELD],
                 [test $HAVE_SCHED_YIELD = 0 || test $REPLACE_SCHED_YIELD = 1])
  gl_SCHED_MODULE_INDICATOR([sched_yield])
  gl_FUNC_SELECT
  gl_CONDITIONAL([GL_COND_OBJ_SELECT], [test $REPLACE_SELECT = 1])
  gl_SYS_SELECT_MODULE_INDICATOR([select])
  AC_CHECK_HEADERS_ONCE([sys/wait.h])
  AC_REQUIRE([gl_SYS_SOCKET_H])
  gl_CONDITIONAL([GL_COND_OBJ_SETSOCKOPT],
                 [test "$ac_cv_header_winsock2_h" = yes])
  gl_SYS_SOCKET_MODULE_INDICATOR([setsockopt])
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
  gl_FUNC_SLEEP
  gl_CONDITIONAL([GL_COND_OBJ_SLEEP],
                 [test $HAVE_SLEEP = 0 || test $REPLACE_SLEEP = 1])
  gl_UNISTD_MODULE_INDICATOR([sleep])
  AC_CHECK_DECLS_ONCE([alarm])
  gl_SNAN
  gl_NAN_MIPS
  gl_FUNC_SNPRINTF
  gl_STDIO_MODULE_INDICATOR([snprintf])
  gl_MODULE_INDICATOR([snprintf])
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
  AC_REQUIRE([gl_SOCKETLIB])
  AC_REQUIRE([gl_SOCKETS])
  gl_TYPE_SOCKLEN_T
  AC_REQUIRE([gt_TYPE_WCHAR_T])
  AC_REQUIRE([gt_TYPE_WINT_T])
  gl_DOUBLE_EXPONENT_LOCATION
  gl_FUNC_STRERROR_R
  AS_IF([test $HAVE_DECL_STRERROR_R = 0 || test $REPLACE_STRERROR_R = 1], [
    AC_LIBOBJ([strerror_r])
    gl_PREREQ_STRERROR_R
  ])
  gl_STRING_MODULE_INDICATOR([strerror_r])
  dnl For the modules argp, error, xstrerror.
  gl_MODULE_INDICATOR([strerror_r-posix])
  gl_FUNC_SYMLINK
  gl_CONDITIONAL([GL_COND_OBJ_SYMLINK],
                 [test $HAVE_SYMLINK = 0 || test $REPLACE_SYMLINK = 1])
  gl_UNISTD_MODULE_INDICATOR([symlink])
  gl_SYS_IOCTL_H
  gl_SYS_IOCTL_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_SELECT_H
  gl_SYS_SELECT_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_SOCKET_H
  gl_SYS_SOCKET_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  AC_CHECK_FUNCS_ONCE([shutdown])
  gl_SYS_TIME_H
  gl_SYS_TIME_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_SYS_UIO_H
  gl_SYS_UIO_H_REQUIRE_DEFAULTS
  AC_PROG_MKDIR_P
  gl_THREAD
  AC_REQUIRE([gl_THREADLIB])
  gl_FUNC_TIME
  gl_CONDITIONAL([GL_COND_OBJ_TIME], [test $REPLACE_TIME = 1])
  AM_COND_IF([GL_COND_OBJ_TIME], [
    gl_PREREQ_TIME
  ])
  gl_TIME_MODULE_INDICATOR([time])
  gl_FUNC_UNSETENV
  gl_CONDITIONAL([GL_COND_OBJ_UNSETENV],
                 [test $HAVE_UNSETENV = 0 || test $REPLACE_UNSETENV = 1])
  AM_COND_IF([GL_COND_OBJ_UNSETENV], [
    gl_PREREQ_UNSETENV
  ])
  gl_STDLIB_MODULE_INDICATOR([unsetenv])
  gl_FUNC_USLEEP
  gl_CONDITIONAL([GL_COND_OBJ_USLEEP],
                 [test $HAVE_USLEEP = 0 || test $REPLACE_USLEEP = 1])
  gl_UNISTD_MODULE_INDICATOR([usleep])
  AC_REQUIRE([AC_C_RESTRICT])
  gl_FUNC_VASNPRINTF
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
  gl_XSIZE
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
    if test -n "$gltests_LIBOBJS"; then
      # Remove the extension.
changequote(,)dnl
      sed_drop_objext='s/\.o$//;s/\.obj$//'
      sed_dirname1='s,//*,/,g'
      sed_dirname2='s,\(.\)/$,\1,'
      sed_dirname3='s,^[^/]*$,.,'
      sed_dirname4='s,\(.\)/[^/]*$,\1,'
      sed_basename1='s,.*/,,'
changequote([, ])dnl
      for i in `for i in $gltests_LIBOBJS; do echo "$i"; done | sed -e "$sed_drop_objext" | sort | uniq`; do
        gltests_libobjs="$gltests_libobjs $i.$ac_objext"
        gltests_ltlibobjs="$gltests_ltlibobjs $i.lo"
        i_dir=`echo "$i" | sed -e "$sed_dirname1" -e "$sed_dirname2" -e "$sed_dirname3" -e "$sed_dirname4"`
        i_base=`echo "$i" | sed -e "$sed_basename1"`
        gltests_libobjdeps="$gltests_libobjdeps $i_dir/\$(DEPDIR)/$i_base.Po"
      done
    fi
    AC_SUBST([gltests_LIBOBJS], [$gltests_libobjs])
    AC_SUBST([gltests_LTLIBOBJS], [$gltests_ltlibobjs])
    AC_SUBST([gltests_LIBOBJDEPS], [$gltests_libobjdeps])
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
