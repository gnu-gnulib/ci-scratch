/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parse-datetime.y"

/* Parse a string into an internal timestamp.

   Copyright (C) 1999-2000, 2002-2025 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* Originally written by Steven M. Bellovin <smb@research.att.com> while
   at the University of North Carolina at Chapel Hill.  Later tweaked by
   a couple of people on Usenet.  Completely overhauled by Rich $alz
   <rsalz@bbn.com> and Jim Berets <jberets@bbn.com> in August, 1990.

   Modified by Assaf Gordon <assafgordon@gmail.com> in 2016 to add
   debug output.

   Modified by Paul Eggert <eggert@twinsun.com> in 1999 to do the
   right thing about local DST.  Also modified by Paul Eggert
   <eggert@cs.ucla.edu> in 2004 to support nanosecond-resolution
   timestamps, in 2004 to support TZ strings in dates, and in 2017 and 2020 to
   check for integer overflow and to support longer-than-'long'
   'time_t' and 'tv_nsec'.  */

#include <config.h>

#include "parse-datetime.h"

#include "idx.h"
#include "intprops.h"
#include "timespec.h"

/* There's no need to extend the stack, so there's no need to involve
   alloca.  */
#define YYSTACK_USE_ALLOCA 0

/* Tell Bison how much stack space is needed.  20 should be plenty for
   this grammar, which is not right recursive.  Beware setting it too
   high, since that might cause problems on machines whose
   implementations have lame stack-overflow checking.  */
#define YYMAXDEPTH 20
#define YYINITDEPTH YYMAXDEPTH

#include <inttypes.h>
#include <c-ctype.h>
#include <stdarg.h>
#include <stdckdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gettext.h"

#define _(msgid) dgettext ("gnulib", msgid)

/* Bison's skeleton tests _STDLIB_H, while some stdlib.h headers
   use _STDLIB_H_ as witness.  Map the latter to the one bison uses.  */
/* FIXME: this is temporary.  Remove when we have a mechanism to ensure
   that the version we're using is fixed, too.  */
#ifdef _STDLIB_H_
# undef _STDLIB_H
# define _STDLIB_H 1
#endif

/* Shift A right by B bits portably, by dividing A by 2**B and
   truncating towards minus infinity.  A and B should be free of side
   effects, and B should be in the range 0 <= B <= INT_BITS - 2, where
   INT_BITS is the number of useful bits in an int.  GNU code can
   assume that INT_BITS is at least 32.

   ISO C99 says that A >> B is implementation-defined if A < 0.  Some
   implementations (e.g., UNICOS 9.0 on a Cray Y-MP EL) don't shift
   right in the usual way when A < 0, so SHR falls back on division if
   ordinary A >> B doesn't seem to be the usual signed shift.  */
#define SHR(a, b)       \
  (-1 >> 1 == -1        \
   ? (a) >> (b)         \
   : (a) / (1 << (b)) - ((a) % (1 << (b)) < 0))

#define HOUR(x) (60 * 60 * (x))

#define STREQ(a, b) (strcmp (a, b) == 0)

/* Verify that time_t is an integer as POSIX requires, and that every
   time_t value fits in intmax_t.  Please file a bug report if these
   assumptions are false on your platform.  */
static_assert (TYPE_IS_INTEGER (time_t));
static_assert (!TYPE_SIGNED (time_t) || INTMAX_MIN <= TYPE_MINIMUM (time_t));
static_assert (TYPE_MAXIMUM (time_t) <= INTMAX_MAX);

/* True if N is out of range for time_t.  */
static bool
time_overflow (intmax_t n)
{
  return ! ((TYPE_SIGNED (time_t) ? TYPE_MINIMUM (time_t) <= n : 0 <= n)
            && n <= TYPE_MAXIMUM (time_t));
}

/* Convert a possibly-signed character to an unsigned character.  This is
   a bit safer than casting to unsigned char, since it catches some type
   errors that the cast doesn't.  */
static unsigned char to_uchar (char ch) { return ch; }

static void
dbg_herald (void)
{
  /* TODO: use gnulib's 'program_name' instead?  */
  fputs ("date: ", stderr);
}

static void _GL_ATTRIBUTE_FORMAT ((__printf__, 1, 2))
dbg_printf (char const *msgid, ...)
{
  dbg_herald ();
  va_list args;
  va_start (args, msgid);
  vfprintf (stderr, msgid, args);
  va_end (args);
}

static void
dbg_fputs (char const *msgid)
{
  dbg_herald ();
  fputs (msgid, stderr);
}


/* An integer value, and the number of digits in its textual
   representation.  */
typedef struct
{
  bool negative;
  intmax_t value;
  idx_t digits;
} textint;

/* An entry in the lexical lookup table.  */
typedef struct
{
  char const *name;
  int type;
  int value;
} table;

/* Meridian: am, pm, or 24-hour style.  */
enum { MERam, MERpm, MER24 };

/* Maximum length of a time zone abbreviation, plus 1.  */
enum { TIME_ZONE_BUFSIZE = INT_STRLEN_BOUND (intmax_t) + sizeof ":MM:SS" };

/* A reasonable upper bound for the buffer used in debug output.  */
enum { DBGBUFSIZE = 100 };

enum { BILLION = 1000000000, LOG10_BILLION = 9 };

/* Relative times.  */
typedef struct
{
  /* Relative year, month, day, hour, minutes, seconds, and nanoseconds.  */
  intmax_t year;
  intmax_t month;
  intmax_t day;
  intmax_t hour;
  intmax_t minutes;
  intmax_t seconds;
  int ns;
} relative_time;

#if HAVE_COMPOUND_LITERALS
# define RELATIVE_TIME_0 ((relative_time) { 0, 0, 0, 0, 0, 0, 0 })
#else
static relative_time const RELATIVE_TIME_0;
#endif

/* Information passed to and from the parser.  */
typedef struct
{
  /* The input string remaining to be parsed.  */
  const char *input;

  /* N, if this is the Nth Tuesday.  */
  intmax_t day_ordinal;

  /* Day of week; Sunday is 0.  */
  int day_number;

  /* tm_isdst flag for the local zone.  */
  int local_isdst;

  /* Time zone, in seconds east of UT.  */
  int time_zone;

  /* Style used for time.  */
  int meridian;

  /* Gregorian year, month, day, hour, minutes, seconds, and nanoseconds.  */
  textint year;
  intmax_t month;
  intmax_t day;
  intmax_t hour;
  intmax_t minutes;
  struct timespec seconds; /* includes nanoseconds */

  /* Relative year, month, day, hour, minutes, seconds, and nanoseconds.  */
  relative_time rel;

  /* Presence or counts of nonterminals of various flavors parsed so far.  */
  bool timespec_seen;
  bool rels_seen;
  idx_t dates_seen;
  idx_t days_seen;
  idx_t J_zones_seen;
  idx_t local_zones_seen;
  idx_t dsts_seen;
  idx_t times_seen;
  idx_t zones_seen;
  bool year_seen;

#ifdef GNULIB_PARSE_DATETIME2
  /* Print debugging output to stderr.  */
  bool parse_datetime_debug;
#endif

  /* Which of the 'seen' parts have been printed when debugging.  */
  bool debug_dates_seen;
  bool debug_days_seen;
  bool debug_local_zones_seen;
  bool debug_times_seen;
  bool debug_zones_seen;
  bool debug_year_seen;

  /* The user specified explicit ordinal day value.  */
  bool debug_ordinal_day_seen;

  /* Table of local time zone abbreviations, terminated by a null entry.  */
  table local_time_zone_table[3];

#if !HAVE_STRUCT_TM_TM_ZONE
  /* The abbreviations in LOCAL_TIME_ZONE_TABLE.  */
  char tz_abbr[2][TIME_ZONE_BUFSIZE];
#endif
} parser_control;

static bool
debugging (parser_control const *pc)
{
#ifdef GNULIB_PARSE_DATETIME2
  return pc->parse_datetime_debug;
#else
  return false;
#endif
}

union YYSTYPE;
static int yylex (union YYSTYPE *, parser_control *);
static void yyerror (parser_control const *, char const *);
static bool time_zone_hhmm (parser_control *, textint, intmax_t);

/* Extract into *PC any date and time info from a string of digits
   of the form e.g., YYYYMMDD, YYMMDD, HHMM, HH (and sometimes YYY,
   YYYY, ...).  */
static void
digits_to_date_time (parser_control *pc, textint text_int)
{
  if (pc->dates_seen && ! pc->year.digits
      && ! pc->rels_seen && (pc->times_seen || 2 < text_int.digits))
    {
      pc->year_seen = true;
      pc->year = text_int;
    }
  else
    {
      if (4 < text_int.digits)
        {
          pc->dates_seen++;
          pc->day = text_int.value % 100;
          pc->month = (text_int.value / 100) % 100;
          pc->year.value = text_int.value / 10000;
          pc->year.digits = text_int.digits - 4;
        }
      else
        {
          pc->times_seen++;
          if (text_int.digits <= 2)
            {
              pc->hour = text_int.value;
              pc->minutes = 0;
            }
          else
            {
              pc->hour = text_int.value / 100;
              pc->minutes = text_int.value % 100;
            }
          pc->seconds = (struct timespec) {0};
          pc->meridian = MER24;
        }
    }
}

/* Increment PC->rel by FACTOR * REL (FACTOR is 1 or -1).  Return true
   if successful, false if an overflow occurred.  */
static bool
apply_relative_time (parser_control *pc, relative_time rel, int factor)
{
  if (factor < 0
      ? (ckd_sub (&pc->rel.ns, pc->rel.ns, rel.ns)
         | ckd_sub (&pc->rel.seconds, pc->rel.seconds, rel.seconds)
         | ckd_sub (&pc->rel.minutes, pc->rel.minutes, rel.minutes)
         | ckd_sub (&pc->rel.hour, pc->rel.hour, rel.hour)
         | ckd_sub (&pc->rel.day, pc->rel.day, rel.day)
         | ckd_sub (&pc->rel.month, pc->rel.month, rel.month)
         | ckd_sub (&pc->rel.year, pc->rel.year, rel.year))
      : (ckd_add (&pc->rel.ns, pc->rel.ns, rel.ns)
         | ckd_add (&pc->rel.seconds, pc->rel.seconds, rel.seconds)
         | ckd_add (&pc->rel.minutes, pc->rel.minutes, rel.minutes)
         | ckd_add (&pc->rel.hour, pc->rel.hour, rel.hour)
         | ckd_add (&pc->rel.day, pc->rel.day, rel.day)
         | ckd_add (&pc->rel.month, pc->rel.month, rel.month)
         | ckd_add (&pc->rel.year, pc->rel.year, rel.year)))
    return false;
  pc->rels_seen = true;
  return true;
}

/* Set PC-> hour, minutes, seconds and nanoseconds members from arguments.  */
static void
set_hhmmss (parser_control *pc, intmax_t hour, intmax_t minutes,
            time_t sec, int nsec)
{
  pc->hour = hour;
  pc->minutes = minutes;
  pc->seconds = (struct timespec) { .tv_sec = sec, .tv_nsec = nsec };
}

/* Return a textual representation of the day ordinal/number values
   in the parser_control struct (e.g., "last wed", "this tues", "thu").  */
static const char *
str_days (parser_control *pc, char *buffer, int n)
{
  /* TODO: use relative_time_table for reverse lookup.  */
  static char const ordinal_values[][11] = {
     "last",
     "this",
     "next/first",
     "(SECOND)", /* SECOND is commented out in relative_time_table.  */
     "third",
     "fourth",
     "fifth",
     "sixth",
     "seventh",
     "eight",
     "ninth",
     "tenth",
     "eleventh",
     "twelfth"
  };

  static char const days_values[][4] = {
     "Sun",
     "Mon",
     "Tue",
     "Wed",
     "Thu",
     "Fri",
     "Sat"
  };

  int len;

  /* Don't add an ordinal prefix if the user didn't specify it
     (e.g., "this wed" vs "wed").  */
  if (pc->debug_ordinal_day_seen)
    {
      /* Use word description if possible (e.g., -1 = last, 3 = third).  */
      len = (-1 <= pc->day_ordinal && pc->day_ordinal <= 12
             ? snprintf (buffer, n, "%s", ordinal_values[pc->day_ordinal + 1])
             : snprintf (buffer, n, "%"PRIdMAX, pc->day_ordinal));
    }
  else
    {
      buffer[0] = '\0';
      len = 0;
    }

  /* Add the day name */
  if (0 <= pc->day_number && pc->day_number <= 6 && 0 <= len && len < n)
    snprintf (buffer + len, n - len, &" %s"[len == 0],
              days_values[pc->day_number]);
  else
    {
      /* invalid day_number value - should never happen */
    }
  return buffer;
}

/* Convert a time zone to its string representation.  */

