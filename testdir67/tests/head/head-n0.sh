#!/bin/sh
# Make sure that 'head -n 0' and 'head -c 0' opens files for reading.

# Copyright (C) 2026 Free Software Foundation, Inc.

# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.

. "${srcdir=.}/tests/init.sh"; path_prepend_ ./src
print_ver_ head
getlimits_

mkdir dir || framework_failure_
echo a > file || framework_failure_

# Test 'head -n 0' with an existing file or directory.
for args in dir file; do
  for opt in -n -c; do
    head $opt 0 $args >out 2>err || fail=1
    compare /dev/null out || fail=1
    compare /dev/null err || fail=1
  done
done

# Test 'head -n 0' with multiple existing arguments and headers disabled.
for args in 'dir file' 'file dir'; do
  for opt in -n -c; do
    head -q $opt 0 $args >out 2>err || fail=1
    compare /dev/null out || fail=1
    compare /dev/null err || fail=1
  done
done

# Test 'head -n 0' with multiple existing arguments and headers enabled.
for args in 'dir file' 'file dir'; do
  file1=$(echo "$args" | cut -d ' ' -f1)
  file2=$(echo "$args" | cut -d ' ' -f2)
  cat <<EOF > exp || framework_failure_
==> $file1 <==

==> $file2 <==
EOF
  for opt in -n -c; do
    head $opt 0 $args >out 2>err || fail=1
    compare exp out || fail=1
    compare /dev/null err || fail=1
  done
done

# Test 'head -n 0' with a missing file.
cat <<EOF >exp || framework_failure_
head: cannot open 'missing1' for reading: $ENOENT
EOF
for opt in -n -c; do
  returns_ 1 head $opt 0 missing1 >out 2>err || fail=1
  compare /dev/null out || fail=1
  compare exp err || fail=1
done

# Test 'head -n 0' with multiple missing files.
cat <<EOF >exp || framework_failure_
head: cannot open 'missing1' for reading: $ENOENT
head: cannot open 'missing2' for reading: $ENOENT
EOF
for opt in -n -c; do
  returns_ 1 head $opt 0 missing1 missing2 >out 2>err || fail=1
  compare /dev/null out || fail=1
  compare exp err || fail=1
done

Exit $fail
