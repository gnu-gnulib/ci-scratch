## DO NOT EDIT! GENERATED AUTOMATICALLY!
## Process this file with automake to produce Makefile.in.
# Copyright (C) 2002-2025 Free Software Foundation, Inc.
#
# This file is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This file is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this file.  If not, see <https://www.gnu.org/licenses/>.
#
# As a special exception to the GNU General Public License,
# this file may be distributed as part of a program that
# contains a configuration script generated by Autoconf, under
# the same distribution terms as the rest of that program.
#
# Generated by gnulib-tool.

AUTOMAKE_OPTIONS = 1.14 gnits

SUBDIRS =
noinst_HEADERS =
noinst_LIBRARIES =
noinst_LTLIBRARIES =
pkgdata_DATA =
EXTRA_DIST =
BUILT_SOURCES =
SUFFIXES =
MOSTLYCLEANFILES = core *.stackdump
MOSTLYCLEANDIRS =
CLEANFILES =
DISTCLEANFILES =
MAINTAINERCLEANFILES =
# No GNU Make output.

AM_CPPFLAGS = -DGNULIB_STRICT_CHECKING=1
AM_CFLAGS =

noinst_LIBRARIES += libgnu.a

libgnu_a_SOURCES =
libgnu_a_LIBADD = $(gl_LIBOBJS)
libgnu_a_DEPENDENCIES = $(gl_LIBOBJS)
EXTRA_libgnu_a_SOURCES =

## begin gnulib module absolute-header

# Use this preprocessor expression to decide whether #include_next works.
# Do not rely on a 'configure'-time test for this, since the expression
# might appear in an installed header, which is used by some other compiler.
HAVE_INCLUDE_NEXT = (__GNUC__ || __clang__ || 60000000 <= __DECC_VER)

## end   gnulib module absolute-header

## begin gnulib module errno-h

BUILT_SOURCES += $(ERRNO_H)

# We need the following in order to create <errno.h> when the system
# doesn't have one that is POSIX compliant.
if GL_GENERATE_ERRNO_H
errno.h: errno.in.h $(top_builddir)/config.status
	$(gl_V_at)$(SED_HEADER_STDOUT) \
	      -e 's|@''GUARD_PREFIX''@|GL|g' \
	      -e 's|@''INCLUDE_NEXT''@|$(INCLUDE_NEXT)|g' \
	      -e 's|@''PRAGMA_SYSTEM_HEADER''@|@PRAGMA_SYSTEM_HEADER@|g' \
	      -e 's|@''PRAGMA_COLUMNS''@|@PRAGMA_COLUMNS@|g' \
	      -e 's|@''NEXT_ERRNO_H''@|$(NEXT_ERRNO_H)|g' \
	      -e 's|@''EMULTIHOP_HIDDEN''@|$(EMULTIHOP_HIDDEN)|g' \
	      -e 's|@''EMULTIHOP_VALUE''@|$(EMULTIHOP_VALUE)|g' \
	      -e 's|@''ENOLINK_HIDDEN''@|$(ENOLINK_HIDDEN)|g' \
	      -e 's|@''ENOLINK_VALUE''@|$(ENOLINK_VALUE)|g' \
	      -e 's|@''EOVERFLOW_HIDDEN''@|$(EOVERFLOW_HIDDEN)|g' \
	      -e 's|@''EOVERFLOW_VALUE''@|$(EOVERFLOW_VALUE)|g' \
	      $(srcdir)/errno.in.h > $@-t
	$(AM_V_at)mv $@-t $@
else
errno.h: $(top_builddir)/config.status
	rm -f $@
endif
MOSTLYCLEANFILES += errno.h errno.h-t

EXTRA_DIST += errno.in.h

## end   gnulib module errno-h

## begin gnulib module gen-header

# In 'sed', replace the pattern space with a "DO NOT EDIT" comment.
SED_HEADER_NOEDIT = s,.*,/* DO NOT EDIT! GENERATED AUTOMATICALLY! */,

# '$(SED_HEADER_STDOUT) -e "..."' runs 'sed' but first outputs "DO NOT EDIT".
SED_HEADER_STDOUT = sed -e 1h -e '1$(SED_HEADER_NOEDIT)' -e 1G

