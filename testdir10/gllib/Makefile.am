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

## begin gnulib module sys_socket-h

BUILT_SOURCES += sys/socket.h
libgnu_a_SOURCES += sys_socket.c

# We need the following in order to create <sys/socket.h> when the system
# doesn't have one that works with the given compiler.
sys/socket.h: sys_socket.in.h $(top_builddir)/config.status $(CXXDEFS_H) $(WARN_ON_USE_H) $(ARG_NONNULL_H)
	$(AM_V_GEN)$(MKDIR_P) '%reldir%/sys'
	$(AM_V_at)$(SED_HEADER_STDOUT) \
	      -e 's|@''GUARD_PREFIX''@|GL|g' \
	      -e 's|@''INCLUDE_NEXT''@|$(INCLUDE_NEXT)|g' \
	      -e 's|@''PRAGMA_SYSTEM_HEADER''@|@PRAGMA_SYSTEM_HEADER@|g' \
	      -e 's|@''PRAGMA_COLUMNS''@|@PRAGMA_COLUMNS@|g' \
	      -e 's|@''NEXT_SYS_SOCKET_H''@|$(NEXT_SYS_SOCKET_H)|g' \
	      -e 's|@''HAVE_SYS_SOCKET_H''@|$(HAVE_SYS_SOCKET_H)|g' \
	      -e 's/@''GNULIB_CLOSE''@/$(GL_GNULIB_CLOSE)/g' \
	      -e 's/@''GNULIB_SOCKET''@/$(GL_GNULIB_SOCKET)/g' \
	      -e 's/@''GNULIB_CONNECT''@/$(GL_GNULIB_CONNECT)/g' \
	      -e 's/@''GNULIB_ACCEPT''@/$(GL_GNULIB_ACCEPT)/g' \
	      -e 's/@''GNULIB_BIND''@/$(GL_GNULIB_BIND)/g' \
	      -e 's/@''GNULIB_GETPEERNAME''@/$(GL_GNULIB_GETPEERNAME)/g' \
	      -e 's/@''GNULIB_GETSOCKNAME''@/$(GL_GNULIB_GETSOCKNAME)/g' \
	      -e 's/@''GNULIB_GETSOCKOPT''@/$(GL_GNULIB_GETSOCKOPT)/g' \
	      -e 's/@''GNULIB_LISTEN''@/$(GL_GNULIB_LISTEN)/g' \
	      -e 's/@''GNULIB_RECV''@/$(GL_GNULIB_RECV)/g' \
	      -e 's/@''GNULIB_SEND''@/$(GL_GNULIB_SEND)/g' \
	      -e 's/@''GNULIB_RECVFROM''@/$(GL_GNULIB_RECVFROM)/g' \
	      -e 's/@''GNULIB_SENDTO''@/$(GL_GNULIB_SENDTO)/g' \
	      -e 's/@''GNULIB_SETSOCKOPT''@/$(GL_GNULIB_SETSOCKOPT)/g' \
	      -e 's/@''GNULIB_SHUTDOWN''@/$(GL_GNULIB_SHUTDOWN)/g' \
	      -e 's/@''GNULIB_ACCEPT4''@/$(GL_GNULIB_ACCEPT4)/g' \
	      -e 's|@''HAVE_WINSOCK2_H''@|$(HAVE_WINSOCK2_H)|g' \
	      -e 's|@''HAVE_WS2TCPIP_H''@|$(HAVE_WS2TCPIP_H)|g' \
	      -e 's|@''HAVE_STRUCT_SOCKADDR_STORAGE''@|$(HAVE_STRUCT_SOCKADDR_STORAGE)|g' \
	      -e 's|@''HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY''@|$(HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY)|g' \
	      -e 's|@''HAVE_SA_FAMILY_T''@|$(HAVE_SA_FAMILY_T)|g' \
	      -e 's|@''HAVE_ACCEPT4''@|$(HAVE_ACCEPT4)|g' \
	      -e '/definitions of _GL_FUNCDECL_RPL/r $(CXXDEFS_H)' \
	      -e '/definition of _GL_ARG_NONNULL/r $(ARG_NONNULL_H)' \
	      -e '/definition of _GL_WARN_ON_USE/r $(WARN_ON_USE_H)' \
	      $(srcdir)/sys_socket.in.h > $@-t
	$(AM_V_at)mv $@-t $@
MOSTLYCLEANFILES += sys/socket.h sys/socket.h-t
MOSTLYCLEANDIRS += sys

EXTRA_DIST += sys_socket.in.h

## end   gnulib module sys_socket-h

## begin gnulib module sys_types-h

BUILT_SOURCES += sys/types.h

# We need the following in order to create <sys/types.h> when the system
# doesn't have one that works with the given compiler.
sys/types.h: sys_types.in.h $(top_builddir)/config.status
	$(AM_V_GEN)$(MKDIR_P) '%reldir%/sys'
	$(AM_V_at)$(SED_HEADER_STDOUT) \
	      -e 's|@''GUARD_PREFIX''@|GL|g' \
	      -e 's|@''INCLUDE_NEXT''@|$(INCLUDE_NEXT)|g' \
	      -e 's|@''PRAGMA_SYSTEM_HEADER''@|@PRAGMA_SYSTEM_HEADER@|g' \
	      -e 's|@''PRAGMA_COLUMNS''@|@PRAGMA_COLUMNS@|g' \
	      -e 's|@''NEXT_SYS_TYPES_H''@|$(NEXT_SYS_TYPES_H)|g' \
	      -e 's|@''WINDOWS_64_BIT_OFF_T''@|$(WINDOWS_64_BIT_OFF_T)|g' \
	      -e 's|@''HAVE_OFF64_T''@|$(HAVE_OFF64_T)|g' \
	      -e 's|@''WINDOWS_STAT_INODES''@|$(WINDOWS_STAT_INODES)|g' \
	      $(srcdir)/sys_types.in.h > $@-t
	$(AM_V_at)mv $@-t $@
MOSTLYCLEANFILES += sys/types.h sys/types.h-t
MOSTLYCLEANDIRS += sys

EXTRA_DIST += sys_types.in.h

## end   gnulib module sys_types-h

## begin gnulib module sys_uio-h

BUILT_SOURCES += sys/uio.h

# We need the following in order to create <sys/uio.h> when the system
# doesn't have one that works with the given compiler.
sys/uio.h: sys_uio.in.h $(top_builddir)/config.status
	$(AM_V_GEN)$(MKDIR_P) '%reldir%/sys'
	$(AM_V_at)$(SED_HEADER_STDOUT) \
	      -e 's|@''GUARD_PREFIX''@|GL|g' \
	      -e 's|@''INCLUDE_NEXT''@|$(INCLUDE_NEXT)|g' \
	      -e 's|@''PRAGMA_SYSTEM_HEADER''@|@PRAGMA_SYSTEM_HEADER@|g' \
	      -e 's|@''PRAGMA_COLUMNS''@|@PRAGMA_COLUMNS@|g' \
	      -e 's|@''NEXT_SYS_UIO_H''@|$(NEXT_SYS_UIO_H)|g' \
	      -e 's|@''HAVE_SYS_UIO_H''@|$(HAVE_SYS_UIO_H)|g' \
	      $(srcdir)/sys_uio.in.h > $@-t
	$(AM_V_at)mv $@-t $@
MOSTLYCLEANFILES += sys/uio.h sys/uio.h-t
MOSTLYCLEANDIRS += sys

EXTRA_DIST += sys_uio.in.h

## end   gnulib module sys_uio-h


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