static char const *
time_zone_str (int time_zone, char time_zone_buf[TIME_ZONE_BUFSIZE])
{
  char *p = time_zone_buf;
  char sign = time_zone < 0 ? '-' : '+';
  int hour = abs (time_zone / (60 * 60));
  p += sprintf (time_zone_buf, "%c%02d", sign, hour);
  int offset_from_hour = abs (time_zone % (60 * 60));
  if (offset_from_hour != 0)
    {
      int mm = offset_from_hour / 60;
      int ss = offset_from_hour % 60;
      *p++ = ':';
      *p++ = '0' + mm / 10;
      *p++ = '0' + mm % 10;
      if (ss)
        {
          *p++ = ':';
          *p++ = '0' + ss / 10;
          *p++ = '0' + ss % 10;
        }
      *p = '\0';
    }
  return time_zone_buf;
}

/* debugging: print the current time in the parser_control structure.
   The parser will increment "*_seen" members for those which were parsed.
   This function will print only newly seen parts.  */
static void
debug_print_current_time (char const *item, parser_control *pc)
{
  bool space = false;

  if (!debugging (pc))
    return;

  /* no newline, more items printed below */
  dbg_printf (_("parsed %s part: "), item);

  if (pc->dates_seen && !pc->debug_dates_seen)
    {
      /*TODO: use pc->year.negative?  */
      fprintf (stderr, "(Y-M-D) %04"PRIdMAX"-%02"PRIdMAX"-%02"PRIdMAX,
              pc->year.value, pc->month, pc->day);
      pc->debug_dates_seen = true;
      space = true;
    }

  if (pc->year_seen != pc->debug_year_seen)
    {
      if (space)
        fputc (' ', stderr);
      fprintf (stderr, _("year: %04"PRIdMAX), pc->year.value);

      pc->debug_year_seen = pc->year_seen;
      space = true;
    }

  if (pc->times_seen && !pc->debug_times_seen)
    {
      intmax_t sec = pc->seconds.tv_sec;
      fprintf (stderr, &" %02"PRIdMAX":%02"PRIdMAX":%02"PRIdMAX[!space],
               pc->hour, pc->minutes, sec);
      if (pc->seconds.tv_nsec != 0)
        {
          int nsec = pc->seconds.tv_nsec;
          fprintf (stderr, ".%09d", nsec);
        }
      if (pc->meridian == MERpm)
        fputs ("pm", stderr);

      pc->debug_times_seen = true;
      space = true;
    }

  if (pc->days_seen && !pc->debug_days_seen)
    {
      if (space)
        fputc (' ', stderr);
      char tmp[DBGBUFSIZE];
      fprintf (stderr, _("%s (day ordinal=%"PRIdMAX" number=%d)"),
               str_days (pc, tmp, sizeof tmp),
               pc->day_ordinal, pc->day_number);
      pc->debug_days_seen = true;
      space = true;
    }

  /* local zone strings only change the DST settings,
     not the timezone value.  If seen, inform about the DST.  */
  if (pc->local_zones_seen && !pc->debug_local_zones_seen)
    {
      fprintf (stderr, &" isdst=%d%s"[!space],
               pc->local_isdst, pc->dsts_seen ? " DST" : "");
      pc->debug_local_zones_seen = true;
      space = true;
    }

  if (pc->zones_seen && !pc->debug_zones_seen)
    {
      char time_zone_buf[TIME_ZONE_BUFSIZE];
      fprintf (stderr, &" UTC%s"[!space],
               time_zone_str (pc->time_zone, time_zone_buf));
      pc->debug_zones_seen = true;
      space = true;
    }

  if (pc->timespec_seen)
    {
      intmax_t sec = pc->seconds.tv_sec;
      if (space)
        fputc (' ', stderr);
      fprintf (stderr, _("number of seconds: %"PRIdMAX), sec);
    }

  fputc ('\n', stderr);
}

/* Debugging: print the current relative values.  */

static bool
print_rel_part (bool space, intmax_t val, char const *name)
{
  if (val == 0)
    return space;
  fprintf (stderr, &" %+"PRIdMAX" %s"[!space], val, name);
  return true;
}

static void
debug_print_relative_time (char const *item, parser_control const *pc)
{
  bool space = false;

  if (!debugging (pc))
    return;

  /* no newline, more items printed below */
  dbg_printf (_("parsed %s part: "), item);

  if (pc->rel.year == 0 && pc->rel.month == 0 && pc->rel.day == 0
      && pc->rel.hour == 0 && pc->rel.minutes == 0 && pc->rel.seconds == 0
      && pc->rel.ns == 0)
    {
      /* Special case: relative time of this/today/now */
      fputs (_("today/this/now\n"), stderr);
      return;
    }

  space = print_rel_part (space, pc->rel.year, "year(s)");
  space = print_rel_part (space, pc->rel.month, "month(s)");
  space = print_rel_part (space, pc->rel.day, "day(s)");
  space = print_rel_part (space, pc->rel.hour, "hour(s)");
  space = print_rel_part (space, pc->rel.minutes, "minutes");
  space = print_rel_part (space, pc->rel.seconds, "seconds");
  print_rel_part (space, pc->rel.ns, "nanoseconds");

  fputc ('\n', stderr);
}




#line 642 "parse-datetime.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    tAGO = 258,                    /* tAGO  */
    tDST = 259,                    /* tDST  */
    tYEAR_UNIT = 260,              /* tYEAR_UNIT  */
    tMONTH_UNIT = 261,             /* tMONTH_UNIT  */
    tHOUR_UNIT = 262,              /* tHOUR_UNIT  */
    tMINUTE_UNIT = 263,            /* tMINUTE_UNIT  */
    tSEC_UNIT = 264,               /* tSEC_UNIT  */
    tDAY_UNIT = 265,               /* tDAY_UNIT  */
    tDAY_SHIFT = 266,              /* tDAY_SHIFT  */
    tDAY = 267,                    /* tDAY  */
    tDAYZONE = 268,                /* tDAYZONE  */
    tLOCAL_ZONE = 269,             /* tLOCAL_ZONE  */
    tMERIDIAN = 270,               /* tMERIDIAN  */
    tMONTH = 271,                  /* tMONTH  */
    tORDINAL = 272,                /* tORDINAL  */
    tZONE = 273,                   /* tZONE  */
    tSNUMBER = 274,                /* tSNUMBER  */
    tUNUMBER = 275,                /* tUNUMBER  */
    tSDECIMAL_NUMBER = 276,        /* tSDECIMAL_NUMBER  */
    tUDECIMAL_NUMBER = 277         /* tUDECIMAL_NUMBER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 582 "parse-datetime.y"

  intmax_t intval;
  textint textintval;
  struct timespec timespec;
  relative_time rel;

#line 718 "parse-datetime.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (parser_control *pc);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_tAGO = 3,                       /* tAGO  */
  YYSYMBOL_tDST = 4,                       /* tDST  */
  YYSYMBOL_tYEAR_UNIT = 5,                 /* tYEAR_UNIT  */
  YYSYMBOL_tMONTH_UNIT = 6,                /* tMONTH_UNIT  */
  YYSYMBOL_tHOUR_UNIT = 7,                 /* tHOUR_UNIT  */
  YYSYMBOL_tMINUTE_UNIT = 8,               /* tMINUTE_UNIT  */
  YYSYMBOL_tSEC_UNIT = 9,                  /* tSEC_UNIT  */
  YYSYMBOL_tDAY_UNIT = 10,                 /* tDAY_UNIT  */
  YYSYMBOL_tDAY_SHIFT = 11,                /* tDAY_SHIFT  */
  YYSYMBOL_tDAY = 12,                      /* tDAY  */
  YYSYMBOL_tDAYZONE = 13,                  /* tDAYZONE  */
  YYSYMBOL_tLOCAL_ZONE = 14,               /* tLOCAL_ZONE  */
  YYSYMBOL_tMERIDIAN = 15,                 /* tMERIDIAN  */
  YYSYMBOL_tMONTH = 16,                    /* tMONTH  */
  YYSYMBOL_tORDINAL = 17,                  /* tORDINAL  */
  YYSYMBOL_tZONE = 18,                     /* tZONE  */
  YYSYMBOL_tSNUMBER = 19,                  /* tSNUMBER  */
  YYSYMBOL_tUNUMBER = 20,                  /* tUNUMBER  */
  YYSYMBOL_tSDECIMAL_NUMBER = 21,          /* tSDECIMAL_NUMBER  */
  YYSYMBOL_tUDECIMAL_NUMBER = 22,          /* tUDECIMAL_NUMBER  */
  YYSYMBOL_23_ = 23,                       /* '@'  */
  YYSYMBOL_24_J_ = 24,                     /* 'J'  */
  YYSYMBOL_25_T_ = 25,                     /* 'T'  */
  YYSYMBOL_26_ = 26,                       /* ':'  */
  YYSYMBOL_27_ = 27,                       /* ','  */
  YYSYMBOL_28_ = 28,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 29,                  /* $accept  */
  YYSYMBOL_spec = 30,                      /* spec  */
  YYSYMBOL_timespec = 31,                  /* timespec  */
  YYSYMBOL_items = 32,                     /* items  */
  YYSYMBOL_item = 33,                      /* item  */
  YYSYMBOL_datetime = 34,                  /* datetime  */
  YYSYMBOL_iso_8601_datetime = 35,         /* iso_8601_datetime  */
  YYSYMBOL_time = 36,                      /* time  */
  YYSYMBOL_iso_8601_time = 37,             /* iso_8601_time  */
  YYSYMBOL_o_zone_offset = 38,             /* o_zone_offset  */
  YYSYMBOL_zone_offset = 39,               /* zone_offset  */
  YYSYMBOL_local_zone = 40,                /* local_zone  */
  YYSYMBOL_zone = 41,                      /* zone  */
  YYSYMBOL_day = 42,                       /* day  */
  YYSYMBOL_date = 43,                      /* date  */
  YYSYMBOL_iso_8601_date = 44,             /* iso_8601_date  */
  YYSYMBOL_rel = 45,                       /* rel  */
  YYSYMBOL_relunit = 46,                   /* relunit  */
  YYSYMBOL_relunit_snumber = 47,           /* relunit_snumber  */
  YYSYMBOL_dayshift = 48,                  /* dayshift  */
  YYSYMBOL_seconds = 49,                   /* seconds  */
  YYSYMBOL_signed_seconds = 50,            /* signed_seconds  */
  YYSYMBOL_unsigned_seconds = 51,          /* unsigned_seconds  */
  YYSYMBOL_number = 52,                    /* number  */
  YYSYMBOL_hybrid = 53,                    /* hybrid  */
  YYSYMBOL_o_colon_minutes = 54            /* o_colon_minutes  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   114

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  115

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   277


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    27,     2,     2,    28,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,     2,
       2,     2,     2,     2,    23,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    24,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    25,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   609,   609,   610,   614,   622,   624,   628,   633,   638,
     643,   648,   653,   658,   663,   667,   671,   678,   682,   686,
     691,   696,   701,   705,   710,   715,   722,   724,   728,   753,
     755,   765,   767,   769,   774,   779,   782,   784,   789,   794,
     799,   805,   814,   819,   852,   860,   868,   873,   879,   884,
     890,   894,   904,   906,   908,   913,   915,   917,   919,   921,
     923,   925,   928,   931,   933,   935,   937,   939,   941,   943,
     945,   947,   949,   951,   953,   955,   959,   961,   963,   966,
     968,   970,   975,   979,   979,   982,   983,   989,   990,   996,
    1001,  1012,  1013
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "tAGO", "tDST",
  "tYEAR_UNIT", "tMONTH_UNIT", "tHOUR_UNIT", "tMINUTE_UNIT", "tSEC_UNIT",
  "tDAY_UNIT", "tDAY_SHIFT", "tDAY", "tDAYZONE", "tLOCAL_ZONE",
  "tMERIDIAN", "tMONTH", "tORDINAL", "tZONE", "tSNUMBER", "tUNUMBER",
  "tSDECIMAL_NUMBER", "tUDECIMAL_NUMBER", "'@'", "'J'", "'T'", "':'",
  "','", "'/'", "$accept", "spec", "timespec", "items", "item", "datetime",
  "iso_8601_datetime", "time", "iso_8601_time", "o_zone_offset",
  "zone_offset", "local_zone", "zone", "day", "date", "iso_8601_date",
  "rel", "relunit", "relunit_snumber", "dayshift", "seconds",
  "signed_seconds", "unsigned_seconds", "number", "hybrid",
  "o_colon_minutes", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-91)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -14,     7,    39,   -91,    37,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
      14,   -91,    64,    47,    67,     6,    82,    -4,    74,    75,
     -91,    76,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,    69,   -91,    93,   -91,   -91,   -91,   -91,   -91,   -91,
      79,    72,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
      26,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,    62,    11,    80,    81,
     -91,   -91,   -91,   -91,   -91,    83,   -91,   -91,    84,    85,
     -91,   -91,   -91,   -91,   -91,    45,    86,   -12,   -91,   -91,
     -91,   -91,    87,    18,   -91,   -91,    88,    89,    78,   -91,
      59,   -91,   -91,    18,    91
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     0,     2,     3,    86,    88,    85,    87,     4,
      83,    84,     1,    57,    60,    66,    69,    74,    63,    82,
      38,    36,    29,     0,     0,    31,     0,    89,     0,     0,
      10,    32,     6,     7,    17,     8,    22,     9,    11,    13,
      12,    50,    14,    53,    75,    54,    15,    16,    39,    30,
       0,    46,    55,    58,    64,    67,    70,    61,    40,    37,
      91,    33,    76,    77,    79,    80,    81,    78,    56,    59,
      65,    68,    71,    62,    41,    19,    48,    91,     0,     0,
      23,    90,    72,    73,    34,     0,    52,    45,     0,     0,
      35,    44,    49,    51,    28,    26,    42,     0,    18,    47,
      92,    20,    91,     0,    24,    27,     0,     0,    26,    43,
      26,    21,    25,     0,    26
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,    17,   -28,
     -27,   -91,   -91,   -91,   -91,   -91,   -91,   -91,    38,   -91,
     -91,   -91,   -90,   -91,   -91,    46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,    32,    33,    34,    35,    36,   104,
     105,    37,    38,    39,    40,    41,    42,    43,    44,    45,
       9,    10,    11,    46,    47,    94
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      80,    68,    69,    70,    71,    72,    73,   102,    74,     1,
      59,    75,    76,   108,   107,    77,    62,    63,    64,    65,
      66,    67,    78,   114,    79,    60,     5,     6,     7,     8,
      93,    62,    63,    64,    65,    66,    67,    89,     6,    12,
       8,    48,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    89,    23,    24,    25,    26,    27,    28,    29,
     101,    30,    31,    61,   102,    81,    50,    51,    49,    84,
      80,   103,    52,    53,    54,    55,    56,    57,   102,    58,
     112,    91,    92,    82,    83,   113,   112,    62,    63,    64,
      65,    66,    67,   111,    85,    26,    86,   102,    87,    88,
      95,    96,    98,    97,    99,   100,    90,     0,   109,   110,
     102,     0,     0,    89,   106
};

static const yytype_int8 yycheck[] =
{
      27,     5,     6,     7,     8,     9,    10,    19,    12,    23,
       4,    15,    16,   103,    26,    19,     5,     6,     7,     8,
       9,    10,    26,   113,    28,    19,    19,    20,    21,    22,
      19,     5,     6,     7,     8,     9,    10,    26,    20,     0,
      22,    27,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    26,    16,    17,    18,    19,    20,    21,    22,
      15,    24,    25,    25,    19,    27,    19,    20,     4,    31,
      97,    26,     5,     6,     7,     8,     9,    10,    19,    12,
     108,    19,    20,     9,     9,    26,   114,     5,     6,     7,
       8,     9,    10,    15,    25,    19,     3,    19,    19,    27,
      20,    20,    85,    20,    20,    20,    60,    -1,    20,    20,
      19,    -1,    -1,    26,    28
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    23,    30,    31,    32,    19,    20,    21,    22,    49,
      50,    51,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    16,    17,    18,    19,    20,    21,    22,
      24,    25,    33,    34,    35,    36,    37,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    52,    53,    27,     4,
      19,    20,     5,     6,     7,     8,     9,    10,    12,     4,
      19,    47,     5,     6,     7,     8,     9,    10,     5,     6,
       7,     8,     9,    10,    12,    15,    16,    19,    26,    28,
      39,    47,     9,     9,    47,    25,     3,    19,    27,    26,
      54,    19,    20,    19,    54,    20,    20,    20,    37,    20,
      20,    15,    19,    26,    38,    39,    28,    26,    51,    20,
      20,    15,    38,    26,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    29,    30,    30,    31,    32,    32,    33,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    34,    35,    36,
      36,    36,    36,    37,    37,    37,    38,    38,    39,    40,
      40,    41,    41,    41,    41,    41,    41,    41,    42,    42,
      42,    42,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    44,    45,    45,    45,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    47,    47,    47,    47,
      47,    47,    48,    49,    49,    50,    50,    51,    51,    52,
      53,    54,    54
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       4,     6,     1,     2,     4,     6,     0,     1,     2,     1,
       2,     1,     1,     2,     2,     3,     1,     2,     1,     2,
       2,     2,     3,     5,     3,     3,     2,     4,     2,     3,
       1,     3,     2,     1,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     2,     2,     1,     1,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (pc, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, pc); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, parser_control *pc)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (pc);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, parser_control *pc)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, pc);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, parser_control *pc)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], pc);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, pc); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, parser_control *pc)
{
  YY_USE (yyvaluep);
  YY_USE (pc);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (parser_control *pc)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, pc);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* timespec: '@' seconds  */
