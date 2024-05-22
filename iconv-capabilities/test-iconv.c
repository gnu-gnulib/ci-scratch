#include <iconv.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

iconv_t
traced_iconv_open (const char *tocode, const char *fromcode)
{
  iconv_t cd = iconv_open (tocode, fromcode);
  fprintf (stderr, "iconv_open (\"%s\", \"%s\") -> %s\n", tocode, fromcode, cd != (iconv_t)-1 ? "success" : "-1");
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
    {
      if (errno == EINVAL || errno == EILSEQ || errno == E2BIG)
        fprintf (stderr, "iconv() -> -1, errno=%s\n",
                 errno == EINVAL ? "EINVAL" : errno == EILSEQ ? "EILSEQ" : errno == E2BIG ? "E2BIG" : "");
      else
        fprintf (stderr, "iconv() -> -1, errno=%d\n", errno);
    }
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

// Try without iconvctl this time.
#undef ICONV_GET_TRANSLITERATE
#undef ICONV_SET_TRANSLITERATE
#undef ICONV_GET_DISCARD_ILSEQ
#undef ICONV_SET_DISCARD_ILSEQ
#undef ICONV_GET_ILSEQ_INVALID
#undef ICONV_SET_ILSEQ_INVALID

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
glibc:            translit=0 ignore=0 fails on unconvertible.
                  translit=0 ignore=1 fails on unconvertible.
                  translit=1 produces '?' and overrides ignore.
libiconv-1.17:    translit=0 ignore=0 fails on unconvertible
                  translit=0 ignore=1 reports unconvertible.
                  translit=1 produces 'l' and overrides ignore.
freebsd-14.0:     likewise
openbsd-7.5:      likewise
Cygwin:           likewise
macos11,12:       likewise
macos13:          likewise. ICONV_SET_ILSEQ_INVALID is declared but unsupported.
macos14:          never reports unconvertible, maps it to 'l'.
                  ICONV_SET_TRANSLITERATE, ICONV_SET_DISCARD_ILSEQ, ICONV_SET_ILSEQ_INVALID all have no effect.
mingw:            translit=0 ignore=0 fails on unconvertible.
                  translit=1 produces 'l' without reporting unconverible, and overrides ignore.
netbsd-10.0:      reports unconvertible through ret and maps it to '?'. translit=1 and ignore=1 are unsupported.
solaris11-omnios: likewise
musl libc:        reports unconvertible through ret and maps it to '*'. translit=1 and ignore=1 are unsupported.
*/