# '$(SED_HEADER_TO_AT_t) FILE' copies FILE to $@-t, prepending a leading
# "DO_NOT_EDIT".  Although this could be done more simply via:
#	SED_HEADER_TO_AT_t = $(SED_HEADER_STDOUT) > $@-t
# the -n and 'w' avoid a fork+exec, at least when GNU Make is used.
SED_HEADER_TO_AT_t = $(SED_HEADER_STDOUT) -n -e 'w $@-t'

# Use $(gl_V_at) instead of $(AM_V_GEN) or $(AM_V_at) on a line that
# is its recipe's first line if and only if @NMD@ lines are absent.
gl_V_at = $(AM_V_GEN)

## end   gnulib module gen-header

## begin gnulib module snippet/arg-nonnull

# Because this Makefile snippet defines a variable used by other
# gnulib Makefile snippets, it must be present in all makefiles that
# need it. This is ensured by the applicability 'all' defined above.

ARG_NONNULL_H=$(srcdir)/arg-nonnull.h

EXTRA_DIST += arg-nonnull.h

## end   gnulib module snippet/arg-nonnull

## begin gnulib module snippet/c++defs

# Because this Makefile snippet defines a variable used by other
# gnulib Makefile snippets, it must be present in all makefiles that
# need it. This is ensured by the applicability 'all' defined above.

CXXDEFS_H=$(srcdir)/c++defs.h

EXTRA_DIST += c++defs.h

## end   gnulib module snippet/c++defs

## begin gnulib module snippet/warn-on-use

# Because this Makefile snippet defines a variable used by other
# gnulib Makefile snippets, it must be present in all makefiles that
# need it. This is ensured by the applicability 'all' defined above.

WARN_ON_USE_H=$(srcdir)/warn-on-use.h

EXTRA_DIST += warn-on-use.h

## end   gnulib module snippet/warn-on-use

## begin gnulib module stat-time

libgnu_a_SOURCES += stat-time.c

EXTRA_DIST += stat-time.h

## end   gnulib module stat-time

## begin gnulib module stdckdint-h

BUILT_SOURCES += $(STDCKDINT_H)

# We need the following in order to create <stdckdint.h> when the system
# doesn't have one that works with the given compiler.
if GL_GENERATE_STDCKDINT_H
stdckdint.h: stdckdint.in.h $(top_builddir)/config.status
	$(gl_V_at)$(SED_HEADER_STDOUT) \
	      -e 's|@''GUARD_PREFIX''@|GL|g' \
	      -e 's|@''INCLUDE_NEXT''@|$(INCLUDE_NEXT)|g' \
	      -e 's|@''PRAGMA_SYSTEM_HEADER''@|@PRAGMA_SYSTEM_HEADER@|g' \
	      -e 's|@''PRAGMA_COLUMNS''@|@PRAGMA_COLUMNS@|g' \
	      -e 's|@''NEXT_STDCKDINT_H''@|$(NEXT_STDCKDINT_H)|g' \
	      -e 's|@''HAVE_C_STDCKDINT_H''@|$(HAVE_C_STDCKDINT_H)|g' \
	      -e 's|@''HAVE_WORKING_C_STDCKDINT_H''@|$(HAVE_WORKING_C_STDCKDINT_H)|g' \
	      -e 's|@''HAVE_CXX_STDCKDINT_H''@|$(HAVE_CXX_STDCKDINT_H)|g' \
	      -e 's|@''HAVE_WORKING_CXX_STDCKDINT_H''@|$(HAVE_WORKING_CXX_STDCKDINT_H)|g' \
	  $(srcdir)/stdckdint.in.h > $@-t
	$(AM_V_at)mv $@-t $@
else
stdckdint.h: $(top_builddir)/config.status
	rm -f $@
endif
MOSTLYCLEANFILES += stdckdint.h stdckdint.h-t

EXTRA_DIST += intprops-internal.h stdckdint.in.h

## end   gnulib module stdckdint-h

## begin gnulib module stddef-h

BUILT_SOURCES += $(STDDEF_H)