#line 615 "parse-datetime.y"
      {
        pc->seconds = (yyvsp[0].timespec);
        pc->timespec_seen = true;
        debug_print_current_time (_("number of seconds"), pc);
      }
#line 1845 "parse-datetime.c"
    break;

  case 7: /* item: datetime  */
#line 629 "parse-datetime.y"
      {
        pc->times_seen++; pc->dates_seen++;
        debug_print_current_time (_("datetime"), pc);
      }
#line 1854 "parse-datetime.c"
    break;

  case 8: /* item: time  */
#line 634 "parse-datetime.y"
      {
        pc->times_seen++;
        debug_print_current_time (_("time"), pc);
      }
#line 1863 "parse-datetime.c"
    break;

  case 9: /* item: local_zone  */
#line 639 "parse-datetime.y"
      {
        pc->local_zones_seen++;
        debug_print_current_time (_("local_zone"), pc);
      }
#line 1872 "parse-datetime.c"
    break;

  case 10: /* item: 'J'  */
#line 644 "parse-datetime.y"
      {
        pc->J_zones_seen++;
        debug_print_current_time ("J", pc);
      }
#line 1881 "parse-datetime.c"
    break;

  case 11: /* item: zone  */
#line 649 "parse-datetime.y"
      {
        pc->zones_seen++;
        debug_print_current_time (_("zone"), pc);
      }
#line 1890 "parse-datetime.c"
    break;

  case 12: /* item: date  */
#line 654 "parse-datetime.y"
      {
        pc->dates_seen++;
        debug_print_current_time (_("date"), pc);
      }
#line 1899 "parse-datetime.c"
    break;

  case 13: /* item: day  */
#line 659 "parse-datetime.y"
      {
        pc->days_seen++;
        debug_print_current_time (_("day"), pc);
      }
#line 1908 "parse-datetime.c"
    break;

  case 14: /* item: rel  */
#line 664 "parse-datetime.y"
      {
        debug_print_relative_time (_("relative"), pc);
      }
#line 1916 "parse-datetime.c"
    break;

  case 15: /* item: number  */
#line 668 "parse-datetime.y"
      {
        debug_print_current_time (_("number"), pc);
      }
#line 1924 "parse-datetime.c"
    break;

  case 16: /* item: hybrid  */
#line 672 "parse-datetime.y"
      {
        debug_print_relative_time (_("hybrid"), pc);
      }
#line 1932 "parse-datetime.c"
    break;

  case 19: /* time: tUNUMBER tMERIDIAN  */
#line 687 "parse-datetime.y"
      {
        set_hhmmss (pc, (yyvsp[-1].textintval).value, 0, 0, 0);
        pc->meridian = (yyvsp[0].intval);
      }
#line 1941 "parse-datetime.c"
    break;

  case 20: /* time: tUNUMBER ':' tUNUMBER tMERIDIAN  */
#line 692 "parse-datetime.y"
      {
        set_hhmmss (pc, (yyvsp[-3].textintval).value, (yyvsp[-1].textintval).value, 0, 0);
        pc->meridian = (yyvsp[0].intval);
      }
#line 1950 "parse-datetime.c"
    break;

  case 21: /* time: tUNUMBER ':' tUNUMBER ':' unsigned_seconds tMERIDIAN  */
#line 697 "parse-datetime.y"
      {
        set_hhmmss (pc, (yyvsp[-5].textintval).value, (yyvsp[-3].textintval).value, (yyvsp[-1].timespec).tv_sec, (yyvsp[-1].timespec).tv_nsec);
        pc->meridian = (yyvsp[0].intval);
      }
#line 1959 "parse-datetime.c"
    break;

  case 23: /* iso_8601_time: tUNUMBER zone_offset  */
#line 706 "parse-datetime.y"
      {
        set_hhmmss (pc, (yyvsp[-1].textintval).value, 0, 0, 0);
        pc->meridian = MER24;
      }
#line 1968 "parse-datetime.c"
    break;

  case 24: /* iso_8601_time: tUNUMBER ':' tUNUMBER o_zone_offset  */
#line 711 "parse-datetime.y"
      {
        set_hhmmss (pc, (yyvsp[-3].textintval).value, (yyvsp[-1].textintval).value, 0, 0);
        pc->meridian = MER24;
      }
#line 1977 "parse-datetime.c"
    break;

  case 25: /* iso_8601_time: tUNUMBER ':' tUNUMBER ':' unsigned_seconds o_zone_offset  */
#line 716 "parse-datetime.y"
      {
        set_hhmmss (pc, (yyvsp[-5].textintval).value, (yyvsp[-3].textintval).value, (yyvsp[-1].timespec).tv_sec, (yyvsp[-1].timespec).tv_nsec);
        pc->meridian = MER24;
      }
#line 1986 "parse-datetime.c"
    break;

  case 28: /* zone_offset: tSNUMBER o_colon_minutes  */
#line 729 "parse-datetime.y"
      {
        pc->zones_seen++;
        if (! time_zone_hhmm (pc, (yyvsp[-1].textintval), (yyvsp[0].intval))) YYABORT;
      }
#line 1995 "parse-datetime.c"
    break;

  case 29: /* local_zone: tLOCAL_ZONE  */
#line 754 "parse-datetime.y"
      { pc->local_isdst = (yyvsp[0].intval); }
#line 2001 "parse-datetime.c"
    break;

  case 30: /* local_zone: tLOCAL_ZONE tDST  */
#line 756 "parse-datetime.y"
      {
        pc->local_isdst = 1;
        pc->dsts_seen++;
      }
#line 2010 "parse-datetime.c"
    break;

  case 31: /* zone: tZONE  */
#line 766 "parse-datetime.y"
      { pc->time_zone = (yyvsp[0].intval); }
#line 2016 "parse-datetime.c"
    break;

  case 32: /* zone: 'T'  */
#line 768 "parse-datetime.y"
      { pc->time_zone = -HOUR (7); }
#line 2022 "parse-datetime.c"
    break;

  case 33: /* zone: tZONE relunit_snumber  */
#line 770 "parse-datetime.y"
      { pc->time_zone = (yyvsp[-1].intval);
        if (! apply_relative_time (pc, (yyvsp[0].rel), 1)) YYABORT;
        debug_print_relative_time (_("relative"), pc);
      }
#line 2031 "parse-datetime.c"
    break;

  case 34: /* zone: 'T' relunit_snumber  */
#line 775 "parse-datetime.y"
      { pc->time_zone = -HOUR (7);
        if (! apply_relative_time (pc, (yyvsp[0].rel), 1)) YYABORT;
        debug_print_relative_time (_("relative"), pc);
      }
#line 2040 "parse-datetime.c"
    break;

  case 35: /* zone: tZONE tSNUMBER o_colon_minutes  */
#line 780 "parse-datetime.y"
      { if (! time_zone_hhmm (pc, (yyvsp[-1].textintval), (yyvsp[0].intval))) YYABORT;
        if (ckd_add (&pc->time_zone, pc->time_zone, (yyvsp[-2].intval))) YYABORT; }
#line 2047 "parse-datetime.c"
    break;

  case 36: /* zone: tDAYZONE  */
#line 783 "parse-datetime.y"
      { pc->time_zone = (yyvsp[0].intval) + 60 * 60; }
#line 2053 "parse-datetime.c"
    break;

  case 37: /* zone: tZONE tDST  */
#line 785 "parse-datetime.y"
      { pc->time_zone = (yyvsp[-1].intval) + 60 * 60; }
#line 2059 "parse-datetime.c"
    break;

  case 38: /* day: tDAY  */
#line 790 "parse-datetime.y"
      {
        pc->day_ordinal = 0;
        pc->day_number = (yyvsp[0].intval);
      }
#line 2068 "parse-datetime.c"
    break;

  case 39: /* day: tDAY ','  */
#line 795 "parse-datetime.y"
      {
        pc->day_ordinal = 0;
        pc->day_number = (yyvsp[-1].intval);
      }
#line 2077 "parse-datetime.c"
    break;

  case 40: /* day: tORDINAL tDAY  */
#line 800 "parse-datetime.y"
      {
        pc->day_ordinal = (yyvsp[-1].intval);
        pc->day_number = (yyvsp[0].intval);
        pc->debug_ordinal_day_seen = true;
      }
#line 2087 "parse-datetime.c"
    break;

  case 41: /* day: tUNUMBER tDAY  */
#line 806 "parse-datetime.y"
      {
        pc->day_ordinal = (yyvsp[-1].textintval).value;
        pc->day_number = (yyvsp[0].intval);
        pc->debug_ordinal_day_seen = true;
      }
#line 2097 "parse-datetime.c"
    break;

  case 42: /* date: tUNUMBER '/' tUNUMBER  */
#line 815 "parse-datetime.y"
      {
        pc->month = (yyvsp[-2].textintval).value;
        pc->day = (yyvsp[0].textintval).value;
      }
#line 2106 "parse-datetime.c"
    break;

  case 43: /* date: tUNUMBER '/' tUNUMBER '/' tUNUMBER  */
