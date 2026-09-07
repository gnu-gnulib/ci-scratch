#!/bin/sh
# Ensure that several programs work fine, even with stdin initially closed.

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
getlimits_

printf '%s' "\
basenc --base16 -
basenc --base2lsbf -
basenc --base2msbf -
basenc --base32 -
basenc --base32hex -
basenc --base58 -
basenc --base64 -
basenc --base64url -
cat -
cksum -a blake2b -
cksum -a bsd -
cksum -a crc -
cksum -a crc32b -
cksum -a md5 -
cksum -a sha1 -
cksum -a sha2 -l 256 -
cksum -a sha3 -l 256 -
cksum -a sm3 -
cksum -a sysv -
cksum -c -
comm - -
cut -f1 -
date --file=-
dd
dircolors -
du --files0-from=-
expand -
factor
fmt -
fold -
head -n1 -
join - /dev/null
nl -
numfmt
od -
paste -
pr -
ptx -
shuf -
split -
stty
tac -
tail -
tee
tr a a
tsort
unexpand -
uniq -
wc -
" |
sort -k 1b,1 > all_readers || framework_failure_

printf '%s\n' $built_programs |
sort -k 1b,1 > built_programs || framework_failure_

join all_readers built_programs > built_writers || framework_failure_

while read reader; do
  $reader 2>err <&- && fail=1
  ! grep -E "$EBADF" err >/dev/null \
    && { fail=1; cat err; echo "$reader: failed to diagnose EBADF" >&2; }
done < built_writers

Exit $fail
