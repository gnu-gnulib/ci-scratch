dnl Configuration for the git-merge-changelog directory of GNU vc-changelog
dnl Copyright (C) 2025 Free Software Foundation, Inc.
dnl
dnl This program is free software: you can redistribute it and/or modify
dnl it under the terms of the GNU General Public License as published by
dnl the Free Software Foundation; either version 3 of the License, or
dnl (at your option) any later version.
dnl
dnl This program is distributed in the hope that it will be useful,
dnl but WITHOUT ANY WARRANTY; without even the implied warranty of
dnl MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
dnl GNU General Public License for more details.
dnl
dnl You should have received a copy of the GNU General Public License
dnl along with this program.  If not, see <https://www.gnu.org/licenses/>.

dnl Process this file with autoconf to produce a configure script.

AC_PREREQ([2.64])
AC_INIT([git-merge-changelog], [package], [bug-vc-changelog@gnu.org])
AC_CONFIG_SRCDIR([src/git-merge-changelog.c])
AC_CONFIG_AUX_DIR([build-aux])
. $srcdir/version.sh
gl_INIT_PACKAGE_VERSION([$VERSION_NUMBER])
AM_INIT_AUTOMAKE([1.13 silent-rules])
AC_CONFIG_HEADERS([config.h])

dnl Override automake's tar command used for creating distributions:
dnl - Use --owner=root --group=root to avoid unsuitable file ownership after
dnl   the tarball is unpacked by root.
am__tar='${AMTAR} chof - --owner=root --group=root "$$tardir"'

dnl Checks for basic programs.

AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_MKDIR_P

dnl Check for host type.

AC_CANONICAL_HOST

dnl Checks that augment the CPPFLAGS.

gl_EARLY

dnl Checks for compiler output filename suffixes.

AC_OBJEXT
AC_EXEEXT

dnl Checks for types, header files, functions and declarations.

gl_INIT

AC_CONFIG_FILES([Makefile])
AC_CONFIG_FILES([gnulib-lib/Makefile])
AC_CONFIG_FILES([src/Makefile])
AC_OUTPUT