#line 820 "parse-datetime.y"
      {
        /* Interpret as YYYY/MM/DD if the first value has 4 or more digits,
           otherwise as MM/DD/YY.
           The goal in recognizing YYYY/MM/DD is solely to support legacy
           machine-generated dates like those in an RCS log listing.  If
           you want portability, use the ISO 8601 format.  */
        if (4 <= (yyvsp[-4].textintval).digits)
          {
            if (debugging (pc))
              {
                intmax_t digits = (yyvsp[-4].textintval).digits;
                dbg_printf (_("warning: value %"PRIdMAX" has %"PRIdMAX" digits. "
                              "Assuming YYYY/MM/DD\n"),
                            (yyvsp[-4].textintval).value, digits);
              }

            pc->year = (yyvsp[-4].textintval);
            pc->month = (yyvsp[-2].textintval).value;
            pc->day = (yyvsp[0].textintval).value;
          }
        else
          {
            if (debugging (pc))
              dbg_printf (_("warning: value %"PRIdMAX" has less than 4 digits. "
                            "Assuming MM/DD/YY[YY]\n"),
                          (yyvsp[-4].textintval).value);

            pc->month = (yyvsp[-4].textintval).value;
            pc->day = (yyvsp[-2].textintval).value;
            pc->year = (yyvsp[0].textintval);
          }
      }
#line 2143 "parse-datetime.c"
    break;

  case 44: /* date: tUNUMBER tMONTH tSNUMBER  */
#line 853 "parse-datetime.y"
      {
        /* E.g., 17-JUN-1992.  */
        pc->day = (yyvsp[-2].textintval).value;
        pc->month = (yyvsp[-1].intval);
        if (ckd_sub (&pc->year.value, 0, (yyvsp[0].textintval).value)) YYABORT;
        pc->year.digits = (yyvsp[0].textintval).digits;
      }
#line 2155 "parse-datetime.c"
    break;

  case 45: /* date: tMONTH tSNUMBER tSNUMBER  */
#line 861 "parse-datetime.y"
      {
        /* E.g., JUN-17-1992.  */
        pc->month = (yyvsp[-2].intval);
        if (ckd_sub (&pc->day, 0, (yyvsp[-1].textintval).value)) YYABORT;
        if (ckd_sub (&pc->year.value, 0, (yyvsp[0].textintval).value)) YYABORT;
        pc->year.digits = (yyvsp[0].textintval).digits;
      }
#line 2167 "parse-datetime.c"
    break;

  case 46: /* date: tMONTH tUNUMBER  */
#line 869 "parse-datetime.y"
      {
        pc->month = (yyvsp[-1].intval);
        pc->day = (yyvsp[0].textintval).value;
      }
#line 2176 "parse-datetime.c"
    break;

  case 47: /* date: tMONTH tUNUMBER ',' tUNUMBER  */
#line 874 "parse-datetime.y"
      {
        pc->month = (yyvsp[-3].intval);
        pc->day = (yyvsp[-2].textintval).value;
        pc->year = (yyvsp[0].textintval);
      }
#line 2186 "parse-datetime.c"
    break;

  case 48: /* date: tUNUMBER tMONTH  */
#line 880 "parse-datetime.y"
      {
        pc->day = (yyvsp[-1].textintval).value;
        pc->month = (yyvsp[0].intval);
      }
#line 2195 "parse-datetime.c"
    break;

  case 49: /* date: tUNUMBER tMONTH tUNUMBER  */
#line 885 "parse-datetime.y"
      {
        pc->day = (yyvsp[-2].textintval).value;
        pc->month = (yyvsp[-1].intval);
        pc->year = (yyvsp[0].textintval);
      }
#line 2205 "parse-datetime.c"
    break;

  case 51: /* iso_8601_date: tUNUMBER tSNUMBER tSNUMBER  */
#line 895 "parse-datetime.y"
      {
        /* ISO 8601 format.  YYYY-MM-DD.  */
        pc->year = (yyvsp[-2].textintval);
        if (ckd_sub (&pc->month, 0, (yyvsp[-1].textintval).value)) YYABORT;
        if (ckd_sub (&pc->day, 0, (yyvsp[0].textintval).value)) YYABORT;
      }
#line 2216 "parse-datetime.c"
    break;

  case 52: /* rel: relunit tAGO  */
#line 905 "parse-datetime.y"
      { if (! apply_relative_time (pc, (yyvsp[-1].rel), (yyvsp[0].intval))) YYABORT; }
#line 2222 "parse-datetime.c"
    break;

  case 53: /* rel: relunit  */
#line 907 "parse-datetime.y"
      { if (! apply_relative_time (pc, (yyvsp[0].rel), 1)) YYABORT; }
#line 2228 "parse-datetime.c"
    break;

  case 54: /* rel: dayshift  */
#line 909 "parse-datetime.y"
      { if (! apply_relative_time (pc, (yyvsp[0].rel), 1)) YYABORT; }
#line 2234 "parse-datetime.c"
    break;

  case 55: /* relunit: tORDINAL tYEAR_UNIT  */
#line 914 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).year = (yyvsp[-1].intval); }
#line 2240 "parse-datetime.c"
    break;

  case 56: /* relunit: tUNUMBER tYEAR_UNIT  */
#line 916 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).year = (yyvsp[-1].textintval).value; }
#line 2246 "parse-datetime.c"
    break;

  case 57: /* relunit: tYEAR_UNIT  */
#line 918 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).year = 1; }
#line 2252 "parse-datetime.c"
    break;

  case 58: /* relunit: tORDINAL tMONTH_UNIT  */
#line 920 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).month = (yyvsp[-1].intval); }
#line 2258 "parse-datetime.c"
    break;

  case 59: /* relunit: tUNUMBER tMONTH_UNIT  */
#line 922 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).month = (yyvsp[-1].textintval).value; }
#line 2264 "parse-datetime.c"
    break;

  case 60: /* relunit: tMONTH_UNIT  */
#line 924 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).month = 1; }
#line 2270 "parse-datetime.c"
    break;

  case 61: /* relunit: tORDINAL tDAY_UNIT  */
#line 926 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0;
        if (ckd_mul (&(yyval.rel).day, (yyvsp[-1].intval), (yyvsp[0].intval))) YYABORT; }
#line 2277 "parse-datetime.c"
    break;

  case 62: /* relunit: tUNUMBER tDAY_UNIT  */
#line 929 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0;
        if (ckd_mul (&(yyval.rel).day, (yyvsp[-1].textintval).value, (yyvsp[0].intval))) YYABORT; }
#line 2284 "parse-datetime.c"
    break;

  case 63: /* relunit: tDAY_UNIT  */
#line 932 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).day = (yyvsp[0].intval); }
#line 2290 "parse-datetime.c"
    break;

  case 64: /* relunit: tORDINAL tHOUR_UNIT  */
#line 934 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).hour = (yyvsp[-1].intval); }
#line 2296 "parse-datetime.c"
    break;

  case 65: /* relunit: tUNUMBER tHOUR_UNIT  */
#line 936 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).hour = (yyvsp[-1].textintval).value; }
#line 2302 "parse-datetime.c"
    break;

  case 66: /* relunit: tHOUR_UNIT  */
#line 938 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).hour = 1; }
#line 2308 "parse-datetime.c"
    break;

  case 67: /* relunit: tORDINAL tMINUTE_UNIT  */
#line 940 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).minutes = (yyvsp[-1].intval); }
#line 2314 "parse-datetime.c"
    break;

  case 68: /* relunit: tUNUMBER tMINUTE_UNIT  */
#line 942 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).minutes = (yyvsp[-1].textintval).value; }
#line 2320 "parse-datetime.c"
    break;

  case 69: /* relunit: tMINUTE_UNIT  */
#line 944 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).minutes = 1; }
#line 2326 "parse-datetime.c"
    break;

  case 70: /* relunit: tORDINAL tSEC_UNIT  */
#line 946 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).seconds = (yyvsp[-1].intval); }
#line 2332 "parse-datetime.c"
    break;

  case 71: /* relunit: tUNUMBER tSEC_UNIT  */
#line 948 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).seconds = (yyvsp[-1].textintval).value; }
#line 2338 "parse-datetime.c"
    break;

  case 72: /* relunit: tSDECIMAL_NUMBER tSEC_UNIT  */
#line 950 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).seconds = (yyvsp[-1].timespec).tv_sec; (yyval.rel).ns = (yyvsp[-1].timespec).tv_nsec; }
#line 2344 "parse-datetime.c"
    break;

  case 73: /* relunit: tUDECIMAL_NUMBER tSEC_UNIT  */
#line 952 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).seconds = (yyvsp[-1].timespec).tv_sec; (yyval.rel).ns = (yyvsp[-1].timespec).tv_nsec; }
#line 2350 "parse-datetime.c"
    break;

  case 74: /* relunit: tSEC_UNIT  */
#line 954 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).seconds = 1; }
#line 2356 "parse-datetime.c"
    break;

  case 76: /* relunit_snumber: tSNUMBER tYEAR_UNIT  */
#line 960 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).year = (yyvsp[-1].textintval).value; }
#line 2362 "parse-datetime.c"
    break;

  case 77: /* relunit_snumber: tSNUMBER tMONTH_UNIT  */
#line 962 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).month = (yyvsp[-1].textintval).value; }
#line 2368 "parse-datetime.c"
    break;

  case 78: /* relunit_snumber: tSNUMBER tDAY_UNIT  */
#line 964 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0;
        if (ckd_mul (&(yyval.rel).day, (yyvsp[-1].textintval).value, (yyvsp[0].intval))) YYABORT; }
#line 2375 "parse-datetime.c"
    break;

  case 79: /* relunit_snumber: tSNUMBER tHOUR_UNIT  */
#line 967 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).hour = (yyvsp[-1].textintval).value; }
#line 2381 "parse-datetime.c"
    break;

  case 80: /* relunit_snumber: tSNUMBER tMINUTE_UNIT  */
#line 969 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).minutes = (yyvsp[-1].textintval).value; }
#line 2387 "parse-datetime.c"
    break;

  case 81: /* relunit_snumber: tSNUMBER tSEC_UNIT  */
#line 971 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).seconds = (yyvsp[-1].textintval).value; }
#line 2393 "parse-datetime.c"
    break;

  case 82: /* dayshift: tDAY_SHIFT  */
#line 976 "parse-datetime.y"
      { (yyval.rel) = RELATIVE_TIME_0; (yyval.rel).day = (yyvsp[0].intval); }
#line 2399 "parse-datetime.c"
    break;

  case 86: /* signed_seconds: tSNUMBER  */
#line 984 "parse-datetime.y"
      { if (time_overflow ((yyvsp[0].textintval).value)) YYABORT;
        (yyval.timespec) = (struct timespec) { .tv_sec = (yyvsp[0].textintval).value }; }
#line 2406 "parse-datetime.c"
    break;

  case 88: /* unsigned_seconds: tUNUMBER  */
#line 991 "parse-datetime.y"
      { if (time_overflow ((yyvsp[0].textintval).value)) YYABORT;
        (yyval.timespec) = (struct timespec) { .tv_sec = (yyvsp[0].textintval).value }; }
#line 2413 "parse-datetime.c"
    break;

  case 89: /* number: tUNUMBER  */
#line 997 "parse-datetime.y"
      { digits_to_date_time (pc, (yyvsp[0].textintval)); }
#line 2419 "parse-datetime.c"
    break;

  case 90: /* hybrid: tUNUMBER relunit_snumber  */
#line 1002 "parse-datetime.y"
      {
        /* Hybrid all-digit and relative offset, so that we accept e.g.,
           "YYYYMMDD +N days" as well as "YYYYMMDD N days".  */
        digits_to_date_time (pc, (yyvsp[-1].textintval));
        if (! apply_relative_time (pc, (yyvsp[0].rel), 1)) YYABORT;
      }
#line 2430 "parse-datetime.c"
    break;

  case 91: /* o_colon_minutes: %empty  */
#line 1012 "parse-datetime.y"
      { (yyval.intval) = -1; }
#line 2436 "parse-datetime.c"
    break;

  case 92: /* o_colon_minutes: ':' tUNUMBER  */
#line 1014 "parse-datetime.y"
      { (yyval.intval) = (yyvsp[0].textintval).value; }
#line 2442 "parse-datetime.c"
    break;


#line 2446 "parse-datetime.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (pc, YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, pc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, pc);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (pc, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, pc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, pc);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1017 "parse-datetime.y"


static table const meridian_table[] =
{
  { "AM",   tMERIDIAN, MERam },
  { "A.M.", tMERIDIAN, MERam },
  { "PM",   tMERIDIAN, MERpm },
  { "P.M.", tMERIDIAN, MERpm },
  { NULL, 0, 0 }
};

static table const dst_table[] =
{
  { "DST", tDST, 0 }
};

