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

AUTOMAKE_OPTIONS = 1.14 foreign

SUBDIRS = .
TESTS =
XFAIL_TESTS =
TESTS_ENVIRONMENT =
noinst_PROGRAMS =
EXTRA_PROGRAMS =
noinst_HEADERS =
noinst_LIBRARIES =
pkgdata_DATA =
EXTRA_DIST =
BUILT_SOURCES =
SUFFIXES =
MOSTLYCLEANFILES = core *.stackdump
MOSTLYCLEANDIRS =
CLEANFILES =
DISTCLEANFILES =
MAINTAINERCLEANFILES =

CFLAGS = @GL_CFLAG_ALLOW_WARNINGS@ @CFLAGS@
CXXFLAGS = @GL_CXXFLAG_ALLOW_WARNINGS@ @CXXFLAGS@

AM_CPPFLAGS = \
  -DGNULIB_STRICT_CHECKING=1 \
  -D@gltests_WITNESS@=1 \
  -I. -I$(srcdir) \
  -I.. -I$(srcdir)/.. \
  -I../gllib -I$(srcdir)/../gllib

LDADD = ../gllib/libgnu.a

TESTS_ENVIRONMENT += EXEEXT='@EXEEXT@' srcdir='$(srcdir)'
IGNORE_SKIPPED_LOGS = 1

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

## begin gnulib module stdcountof-h-c++-tests

if ANSICXX
TESTS += test-stdcountof-h-c++
noinst_PROGRAMS += test-stdcountof-h-c++
test_stdcountof_h_c___SOURCES = test-stdcountof-h-c++.cc
endif
EXTRA_DIST += test-stdcountof-h-c++.cc

## end   gnulib module stdcountof-h-c++-tests

## begin gnulib module stdcountof-h-tests

TESTS += test-stdcountof-h
noinst_PROGRAMS += test-stdcountof-h
EXTRA_DIST += test-stdcountof-h.c macros.h

## end   gnulib module stdcountof-h-tests

all: all-notice
all-notice:
	@echo '## ---------------------------------------------------- ##'
	@echo '## ------------------- Gnulib tests ------------------- ##'
	@echo '## You can ignore compiler warnings in this directory.  ##'
	@echo '## ---------------------------------------------------- ##'

check-am: check-notice
check-notice:
	@echo '## ---------------------------------------------------------------------- ##'
	@echo '## ---------------------------- Gnulib tests ---------------------------- ##'
	@echo '## Please report test failures in this directory to <bug-gnulib@gnu.org>. ##'
	@echo '## ---------------------------------------------------------------------- ##'

# Clean up after Solaris cc.
clean-local:
	rm -rf SunWS_cache

mostlyclean-local: mostlyclean-generic
	@for dir in '' $(MOSTLYCLEANDIRS); do \
	  if test -n "$$dir" && test -d $$dir; then \
	    echo "rmdir $$dir"; rmdir $$dir; \
	  fi; \
	done; \
	:
