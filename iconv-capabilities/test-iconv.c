#include <iconv.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

iconv_t
traced_iconv_open (const char *tocode, const char *fromcode)
{
  iconv_t cd = iconv_open (tocode, fromcode);
  fprintf (stderr, "iconv_open (\"%s\", \"%s\") -> %p\n", tocode, fromcode, cd);
  if (cd != (iconv_t)-1)
    {
#ifdef ICONV_GET_TRANSLITERATE
      {
        int x;
        if (iconvctl (cd, ICONV_GET_TRANSLITERATE, &x) == 0)
          fprintf (stderr, "  transliterate=%d\n", x);
      }
#endif
#ifdef ICONV_GET_DISCARD_ILSEQ
      {
        int x;
        if (iconvctl (cd, ICONV_GET_DISCARD_ILSEQ, &x) == 0)
          fprintf (stderr, "  discard_ilseq=%d\n", x);
      }
#endif
#ifdef ICONV_GET_ILSEQ_INVALID
      {
        int x;
        if (iconvctl (cd, ICONV_GET_ILSEQ_INVALID, &x) == 0)
          fprintf (stderr, "  ilseq_invalid=%d\n", x);
      }
#endif
    }
  return cd;
}

size_t
traced_iconv (iconv_t cd, char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft)
{
  char *inbuf_before = *inbuf;
  char *outbuf_before = *outbuf;
  size_t ret = iconv (cd, inbuf, inbytesleft, outbuf, outbytesleft);
  char *inbuf_after = *inbuf;
  char *outbuf_after = *outbuf;
  if (ret == (size_t)-1)
    fprintf (stderr, "iconv() -> -1, errno=%d%s\n", errno,
             errno == EINVAL ? "=EINVAL" : errno == EILSEQ ? "=EILSEQ" : errno == E2BIG ? "=E2BIG" : "");
  else
    fprintf (stderr, "iconv() -> %d\n", (int) ret);
  fprintf (stderr, "input consumed: ");
  for (char *p = inbuf_before; p < inbuf_after; p++)
    fprintf (stderr, " 0x%02X", (unsigned char) *p);
  fprintf (stderr, "\noutput produced:");
  for (char *q = outbuf_before; q < outbuf_after; q++)
    fprintf (stderr, " 0x%02X", (unsigned char) *q);
  fprintf (stderr, "\n");
  return ret;
}

#undef iconv_open
#define iconv_open traced_iconv_open
#undef iconv
#define iconv traced_iconv

int
main ()
{
  /* Try converting "ł" to ISO-8859-1.  */
  for (int translit = 0; translit <= 1; translit++)
    for (int ignore = 0; ignore <= 1; ignore++)
      for (int ilseq_invalid = 0; ilseq_invalid <= 1; ilseq_invalid++)
        {
#ifndef ICONV_GET_ILSEQ_INVALID
          if (ilseq_invalid == 1)
#endif
            {
              fprintf (stderr, "======= Testing translit=%d, ignore=%d, ilseq_invalid=%d\n", translit, ignore, ilseq_invalid);
              char tocode[50];
              sprintf (tocode, "%s%s%s", "ISO-8859-1"
#ifdef ICONV_SET_TRANSLITERATE
                       , ""
#else
                       , translit ? "//TRANSLIT" : ""
#endif
#ifdef ICONV_SET_DISCARD_ILSEQ
                       , ""
#else
                       , ignore ? "//IGNORE" : ""
#endif
                       );
              {
                iconv_t cd = iconv_open (tocode, "UTF-8");
                if (cd != (iconv_t)-1)
                  {
#ifdef ICONV_SET_TRANSLITERATE
                    {
                      int x = translit;
                      if (iconvctl (cd, ICONV_SET_TRANSLITERATE, &x) != 0)
                        fprintf (stderr, "iconvctl ICONV_SET_TRANSLITERATE %d failed!\n", x);
                    }
#endif
#ifdef ICONV_SET_DISCARD_ILSEQ
                    {
                      int x = ignore;
                      if (iconvctl (cd, ICONV_SET_DISCARD_ILSEQ, &x) != 0)
                        fprintf (stderr, "iconvctl ICONV_SET_DISCARD_ILSEQ %d failed!\n", x);
                    }
#endif
#ifdef ICONV_SET_ILSEQ_INVALID
                    {
                      int x = ilseq_invalid;
                      if (iconvctl (cd, ICONV_SET_ILSEQ_INVALID, &x) != 0)
                        fprintf (stderr, "iconvctl ICONV_SET_ILSEQ_INVALID %d failed!\n", x);
                    }
#endif
                    char inbuf[2] = { 0xC5, 0x82 };
                    char outbuf[10];
                    char *inptr = inbuf;
                    char *outptr = outbuf;
                    size_t inbytesleft = sizeof (inbuf);
                    size_t outbytesleft = sizeof (outbuf);
                    size_t res = iconv (cd, &inptr, &inbytesleft, &outptr, &outbytesleft);
                    (void) res;
                    iconv_close (cd);
                  }
              }
              {
                iconv_t cd = iconv_open (tocode, "ISO-8859-2");
                if (cd != (iconv_t)-1)
                  {
#ifdef ICONV_SET_TRANSLITERATE
                    {
                      int x = translit;
                      if (iconvctl (cd, ICONV_SET_TRANSLITERATE, &x) != 0)
                        fprintf (stderr, "iconvctl ICONV_SET_TRANSLITERATE %d failed!\n", x);
                    }
#endif
#ifdef ICONV_SET_DISCARD_ILSEQ
                    {
                      int x = ignore;
                      if (iconvctl (cd, ICONV_SET_DISCARD_ILSEQ, &x) != 0)
                        fprintf (stderr, "iconvctl ICONV_SET_DISCARD_ILSEQ %d failed!\n", x);
                    }
#endif
#ifdef ICONV_SET_ILSEQ_INVALID
                    {
                      int x = ilseq_invalid;
                      if (iconvctl (cd, ICONV_SET_ILSEQ_INVALID, &x) != 0)
                        fprintf (stderr, "iconvctl ICONV_SET_ILSEQ_INVALID %d failed!\n", x);
                    }
#endif
                    char inbuf[1] = { 0xB3 };
                    char outbuf[10];
                    char *inptr = inbuf;
                    char *outptr = outbuf;
                    size_t inbytesleft = sizeof (inbuf);
                    size_t outbytesleft = sizeof (outbuf);
                    size_t res = iconv (cd, &inptr, &inbytesleft, &outptr, &outbytesleft);
                    (void) res;
                    iconv_close (cd);
                  }
              }
            }
        }
  return 0;
}