static table const month_and_day_table[] =
{
  { "JANUARY",  tMONTH,  1 },
  { "FEBRUARY", tMONTH,  2 },
  { "MARCH",    tMONTH,  3 },
  { "APRIL",    tMONTH,  4 },
  { "MAY",      tMONTH,  5 },
  { "JUNE",     tMONTH,  6 },
  { "JULY",     tMONTH,  7 },
  { "AUGUST",   tMONTH,  8 },
  { "SEPTEMBER",tMONTH,  9 },
  { "SEPT",     tMONTH,  9 },
  { "OCTOBER",  tMONTH, 10 },
  { "NOVEMBER", tMONTH, 11 },
  { "DECEMBER", tMONTH, 12 },
  { "SUNDAY",   tDAY,    0 },
  { "MONDAY",   tDAY,    1 },
  { "TUESDAY",  tDAY,    2 },
  { "TUES",     tDAY,    2 },
  { "WEDNESDAY",tDAY,    3 },
  { "WEDNES",   tDAY,    3 },
  { "THURSDAY", tDAY,    4 },
  { "THUR",     tDAY,    4 },
  { "THURS",    tDAY,    4 },
  { "FRIDAY",   tDAY,    5 },
  { "SATURDAY", tDAY,    6 },
  { NULL, 0, 0 }
};

static table const time_units_table[] =
{
  { "YEAR",     tYEAR_UNIT,      1 },
  { "MONTH",    tMONTH_UNIT,     1 },
  { "FORTNIGHT",tDAY_UNIT,      14 },
  { "WEEK",     tDAY_UNIT,       7 },
  { "DAY",      tDAY_UNIT,       1 },
  { "HOUR",     tHOUR_UNIT,      1 },
  { "MINUTE",   tMINUTE_UNIT,    1 },
  { "MIN",      tMINUTE_UNIT,    1 },
  { "SECOND",   tSEC_UNIT,       1 },
  { "SEC",      tSEC_UNIT,       1 },
  { NULL, 0, 0 }
};

/* Assorted relative-time words.  */
static table const relative_time_table[] =
{
  { "TOMORROW", tDAY_SHIFT,      1 },
  { "YESTERDAY",tDAY_SHIFT,     -1 },
  { "TODAY",    tDAY_SHIFT,      0 },
  { "NOW",      tDAY_SHIFT,      0 },
  { "LAST",     tORDINAL,       -1 },
  { "THIS",     tORDINAL,        0 },
  { "NEXT",     tORDINAL,        1 },
  { "FIRST",    tORDINAL,        1 },
/*{ "SECOND",   tORDINAL,        2 }, */
  { "THIRD",    tORDINAL,        3 },
  { "FOURTH",   tORDINAL,        4 },
  { "FIFTH",    tORDINAL,        5 },
  { "SIXTH",    tORDINAL,        6 },
  { "SEVENTH",  tORDINAL,        7 },
  { "EIGHTH",   tORDINAL,        8 },
  { "NINTH",    tORDINAL,        9 },
  { "TENTH",    tORDINAL,       10 },
  { "ELEVENTH", tORDINAL,       11 },
  { "TWELFTH",  tORDINAL,       12 },
  { "AGO",      tAGO,           -1 },
  { "HENCE",    tAGO,            1 },
  { NULL, 0, 0 }
};

/* The universal time zone table.  These labels can be used even for
   timestamps that would not otherwise be valid, e.g., GMT timestamps
   oin London during summer.  */
static table const universal_time_zone_table[] =
{
  { "GMT",      tZONE,     HOUR ( 0) }, /* Greenwich Mean */
  { "UT",       tZONE,     HOUR ( 0) }, /* Universal (Coordinated) */
  { "UTC",      tZONE,     HOUR ( 0) },
  { NULL, 0, 0 }
};

/* The time zone table.  This table is necessarily incomplete, as time
   zone abbreviations are ambiguous; e.g., Australians interpret "EST"
   as Eastern time in Australia, not as US Eastern Standard Time.
   You cannot rely on parse_datetime to handle arbitrary time zone
   abbreviations; use numeric abbreviations like "-0500" instead.  */
static table const time_zone_table[] =
{
  { "WET",      tZONE,     HOUR ( 0) }, /* Western European */
  { "WEST",     tDAYZONE,  HOUR ( 0) }, /* Western European Summer */
  { "BST",      tDAYZONE,  HOUR ( 0) }, /* British Summer */
  { "ART",      tZONE,    -HOUR ( 3) }, /* Argentina */
  { "BRT",      tZONE,    -HOUR ( 3) }, /* Brazil */
  { "BRST",     tDAYZONE, -HOUR ( 3) }, /* Brazil Summer */
  { "NST",      tZONE,   -(HOUR ( 3) + 30 * 60) }, /* Newfoundland Standard */
  { "NDT",      tDAYZONE,-(HOUR ( 3) + 30 * 60) }, /* Newfoundland Daylight */
  { "AST",      tZONE,    -HOUR ( 4) }, /* Atlantic Standard */
  { "ADT",      tDAYZONE, -HOUR ( 4) }, /* Atlantic Daylight */
  { "CLT",      tZONE,    -HOUR ( 4) }, /* Chile */
  { "CLST",     tDAYZONE, -HOUR ( 4) }, /* Chile Summer */
  { "EST",      tZONE,    -HOUR ( 5) }, /* Eastern Standard */
  { "EDT",      tDAYZONE, -HOUR ( 5) }, /* Eastern Daylight */
  { "CST",      tZONE,    -HOUR ( 6) }, /* Central Standard */
  { "CDT",      tDAYZONE, -HOUR ( 6) }, /* Central Daylight */
  { "MST",      tZONE,    -HOUR ( 7) }, /* Mountain Standard */
  { "MDT",      tDAYZONE, -HOUR ( 7) }, /* Mountain Daylight */
  { "PST",      tZONE,    -HOUR ( 8) }, /* Pacific Standard */
  { "PDT",      tDAYZONE, -HOUR ( 8) }, /* Pacific Daylight */
  { "AKST",     tZONE,    -HOUR ( 9) }, /* Alaska Standard */
  { "AKDT",     tDAYZONE, -HOUR ( 9) }, /* Alaska Daylight */
  { "HST",      tZONE,    -HOUR (10) }, /* Hawaii Standard */
  { "HAST",     tZONE,    -HOUR (10) }, /* Hawaii-Aleutian Standard */
  { "HADT",     tDAYZONE, -HOUR (10) }, /* Hawaii-Aleutian Daylight */
  { "SST",      tZONE,    -HOUR (12) }, /* Samoa Standard */
  { "WAT",      tZONE,     HOUR ( 1) }, /* West Africa */
  { "CET",      tZONE,     HOUR ( 1) }, /* Central European */
  { "CEST",     tDAYZONE,  HOUR ( 1) }, /* Central European Summer */
  { "MET",      tZONE,     HOUR ( 1) }, /* Middle European */
  { "MEZ",      tZONE,     HOUR ( 1) }, /* Middle European */
  { "MEST",     tDAYZONE,  HOUR ( 1) }, /* Middle European Summer */
  { "MESZ",     tDAYZONE,  HOUR ( 1) }, /* Middle European Summer */
  { "EET",      tZONE,     HOUR ( 2) }, /* Eastern European */
  { "EEST",     tDAYZONE,  HOUR ( 2) }, /* Eastern European Summer */
  { "CAT",      tZONE,     HOUR ( 2) }, /* Central Africa */
  { "SAST",     tZONE,     HOUR ( 2) }, /* South Africa Standard */
  { "EAT",      tZONE,     HOUR ( 3) }, /* East Africa */
  { "MSK",      tZONE,     HOUR ( 3) }, /* Moscow */
  { "MSD",      tDAYZONE,  HOUR ( 3) }, /* Moscow Daylight */
  { "IST",      tZONE,    (HOUR ( 5) + 30 * 60) }, /* India Standard */
  { "SGT",      tZONE,     HOUR ( 8) }, /* Singapore */
  { "KST",      tZONE,     HOUR ( 9) }, /* Korea Standard */
  { "JST",      tZONE,     HOUR ( 9) }, /* Japan Standard */
  { "GST",      tZONE,     HOUR (10) }, /* Guam Standard */
  { "NZST",     tZONE,     HOUR (12) }, /* New Zealand Standard */
  { "NZDT",     tDAYZONE,  HOUR (12) }, /* New Zealand Daylight */
  { NULL, 0, 0 }
};

/* Military time zone table.

   RFC 822 got these backwards, but RFC 5322 makes the incorrect
   treatment optional, so do them the right way here.

   'J' is special, as it is local time.
   'T' is also special, as it is the separator in ISO
   8601 date and time of day representation.  */
static table const military_table[] =
{
  { "A", tZONE,  HOUR ( 1) },
  { "B", tZONE,  HOUR ( 2) },
  { "C", tZONE,  HOUR ( 3) },
  { "D", tZONE,  HOUR ( 4) },
  { "E", tZONE,  HOUR ( 5) },
  { "F", tZONE,  HOUR ( 6) },
  { "G", tZONE,  HOUR ( 7) },
  { "H", tZONE,  HOUR ( 8) },
  { "I", tZONE,  HOUR ( 9) },
  { "J", 'J',    0 },
  { "K", tZONE,  HOUR (10) },
  { "L", tZONE,  HOUR (11) },
  { "M", tZONE,  HOUR (12) },
  { "N", tZONE, -HOUR ( 1) },
  { "O", tZONE, -HOUR ( 2) },
  { "P", tZONE, -HOUR ( 3) },
  { "Q", tZONE, -HOUR ( 4) },
  { "R", tZONE, -HOUR ( 5) },
  { "S", tZONE, -HOUR ( 6) },
  { "T", 'T',    0 },
  { "U", tZONE, -HOUR ( 8) },
  { "V", tZONE, -HOUR ( 9) },
  { "W", tZONE, -HOUR (10) },
  { "X", tZONE, -HOUR (11) },
  { "Y", tZONE, -HOUR (12) },
  { "Z", tZONE,  HOUR ( 0) },
  { NULL, 0, 0 }
};



/* Convert a time zone expressed as HH:MM into an integer count of
   seconds.  If MM is negative, then S is of the form HHMM and needs
   to be picked apart; otherwise, S is of the form HH.  As specified in
   https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/V1_chap08.html#tag_08_03, allow
   only valid TZ range, and consider first two digits as hours, if no
   minutes specified.  Return true if successful.  */

static bool
time_zone_hhmm (parser_control *pc, textint s, intmax_t mm)
{
  intmax_t n_minutes;
  bool overflow = false;

  /* If the length of S is 1 or 2 and no minutes are specified,
     interpret it as a number of hours.  */
  if (s.digits <= 2 && mm < 0)
    s.value *= 100;

  if (mm < 0)
    n_minutes = (s.value / 100) * 60 + s.value % 100;
  else
    {
      overflow |= ckd_mul (&n_minutes, s.value, 60);
      overflow |= (s.negative
                   ? ckd_sub (&n_minutes, n_minutes, mm)
                   : ckd_add (&n_minutes, n_minutes, mm));
    }

  if (overflow || ! (-24 * 60 <= n_minutes && n_minutes <= 24 * 60))
    return false;
  pc->time_zone = n_minutes * 60;
  return true;
}

static int
to_hour (intmax_t hours, int meridian)
{
  switch (meridian)
    {
    default: /* Pacify GCC.  */
    case MER24:
      return 0 <= hours && hours < 24 ? hours : -1;
    case MERam:
      return 0 < hours && hours < 12 ? hours : hours == 12 ? 0 : -1;
    case MERpm:
      return 0 < hours && hours < 12 ? hours + 12 : hours == 12 ? 12 : -1;
    }
}

enum { TM_YEAR_BASE = 1900 };
enum { TM_YEAR_BUFSIZE = INT_BUFSIZE_BOUND (int) + 1 };

/* Convert TM_YEAR, a year minus 1900, to a string that is numerically
   correct even if subtracting 1900 would overflow.  */

static char const *
tm_year_str (int tm_year, char buf[TM_YEAR_BUFSIZE])
{
  static_assert (TM_YEAR_BASE % 100 == 0);
  sprintf (buf, &"-%02d%02d"[-TM_YEAR_BASE <= tm_year],
           abs (tm_year / 100 + TM_YEAR_BASE / 100),
           abs (tm_year % 100));
  return buf;
}

/* Convert a text year number to a year minus 1900, working correctly
   even if the input is in the range INT_MAX .. INT_MAX + 1900 - 1.  */

static bool
to_tm_year (textint textyear, bool debug, int *tm_year)
{
  intmax_t year = textyear.value;

  /* XPG4 suggests that years 00-68 map to 2000-2068, and
     years 69-99 map to 1969-1999.  */
  if (0 <= year && textyear.digits == 2)
    {
      year += year < 69 ? 2000 : 1900;
      if (debug)
        dbg_printf (_("warning: adjusting year value %"PRIdMAX
                      " to %"PRIdMAX"\n"),
                    textyear.value, year);
    }

  if (year < 0
      ? ckd_sub (tm_year, -TM_YEAR_BASE, year)
      : ckd_sub (tm_year, year, TM_YEAR_BASE))
    {
      if (debug)
        dbg_printf (_("error: out-of-range year %"PRIdMAX"\n"), year);
      return false;
    }

  return true;
}

