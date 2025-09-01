/* Next grapheme cluster length test.
   Copyright (C) 2010-2025 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify it
   under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* Written by Ben Pfaff <blp@cs.stanford.edu>, 2010. */

#include <config.h>

/* Specification. */
#include <unigbrk.h>

#include <stdio.h>
#include <stdlib.h>

#include "macros.h"

static void
test_u8_grapheme_next (const char *input, size_t n, size_t len)
{
  const uint8_t *s = (const uint8_t *) input;
  const uint8_t *next = u8_grapheme_next (s, s + n);
  if (next != s + len)
    {
      size_t i;

      if (next == NULL)
        fputs ("u8_grapheme_next returned NULL", stderr);
      else
        fprintf (stderr, "u8_grapheme_next skipped %tu bytes", next - s);
      fprintf (stderr, ", expected %zu:\n", len);
      for (i = 0; i < n; i++)
        fprintf (stderr, " %02x", s[i]);
      putc ('\n', stderr);
      fflush (stderr);
      abort ();
    }
}

int
main (void)
{
  static const uint8_t s[] = "abc";

  /* Empty string. */
  ASSERT (u8_grapheme_next (NULL, NULL) == NULL);
  ASSERT (u8_grapheme_next (s, s) == NULL);

  /* Standalone 1-unit graphemes.  */
  test_u8_grapheme_next ("a", 1, 1);
  test_u8_grapheme_next ("ab", 2, 1);
  test_u8_grapheme_next ("abc", 3, 1);

  /* Multi-unit, single code point graphemes. */
#define HIRAGANA_A "\343\201\202" /* あ: Hiragana letter 'a'. */
  test_u8_grapheme_next (HIRAGANA_A, 3, 3);
  test_u8_grapheme_next (HIRAGANA_A"x", 4, 3);
  test_u8_grapheme_next (HIRAGANA_A HIRAGANA_A, 6, 3);

  /* Combining accents. */
#define GRAVE "\314\200"        /* Combining grave accent. */
#define ACUTE "\314\201"        /* Combining acute accent. */
  test_u8_grapheme_next ("e"ACUTE, 3, 3);
  test_u8_grapheme_next ("e"ACUTE GRAVE, 5, 5);
  test_u8_grapheme_next ("e"ACUTE"x", 4, 3);
  test_u8_grapheme_next ("e"ACUTE "e"ACUTE, 6, 3);

  /* CR LF handling.  */
  test_u8_grapheme_next ("\r\nd", 3, 2);

  /* Emoji modifier / ZWJ sequence. */
  test_u8_grapheme_next ("\342\230\205\314\205\315\207\342\200\215\342\230\200",
                         13, 13);

  /* Regional indicators. */
  test_u8_grapheme_next ("\360\237\207\251\360\237\207\252\360\237\207\253\360\237\207\267",
                         16, 8);

  return test_exit_status;
}
