## Makefile for the git-merge-changelog/src subdirectory of GNU vc-changelog
## Copyright (C) 2025 Free Software Foundation, Inc.
##
## This program is free software: you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; either version 3 of the License, or
## (at your option) any later version.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program.  If not, see <https://www.gnu.org/licenses/>.

## Process this file with automake to produce Makefile.in.

AUTOMAKE_OPTIONS = 1.5 gnits
EXTRA_DIST =
MOSTLYCLEANFILES = core *.stackdump
CLEANFILES =
DISTCLEANFILES =

RM = rm -f

bin_PROGRAMS = git-merge-changelog

# Note that Automake's $(DEFAULT_INCLUDES) already contains
# -I. -I$(srcdir) -I$(top_builddir).
AM_CPPFLAGS = \
  -I../gnulib-lib -I$(srcdir)/../gnulib-lib

# Source dependencies.
git_merge_changelog_SOURCES = git-merge-changelog.c

# Link dependencies.
LDADD = ../gnulib-lib/libgmc.a @LIBINTL@ $(LIBTHREAD)