static table const * _GL_ATTRIBUTE_PURE
lookup_zone (parser_control const *pc, char const *name)
{
  table const *tp;

  for (tp = universal_time_zone_table; tp->name; tp++)
    if (strcmp (name, tp->name) == 0)
      return tp;

  /* Try local zone abbreviations before those in time_zone_table, as
     the local ones are more likely to be right.  */
  for (tp = pc->local_time_zone_table; tp->name; tp++)
    if (strcmp (name, tp->name) == 0)
      return tp;

  for (tp = time_zone_table; tp->name; tp++)
    if (strcmp (name, tp->name) == 0)
      return tp;

  return NULL;
}

#if ! HAVE_STRUCT_TM_TM_GMTOFF
/* Yield the difference between *A and *B,
   measured in seconds, ignoring leap seconds.
   The body of this function is taken directly from the GNU C Library;
   see strftime.c.  */
static int
tm_diff (const struct tm *a, const struct tm *b)
{
  /* Compute intervening leap days correctly even if year is negative.
     Take care to avoid int overflow in leap day calculations,
     but it's OK to assume that A and B are close to each other.  */
  int a4 = SHR (a->tm_year, 2) + SHR (TM_YEAR_BASE, 2) - ! (a->tm_year & 3);
  int b4 = SHR (b->tm_year, 2) + SHR (TM_YEAR_BASE, 2) - ! (b->tm_year & 3);
  int a100 = a4 / 25 - (a4 % 25 < 0);
  int b100 = b4 / 25 - (b4 % 25 < 0);
  int a400 = SHR (a100, 2);
  int b400 = SHR (b100, 2);
  int intervening_leap_days = (a4 - b4) - (a100 - b100) + (a400 - b400);
  int years = a->tm_year - b->tm_year;
  int days = (365 * years + intervening_leap_days
              + (a->tm_yday - b->tm_yday));
  return (60 * (60 * (24 * days + (a->tm_hour - b->tm_hour))
                + (a->tm_min - b->tm_min))
          + (a->tm_sec - b->tm_sec));
}
#endif

static table const *
lookup_word (parser_control const *pc, char *word)
{
  char *p;
  char *q;
  idx_t wordlen;
  table const *tp;
  bool period_found;
  bool abbrev;

  /* Make it uppercase.  */
  for (p = word; *p; p++)
    *p = c_toupper (to_uchar (*p));

  for (tp = meridian_table; tp->name; tp++)
    if (strcmp (word, tp->name) == 0)
      return tp;

  /* See if we have an abbreviation for a month.  */
  wordlen = strlen (word);
  abbrev = wordlen == 3 || (wordlen == 4 && word[3] == '.');

  for (tp = month_and_day_table; tp->name; tp++)
    if ((abbrev ? strncmp (word, tp->name, 3) : strcmp (word, tp->name)) == 0)
      return tp;

  if ((tp = lookup_zone (pc, word)))
    return tp;

  if (strcmp (word, dst_table[0].name) == 0)
    return dst_table;

  for (tp = time_units_table; tp->name; tp++)
    if (strcmp (word, tp->name) == 0)
      return tp;

  /* Strip off any plural and try the units table again.  */
  if (word[wordlen - 1] == 'S')
    {
      word[wordlen - 1] = '\0';
      for (tp = time_units_table; tp->name; tp++)
        if (strcmp (word, tp->name) == 0)
          return tp;
      word[wordlen - 1] = 'S';  /* For "this" in relative_time_table.  */
    }

  for (tp = relative_time_table; tp->name; tp++)
    if (strcmp (word, tp->name) == 0)
      return tp;

  /* Military time zones.  */
  if (wordlen == 1)
    for (tp = military_table; tp->name; tp++)
      if (word[0] == tp->name[0])
        return tp;

  /* Drop out any periods and try the time zone table again.  */
  for (period_found = false, p = q = word; (*p = *q); q++)
    if (*q == '.')
      period_found = true;
    else
      p++;
  if (period_found && (tp = lookup_zone (pc, word)))
    return tp;

  return NULL;
}

static int
yylex (union YYSTYPE *lvalp, parser_control *pc)
{
  unsigned char c;

  for (;;)
    {
      while (c = *pc->input, c_isspace (c))
        pc->input++;

      if (c_isdigit (c) || c == '-' || c == '+')
        {
          char const *p = pc->input;
          int sign;
          if (c == '-' || c == '+')
            {
              sign = c == '-' ? -1 : 1;
              while (c = *(pc->input = ++p), c_isspace (c))
                continue;
              if (! c_isdigit (c))
                /* skip the '-' sign */
                continue;
            }
          else
            sign = 0;

          time_t value = 0;
          do
            {
              if (ckd_mul (&value, value, 10))
                return '?';
              if (ckd_add (&value, value, sign < 0 ? '0' - c : c - '0'))
                return '?';
              c = *++p;
            }
          while (c_isdigit (c));

          if ((c == '.' || c == ',') && c_isdigit (p[1]))
            {
              time_t s = value;
              int digits;

              /* Accumulate fraction, to ns precision.  */
              p++;
              int ns = *p++ - '0';
              for (digits = 2; digits <= LOG10_BILLION; digits++)
                {
                  ns *= 10;
                  if (c_isdigit (*p))
                    ns += *p++ - '0';
                }

              /* Skip excess digits, truncating toward -Infinity.  */
              if (sign < 0)
                for (; c_isdigit (*p); p++)
                  if (*p != '0')
                    {
                      ns++;
                      break;
                    }
              while (c_isdigit (*p))
                p++;

              /* Adjust to the timespec convention, which is that
                 tv_nsec is always a positive offset even if tv_sec is
                 negative.  */
              if (sign < 0 && ns)
                {
                  if (ckd_sub (&s, s, 1))
                    return '?';
                  ns = BILLION - ns;
                }

              lvalp->timespec = (struct timespec) { .tv_sec = s,
                                                    .tv_nsec = ns };
              pc->input = p;
              return sign ? tSDECIMAL_NUMBER : tUDECIMAL_NUMBER;
            }
          else
            {
              lvalp->textintval.negative = sign < 0;
              lvalp->textintval.value = value;
              lvalp->textintval.digits = p - pc->input;
              pc->input = p;
              return sign ? tSNUMBER : tUNUMBER;
            }
        }

      if (c_isalpha (c))
        {
          char buff[20];
          char *p = buff;
          table const *tp;

          do
            {
              if (p < buff + sizeof buff - 1)
                *p++ = c;
              c = *++pc->input;
            }
          while (c_isalpha (c) || c == '.');

          *p = '\0';
          tp = lookup_word (pc, buff);
          if (! tp)
            {
              if (debugging (pc))
                dbg_printf (_("error: unknown word '%s'\n"), buff);
              return '?';
            }
          lvalp->intval = tp->value;
          return tp->type;
        }

      if (c != '(')
        return to_uchar (*pc->input++);

      idx_t count = 0;
      do
        {
          c = *pc->input++;
          if (c == '\0')
            return c;
          if (c == '(')
            count++;
          else if (c == ')')
            count--;
        }
      while (count != 0);
    }
}

/* Do nothing if the parser reports an error.  */
static void
yyerror (_GL_UNUSED parser_control const *pc,
         _GL_UNUSED char const *s)
{
}

/* If *TM0 is the old and *TM1 is the new value of a struct tm after
   passing it to mktime_z, return true if it's OK.  It's not OK if
   mktime failed or if *TM0 has out-of-range mainline members.
   The caller should set TM1->tm_wday to -1 before calling mktime,
   as a negative tm_wday is how mktime failure is inferred.  */

static bool
mktime_ok (struct tm const *tm0, struct tm const *tm1)
{
  if (tm1->tm_wday < 0)
    return false;

  return ! ((tm0->tm_sec ^ tm1->tm_sec)
            | (tm0->tm_min ^ tm1->tm_min)
            | (tm0->tm_hour ^ tm1->tm_hour)
            | (tm0->tm_mday ^ tm1->tm_mday)
            | (tm0->tm_mon ^ tm1->tm_mon)
            | (tm0->tm_year ^ tm1->tm_year));
}

/* Populate PC's local time zone table with information from TM.  */

static void
populate_local_time_zone_table (parser_control *pc, struct tm const *tm)
{
  bool first_entry_exists = !!pc->local_time_zone_table[0].name;

  /* The table entry to be filled in.  There are only two, so this is
     the first entry if it is missing, the second entry otherwise.  */
  table *e = &pc->local_time_zone_table[first_entry_exists];

  e->type = tLOCAL_ZONE;
  e->value = tm->tm_isdst;

  char const *zone = NULL;
#if HAVE_STRUCT_TM_TM_ZONE
  if (tm->tm_zone[0])
    zone = tm->tm_zone;
#else
  char *tz_abbr = pc->tz_abbr[first_entry_exists];
  if (strftime (tz_abbr, TIME_ZONE_BUFSIZE, "%Z", tm))
    zone = tz_abbr;
#endif
  e->name = zone;
  e[1].name = NULL;
}

/* Debugging: format a 'struct tm' into a buffer, taking the parser's
   timezone information into account (if pc != NULL).  */
static char const *
debug_strfdatetime (struct tm const *tm, parser_control const *pc,
                    char *buf, int n)
{
  /* TODO:
     1. find an optimal way to print date string in a clear and unambiguous
        format.  Currently, always add '(Y-M-D)' prefix.
        Consider '2016y01m10d'  or 'year(2016) month(01) day(10)'.

        If the user needs debug printing, it means he/she already having
        issues with the parsing - better to avoid formats that could
        be mis-interpreted (e.g., just YYYY-MM-DD).

     2. Print timezone information ?

     3. Print DST information ?

     4. Print nanosecond information ?

     NOTE:
     Printed date/time values might not be valid, e.g., '2016-02-31'
     or '2016-19-2016' .  These are the values as parsed from the user
     string, before validation.
  */
  int m = strftime (buf, n, "(Y-M-D) %Y-%m-%d %H:%M:%S", tm);

  /* If parser_control information was provided (for timezone),
     and there's enough space in the buffer, add timezone info.  */
  if (pc && m < n && pc->zones_seen)
    {
      int tz = pc->time_zone;

      /* Account for DST if tLOCAL_ZONE was seen.  */
      if (pc->local_zones_seen && !pc->zones_seen && 0 < pc->local_isdst)
        tz += 60 * 60;

      char time_zone_buf[TIME_ZONE_BUFSIZE];
      snprintf (&buf[m], n - m, " TZ=%s", time_zone_str (tz, time_zone_buf));
    }
  return buf;
}

static char const *
debug_strfdate (struct tm const *tm, char *buf, int n)
{
  char tm_year_buf[TM_YEAR_BUFSIZE];
  snprintf (buf, n, "(Y-M-D) %s-%02d-%02d",
            tm_year_str (tm->tm_year, tm_year_buf),
            tm->tm_mon + 1, tm->tm_mday);
  return buf;
}

static char const *
debug_strftime (struct tm const *tm, char *buf, int n)
{
  snprintf (buf, n, "%02d:%02d:%02d", tm->tm_hour, tm->tm_min, tm->tm_sec);
  return buf;
}

/* If mktime_ok failed, display the failed time values,
   and provide possible hints.  Example output:

    date: error: invalid date/time value:
    date:     user provided time: '(Y-M-D) 2006-04-02 02:45:00'
    date:        normalized time: '(Y-M-D) 2006-04-02 03:45:00'
    date:                                             __
    date:      possible reasons:
    date:        nonexistent due to daylight-saving time;
    date:        numeric values overflow;
    date:        missing timezone;
 */
static void
debug_mktime_not_ok (struct tm const *tm0, struct tm const *tm1,
                     parser_control const *pc, bool time_zone_seen)
{
  char tmp[DBGBUFSIZE];

  if (!debugging (pc))
    return;

  dbg_fputs (_("error: invalid date/time value:\n"));
  dbg_printf (_("    user provided time: '%s'\n"),
              debug_strfdatetime (tm0, pc, tmp, sizeof tmp));
  bool mktime_failed = tm1->tm_wday < 0;
  if (mktime_failed)
    dbg_fputs (_("    time could not be normalized\n"));
  else
    {
      dbg_printf (_("       normalized time: '%s'\n"),
                  debug_strfdatetime (tm1, pc, tmp, sizeof tmp));
      /* The format must be aligned with debug_strfdatetime and the
         dbg_printf statements above.  This string is not translated.  */
      int i = sprintf (tmp, "%37s %2s %2s %2s %2s %2s",
                       tm0->tm_year == tm1->tm_year ? "" : "----",
                       tm0->tm_mon  == tm1->tm_mon  ? "" : "--",
                       tm0->tm_mday == tm1->tm_mday ? "" : "--",
                       tm0->tm_hour == tm1->tm_hour ? "" : "--",
                       tm0->tm_min  == tm1->tm_min  ? "" : "--",
                       tm0->tm_sec  == tm1->tm_sec  ? "" : "--");
      /* Trim trailing whitespace.  */
      while (0 < i && tmp[i - 1] == ' ')
        i--;
      dbg_printf ("%.*s\n", i, tmp);
    }

  dbg_fputs (_("     possible reasons:\n"));
  dbg_fputs (_("       nonexistent due to daylight-saving time;\n"));
  dbg_fputs (_("       invalid day/month combination;\n"));
  if (mktime_failed)
    dbg_fputs (_("       numeric values overflow;\n"));
  dbg_printf ("       %s\n", (time_zone_seen ? _("incorrect timezone")
                              : _("missing timezone")));
}