/*
glibc:

======= Testing translit=0, ignore=0, ilseq_invalid=1
iconv_open ("ISO-8859-1", "UTF-8") -> 0x556538cd6400
iconv() -> -1, errno=84=EILSEQ
input consumed:
output produced:
iconv_open ("ISO-8859-1", "ISO-8859-2") -> 0x556538cd6400
iconv() -> -1, errno=84=EILSEQ
input consumed:
output produced:
======= Testing translit=0, ignore=1, ilseq_invalid=1
iconv_open ("ISO-8859-1//IGNORE", "UTF-8") -> 0x556538cd6400
iconv() -> -1, errno=84=EILSEQ
input consumed:  0xC5 0x82
output produced:
iconv_open ("ISO-8859-1//IGNORE", "ISO-8859-2") -> 0x556538cd6400
iconv() -> -1, errno=84=EILSEQ
input consumed:  0xB3
output produced:
======= Testing translit=1, ignore=0, ilseq_invalid=1
iconv_open ("ISO-8859-1//TRANSLIT", "UTF-8") -> 0x556538cd6400
iconv() -> 1
input consumed:  0xC5 0x82
output produced: 0x3F
iconv_open ("ISO-8859-1//TRANSLIT", "ISO-8859-2") -> 0x556538cd6400
iconv() -> 1
input consumed:  0xB3
output produced: 0x3F
======= Testing translit=1, ignore=1, ilseq_invalid=1
iconv_open ("ISO-8859-1//TRANSLIT//IGNORE", "UTF-8") -> 0x556538cd6400
iconv() -> 1
input consumed:  0xC5 0x82
output produced: 0x3F
iconv_open ("ISO-8859-1//TRANSLIT//IGNORE", "ISO-8859-2") -> 0x556538cd6400
iconv() -> 1
input consumed:  0xB3
output produced: 0x3F

libiconv-1.17:
======= Testing translit=0, ignore=0, ilseq_invalid=1
iconv_open ("ISO-8859-1", "UTF-8") -> 0x55a46204a2a0
  transliterate=0
  discard_ilseq=0
iconv() -> -1, errno=84=EILSEQ
input consumed:
output produced:
iconv_open ("ISO-8859-1", "ISO-8859-2") -> 0x55a46204a2a0
  transliterate=0
  discard_ilseq=0
iconv() -> -1, errno=84=EILSEQ
input consumed:
output produced:
======= Testing translit=0, ignore=1, ilseq_invalid=1
iconv_open ("ISO-8859-1", "UTF-8") -> 0x55a46204a2a0
  transliterate=0
  discard_ilseq=0
iconv() -> 1
input consumed:  0xC5 0x82
output produced:
iconv_open ("ISO-8859-1", "ISO-8859-2") -> 0x55a46204a2a0
  transliterate=0
  discard_ilseq=0
iconv() -> 1
input consumed:  0xB3
output produced:
======= Testing translit=1, ignore=0, ilseq_invalid=1
iconv_open ("ISO-8859-1", "UTF-8") -> 0x55a46204a2a0
  transliterate=0
  discard_ilseq=0
iconv() -> 1
input consumed:  0xC5 0x82
output produced: 0x6C
iconv_open ("ISO-8859-1", "ISO-8859-2") -> 0x55a46204a2a0
  transliterate=0
  discard_ilseq=0
iconv() -> 1
input consumed:  0xB3
output produced: 0x6C
======= Testing translit=1, ignore=1, ilseq_invalid=1
iconv_open ("ISO-8859-1", "UTF-8") -> 0x55a46204a2a0
  transliterate=0
  discard_ilseq=0
iconv() -> 1
input consumed:  0xC5 0x82
output produced: 0x6C
iconv_open ("ISO-8859-1", "ISO-8859-2") -> 0x55a46204a2a0
  transliterate=0
  discard_ilseq=0
iconv() -> 1
input consumed:  0xB3
output produced: 0x6C

*/