# We need the following in order to create <stddef.h> when the system
# doesn't have one that works with the given compiler.
if GL_GENERATE_STDDEF_H
stddef.h: stddef.in.h $(top_builddir)/config.status
	$(gl_V_at)$(SED_HEADER_STDOUT) \
	      -e 's|@''GUARD_PREFIX''@|GL|g' \
	      -e 's|@''INCLUDE_NEXT''@|$(INCLUDE_NEXT)|g' \
	      -e 's|@''PRAGMA_SYSTEM_HEADER''@|@PRAGMA_SYSTEM_HEADER@|g' \
	      -e 's|@''PRAGMA_COLUMNS''@|@PRAGMA_COLUMNS@|g' \
	      -e 's|@''NEXT_STDDEF_H''@|$(NEXT_STDDEF_H)|g' \
	      -e 's|@''NULLPTR_T_NEEDS_STDDEF''@|$(NULLPTR_T_NEEDS_STDDEF)|g' \
	      -e 's|@''STDDEF_NOT_IDEMPOTENT''@|$(STDDEF_NOT_IDEMPOTENT)|g' \
	      -e 's|@''REPLACE_NULL''@|$(REPLACE_NULL)|g' \
	      -e 's|@''HAVE_MAX_ALIGN_T''@|$(HAVE_MAX_ALIGN_T)|g' \
	      $(srcdir)/stddef.in.h > $@-t
	$(AM_V_at)mv $@-t $@
else
stddef.h: $(top_builddir)/config.status
	rm -f $@
endif
MOSTLYCLEANFILES += stddef.h stddef.h-t

EXTRA_DIST += stddef.in.h

## end   gnulib module stddef-h

## begin gnulib module time-h

BUILT_SOURCES += time.h