/* Parse a date/time string, storing the resulting time value into *RESULT.
   The string itself is pointed to by P.  Return true if successful.
   P can be an incomplete or relative time specification; if so, use
   *NOW as the basis for the returned time.  Default to timezone
   TZDEFAULT, which corresponds to tzalloc (TZSTRING).  */
static bool
parse_datetime_body (struct timespec *result, char const *p,
                     struct timespec const *now, unsigned int flags,
                     timezone_t tzdefault, char const *tzstring)
{
  struct tm tm;
  struct tm tm0;
  char time_zone_buf[TIME_ZONE_BUFSIZE];
  char dbg_tm[DBGBUFSIZE];
  bool ok = false;
  char const *input_sentinel = p + strlen (p);
  char *tz1alloc = NULL;

  /* A reasonable upper bound for the size of ordinary TZ strings.
     Use heap allocation if TZ's length exceeds this.  */
  enum { TZBUFSIZE = 100 };
  char tz1buf[TZBUFSIZE];

  struct timespec gettime_buffer;
  if (! now)
    {
      gettime (&gettime_buffer);
      now = &gettime_buffer;
    }

  time_t Start = now->tv_sec;
  int Start_ns = now->tv_nsec;

  unsigned char c;
  while (c = *p, c_isspace (c))
    p++;

  timezone_t tz = tzdefault;

  /* Store a local copy prior to first "goto".  Without this, a prior use
     below of RELATIVE_TIME_0 on the RHS might translate to an assignment-
     to-temporary, which would trigger a -Wjump-misses-init warning.  */
  const relative_time rel_time_0 = RELATIVE_TIME_0;

  if (strncmp (p, "TZ=\"", 4) == 0)
    {
      char const *tzbase = p + 4;
      idx_t tzsize = 1;
      char const *s;

      for (s = tzbase; *s; s++, tzsize++)
        if (*s == '\\')
          {
            s++;
            if (! (*s == '\\' || *s == '"'))
              break;
          }
        else if (*s == '"')
          {
            timezone_t tz1;
            char *tz1string = tz1buf;
            char *z;
            if (TZBUFSIZE < tzsize)
              {
                tz1alloc = malloc (tzsize);
                if (!tz1alloc)
                  goto fail;
                tz1string = tz1alloc;
              }
            z = tz1string;
            for (s = tzbase; *s != '"'; s++)
              *z++ = *(s += *s == '\\');
            *z = '\0';
            tz1 = tzalloc (tz1string);
            if (!tz1)
              goto fail;
            tz = tz1;
            tzstring = tz1string;

            p = s + 1;
            while (c = *p, c_isspace (c))
              p++;

            break;
          }
    }

  struct tm tmp;
  if (! localtime_rz (tz, &now->tv_sec, &tmp))
    goto fail;

  /* As documented, be careful to treat the empty string just like
     a date string of "0".  Without this, an empty string would be
     declared invalid when parsed during a DST transition.  */
  if (*p == '\0')
    p = "0";

  parser_control pc;
  pc.input = p;
#ifdef GNULIB_PARSE_DATETIME2
  pc.parse_datetime_debug = (flags & PARSE_DATETIME_DEBUG) != 0;
#endif
  if (ckd_add (&pc.year.value, tmp.tm_year, TM_YEAR_BASE))
    {
      if (debugging (&pc))
        dbg_fputs (_("error: initial year out of range\n"));
      goto fail;
    }
  pc.year.digits = 0;
  pc.month = tmp.tm_mon + 1;
  pc.day = tmp.tm_mday;
  pc.hour = tmp.tm_hour;
  pc.minutes = tmp.tm_min;
  pc.seconds = (struct timespec) { .tv_sec = tmp.tm_sec, .tv_nsec = Start_ns };
  tm.tm_isdst = tmp.tm_isdst;

  pc.meridian = MER24;
  pc.rel = rel_time_0;
  pc.timespec_seen = false;
  pc.rels_seen = false;
  pc.dates_seen = 0;
  pc.days_seen = 0;
  pc.times_seen = 0;
  pc.J_zones_seen = 0;
  pc.local_zones_seen = 0;
  pc.dsts_seen = 0;
  pc.zones_seen = 0;
  pc.year_seen = false;
  pc.debug_dates_seen = false;
  pc.debug_days_seen = false;
  pc.debug_times_seen = false;
  pc.debug_local_zones_seen = false;
  pc.debug_zones_seen = false;
  pc.debug_year_seen = false;
  pc.debug_ordinal_day_seen = false;

  pc.local_time_zone_table[0].name = NULL;
  populate_local_time_zone_table (&pc, &tmp);

  /* Probe the names used in the next three calendar quarters, looking
     for a tm_isdst different from the one we already have.  */
  for (int quarter = 1; quarter <= 3; quarter++)
    {
      time_t probe;
      if (ckd_add (&probe, Start, quarter * (90 * 24 * 60 * 60)))
        break;
      struct tm probe_tm;
      if (localtime_rz (tz, &probe, &probe_tm)
          && (! pc.local_time_zone_table[0].name
              || probe_tm.tm_isdst != pc.local_time_zone_table[0].value))
        {
          populate_local_time_zone_table (&pc, &probe_tm);
          if (pc.local_time_zone_table[1].name)
            {
              if (! strcmp (pc.local_time_zone_table[0].name,
                            pc.local_time_zone_table[1].name))
                {
                  /* This locale uses the same abbreviation for standard and
                     daylight times.  So if we see that abbreviation, we don't
                     know whether it's daylight time.  */
                  pc.local_time_zone_table[0].value = -1;
                  pc.local_time_zone_table[1].name = NULL;
                }

              break;
            }
        }
    }

  if (yyparse (&pc) != 0)
    {
      if (debugging (&pc))
        dbg_printf ((input_sentinel <= pc.input
                     ? _("error: parsing failed\n")
                     : _("error: parsing failed, stopped at '%s'\n")),
                    pc.input);
      goto fail;
    }


  /* Determine effective timezone source.  */

  if (debugging (&pc))
    {
      dbg_fputs (_("input timezone: "));

      if (pc.timespec_seen)
        fputs (_("'@timespec' - always UTC"), stderr);
      else if (pc.zones_seen)
        fputs (_("parsed date/time string"), stderr);
      else if (tzstring)
        {
          if (tz != tzdefault)
            fprintf (stderr, _("TZ=\"%s\" in date string"), tzstring);
          else if (STREQ (tzstring, "UTC0"))
            {
              /* Special case: 'date -u' sets TZ="UTC0".  */
              fputs (_("TZ=\"UTC0\" environment value or -u"), stderr);
            }
          else
            fprintf (stderr, _("TZ=\"%s\" environment value"), tzstring);
        }
      else
        fputs (_("system default"), stderr);

      /* Account for DST changes if tLOCAL_ZONE was seen.
         local timezone only changes DST and is relative to the
         default timezone.*/
      if (pc.local_zones_seen && !pc.zones_seen && 0 < pc.local_isdst)
        fputs (", dst", stderr);

      if (pc.zones_seen)
        fprintf (stderr, " (%s)", time_zone_str (pc.time_zone, time_zone_buf));

      fputc ('\n', stderr);
    }

  if (pc.timespec_seen)
    *result = pc.seconds;
  else
    {
      if (1 < (pc.times_seen | pc.dates_seen | pc.days_seen | pc.dsts_seen
               | (pc.J_zones_seen + pc.local_zones_seen + pc.zones_seen)))
        {
          if (debugging (&pc))
            {
              if (pc.times_seen > 1)
                dbg_fputs (_("error: seen multiple time parts\n"));
              if (pc.dates_seen > 1)
                dbg_fputs (_("error: seen multiple date parts\n"));
              if (pc.days_seen > 1)
                dbg_fputs (_("error: seen multiple days parts\n"));
              if (pc.dsts_seen > 1)
                dbg_fputs (_("error: seen multiple daylight-saving parts\n"));
              if ((pc.J_zones_seen + pc.local_zones_seen + pc.zones_seen) > 1)
                dbg_fputs (_("error: seen multiple time-zone parts\n"));
            }
          goto fail;
        }

      if (! to_tm_year (pc.year, debugging (&pc), &tm.tm_year)
          || ckd_add (&tm.tm_mon, pc.month, -1)
          || ckd_add (&tm.tm_mday, pc.day, 0))
        {
          if (debugging (&pc))
            dbg_fputs (_("error: year, month, or day overflow\n"));
          goto fail;
        }
      if (pc.times_seen || (pc.rels_seen && ! pc.dates_seen && ! pc.days_seen))
        {
          tm.tm_hour = to_hour (pc.hour, pc.meridian);
          if (tm.tm_hour < 0)
            {
              char const *mrd = (pc.meridian == MERam ? "am"
                                 : pc.meridian == MERpm ?"pm" : "");
              if (debugging (&pc))
                dbg_printf (_("error: invalid hour %"PRIdMAX"%s\n"),
                            pc.hour, mrd);
              goto fail;
            }
          tm.tm_min = pc.minutes;
          tm.tm_sec = pc.seconds.tv_sec;
          if (debugging (&pc))
            dbg_printf ((pc.times_seen
                         ? _("using specified time as starting value: '%s'\n")
                         : _("using current time as starting value: '%s'\n")),
                        debug_strftime (&tm, dbg_tm, sizeof dbg_tm));
        }
      else
        {
          tm.tm_hour = tm.tm_min = tm.tm_sec = 0;
          pc.seconds.tv_nsec = 0;
          if (debugging (&pc))
            dbg_printf (_("warning: using midnight as starting time: %s\n"),
                        "00:00:00");
        }

      /* Let mktime deduce tm_isdst if we have an absolute timestamp.  */
      if (pc.dates_seen | pc.days_seen | pc.times_seen)
        tm.tm_isdst = -1;

      /* But if the input explicitly specifies local time with or without
         DST, give mktime that information.  */
      if (pc.local_zones_seen)
        tm.tm_isdst = pc.local_isdst;

      tm0.tm_sec = tm.tm_sec;
      tm0.tm_min = tm.tm_min;
      tm0.tm_hour = tm.tm_hour;
      tm0.tm_mday = tm.tm_mday;
      tm0.tm_mon = tm.tm_mon;
      tm0.tm_year = tm.tm_year;
      tm0.tm_isdst = tm.tm_isdst;
      tm.tm_wday = -1;

      Start = mktime_z (tz, &tm);

      if (! mktime_ok (&tm0, &tm))
        {
          bool repaired = false;
          bool time_zone_seen = pc.zones_seen != 0;
          if (time_zone_seen)
            {
              /* Guard against falsely reporting errors near the time_t
                 boundaries when parsing times in other time zones.  For
                 example, suppose the input string "1969-12-31 23:00:00 -0100",
                 the current time zone is 8 hours ahead of UTC, and the min
                 time_t value is 1970-01-01 00:00:00 UTC.  Then the min
                 localtime value is 1970-01-01 08:00:00, and mktime will
                 therefore fail on 1969-12-31 23:00:00.  To work around the
                 problem, set the time zone to 1 hour behind UTC temporarily
                 by setting TZ="XXX1:00" and try mktime again.  */

              char tz2buf[sizeof "XXX" - 1 + TIME_ZONE_BUFSIZE];
              tz2buf[0] = tz2buf[1] = tz2buf[2] = 'X';
              time_zone_str (pc.time_zone, &tz2buf[3]);
              timezone_t tz2 = tzalloc (tz2buf);
              if (!tz2)
                {
                  if (debugging (&pc))
                    dbg_printf (_("error: tzalloc (\"%s\") failed\n"), tz2buf);
                  goto fail;
                }
              tm.tm_sec = tm0.tm_sec;
              tm.tm_min = tm0.tm_min;
              tm.tm_hour = tm0.tm_hour;
              tm.tm_mday = tm0.tm_mday;
              tm.tm_mon = tm0.tm_mon;
              tm.tm_year = tm0.tm_year;
              tm.tm_isdst = tm0.tm_isdst;
              tm.tm_wday = -1;
              Start = mktime_z (tz2, &tm);
              repaired = mktime_ok (&tm0, &tm);
              tzfree (tz2);
            }

          if (! repaired)
            {
              debug_mktime_not_ok (&tm0, &tm, &pc, time_zone_seen);
              goto fail;
            }
        }

      char dbg_ord[DBGBUFSIZE];

      if (pc.days_seen && ! pc.dates_seen)
        {
          intmax_t dayincr;
          tm.tm_yday = -1;
          intmax_t day_ordinal = (pc.day_ordinal
                                  - (0 < pc.day_ordinal
                                     && tm.tm_wday != pc.day_number));
          if (! (ckd_mul (&dayincr, day_ordinal, 7)
                 || ckd_add (&dayincr, (pc.day_number - tm.tm_wday + 7) % 7,
                             dayincr)
                 || ckd_add (&tm.tm_mday, dayincr, tm.tm_mday)))
            {
              tm.tm_isdst = -1;
              Start = mktime_z (tz, &tm);
            }

          if (tm.tm_yday < 0)
            {
              if (debugging (&pc))
                dbg_printf (_("error: day '%s' "
                              "(day ordinal=%"PRIdMAX" number=%d) "
                              "resulted in an invalid date: '%s'\n"),
                            str_days (&pc, dbg_ord, sizeof dbg_ord),
                            pc.day_ordinal, pc.day_number,
                            debug_strfdatetime (&tm, &pc, dbg_tm,
                                                sizeof dbg_tm));
              goto fail;
            }

          if (debugging (&pc))
            dbg_printf (_("new start date: '%s' is '%s'\n"),
                        str_days (&pc, dbg_ord, sizeof dbg_ord),
                        debug_strfdatetime (&tm, &pc, dbg_tm, sizeof dbg_tm));

        }

      if (debugging (&pc))
        {
          if (!pc.dates_seen && !pc.days_seen)
            dbg_printf (_("using current date as starting value: '%s'\n"),
                        debug_strfdate (&tm, dbg_tm, sizeof dbg_tm));

          if (pc.days_seen && pc.dates_seen)
            dbg_printf (_("warning: day (%s) ignored when explicit dates "
                          "are given\n"),
                        str_days (&pc, dbg_ord, sizeof dbg_ord));

          dbg_printf (_("starting date/time: '%s'\n"),
                      debug_strfdatetime (&tm, &pc, dbg_tm, sizeof dbg_tm));
        }

      /* Add relative date.  */
      if (pc.rel.year | pc.rel.month | pc.rel.day)
        {
          if (debugging (&pc))
            {
              if ((pc.rel.year != 0 || pc.rel.month != 0) && tm.tm_mday != 15)
                dbg_fputs (_("warning: when adding relative months/years, "
                             "it is recommended to specify the 15th of the "
                             "months\n"));

              if (pc.rel.day != 0 && tm.tm_hour != 12)
                dbg_fputs (_("warning: when adding relative days, "
                             "it is recommended to specify noon\n"));
            }

          int year, month, day;
          if (ckd_add (&year, tm.tm_year, pc.rel.year)
              || ckd_add (&month, tm.tm_mon, pc.rel.month)
              || ckd_add (&day, tm.tm_mday, pc.rel.day))
            {
              if (debugging (&pc))
                dbg_printf (_("error: %s:%d\n"), __FILE__, __LINE__);
              goto fail;
            }
          tm.tm_year = year;
          tm.tm_mon = month;
          tm.tm_mday = day;
          tm.tm_hour = tm0.tm_hour;
          tm.tm_min = tm0.tm_min;
          tm.tm_sec = tm0.tm_sec;
          tm.tm_isdst = tm0.tm_isdst;
          tm.tm_wday = -1;
          Start = mktime_z (tz, &tm);
          if (tm.tm_wday < 0)
            {
              if (debugging (&pc))
                dbg_printf (_("error: adding relative date resulted "
                              "in an invalid date: '%s'\n"),
                            debug_strfdatetime (&tm, &pc, dbg_tm,
                                                sizeof dbg_tm));
              goto fail;
            }

          if (debugging (&pc))
            {
              dbg_printf (_("after date adjustment "
                            "(%+"PRIdMAX" years, %+"PRIdMAX" months, "
                            "%+"PRIdMAX" days),\n"),
                          pc.rel.year, pc.rel.month, pc.rel.day);
              dbg_printf (_("    new date/time = '%s'\n"),
                          debug_strfdatetime (&tm, &pc, dbg_tm,
                                              sizeof dbg_tm));

              /* Warn about crossing DST due to time adjustment.
                 Example: https://bugs.gnu.org/8357
                 env TZ=Europe/Helsinki \
                   date --debug \
                        -d 'Mon Mar 28 00:36:07 2011 EEST 1 day ago'

                 This case is different than DST changes due to time adjustment,
                 i.e., "1 day ago" vs "24 hours ago" are calculated in different
                 places.

                 'tm0.tm_isdst' contains the DST of the input date,
                 'tm.tm_isdst' is the normalized result after calling
                 mktime (&tm).
              */
              if (tm0.tm_isdst != -1 && tm.tm_isdst != tm0.tm_isdst)
                dbg_fputs (_("warning: daylight saving time changed after "
                             "date adjustment\n"));

              /* Warn if the user did not ask to adjust days but mday changed,
                 or
                 user did not ask to adjust months/days but the month changed.

                 Example for first case:
                 2016-05-31 + 1 month => 2016-06-31 => 2016-07-01.
                 User asked to adjust month, but the day changed from 31 to 01.

                 Example for second case:
                 2016-02-29 + 1 year => 2017-02-29 => 2017-03-01.
                 User asked to adjust year, but the month changed from 02 to 03.
              */
              if (pc.rel.day == 0
                  && (tm.tm_mday != day
                      || (pc.rel.month == 0 && tm.tm_mon != month)))
                {
                  dbg_fputs (_("warning: month/year adjustment resulted in "
                               "shifted dates:\n"));
                  char tm_year_buf[TM_YEAR_BUFSIZE];
                  dbg_printf (_("     adjusted Y M D: %s %02d %02d\n"),
                              tm_year_str (year, tm_year_buf), month + 1, day);
                  dbg_printf (_("   normalized Y M D: %s %02d %02d\n"),
                              tm_year_str (tm.tm_year, tm_year_buf),
                              tm.tm_mon + 1, tm.tm_mday);
                }
            }

        }

      /* The only "output" of this if-block is an updated Start value,
         so this block must follow others that clobber Start.  */
      if (pc.zones_seen)
        {
          bool overflow = false;
#ifdef HAVE_STRUCT_TM_TM_GMTOFF
          long int utcoff = tm.tm_gmtoff;
#else
          time_t t = Start;
          struct tm gmt;
          int utcoff = (gmtime_r (&t, &gmt)
                        ? tm_diff (&tm, &gmt)
                        : (overflow = true, 0));
#endif
          intmax_t delta;
          overflow |= ckd_sub (&delta, pc.time_zone, utcoff);
          time_t t1;
          overflow |= ckd_sub (&t1, Start, delta);
          if (overflow)
            {
              if (debugging (&pc))
                dbg_printf (_("error: timezone %d caused time_t overflow\n"),
                            pc.time_zone);
              goto fail;
            }
          Start = t1;
        }

      if (debugging (&pc))
        {
          intmax_t Starti = Start;
          dbg_printf (_("'%s' = %"PRIdMAX" epoch-seconds\n"),
                      debug_strfdatetime (&tm, &pc, dbg_tm, sizeof dbg_tm),
                      Starti);
        }


      /* Add relative hours, minutes, and seconds.  On hosts that support
         leap seconds, ignore the possibility of leap seconds; e.g.,
         "+ 10 minutes" adds 600 seconds, even if one of them is a
         leap second.  Typically this is not what the user wants, but it's
         too hard to do it the other way, because the time zone indicator
         must be applied before relative times, and if mktime is applied
         again the time zone will be lost.  */
      {
        intmax_t orig_ns = pc.seconds.tv_nsec;
        intmax_t sum_ns = orig_ns + pc.rel.ns;
        int normalized_ns = (sum_ns % BILLION + BILLION) % BILLION;
        int d4 = (sum_ns - normalized_ns) / BILLION;
        intmax_t d1, t1, d2, t2, t3;
        time_t t4;
        if (ckd_mul (&d1, pc.rel.hour, 60 * 60)
            || ckd_add (&t1, Start, d1)
            || ckd_mul (&d2, pc.rel.minutes, 60)
            || ckd_add (&t2, t1, d2)
            || ckd_add (&t3, t2, pc.rel.seconds)
            || ckd_add (&t4, t3, d4))
          {
            if (debugging (&pc))
              dbg_fputs (_("error: adding relative time caused an "
                           "overflow\n"));
            goto fail;
          }

        result->tv_sec = t4;
        result->tv_nsec = normalized_ns;

        if (debugging (&pc)
            && (pc.rel.hour | pc.rel.minutes | pc.rel.seconds | pc.rel.ns))
          {
            dbg_printf (_("after time adjustment (%+"PRIdMAX" hours, "
                          "%+"PRIdMAX" minutes, "
                          "%+"PRIdMAX" seconds, %+d ns),\n"),
                        pc.rel.hour, pc.rel.minutes, pc.rel.seconds,
                        pc.rel.ns);
            intmax_t t4i = t4;
            dbg_printf (_("    new time = %"PRIdMAX" epoch-seconds\n"), t4i);

            /* Warn about crossing DST due to time adjustment.
               Example: https://bugs.gnu.org/8357
               env TZ=Europe/Helsinki           \
               date --debug                                             \
               -d 'Mon Mar 28 00:36:07 2011 EEST 24 hours ago'

               This case is different than DST changes due to days adjustment,
               i.e., "1 day ago" vs "24 hours ago" are calculated in different
               places.

               'tm.tm_isdst' contains the date after date adjustment.  */
            struct tm lmt;
            if (tm.tm_isdst != -1 && localtime_rz (tz, &result->tv_sec, &lmt)
                && tm.tm_isdst != lmt.tm_isdst)
              dbg_fputs (_("warning: daylight saving time changed after "
                           "time adjustment\n"));
          }
      }
    }

  if (debugging (&pc))
    {
      /* Special case: using 'date -u' simply set TZ=UTC0 */
      if (! tzstring)
        dbg_fputs (_("timezone: system default\n"));
      else if (STREQ (tzstring, "UTC0"))
        dbg_fputs (_("timezone: Universal Time\n"));
      else
        dbg_printf (_("timezone: TZ=\"%s\" environment value\n"), tzstring);

      intmax_t sec = result->tv_sec;
      int nsec = result->tv_nsec;
      dbg_printf (_("final: %"PRIdMAX".%09d (epoch-seconds)\n"),
                  sec, nsec);

      struct tm gmt, lmt;
      bool got_utc = !!gmtime_r (&result->tv_sec, &gmt);
      if (got_utc)
        dbg_printf (_("final: %s (UTC)\n"),
                    debug_strfdatetime (&gmt, NULL,
                                        dbg_tm, sizeof dbg_tm));
      if (localtime_rz (tz, &result->tv_sec, &lmt))
        {
#ifdef HAVE_STRUCT_TM_TM_GMTOFF
          bool got_utcoff = true;
          long int utcoff = lmt.tm_gmtoff;
#else
          bool got_utcoff = got_utc;
          int utcoff;
          if (got_utcoff)
            utcoff = tm_diff (&lmt, &gmt);
#endif
          if (got_utcoff)
            dbg_printf (_("final: %s (UTC%s)\n"),
                        debug_strfdatetime (&lmt, NULL, dbg_tm, sizeof dbg_tm),
                        time_zone_str (utcoff, time_zone_buf));
          else
            dbg_printf (_("final: %s (unknown time zone offset)\n"),
                        debug_strfdatetime (&lmt, NULL, dbg_tm, sizeof dbg_tm));
        }
    }

  ok = true;

 fail:
  if (tz != tzdefault)
    tzfree (tz);
  free (tz1alloc);
  return ok;
}

