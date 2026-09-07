#!/bin/sh
# exercise the -w option

# Copyright (C) 2015-2026 Free Software Foundation, Inc.

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
print_ver_ ls
getlimits_

touch a b || framework_failure_
chmod a+x a || framework_failure_

# Negative values disallowed
returns_ 2 ls -w-1 || fail=1

# Verify octal parsing (especially since 0 is allowed)
returns_ 2 ls -w08 || fail=1

# Overflowed values are capped at SIZE_MAX
ls -w$SIZE_OFLOW || fail=1

# After coreutils 8.24 -w0 means no limit
# and delimiting with spaces
ls -w0 -x -T1 a b > out || fail=1
printf '%s\n' 'a  b' > exp || framework_failure_
compare exp out || fail=1

# Ensure that 0 line length doesn't cause division by zero
TERM=xterm ls -w0 -x --color=always || fail=1

# coreutils <= 8.24 could display 1 column too few
ls -w4 -x -T0 a b > out || fail=1
compare exp out || fail=1

# coreutils <= 9.11 could display 1 column too few
touch aa c || framework_failure_
cat <<\EOF > exp || framework_failure_
aa  b
c
EOF
ls -w5 -x -T0 aa b c > out || fail=1
compare exp out || fail=1

# coreutils <= 9.11 could display 1 column too few
cat <<\EOF > exp || framework_failure_
aa  c
b
EOF
ls -w5 -C -T0 aa b c > out || fail=1
compare exp out || fail=1

# These entries span 79 columns with a separator of two spaces
# coreutils <= 9.11, and BSDs wrap with -w79 as new line included
# Solaris 11 wraps with width <= 84? (COLUMNS=84 ls -m)
# uutils 0.7.0 wraps with width <= 96?
files="\
Desktop  Documents  Downloads  Music  Pictures  Public  Templates  Videos  code"
mkdir subdir2 && (cd subdir2 && touch $files) || framework_failure_
printf '%s\n' "$files" > exp || framework_failure_
ls -x -T0 -w79 subdir2 > out || fail=1  # Should not wrap at 79
compare exp out || fail=1
ls -x -T0 -w78 subdir2 > out || fail=1  # Should wrap at 78
test "$(wc -l < out)" -gt 1 || fail=1

Exit $fail
