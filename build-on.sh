#!/bin/sh

# Copyright (C) 2024-2025 Free Software Foundation, Inc.
#
# This file is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published
# by the Free Software Foundation, either version 3 of the License,
# or (at your option) any later version.
#
# This file is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.

# This script builds a tarball of the package on a single platform.
# Usage: build-on.sh PACKAGE CONFIGURE_OPTIONS MAKE PREFIX PREREQUISITES

package="$1"
configure_options="$2"
make="$3"
prefix="$4"
prerequisites="$5"

set -x

case "$configure_options" in
  --host=riscv*) cross_compiling=true ;;
  *)             cross_compiling=false ;;
esac

# Build and install the prerequisites.
for prereq in $prerequisites; do
  tar xfz $prereq.tar.gz
  cd $prereq
  # --disable-shared avoids problem 1) with rpath on ELF systems, 2) with DLLs on Windows.
  ./configure $configure_options --disable-shared --prefix="$prefix" > log1 2>&1; rc=$?; cat log1; test $rc = 0 || exit 1
  $make > log2 2>&1; rc=$?; cat log2; test $rc = 0 || exit 1
  $make install > log4 2>&1; rc=$?; cat log4; test $rc = 0 || exit 1
  cd ..
done

# We expect to find the sources in the repository.
# testdir1: iconv problem on macOS 14.
# iconv-capabilities: investigate iconv capabilities on macOS 14.
# testdir2: testing poll.
# testdir3: supersede, canonicalize, readlink problem on Cygwin 3.3.6.
# testdir4: testing the workaround to that problem.
# testdir5: nstrftime problem on MSVC.
# testdir6: GB18030 locale problem on Solaris 11 OmniOS.
# testdir7: an experiment with perl.
# testdir8: access, euidaccess, sigaction problem on Cygwin 3.5.5.
# testdir9: sys_select-h.
# testdir10: sys_socket-h.
# testdir11: sys_un-h.
# testdir12: sys_types-h.
# testdir13: sys_stat-h.
# testdir14: isalnum_l.
# testdir15: getlocalename_l.
# testdir16: c32isalnum c32isalpha c32isgraph c32islower c32isprint c32ispunct c32isspace c32isupper c32tolower c32toupper.
# testdir17: trim.
# testdir18: vc-mtime.
# testdir19: gettext-runtime
# testdir20: stddef-h
# testdir21: open openat
# testdir22: stat-time
cd testdir22 || exit 1

# Bring the time stamps into an order that will not require autoconf, automake, etc. to run again.
sleep 1; touch `find . -name aclocal.m4 -type f`
sleep 1; touch `find . -name configure -type f`
sleep 1; touch `find . -name config.h.in -type f`
sleep 1; touch `find . -name Makefile.in -type f`

mkdir build
cd build

# Configure.
CPPFLAGS="$CPPFLAGS -DCONTINUE_AFTER_ASSERT" \
FORCE_UNSAFE_CONFIGURE=1 ../configure --config-cache --with-included-libunistring $configure_options > log1 2>&1; rc=$?; cat log1; test $rc = 0 || exit 1

# Build.
$make > log2 2>&1; rc=$?; cat log2; test $rc = 0 || exit 1

if ! $cross_compiling; then
  # Run the tests.
  $make check > log3 2>&1; rc=$?; cat log3; test $rc = 0 || exit 1
fi

cd ..