#ifdef GNULIB_PARSE_DATETIME2
/* Parse a date/time string, storing the resulting time value into *RESULT.
   The string itself is pointed to by P.  Return true if successful.
   P can be an incomplete or relative time specification; if so, use
   *NOW as the basis for the returned time.  Default to timezone
   TZDEFAULT, which corresponds to tzalloc (TZSTRING).  */
bool
parse_datetime2 (struct timespec *result, char const *p,
                 struct timespec const *now, unsigned int flags,
                 timezone_t tzdefault, char const *tzstring)
{
  return parse_datetime_body (result, p, now, flags, tzdefault, tzstring);
}
#endif


/* The plain interface: run with debug=false and the default timezone.   */
bool
parse_datetime (struct timespec *result, char const *p,
                struct timespec const *now)
{
  char const *tzstring = getenv ("TZ");
  timezone_t tz = tzalloc (tzstring);
  if (!tz)
    return false;
  bool ok = parse_datetime_body (result, p, now, 0, tz, tzstring);
  tzfree (tz);
  return ok;
}

#if TEST

int
main (int ac, char **av)
{
  char buff[BUFSIZ];

  printf ("Enter date, or blank line to exit.\n\t> ");
  fflush (stdout);

  buff[BUFSIZ - 1] = '\0';
  while (fgets (buff, BUFSIZ - 1, stdin) && buff[0])
    {
      struct timespec d;
      struct tm const *tm;
      if (! parse_datetime (&d, buff, NULL))
        printf ("Bad format - couldn't convert.\n");
      else if (! (tm = localtime (&d.tv_sec)))
        {
          intmax_t sec = d.tv_sec;
          printf ("localtime (%"PRIdMAX") failed\n", sec);
        }
      else
        {
          int ns = d.tv_nsec;
          char tm_year_buf[TM_YEAR_BUFSIZE];
          printf ("%s-%02d-%02d %02d:%02d:%02d.%09d\n",
                  tm_year_str (tm->tm_year, tm_year_buf),
                  tm->tm_mon + 1, tm->tm_mday,
                  tm->tm_hour, tm->tm_min, tm->tm_sec, ns);
        }
      printf ("\t> ");
      fflush (stdout);
    }
  return 0;
}
#endif /* TEST */
