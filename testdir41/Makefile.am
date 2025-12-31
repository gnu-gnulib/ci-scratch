## Makefile for the toplevel directory of GNU gettext
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

AUTOMAKE_OPTIONS = 1.5 gnu
ACLOCAL_AMFLAGS = -I gnulib-m4

SUBDIRS = gnulib-lib src

EXTRA_DIST = \
  version.sh DEPENDENCIES INSTALL.generic HACKING JOIN-GNU \
  autogen.sh


# Allow users to use "gnulib-tool --update".
EXTRA_DIST += gnulib-m4/gnulib-cache.m4


# Generate ChangeLog during "make dist".

dist-hook: gen-ChangeLog

.PHONY: gen-ChangeLog
gen-ChangeLog:
	$(AM_V_GEN)if test -d $(srcdir)/.git; then                 \
	  log_fix="$(srcdir)/build-aux/git-log-fix";               \
	  test -e "$$log_fix"                                      \
	    && amend_git_log="--amend=$$log_fix"                   \
	    || amend_git_log=;                                     \
	  $(top_srcdir)/build-aux/gitlog-to-changelog              \
	    --srcdir=$(srcdir)                                     \
	    $$amend_git_log --no-cluster -- .                      \
	    > "$(distdir)/ChangeLog-t"                             \
	    && rm -f "$(distdir)/ChangeLog"                        \
	    && mv "$(distdir)/ChangeLog-t" "$(distdir)/ChangeLog"; \
	fi
