#!/bin/sh
# Exercise sort buffer sizing for streaming input.

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
print_ver_ sort

seq -w 200000 > exp || framework_failure_

# The no-temp-file checks below need about 12 MiB of sort buffer,
# so test 10x that available as the check is somewhat racy.
avail_mem_mb=$(free -m 2>/dev/null | grep '^Mem:' | cut -F 7)
test "$avail_mem_mb" -gt 120 ||
  skip_ 'unable to determine enough memory available'
rlimit=$(ulimit  -v)
test "$rlimit" = 'unlimited' ||
test "$(($rlimit/1024))" -gt 120 ||
  skip_ 'unable to determine enough resources available'

cwd=$(pwd)

# Without an explicit -S, sort should grow a pipe buffer enough to avoid
# creating a temporary file for this input.
tac exp | TMPDIR="$cwd"/no-temp sort --parallel=1 > out || fail=1
{ test  -s out && compare exp out; } || fail=1

# Check the same path when sort has precomputed key pointers in the
# line table that must be adjusted after the buffer moves.
sed 's/^/k /' exp > exp-key || framework_failure_
tac exp-key | TMPDIR="$cwd"/no-temp sort --parallel=1 -k2,2 > out || fail=1
{ test  -s out && compare exp-key out; } || fail=1

# An explicit -S remains a limit for ordinary buffer growth, so this must
# still need a temporary file and fail because TMPDIR is not a directory.
returns_ 2 env TMPDIR="$cwd"/no-temp \
  $SHELL -c 'tac exp | sort --parallel=1 -S 1M > small-out' || fail=1

Exit $fail