# We need the following in order to create <time.h> when the system
# doesn't have one that works with the given compiler.
time.h: time.in.h $(top_builddir)/config.status $(CXXDEFS_H) $(ARG_NONNULL_H) $(WARN_ON_USE_H)
	$(gl_V_at)$(SED_HEADER_STDOUT) \
	      -e 's|@''GUARD_PREFIX''@|GL|g' \
	      -e 's|@''INCLUDE_NEXT''@|$(INCLUDE_NEXT)|g' \
	      -e 's|@''PRAGMA_SYSTEM_HEADER''@|@PRAGMA_SYSTEM_HEADER@|g' \
	      -e 's|@''PRAGMA_COLUMNS''@|@PRAGMA_COLUMNS@|g' \
	      -e 's|@''NEXT_TIME_H''@|$(NEXT_TIME_H)|g' \
	      -e 's/@''GNULIB_CTIME''@/$(GL_GNULIB_CTIME)/g' \
	      -e 's/@''GNULIB_LOCALTIME''@/$(GL_GNULIB_LOCALTIME)/g' \
	      -e 's/@''GNULIB_MKTIME''@/$(GL_GNULIB_MKTIME)/g' \
	      -e 's/@''GNULIB_NANOSLEEP''@/$(GL_GNULIB_NANOSLEEP)/g' \
	      -e 's/@''GNULIB_STRFTIME''@/$(GL_GNULIB_STRFTIME)/g' \
	      -e 's/@''GNULIB_STRPTIME''@/$(GL_GNULIB_STRPTIME)/g' \
	      -e 's/@''GNULIB_TIME''@/$(GL_GNULIB_TIME)/g' \
	      -e 's/@''GNULIB_TIMEGM''@/$(GL_GNULIB_TIMEGM)/g' \
	      -e 's/@''GNULIB_TIMESPEC_GET''@/$(GL_GNULIB_TIMESPEC_GET)/g' \
	      -e 's/@''GNULIB_TIMESPEC_GETRES''@/$(GL_GNULIB_TIMESPEC_GETRES)/g' \
	      -e 's/@''GNULIB_TIME_R''@/$(GL_GNULIB_TIME_R)/g' \
	      -e 's/@''GNULIB_TIME_RZ''@/$(GL_GNULIB_TIME_RZ)/g' \
	      -e 's/@''GNULIB_TZNAME''@/$(GL_GNULIB_TZNAME)/g' \
	      -e 's/@''GNULIB_TZSET''@/$(GL_GNULIB_TZSET)/g' \
	      -e 's/@''GNULIB_MDA_TZSET''@/$(GL_GNULIB_MDA_TZSET)/g' \
	      -e 's|@''HAVE_DECL_LOCALTIME_R''@|$(HAVE_DECL_LOCALTIME_R)|g' \
	      -e 's|@''HAVE_NANOSLEEP''@|$(HAVE_NANOSLEEP)|g' \
	      -e 's|@''HAVE_STRPTIME''@|$(HAVE_STRPTIME)|g' \
	      -e 's|@''HAVE_TIMEGM''@|$(HAVE_TIMEGM)|g' \
	      -e 's|@''HAVE_TIMESPEC_GET''@|$(HAVE_TIMESPEC_GET)|g' \
	      -e 's|@''HAVE_TIMESPEC_GETRES''@|$(HAVE_TIMESPEC_GETRES)|g' \
	      -e 's|@''HAVE_TIMEZONE_T''@|$(HAVE_TIMEZONE_T)|g' \
	      -e 's|@''HAVE_TZALLOC''@|$(HAVE_TZALLOC)|g' \
	      -e 's|@''REPLACE_CTIME''@|$(REPLACE_CTIME)|g' \
	      -e 's|@''REPLACE_GMTIME''@|$(REPLACE_GMTIME)|g' \
	      -e 's|@''REPLACE_LOCALTIME''@|$(REPLACE_LOCALTIME)|g' \
	      -e 's|@''REPLACE_LOCALTIME_R''@|$(REPLACE_LOCALTIME_R)|g' \
	      -e 's|@''REPLACE_LOCALTIME_RZ''@|$(REPLACE_LOCALTIME_RZ)|g' \
	      -e 's|@''REPLACE_MKTIME''@|$(REPLACE_MKTIME)|g' \
	      -e 's|@''REPLACE_MKTIME_Z''@|$(REPLACE_MKTIME_Z)|g' \
	      -e 's|@''REPLACE_NANOSLEEP''@|$(REPLACE_NANOSLEEP)|g' \
	      -e 's|@''REPLACE_STRFTIME''@|$(REPLACE_STRFTIME)|g' \
	      -e 's|@''REPLACE_TIME''@|$(REPLACE_TIME)|g' \
	      -e 's|@''REPLACE_TIMEGM''@|$(REPLACE_TIMEGM)|g' \
	      -e 's|@''REPLACE_TIMESPEC_GET''@|$(REPLACE_TIMESPEC_GET)|g' \
	      -e 's|@''REPLACE_TIMESPEC_GETRES''@|$(REPLACE_TIMESPEC_GETRES)|g' \
	      -e 's|@''REPLACE_TZSET''@|$(REPLACE_TZSET)|g' \
	      -e 's|@''PTHREAD_H_DEFINES_STRUCT_TIMESPEC''@|$(PTHREAD_H_DEFINES_STRUCT_TIMESPEC)|g' \
	      -e 's|@''SYS_TIME_H_DEFINES_STRUCT_TIMESPEC''@|$(SYS_TIME_H_DEFINES_STRUCT_TIMESPEC)|g' \
	      -e 's|@''TIME_H_DEFINES_STRUCT_TIMESPEC''@|$(TIME_H_DEFINES_STRUCT_TIMESPEC)|g' \
	      -e 's|@''UNISTD_H_DEFINES_STRUCT_TIMESPEC''@|$(UNISTD_H_DEFINES_STRUCT_TIMESPEC)|g' \
	      -e 's|@''TIME_H_DEFINES_TIME_UTC''@|$(TIME_H_DEFINES_TIME_UTC)|g' \
	      -e '/definitions of _GL_FUNCDECL_RPL/r $(CXXDEFS_H)' \
	      -e '/definition of _GL_ARG_NONNULL/r $(ARG_NONNULL_H)' \
	      -e '/definition of _GL_WARN_ON_USE/r $(WARN_ON_USE_H)' \
	      $(srcdir)/time.in.h > $@-t
	$(AM_V_at)mv $@-t $@
MOSTLYCLEANFILES += time.h time.h-t

EXTRA_DIST += time.in.h

## end   gnulib module time-h


mostlyclean-local: mostlyclean-generic
	@for dir in '' $(MOSTLYCLEANDIRS); do \
	  if test -n "$$dir" && test -d $$dir; then \
	    echo "rmdir $$dir"; rmdir $$dir; \
	  fi; \
	done; \
	:
distclean-local: distclean-gnulib-libobjs
distclean-gnulib-libobjs:
	-rm -f @gl_LIBOBJDEPS@
maintainer-clean-local: distclean-gnulib-libobjs
