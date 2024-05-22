## Process this file with automake to produce Makefile.in.

AUTOMAKE_OPTIONS = 1.14 foreign

SUBDIRS = gllib glm4

ACLOCAL_AMFLAGS = -I glm4

noinst_PROGRAMS = test-iconv

test_iconv_LDADD = $(LDADD) $(LIBICONV)

TESTS = test-iconv
