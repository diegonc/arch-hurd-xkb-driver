/* A Bison parser, made by GNU Bison 1.875a.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     XKBKEYMAP = 258,
     XKBKEYCODES = 259,
     XKBCOMPAT = 260,
     XKBGEOMETRY = 261,
     XKBTYPES = 262,
     XKBSYMBOLS = 263,
     STR = 264,
     HEX = 265,
     FLAGS = 266,
     KEYCODE = 267,
     NUM = 268,
     MINIMUM = 269,
     MAXIMUM = 270,
     VIRTUAL = 271,
     INDICATOR = 272,
     ALIAS = 273,
     IDENTIFIER = 274,
     VMODS = 275,
     TYPE = 276,
     DATA = 277,
     MAP = 278,
     LEVEL_NAME = 279,
     PRESERVE = 280,
     LEVEL = 281,
     USEMODMAP = 282,
     REPEAT = 283,
     LOCKING = 284,
     VIRTUALMODIFIER = 285,
     BOOLEAN = 286,
     INTERPRET = 287,
     INTERPMATCH = 288,
     CLEARLOCKS = 289,
     MODS = 290,
     SETMODS = 291,
     LATCHMODS = 292,
     LOCKMODS = 293,
     ACTION = 294,
     LATCHTOLOCK = 295,
     GROUP = 296,
     GROUPS = 297,
     SETGROUP = 298,
     LATCHGROUP = 299,
     LOCKGROUP = 300,
     ACCEL = 301,
     MOVEPTR = 302,
     PRIVATE = 303,
     BUTTON = 304,
     BUTTONNUM = 305,
     DEFAULT = 306,
     COUNT = 307,
     PTRBTN = 308,
     DEFAULTBTN = 309,
     ALL = 310,
     NONE = 311,
     ANY = 312,
     CONTROLFLAG = 313,
     AFFECT = 314,
     PTRDFLT = 315,
     LOCKPTRBTN = 316,
     SETCONTROLS = 317,
     LOCKCONTROLS = 318,
     CONTROLS = 319,
     TERMINATE = 320,
     WHICHMODSTATE = 321,
     WHICHGROUPSTATE = 322,
     WHICHSTATE = 323,
     INDEX = 324,
     ALLOWEXPLICIT = 325,
     DRIVESKBD = 326,
     SYMBOLS = 327,
     NAME = 328,
     GROUPNUM = 329,
     ACTIONS = 330,
     KEY = 331,
     MODMAP = 332,
     SHIFT = 333,
     LOCK = 334,
     CONTROL = 335,
     MOD1 = 336,
     MOD2 = 337,
     MOD3 = 338,
     MOD4 = 339,
     MOD5 = 340,
     UNLOCK = 341,
     BOTH = 342,
     NEITHER = 343,
     INCLUDE = 344,
     AUGMENT = 345,
     OVERRIDE = 346,
     REPLACE = 347,
     ISOLOCK = 348,
     POINTERS = 349,
     NOACTION = 350,
     GROUPSWRAP = 351,
     GROUPSCLAMP = 352,
     GROUPSREDIRECT = 353,
     OVERLAY = 354,
     SWITCHSCREEN = 355,
     SAMESERVER = 356,
     SCREEN = 357,
     LINE = 358,
     PERCENT = 359,
     CONSSCROLL = 360,
     FLOAT = 361
   };
#endif
#define XKBKEYMAP 258
#define XKBKEYCODES 259
#define XKBCOMPAT 260
#define XKBGEOMETRY 261
#define XKBTYPES 262
#define XKBSYMBOLS 263
#define STR 264
#define HEX 265
#define FLAGS 266
#define KEYCODE 267
#define NUM 268
#define MINIMUM 269
#define MAXIMUM 270
#define VIRTUAL 271
#define INDICATOR 272
#define ALIAS 273
#define IDENTIFIER 274
#define VMODS 275
#define TYPE 276
#define DATA 277
#define MAP 278
#define LEVEL_NAME 279
#define PRESERVE 280
#define LEVEL 281
#define USEMODMAP 282
#define REPEAT 283
#define LOCKING 284
#define VIRTUALMODIFIER 285
#define BOOLEAN 286
#define INTERPRET 287
#define INTERPMATCH 288
#define CLEARLOCKS 289
#define MODS 290
#define SETMODS 291
#define LATCHMODS 292
#define LOCKMODS 293
#define ACTION 294
#define LATCHTOLOCK 295
#define GROUP 296
#define GROUPS 297
#define SETGROUP 298
#define LATCHGROUP 299
#define LOCKGROUP 300
#define ACCEL 301
#define MOVEPTR 302
#define PRIVATE 303
#define BUTTON 304
#define BUTTONNUM 305
#define DEFAULT 306
#define COUNT 307
#define PTRBTN 308
#define DEFAULTBTN 309
#define ALL 310
#define NONE 311
#define ANY 312
#define CONTROLFLAG 313
#define AFFECT 314
#define PTRDFLT 315
#define LOCKPTRBTN 316
#define SETCONTROLS 317
#define LOCKCONTROLS 318
#define CONTROLS 319
#define TERMINATE 320
#define WHICHMODSTATE 321
#define WHICHGROUPSTATE 322
#define WHICHSTATE 323
#define INDEX 324
#define ALLOWEXPLICIT 325
#define DRIVESKBD 326
#define SYMBOLS 327
#define NAME 328
#define GROUPNUM 329
#define ACTIONS 330
#define KEY 331
#define MODMAP 332
#define SHIFT 333
#define LOCK 334
#define CONTROL 335
#define MOD1 336
#define MOD2 337
#define MOD3 338
#define MOD4 339
#define MOD5 340
#define UNLOCK 341
#define BOTH 342
#define NEITHER 343
#define INCLUDE 344
#define AUGMENT 345
#define OVERRIDE 346
#define REPLACE 347
#define ISOLOCK 348
#define POINTERS 349
#define NOACTION 350
#define GROUPSWRAP 351
#define GROUPSCLAMP 352
#define GROUPSREDIRECT 353
#define OVERLAY 354
#define SWITCHSCREEN 355
#define SAMESERVER 356
#define SCREEN 357
#define LINE 358
#define PERCENT 359
#define CONSSCROLL 360
#define FLOAT 361




/* Copy the first part of user declarations.  */
#line 17 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "xkb.h"

void yyerror(char *);
int yylex (void);
static error_t include_section (char *incl, int sectionsymbol, char *dirname,
				mergemode);
static error_t include_sections (char *incl, int sectionsymbol, char *dirname,
				 mergemode);
void close_include ();
static void skipsection (void);
static error_t set_default_action (struct xkb_action *, struct xkb_action **);
static void key_set_keysym (struct key *key, group_t group, int level,
			    symbol ks);
static void key_new (char *keyname);
static void key_delete (char *keyname);
void scanner_unput (int c);
static void remove_symbols (struct key *key, group_t group);

struct xkb_interpret *current_interpretation;
struct xkb_action *current_action;
struct xkb_indicator indi;
struct xkb_indicator *current_indicator = &indi;
struct key defkey;
struct key *default_key = &defkey;

/* The default settings for actions.  */
struct xkb_action default_setmods = { SA_SetMods };
struct xkb_action default_lockmods = { SA_LockMods };
struct xkb_action default_latchmods = { SA_LatchMods };
struct xkb_action default_setgroup = { SA_SetGroup };
struct xkb_action default_latchgroup = { SA_LatchGroup };
struct xkb_action default_lockgroup = { SA_LockGroup };
struct xkb_action default_moveptr = { SA_MovePtr };
struct xkb_action default_ptrbtn = { SA_PtrBtn };
struct xkb_action default_lockptrbtn = { SA_LockPtrBtn };
struct xkb_action default_ptrdflt = { SA_SetPtrDflt };
struct xkb_action default_setcontrols = { SA_SetControls };
struct xkb_action default_lockcontrols = { SA_LockControls };
struct xkb_action default_isolock = { SA_ISOLock };
struct xkb_action default_switchscrn = { SA_SwitchScreen };
struct xkb_action default_consscroll = { SA_ConsScroll };

static struct key *current_key;

/* The dummy gets used when the original may not be overwritten.  */
static struct key dummy_key;

/* The current parsed group.  */
static int current_group;
static int current_rmod = 0;

/* The current symbol in the currently parsed key.  */
static int symbolcnt;
static int actioncnt;

mergemode merge_mode = override;

//#define	YYDEBUG	1

static struct keytype *current_keytype;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 84 "parser.y"
typedef union YYSTYPE {
  int val;
  char *str;
  modmap_t modmap;
  struct xkb_action *action;
  double dbl;
  mergemode mergemode;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 364 "parser.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 376 "parser.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1058

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  121
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  135
/* YYNRULES -- Number of rules. */
#define YYNRULES  374
/* YYNRULES -- Number of states. */
#define YYNSTATES  812

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   361

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   117,     2,     2,     2,     2,     2,     2,
     119,   120,     2,   112,   111,   115,   118,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   109,
       2,   110,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   113,     2,   114,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   107,     2,   108,   116,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     9,    16,    17,    23,    24,    27,    30,
      33,    36,    39,    41,    43,    45,    47,    48,    51,    58,
      66,    70,    75,    76,    82,    88,    89,    96,    97,   105,
     112,   120,   121,   129,   130,   136,   143,   151,   153,   157,
     161,   163,   165,   167,   169,   171,   173,   175,   177,   179,
     183,   187,   188,   191,   192,   195,   197,   199,   201,   203,
     205,   206,   212,   221,   230,   239,   243,   248,   249,   252,
     253,   262,   263,   269,   276,   284,   286,   288,   290,   292,
     294,   296,   300,   304,   306,   308,   309,   312,   317,   322,
     327,   332,   337,   340,   343,   348,   351,   354,   356,   360,
     363,   366,   368,   372,   373,   376,   381,   384,   387,   392,
     397,   401,   406,   407,   410,   411,   417,   418,   427,   428,
     439,   440,   451,   452,   466,   473,   481,   482,   488,   491,
     496,   499,   502,   504,   508,   511,   514,   516,   520,   523,
     526,   528,   532,   535,   538,   540,   544,   547,   550,   552,
     556,   559,   562,   564,   568,   571,   574,   576,   580,   583,
     586,   588,   592,   595,   598,   600,   604,   605,   607,   611,
     615,   619,   621,   623,   625,   626,   628,   632,   636,   641,
     646,   648,   650,   651,   653,   657,   661,   666,   671,   673,
     675,   677,   679,   681,   683,   685,   687,   688,   690,   694,
     698,   702,   706,   708,   710,   712,   713,   715,   719,   723,
     728,   733,   737,   741,   743,   745,   747,   749,   751,   755,
     757,   759,   761,   763,   765,   767,   768,   770,   774,   778,
     782,   786,   790,   794,   796,   800,   804,   809,   814,   816,
     818,   822,   827,   832,   836,   841,   846,   850,   851,   853,
     857,   861,   865,   866,   872,   873,   879,   880,   886,   887,
     893,   894,   900,   901,   907,   908,   914,   915,   921,   922,
     928,   929,   935,   936,   942,   943,   949,   953,   954,   960,
     961,   967,   968,   974,   979,   983,   986,   987,   993,   994,
    1000,  1001,  1007,  1008,  1014,  1015,  1021,  1022,  1028,  1029,
    1035,  1036,  1042,  1043,  1049,  1050,  1056,  1057,  1063,  1064,
    1070,  1071,  1077,  1078,  1084,  1091,  1099,  1101,  1103,  1105,
    1109,  1113,  1115,  1117,  1121,  1126,  1127,  1130,  1139,  1140,
    1149,  1150,  1160,  1161,  1171,  1172,  1181,  1182,  1188,  1191,
    1192,  1199,  1203,  1205,  1207,  1208,  1212,  1213,  1216,  1220,
    1221,  1224,  1226,  1230,  1237,  1242,  1246,  1247,  1248,  1259,
    1260,  1261,  1272,  1276,  1280,  1284,  1286,  1288,  1290,  1294,
    1298,  1300,  1301,  1308,  1309
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     122,     0,    -1,     3,   107,   124,   108,   109,    -1,     3,
       9,   107,   124,   108,   109,    -1,    -1,   107,   124,   108,
     123,   109,    -1,    -1,   124,   134,    -1,   124,   127,    -1,
     124,   148,    -1,   124,   231,    -1,   124,   253,    -1,    89,
      -1,    90,    -1,    92,    -1,    91,    -1,    -1,   126,    11,
      -1,   126,     4,   107,   129,   108,   109,    -1,   126,     4,
       9,   107,   129,   108,   109,    -1,   107,   129,   108,    -1,
     128,   107,   129,   108,    -1,    -1,    14,   110,    13,   109,
     129,    -1,    15,   110,    13,   109,   129,    -1,    -1,    12,
     110,    13,   109,   130,   129,    -1,    -1,    92,    12,   110,
      13,   109,   131,   129,    -1,    17,    13,   110,     9,   109,
     129,    -1,    16,    17,    13,   110,     9,   109,   129,    -1,
      -1,    18,    12,   110,    12,   109,   132,   129,    -1,    -1,
     125,     9,   133,   128,   129,    -1,   126,     7,   107,   145,
     108,   109,    -1,   126,     7,     9,   107,   145,   108,   109,
      -1,    19,    -1,   135,   111,    19,    -1,    20,   135,   109,
      -1,    19,    -1,    78,    -1,    79,    -1,    80,    -1,    81,
      -1,    82,    -1,    83,    -1,    84,    -1,    85,    -1,   139,
     112,   138,    -1,   139,   112,   137,    -1,    -1,   140,   138,
      -1,    -1,   141,   137,    -1,    55,    -1,    56,    -1,    26,
      -1,    57,    -1,    13,    -1,    -1,   143,    35,   110,   139,
     109,    -1,   143,    23,   113,   139,   114,   110,   142,   109,
      -1,   143,    24,   113,   142,   114,   110,     9,   109,    -1,
     143,    25,   113,   139,   114,   110,   139,   109,    -1,   107,
     145,   108,    -1,   144,   107,   145,   108,    -1,    -1,   145,
     136,    -1,    -1,   145,    21,     9,   146,   107,   143,   108,
     109,    -1,    -1,   145,   125,     9,   147,   144,    -1,   126,
       5,   107,   159,   108,   109,    -1,   126,     5,     9,   107,
     159,   108,   109,    -1,    19,    -1,    57,    -1,     1,    -1,
      68,    -1,    56,    -1,    57,    -1,   151,   112,   232,    -1,
     151,   115,   232,    -1,   232,    -1,    55,    -1,    -1,   152,
     153,    -1,    35,   110,   139,   109,    -1,    42,   110,   151,
     109,    -1,    64,   110,   188,   109,    -1,    66,   110,   150,
     109,    -1,    67,   110,   150,   109,    -1,   154,   109,    -1,
     155,   109,    -1,    69,   110,    13,   109,    -1,   116,    70,
      -1,   117,    70,    -1,    70,    -1,    70,   110,    31,    -1,
     116,    71,    -1,   117,    71,    -1,    71,    -1,    71,   110,
      31,    -1,    -1,   156,   157,    -1,    27,   110,   142,   109,
      -1,   170,   109,    -1,   169,   109,    -1,    30,   110,   137,
     109,    -1,    39,   110,   200,   109,    -1,   107,   159,   108,
      -1,   158,   107,   159,   108,    -1,    -1,   159,   136,    -1,
      -1,   159,    32,   118,   160,   157,    -1,    -1,   159,    32,
     149,   161,   107,   156,   108,   109,    -1,    -1,   159,    32,
     149,   112,   138,   162,   107,   156,   108,   109,    -1,    -1,
     159,    32,   149,   112,    57,   163,   107,   156,   108,   109,
      -1,    -1,   159,    32,   149,   112,    33,   119,   139,   120,
     164,   107,   156,   108,   109,    -1,   159,    41,    13,   110,
     139,   109,    -1,   159,    17,     9,   107,   152,   108,   109,
      -1,    -1,   159,   125,     9,   165,   158,    -1,   159,   216,
      -1,   159,    17,   118,   153,    -1,   116,    34,    -1,   117,
      34,    -1,    34,    -1,    34,   110,    31,    -1,   116,    40,
      -1,   117,    40,    -1,    40,    -1,    40,   110,    31,    -1,
     116,    27,    -1,   117,    27,    -1,    27,    -1,    27,   110,
      31,    -1,   116,    29,    -1,   117,    29,    -1,    29,    -1,
      29,   110,    31,    -1,   116,    28,    -1,   117,    28,    -1,
      28,    -1,    28,   110,    31,    -1,   116,    96,    -1,   117,
      96,    -1,    96,    -1,    96,   110,    31,    -1,   116,    97,
      -1,   117,    97,    -1,    97,    -1,    97,   110,    31,    -1,
     116,    46,    -1,   117,    46,    -1,    46,    -1,    46,   110,
      31,    -1,   116,   101,    -1,   117,   101,    -1,   101,    -1,
     101,   110,    31,    -1,    -1,   176,    -1,   175,   111,   176,
      -1,    35,   110,   139,    -1,    35,   110,    27,    -1,   166,
      -1,   168,    -1,   167,    -1,    -1,   178,    -1,   177,   111,
     178,    -1,    41,   110,    13,    -1,    41,   110,   112,    13,
      -1,    41,   110,   115,    13,    -1,   166,    -1,   167,    -1,
      -1,   180,    -1,   179,   111,   180,    -1,    19,   110,    13,
      -1,    19,   110,   112,    13,    -1,    19,   110,   115,    13,
      -1,   173,    -1,    13,    -1,    50,    -1,    51,    -1,    79,
      -1,    86,    -1,    87,    -1,    88,    -1,    -1,   184,    -1,
     183,   111,   184,    -1,    49,   110,   181,    -1,    52,   110,
      13,    -1,    59,   110,   182,    -1,    54,    -1,    49,    -1,
      55,    -1,    -1,   187,    -1,   186,   111,   187,    -1,    49,
     110,   181,    -1,    49,   110,   112,   181,    -1,    49,   110,
     115,   181,    -1,    59,   110,   185,    -1,   188,   112,    58,
      -1,    58,    -1,    99,    -1,   188,    -1,    55,    -1,    56,
      -1,    64,   110,   189,    -1,    35,    -1,    42,    -1,    64,
      -1,    94,    -1,    55,    -1,    56,    -1,    -1,   193,    -1,
     192,   111,   193,    -1,    35,   110,   139,    -1,    35,   110,
      27,    -1,    41,   110,   232,    -1,    64,   110,   189,    -1,
      59,   110,   191,    -1,   195,    -1,   194,   111,   195,    -1,
     102,   110,    13,    -1,   102,   112,   110,    13,    -1,   102,
     115,   110,    13,    -1,   174,    -1,   197,    -1,   196,   111,
     197,    -1,   102,   112,   110,   106,    -1,   102,   115,   110,
     106,    -1,   103,   110,    13,    -1,   103,   112,   110,    13,
      -1,   103,   115,   110,    13,    -1,   104,   110,    13,    -1,
      -1,   199,    -1,   198,   111,   199,    -1,    21,   110,    10,
      -1,    22,   110,     9,    -1,    -1,    36,   201,   119,   175,
     120,    -1,    -1,    37,   202,   119,   175,   120,    -1,    -1,
      38,   203,   119,   175,   120,    -1,    -1,    43,   204,   119,
     177,   120,    -1,    -1,    44,   205,   119,   177,   120,    -1,
      -1,    45,   206,   119,   177,   120,    -1,    -1,    47,   207,
     119,   179,   120,    -1,    -1,    53,   208,   119,   183,   120,
      -1,    -1,    61,   209,   119,   183,   120,    -1,    -1,    60,
     210,   119,   186,   120,    -1,    -1,    62,   211,   119,   190,
     120,    -1,    -1,    63,   212,   119,   190,   120,    -1,    65,
     119,   120,    -1,    -1,   100,   213,   119,   194,   120,    -1,
      -1,   105,   214,   119,   196,   120,    -1,    -1,    93,   215,
     119,   192,   120,    -1,    48,   119,   198,   120,    -1,    95,
     119,   120,    -1,     1,   120,    -1,    -1,    36,   118,   217,
     176,   109,    -1,    -1,    37,   118,   218,   176,   109,    -1,
      -1,    38,   118,   219,   176,   109,    -1,    -1,    43,   118,
     220,   178,   109,    -1,    -1,    44,   118,   221,   178,   109,
      -1,    -1,    45,   118,   222,   178,   109,    -1,    -1,    47,
     118,   223,   180,   109,    -1,    -1,    53,   118,   224,   184,
     109,    -1,    -1,    61,   118,   225,   184,   109,    -1,    -1,
      60,   118,   226,   187,   109,    -1,    -1,    62,   118,   227,
     190,   109,    -1,    -1,    63,   118,   228,   190,   109,    -1,
      -1,    93,   118,   229,   193,   109,    -1,    -1,   100,   118,
     230,   195,   109,    -1,   126,     8,   107,   235,   108,   109,
      -1,   126,     8,     9,   107,   235,   108,   109,    -1,    74,
      -1,    13,    -1,    10,    -1,   233,   111,    12,    -1,   233,
     111,   242,    -1,    12,    -1,   242,    -1,   107,   235,   108,
      -1,   234,   107,   235,   108,    -1,    -1,   235,   136,    -1,
     235,    73,   113,   232,   114,   110,     9,   109,    -1,    -1,
     235,    76,    12,   236,   107,   247,   108,   109,    -1,    -1,
     235,    92,    76,    12,   237,   107,   247,   108,   109,    -1,
      -1,   235,    91,    76,    12,   238,   107,   247,   108,   109,
      -1,    -1,   235,    77,   138,   239,   107,   233,   108,   109,
      -1,    -1,   235,   125,     9,   240,   234,    -1,   235,   216,
      -1,    -1,   235,    76,   118,   241,   248,   109,    -1,   235,
       1,   109,    -1,    19,    -1,    13,    -1,    -1,   243,   111,
     242,    -1,    -1,   244,   242,    -1,   245,   111,   200,    -1,
      -1,   246,   200,    -1,   248,    -1,   247,   111,   248,    -1,
      21,   113,   232,   114,   110,     9,    -1,    21,   113,     1,
     114,    -1,    21,   110,     9,    -1,    -1,    -1,   249,    72,
     113,   232,   114,   250,   110,   113,   243,   114,    -1,    -1,
      -1,   251,    75,   113,   232,   114,   252,   110,   113,   245,
     114,    -1,    20,   110,   139,    -1,   113,   243,   114,    -1,
     113,   245,   114,    -1,   169,    -1,   171,    -1,   172,    -1,
      98,   110,    13,    -1,    99,   110,    12,    -1,   170,    -1,
      -1,   126,     6,   107,   254,   108,   109,    -1,    -1,   126,
       6,     9,   107,   255,   108,   109,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   218,   218,   219,   220,   220,   224,   226,   227,   228,
     229,   230,   234,   235,   236,   237,   241,   243,   248,   249,
     254,   255,   260,   262,   267,   273,   272,   276,   275,   278,
     279,   281,   280,   294,   293,   300,   301,   307,   308,   313,
     318,   323,   324,   325,   326,   327,   328,   329,   330,   336,
     337,   339,   339,   340,   340,   341,   342,   348,   349,   350,
     354,   356,   358,   360,   361,   367,   368,   372,   374,   375,
     375,   377,   376,   383,   384,   389,   390,   391,   397,   398,
     399,   404,   405,   406,   407,   410,   412,   417,   418,   419,
     420,   421,   422,   423,   424,   429,   430,   431,   432,   437,
     438,   439,   440,   443,   445,   450,   452,   457,   458,   459,
     468,   469,   473,   475,   477,   476,   480,   479,   489,   488,
     499,   498,   509,   508,   518,   519,   521,   520,   523,   524,
     531,   532,   533,   534,   539,   540,   541,   542,   547,   548,
     549,   550,   555,   556,   557,   558,   563,   564,   565,   566,
     577,   578,   579,   580,   585,   586,   587,   588,   593,   594,
     595,   596,   601,   602,   603,   604,   607,   609,   610,   616,
     620,   623,   628,   633,   640,   642,   643,   648,   653,   657,
     661,   665,   671,   673,   674,   679,   684,   688,   692,   700,
     701,   702,   706,   707,   708,   709,   712,   714,   715,   720,
     722,   724,   732,   733,   734,   737,   739,   740,   745,   746,
     747,   748,   753,   754,   755,   760,   761,   762,   767,   772,
     773,   774,   775,   776,   777,   780,   782,   783,   788,   789,
     790,   791,   792,   796,   797,   802,   807,   811,   815,   824,
     825,   830,   834,   838,   843,   847,   851,   858,   860,   861,
     865,   868,   876,   875,   882,   881,   888,   887,   894,   893,
     900,   899,   906,   905,   912,   911,   918,   917,   924,   923,
     930,   929,   936,   935,   942,   941,   947,   950,   949,   956,
     955,   962,   961,   967,   969,   971,   976,   976,   977,   977,
     978,   978,   979,   979,   980,   980,   981,   981,   982,   982,
     983,   983,   984,   984,   985,   985,   986,   986,   987,   987,
     988,   988,   989,   989,   994,   995,  1000,  1001,  1002,  1007,
    1008,  1009,  1010,  1015,  1016,  1021,  1023,  1024,  1026,  1025,
    1031,  1030,  1037,  1036,  1042,  1042,  1044,  1043,  1046,  1047,
    1047,  1048,  1053,  1054,  1059,  1061,  1063,  1063,  1072,  1074,
    1074,  1079,  1080,  1085,  1089,  1090,  1092,  1092,  1092,  1097,
    1097,  1097,  1102,  1104,  1110,  1116,  1120,  1121,  1122,  1123,
    1124,  1135,  1135,  1136,  1136
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"xkb_keymap\"", "\"xkb_keycodes\"", 
  "\"xkb_compatibility\"", "\"xkb_geometry\"", "\"xkb_types\"", 
  "\"xkb_symbols\"", "STR", "HEX", "FLAGS", "KEYCODE", "NUM", 
  "\"minimum\"", "\"maximum\"", "\"virtual\"", "\"indicator\"", 
  "\"alias\"", "IDENTIFIER", "\"virtualmods\"", "\"type\"", "\"data\"", 
  "\"map\"", "\"level_name\"", "\"preserve\"", "LEVEL", "\"usemodmap\"", 
  "\"repeat\"", "\"locking\"", "\"virtualmod\"", "BOOLEAN", 
  "\"interpret\"", "INTERPMATCH", "\"clearlocks\"", "\"mods\"", 
  "\"setmods\"", "\"latchmods\"", "\"lockmods\"", "\"action\"", 
  "\"latchtolock\"", "\"group\"", "\"groups\"", "\"setgroup\"", 
  "\"latchgroup\"", "\"lockgroup\"", "\"accel\"", "\"moveptr\"", 
  "\"private\"", "\"button\"", "BUTTONNUM", "\"default\"", "\"count\"", 
  "\"ptrbtn\"", "\"defaultbutton\"", "\"all\"", "\"none\"", "\"any\"", 
  "CONTROLFLAG", "\"affect\"", "\"setptrdflt\"", "\"lockptrbtn\"", 
  "\"setcontrols\"", "\"lockcontrols\"", "\"controls\"", "\"terminate\"", 
  "\"whichmodstate\"", "\"whichgroupstate\"", "\"whichstate\"", 
  "\"index\"", "\"allowexplicit\"", "\"driveskbd\"", "\"symbols\"", 
  "\"name\"", "GROUPNUM", "\"actions\"", "\"key\"", "\"modifier_map\"", 
  "\"shift\"", "\"lock\"", "\"control\"", "\"mod1\"", "\"mod2\"", 
  "\"mod3\"", "\"mod4\"", "\"mod5\"", "\"unlock\"", "\"both\"", 
  "\"neither\"", "\"include\"", "\"augment\"", "\"override\"", 
  "\"replace\"", "\"isolock\"", "\"pointers\"", "\"noaction\"", 
  "\"groupswrap\"", "\"groupsclamp\"", "\"groupsredirect\"", 
  "\"overlay\"", "\"switchscreen\"", "\"sameserver\"", "\"screen\"", 
  "\"line\"", "\"percent\"", "\"consscroll\"", "\"float\"", "'{'", "'}'", 
  "';'", "'='", "','", "'+'", "'['", "']'", "'-'", "'~'", "'!'", "'.'", 
  "'('", "')'", "$accept", "xkbkeymap", "@1", "keymap", "include", 
  "flags", "keycodes", "keycodesinclude", "keycodesect", "@2", "@3", "@4", 
  "@5", "types", "vmodslist", "vmods_def", "vmod", "rmod", "mods", "@6", 
  "@7", "level", "type", "typesinclude", "typessect", "@8", "@9", 
  "compat", "symbol", "whichstate", "groups", "indicators", "indicator", 
  "allowexplicit", "driveskbd", "interprets", "interpret", 
  "compatinclude", "compatsect", "@10", "@11", "@12", "@13", "@14", "@15", 
  "clearlocks", "latchtolock", "usemodmap", "locking", "repeat", 
  "groupswrap", "groupsclamp", "noaccel", "sameserver", "setmodsparams", 
  "setmodsparam", "setgroupparams", "setgroupparam", "moveptrparams", 
  "moveptrparam", "button", "affectbtnlock", "ptrbtnparams", 
  "ptrbtnparam", "affectbtns", "ptrdfltparams", "ptrdfltparam", "ctrls", 
  "ctrlflags", "ctrlparams", "isoaffect", "isolockparams", "isolockparam", 
  "switchscrnparams", "switchscrnparam", "consscrollparams", 
  "consscrollparam", "privateparams", "privateparam", "action", "@16", 
  "@17", "@18", "@19", "@20", "@21", "@22", "@23", "@24", "@25", "@26", 
  "@27", "@28", "@29", "@30", "actiondef", "@31", "@32", "@33", "@34", 
  "@35", "@36", "@37", "@38", "@39", "@40", "@41", "@42", "@43", "@44", 
  "symbols", "group", "key_list", "symbolinclude", "symbolssect", "@45", 
  "@46", "@47", "@48", "@49", "@50", "symbolname", "groupsyms", "@51", 
  "actions", "@52", "keydescs", "keydesc", "@53", "@54", "@55", "@56", 
  "geometry", "@57", "@58", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   123,   125,    59,
      61,    44,    43,    91,    93,    45,   126,    33,    46,    40,
      41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   121,   122,   122,   123,   122,   124,   124,   124,   124,
     124,   124,   125,   125,   125,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   129,   130,   129,   131,   129,   129,
     129,   132,   129,   133,   129,   134,   134,   135,   135,   136,
     137,   138,   138,   138,   138,   138,   138,   138,   138,   139,
     139,   140,   139,   141,   139,   139,   139,   142,   142,   142,
     143,   143,   143,   143,   143,   144,   144,   145,   145,   146,
     145,   147,   145,   148,   148,   149,   149,   149,   150,   150,
     150,   151,   151,   151,   151,   152,   152,   153,   153,   153,
     153,   153,   153,   153,   153,   154,   154,   154,   154,   155,
     155,   155,   155,   156,   156,   157,   157,   157,   157,   157,
     158,   158,   159,   159,   160,   159,   161,   159,   162,   159,
     163,   159,   164,   159,   159,   159,   165,   159,   159,   159,
     166,   166,   166,   166,   167,   167,   167,   167,   168,   168,
     168,   168,   169,   169,   169,   169,   170,   170,   170,   170,
     171,   171,   171,   171,   172,   172,   172,   172,   173,   173,
     173,   173,   174,   174,   174,   174,   175,   175,   175,   176,
     176,   176,   176,   176,   177,   177,   177,   178,   178,   178,
     178,   178,   179,   179,   179,   180,   180,   180,   180,   181,
     181,   181,   182,   182,   182,   182,   183,   183,   183,   184,
     184,   184,   185,   185,   185,   186,   186,   186,   187,   187,
     187,   187,   188,   188,   188,   189,   189,   189,   190,   191,
     191,   191,   191,   191,   191,   192,   192,   192,   193,   193,
     193,   193,   193,   194,   194,   195,   195,   195,   195,   196,
     196,   197,   197,   197,   197,   197,   197,   198,   198,   198,
     199,   199,   201,   200,   202,   200,   203,   200,   204,   200,
     205,   200,   206,   200,   207,   200,   208,   200,   209,   200,
     210,   200,   211,   200,   212,   200,   200,   213,   200,   214,
     200,   215,   200,   200,   200,   200,   217,   216,   218,   216,
     219,   216,   220,   216,   221,   216,   222,   216,   223,   216,
     224,   216,   225,   216,   226,   216,   227,   216,   228,   216,
     229,   216,   230,   216,   231,   231,   232,   232,   232,   233,
     233,   233,   233,   234,   234,   235,   235,   235,   236,   235,
     237,   235,   238,   235,   239,   235,   240,   235,   235,   241,
     235,   235,   242,   242,   243,   243,   244,   243,   245,   246,
     245,   247,   247,   248,   248,   248,   249,   250,   248,   251,
     252,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   254,   253,   255,   253
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     5,     6,     0,     5,     0,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     0,     2,     6,     7,
       3,     4,     0,     5,     5,     0,     6,     0,     7,     6,
       7,     0,     7,     0,     5,     6,     7,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     0,     2,     0,     2,     1,     1,     1,     1,     1,
       0,     5,     8,     8,     8,     3,     4,     0,     2,     0,
       8,     0,     5,     6,     7,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     1,     0,     2,     4,     4,     4,
       4,     4,     2,     2,     4,     2,     2,     1,     3,     2,
       2,     1,     3,     0,     2,     4,     2,     2,     4,     4,
       3,     4,     0,     2,     0,     5,     0,     8,     0,    10,
       0,    10,     0,    13,     6,     7,     0,     5,     2,     4,
       2,     2,     1,     3,     2,     2,     1,     3,     2,     2,
       1,     3,     2,     2,     1,     3,     2,     2,     1,     3,
       2,     2,     1,     3,     2,     2,     1,     3,     2,     2,
       1,     3,     2,     2,     1,     3,     0,     1,     3,     3,
       3,     1,     1,     1,     0,     1,     3,     3,     4,     4,
       1,     1,     0,     1,     3,     3,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     3,     3,
       3,     3,     1,     1,     1,     0,     1,     3,     3,     4,
       4,     3,     3,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     0,     1,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     4,     4,     1,     1,
       3,     4,     4,     3,     4,     4,     3,     0,     1,     3,
       3,     3,     0,     5,     0,     5,     0,     5,     0,     5,
       0,     5,     0,     5,     0,     5,     0,     5,     0,     5,
       0,     5,     0,     5,     0,     5,     3,     0,     5,     0,
       5,     0,     5,     4,     3,     2,     0,     5,     0,     5,
       0,     5,     0,     5,     0,     5,     0,     5,     0,     5,
       0,     5,     0,     5,     0,     5,     0,     5,     0,     5,
       0,     5,     0,     5,     6,     7,     1,     1,     1,     3,
       3,     1,     1,     3,     4,     0,     2,     8,     0,     8,
       0,     9,     0,     9,     0,     8,     0,     5,     2,     0,
       6,     3,     1,     1,     0,     3,     0,     2,     3,     0,
       2,     1,     3,     6,     4,     3,     0,     0,    10,     0,
       0,    10,     3,     3,     3,     1,     1,     1,     3,     3,
       1,     0,     6,     0,     7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       0,     0,     6,     0,     0,     6,    16,     1,     6,    16,
       4,     0,     8,     7,     9,    10,    11,    16,     0,     0,
       0,     0,     0,     0,     0,    17,     0,     2,     5,     0,
      22,     0,   112,     0,   371,     0,    67,     0,   325,     3,
      22,     0,     0,     0,     0,     0,     0,    12,    13,    15,
      14,     0,     0,   112,     0,   373,     0,    67,     0,   325,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
       0,     0,     0,   113,   128,     0,     0,     0,     0,     0,
       0,    68,     0,     0,     0,     0,     0,    15,    14,     0,
       0,   326,   338,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,    37,     0,    77,    75,
      76,   114,   116,   286,   288,   290,     0,   292,   294,   296,
     298,   300,   304,   302,   306,   308,   310,   312,    73,   126,
       0,   372,     0,    69,    35,    71,     0,   341,     0,   328,
     339,    41,    42,    43,    44,    45,    46,    47,    48,   334,
       0,     0,   314,   336,    19,    25,    22,    22,     0,     0,
       0,     0,    22,    22,    74,    85,     0,     0,     0,     0,
       0,     0,    97,   101,     0,     0,   129,     0,     0,    39,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     374,    36,     0,     0,   315,   318,   317,   316,     0,     0,
     356,     0,   332,   330,     0,    22,    23,    24,     0,    22,
      31,    27,     0,    22,    34,     0,    51,     0,     0,     0,
       0,     0,     0,     0,    95,    99,    96,   100,    92,    93,
      38,     0,   148,   144,     0,     0,     0,     0,   115,     0,
       0,     0,   120,   118,   103,   140,   132,     0,   136,     0,
       0,   171,   173,   172,     0,     0,     0,    55,    56,     0,
       0,     0,     0,     0,     0,   180,   181,     0,     0,     0,
       0,   160,     0,     0,   188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   164,     0,     0,     0,   238,     0,   112,   127,
      60,    67,    72,     0,   356,     0,     0,   152,   156,     0,
       0,   349,     0,     0,   365,   370,   366,   367,     0,     0,
       0,     0,     0,     0,   325,   337,    26,    22,    29,    22,
      22,    20,     0,     0,    86,     0,    84,     0,    83,   213,
     214,     0,    79,    80,    78,     0,     0,     0,    98,   102,
       0,     0,     0,     0,     0,   146,   142,   147,   143,   107,
     106,    51,     0,     0,     0,     0,     0,    51,     0,   138,
     130,   134,   139,   131,   135,   287,   289,   291,   124,     0,
      52,    40,    54,     0,   293,   295,   297,     0,     0,   158,
     159,   299,     0,     0,     0,   301,     0,     0,   305,   303,
       0,   307,   309,    51,     0,     0,     0,   311,     0,     0,
       0,     0,   162,   163,   313,     0,   112,     0,     0,    67,
       0,     0,   351,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   150,   154,   151,   155,   340,     0,
       0,   321,   343,   342,     0,   322,   356,   356,     0,   325,
      30,    32,    28,    21,   125,    87,    88,     0,     0,    89,
       0,    90,    91,    94,    59,    57,    58,     0,   149,   145,
       0,     0,   252,   254,   256,   258,   260,   262,   264,     0,
     266,   270,   268,   272,   274,     0,   281,     0,   277,   279,
       0,     0,   103,   103,     0,   104,   141,   133,   170,   169,
     137,    50,    49,   177,     0,     0,   185,     0,     0,   161,
     189,   190,   191,   199,   200,   192,   193,   194,   195,   201,
       0,     0,   208,   203,   202,   204,   211,   216,   217,   215,
     218,   229,   228,   230,   219,   220,   223,   224,   221,   222,
     232,   231,   165,   235,     0,     0,   110,     0,     0,     0,
       0,     0,     0,    65,     0,     0,     0,   356,   362,   355,
       0,     0,   153,   157,   368,   369,     0,   363,   347,     0,
     364,   350,     0,     0,     0,     0,     0,     0,   323,     0,
      81,    82,   212,   105,   108,   285,     0,     0,     0,     0,
       0,     0,     0,   247,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   109,   122,     0,     0,   117,   178,
     179,   186,   187,   209,   210,   236,   237,   111,    51,     0,
      51,    51,    70,    66,   327,   329,   352,   354,     0,   345,
     348,     0,     0,   335,   319,   320,     0,     0,   324,   166,
     166,   166,   174,   174,   174,   182,     0,     0,     0,   248,
     196,   205,   196,     0,     0,   276,   225,   284,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   357,   360,
     333,   331,     0,   167,     0,     0,     0,   175,     0,     0,
       0,   183,     0,     0,     0,   283,     0,   197,     0,   206,
       0,     0,     0,     0,   226,     0,   233,     0,     0,     0,
       0,   239,   103,   121,   119,     0,     0,     0,    61,   353,
       0,     0,     0,   253,   255,   257,     0,   259,   261,   263,
       0,   265,   250,   251,   249,     0,   267,     0,   271,   269,
     273,   275,     0,   282,     0,   278,     0,     0,     0,     0,
       0,     0,     0,   280,     0,     0,     0,    51,     0,     0,
     168,   176,   184,   198,   207,   227,   234,     0,     0,   243,
       0,     0,   246,   240,     0,     0,     0,     0,   344,   349,
     241,   242,   244,   245,   123,    62,    63,    64,     0,     0,
     358,   361
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     3,    19,     6,    51,    11,    12,   183,    52,   235,
     360,   359,   121,    13,   127,    93,   412,   169,   289,   290,
     291,   497,   447,   332,    58,   222,   223,    14,   132,   375,
     367,   245,   196,   197,   198,   394,   525,   329,    54,   201,
     203,   393,   392,   690,   219,   281,   282,   283,   269,   270,
     346,   347,   304,   326,   702,   703,   706,   707,   710,   305,
     543,   549,   716,   717,   556,   718,   312,   559,   560,   315,
     570,   723,   321,   725,   327,   730,   731,   678,   679,   520,
     616,   617,   618,   619,   620,   621,   622,   624,   626,   625,
     627,   628,   632,   633,   630,    94,   204,   205,   206,   208,
     209,   210,   211,   212,   214,   213,   215,   216,   217,   218,
      15,   228,   474,   355,    60,   229,   353,   352,   231,   234,
     230,   475,   460,   461,   462,   463,   451,   452,   349,   740,
     350,   741,    16,    56,    95
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -641
static const short yypact[] =
{
      37,    62,  -641,    69,    21,  -641,    41,  -641,  -641,    81,
    -641,   782,  -641,  -641,  -641,  -641,  -641,    97,    61,   101,
      71,    72,    73,    74,    75,  -641,   116,  -641,  -641,   122,
     693,   126,  -641,   134,  -641,   174,  -641,   195,  -641,  -641,
     693,   277,   292,   302,   326,   355,   405,  -641,  -641,  -641,
     446,   441,   321,  -641,   525,  -641,   374,  -641,    94,  -641,
      50,   380,   452,   480,   500,   528,   399,   436,   443,  -641,
     451,   559,    30,   548,    35,   491,   495,   505,   586,   555,
     557,   572,   583,   595,   606,   612,   613,   614,  -641,   619,
     628,   551,   623,  -641,  -641,   645,   646,   307,   745,   647,
     748,  -641,   154,   653,   663,    29,   660,   701,   702,   657,
     770,  -641,  -641,   671,   672,   682,   683,   685,   785,   784,
     786,   691,  -641,   688,   695,   694,  -641,   203,  -641,  -641,
    -641,  -641,   689,  -641,  -641,  -641,   696,  -641,  -641,  -641,
    -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,
     698,  -641,   699,  -641,  -641,  -641,   700,  -641,   255,  -641,
    -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,
     788,   791,  -641,  -641,  -641,  -641,   693,   693,   795,   703,
     704,   705,   693,   428,  -641,  -641,   706,   707,   708,   709,
     710,   711,   712,   713,   456,   523,  -641,   715,   716,  -641,
     796,   106,   690,   719,   373,   373,   373,    43,    15,    15,
      15,    59,   288,    26,   288,   741,   741,   475,   347,   720,
    -641,  -641,   721,   722,  -641,  -641,  -641,  -641,   717,   723,
     191,   725,  -641,  -641,   726,   693,  -641,  -641,   727,   693,
    -641,  -641,   729,   693,  -641,   249,    43,    64,     1,    11,
      11,   821,   804,   807,  -641,  -641,  -641,  -641,  -641,  -641,
    -641,   730,   731,   732,   733,   734,   327,   636,  -641,   736,
     737,   728,  -641,  -641,  -641,   738,   739,   740,   742,   166,
     265,  -641,  -641,  -641,   744,   746,   747,  -641,  -641,   313,
     660,   820,   749,   245,   346,  -641,  -641,   751,   752,   753,
     754,   755,   805,   808,  -641,   757,   758,   759,   760,   762,
     763,   764,   766,   767,   768,   771,   772,   769,   773,   774,
     775,   777,   778,   514,   756,   776,  -641,   780,  -641,   765,
    -641,  -641,   783,   781,   191,   787,   323,   789,   790,   792,
     793,    53,   235,   254,  -641,  -641,  -641,  -641,   797,   810,
     812,   552,   794,   798,  -641,   800,  -641,   693,  -641,   693,
     693,  -641,   750,   799,  -641,   416,  -641,   496,  -641,  -641,
    -641,   465,  -641,  -641,  -641,   801,   802,   803,  -641,  -641,
     285,   832,   836,   820,   316,  -641,  -641,  -641,  -641,  -641,
    -641,    43,   806,   809,    79,   861,   862,   481,   863,  -641,
    -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,   556,
    -641,  -641,  -641,    44,  -641,  -641,  -641,    45,   864,  -641,
    -641,  -641,   284,   883,   494,  -641,    39,    47,  -641,  -641,
       5,  -641,  -641,   488,   255,   417,     5,  -641,   867,   891,
     811,   813,  -641,  -641,  -641,   625,  -641,   213,   406,  -641,
     900,   358,  -641,    43,   905,    63,   884,   886,   906,   908,
     478,   369,   487,   316,  -641,  -641,  -641,  -641,  -641,   814,
     815,  -641,  -641,  -641,   499,  -641,   191,   191,   233,  -641,
    -641,  -641,  -641,  -641,  -641,  -641,  -641,   255,   255,  -641,
     860,  -641,  -641,  -641,  -641,  -641,  -641,   816,  -641,  -641,
     817,   818,  -641,  -641,  -641,  -641,  -641,  -641,  -641,   822,
    -641,  -641,  -641,  -641,  -641,   823,  -641,   824,  -641,  -641,
     825,     4,  -641,  -641,   826,  -641,  -641,  -641,  -641,   819,
    -641,  -641,  -641,  -641,   909,   911,  -641,   916,   917,  -641,
    -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,
     284,   284,  -641,  -641,  -641,  -641,  -641,  -641,  -641,   827,
    -641,  -641,   819,  -641,  -641,  -641,  -641,  -641,  -641,  -641,
    -641,  -641,  -641,  -641,   919,   920,  -641,   659,   831,   833,
     834,   830,   828,  -641,   414,   839,   840,   191,   819,  -641,
     837,   838,  -641,  -641,  -641,  -641,   369,  -641,  -641,   316,
    -641,  -641,   255,   255,   841,   571,   519,   520,  -641,   394,
    -641,  -641,  -641,  -641,  -641,  -641,   835,   842,   843,   844,
     845,   846,   847,   661,   848,   849,   850,   851,   852,   853,
     855,   856,   858,   859,  -641,  -641,   222,   228,  -641,  -641,
    -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,    43,   285,
      43,    43,  -641,  -641,  -641,  -641,  -641,  -641,   865,  -641,
    -641,   866,   868,  -641,  -641,  -641,   870,   872,  -641,   373,
     373,   373,    15,    15,    15,    59,   873,   874,    83,  -641,
     288,    26,   288,   741,   741,  -641,   475,  -641,   347,   624,
     829,   876,   877,   387,   875,   542,   534,   936,  -641,  -641,
    -641,  -641,    93,  -641,    98,   115,   247,  -641,   251,   281,
     340,  -641,   943,   946,   661,  -641,   357,  -641,   401,  -641,
     413,   871,   878,   420,  -641,   427,  -641,   532,   543,   880,
     438,  -641,  -641,  -641,  -641,   882,   885,   887,  -641,  -641,
     889,   890,   373,  -641,  -641,  -641,    15,  -641,  -641,  -641,
      59,  -641,  -641,  -641,  -641,   288,  -641,    26,  -641,  -641,
    -641,  -641,   475,  -641,   347,  -641,   892,   893,   944,   894,
     895,   945,   624,  -641,   345,   285,   947,    43,   881,   888,
    -641,  -641,  -641,  -641,  -641,  -641,  -641,   854,   901,  -641,
     959,   974,  -641,  -641,   879,   897,   899,   562,   391,  -641,
    -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,   566,   570,
    -641,  -641
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -641,  -641,  -641,   684,   -54,  -641,  -641,  -641,   -11,  -641,
    -641,  -641,  -641,  -641,  -641,   -55,  -318,  -170,  -245,  -641,
    -641,  -614,  -641,  -641,   -30,  -641,  -641,  -641,  -641,   743,
    -641,  -641,   714,  -641,  -641,  -492,   857,  -641,   -28,  -641,
    -641,  -641,  -641,  -641,  -641,  -198,  -194,  -641,  -217,  -204,
    -641,  -641,  -641,  -641,    23,  -186,    25,  -187,  -641,  -625,
    -388,  -641,   314,  -205,  -641,  -641,  -636,   761,   574,  -192,
    -641,  -641,  -640,  -641,  -635,  -641,   239,  -641,   298,  -426,
    -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,
    -641,  -641,  -641,  -641,  -641,   -58,  -641,  -641,  -641,  -641,
    -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,  -641,
    -641,  -213,  -641,  -641,   -51,  -641,  -641,  -641,  -641,  -641,
    -641,  -428,   215,  -641,   216,  -641,   258,  -202,  -641,  -641,
    -641,  -641,  -641,  -641,  -641
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -360
static const short yytable[] =
{
      92,   365,   112,   101,   100,   111,   110,   309,   102,   313,
     295,   295,   295,   344,   296,   296,   296,    92,   284,   285,
     286,   297,   298,   299,   316,    71,   345,    97,   348,    61,
     636,   637,   273,   598,   368,   694,   128,   601,   552,   124,
       1,   159,   101,   100,   112,   719,   724,   111,   110,   276,
     711,   103,   540,   726,   129,   278,   292,   533,   536,   369,
     557,   558,   -53,   369,   590,   500,  -346,   372,   373,     7,
      73,     4,  -346,   225,   225,   310,   226,   226,   300,   374,
      29,    31,    33,    35,    37,   311,    75,    76,    77,   541,
     542,   531,   130,    79,    80,    81,   553,    82,   287,   288,
     370,   554,   555,    83,   370,   301,   261,   262,   263,   264,
      84,    85,    86,    87,    73,    98,   409,   344,   265,   366,
     410,   784,   785,   104,   635,   782,   105,   106,     8,   786,
     345,   293,   294,   261,   262,   263,   264,   227,   227,    47,
      48,   107,   108,    89,     2,   265,   521,   160,   125,    10,
      90,   550,   529,   131,   551,   103,   534,   537,   109,   535,
     538,   795,   643,   644,  -344,   236,   237,  -344,   659,     5,
      27,   242,   244,   660,    73,   302,   303,   665,    30,    32,
      34,    36,    38,    47,    48,    49,    88,   524,   562,    18,
      75,    76,    77,   399,   714,   266,   267,    79,    80,    81,
     400,    82,    99,   715,   742,    26,   401,    83,   588,   742,
      28,   335,   336,   743,    84,    85,    86,    87,   744,   262,
     263,   563,   266,   267,   356,    39,   742,   104,   358,    40,
     105,   106,   362,    53,   103,   745,   578,   579,   580,   532,
     774,    55,   591,    47,    48,   107,   108,    89,   581,   261,
     262,   263,   264,    73,    90,   261,   262,   263,   264,   344,
     344,   265,   156,   385,   386,   225,  -359,   265,   226,    75,
      76,    77,   345,   345,   610,   611,    79,    80,    81,   400,
      82,    57,   387,   388,   186,   401,    83,   337,   338,   339,
     340,   187,   402,    84,    85,    86,    87,   540,   494,   403,
     445,   448,    59,   478,   341,   404,   104,   342,   343,   105,
     106,   495,   199,   188,   200,   189,   190,   501,   191,   192,
     193,   582,    47,    48,   107,   108,    89,    73,    98,   227,
     691,   464,   465,    90,   541,   542,   692,   306,   266,   267,
     307,   608,   496,    65,   266,   267,   480,   308,   481,   482,
     466,   467,   502,   503,   504,   385,   386,   363,   746,   505,
     506,   507,   746,   508,   509,   194,   195,   747,    66,   510,
     344,   748,   261,   262,   263,   264,   511,   512,   513,   514,
     403,   515,   472,   345,   265,   656,   404,    62,   473,   661,
     662,    92,   746,   101,   100,   103,    47,    48,    49,    88,
     275,   749,    63,   693,  -346,   695,   696,   276,   277,   516,
    -346,   517,    64,   278,    73,   152,   518,    67,   577,   584,
     112,   519,   408,   111,   110,   409,    73,    98,   609,    70,
      75,    76,    77,   454,    73,    98,   455,    79,    80,    81,
      41,    82,    42,    43,    44,    45,    46,    83,   322,   323,
      69,   750,   564,   794,    84,    85,    86,    87,    68,   565,
     751,   266,   267,   324,   325,   114,   586,   104,   755,   587,
     105,   106,   566,   567,   295,   295,   295,   756,   296,   296,
     296,   568,    96,    47,    48,   107,   108,    89,   113,   279,
     280,   721,   722,   115,    90,    47,    48,    49,    88,   409,
     -53,   735,   668,    47,    48,    49,    88,   -53,   528,   118,
     317,   569,   757,   116,   583,   561,   318,    47,    48,    49,
      50,   758,   653,    92,   755,   485,   254,   255,   409,   101,
     100,   762,   797,   759,   319,   243,   287,   288,   764,   320,
     763,   117,    72,   287,   288,    73,   119,   765,   295,   772,
     783,   112,   296,   120,   111,   110,   780,    74,   773,   781,
     122,    75,    76,    77,   471,   472,    78,   126,    79,    80,
      81,   473,    82,   545,   489,   411,    72,   490,    83,    73,
     546,   547,   548,   664,   472,    84,    85,    86,    87,   596,
     473,    74,   597,   256,   257,    75,    76,    77,   599,   136,
      78,   600,    79,    80,    81,   486,    82,   604,   487,   133,
     605,   488,    83,   134,    47,    48,    49,    88,    89,    84,
      85,    86,    87,   135,   439,    90,   440,   666,   667,   441,
     587,   587,   149,    91,   161,   162,   163,   164,   165,   166,
     167,   168,    72,   738,   766,    73,   409,   767,    47,    48,
      49,    88,    89,   768,   409,   769,   737,    74,   770,    90,
     148,    75,    76,    77,   387,   388,    78,   123,    79,    80,
      81,   807,    82,   137,   409,   138,    72,   596,    83,    73,
     810,   599,   676,   677,   811,    84,    85,    86,    87,     9,
     139,    74,    17,   704,   705,    75,    76,    77,   708,   709,
      78,   140,    79,    80,    81,    41,    82,    42,    43,    44,
      45,    46,    83,   141,    47,    48,    49,    88,    89,    84,
      85,    86,    87,   271,   142,    90,   727,   728,   729,   186,
     143,   144,   145,   576,   606,   607,   187,   146,   161,   162,
     163,   164,   165,   166,   167,   168,   147,   272,    47,    48,
      49,    88,    89,   150,   153,   151,   154,   155,   188,    90,
     189,   190,   157,   191,   192,   193,   172,   647,   161,   162,
     163,   164,   165,   166,   167,   168,   158,   170,   171,   173,
     174,   175,    47,    48,    49,    50,    20,    21,    22,    23,
      24,   176,   177,    25,   179,   178,   180,   184,   182,   181,
     232,   202,   185,   233,   238,   314,   207,   220,   221,   224,
     194,   195,   239,   240,   241,   260,   246,   247,   248,   249,
     250,   251,   252,   253,   258,   259,   274,   328,   330,   331,
     334,   333,   351,   354,   377,   378,   357,   361,   379,   411,
     380,   381,   382,   383,   384,   389,   390,   391,   395,   396,
     397,   419,   398,   405,   420,   406,   407,   442,   483,   413,
     414,   415,   416,   498,   417,   418,   421,   499,   422,   423,
     424,   425,   446,   426,   427,   428,   429,   443,   430,   433,
     431,   432,   469,   434,   435,   436,   437,   470,   438,   444,
     449,   450,   526,   527,   530,   539,   544,   453,   572,   456,
     457,   476,   458,   459,   573,   477,   468,   479,   484,   585,
     491,   492,   493,   522,   589,   592,   523,   593,   612,   594,
     595,   574,   639,   575,   640,   613,   614,   602,   603,   641,
     642,   409,   645,   646,   634,   638,   732,   652,   615,   490,
     651,   623,   629,   631,   648,   739,   649,   650,   654,   655,
     663,   657,   658,   752,   669,   753,   796,   789,   792,   364,
     800,   670,   671,   672,   673,   674,   675,   680,   681,   682,
     683,   684,   802,   685,   686,   697,   687,   688,   689,   700,
     698,   701,   699,   712,   713,   733,   734,   803,   804,   736,
     771,   760,   775,   376,   798,   776,   720,   777,   761,   778,
     779,   799,   787,   788,   790,   791,   805,   801,   806,   371,
     571,   793,   754,   808,     0,   809,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   268
};

static const short yycheck[] =
{
      54,   246,    60,    58,    58,    60,    60,   212,    59,   214,
     208,   209,   210,   230,   208,   209,   210,    71,   204,   205,
     206,   208,   209,   210,   216,    53,   230,    57,   230,    40,
     522,   523,   202,   461,   247,   649,     1,   463,   426,     9,
       3,    12,    97,    97,   102,   681,   686,   102,   102,    34,
     675,     1,    13,   688,    19,    40,    41,    13,    13,    58,
      55,    56,    19,    58,     1,   383,    13,    56,    57,     0,
      20,     9,    19,    10,    10,    49,    13,    13,    19,    68,
       9,     9,     9,     9,     9,    59,    36,    37,    38,    50,
      51,   409,    57,    43,    44,    45,    49,    47,    55,    56,
      99,    54,    55,    53,    99,    46,    27,    28,    29,    30,
      60,    61,    62,    63,    20,    21,   112,   334,    39,    55,
     290,   757,   762,    73,   120,   750,    76,    77,   107,   764,
     334,   116,   117,    27,    28,    29,    30,    74,    74,    89,
      90,    91,    92,    93,   107,    39,   391,   118,   118,   108,
     100,   112,   397,   118,   115,     1,   112,   112,   108,   115,
     115,   775,   550,   551,   111,   176,   177,   114,   596,   107,
     109,   182,   183,   599,    20,   116,   117,   605,   107,   107,
     107,   107,   107,    89,    90,    91,    92,   108,   433,   108,
      36,    37,    38,    27,   111,   116,   117,    43,    44,    45,
      34,    47,   108,   120,   111,   108,    40,    53,   453,   111,
     109,    20,    21,   120,    60,    61,    62,    63,   120,    28,
      29,   434,   116,   117,   235,   109,   111,    73,   239,   107,
      76,    77,   243,   107,     1,   120,    23,    24,    25,   409,
     732,   107,   455,    89,    90,    91,    92,    93,    35,    27,
      28,    29,    30,    20,   100,    27,    28,    29,    30,   476,
     477,    39,   108,    28,    29,    10,    75,    39,    13,    36,
      37,    38,   476,   477,   487,   488,    43,    44,    45,    34,
      47,   107,    28,    29,    35,    40,    53,    96,    97,    98,
      99,    42,    27,    60,    61,    62,    63,    13,    13,    34,
     328,   331,   107,   354,   113,    40,    73,   116,   117,    76,
      77,    26,   109,    64,   111,    66,    67,     1,    69,    70,
      71,   108,    89,    90,    91,    92,    93,    20,    21,    74,
     108,    96,    97,   100,    50,    51,   108,    49,   116,   117,
      52,   108,    57,    17,   116,   117,   357,    59,   359,   360,
      96,    97,    36,    37,    38,    28,    29,   108,   111,    43,
      44,    45,   111,    47,    48,   116,   117,   120,    13,    53,
     587,   120,    27,    28,    29,    30,    60,    61,    62,    63,
      34,    65,    13,   587,    39,   587,    40,   110,    19,   602,
     603,   445,   111,   448,   448,     1,    89,    90,    91,    92,
      27,   120,   110,   648,    13,   650,   651,    34,    35,    93,
      19,    95,   110,    40,    20,   108,   100,    12,   446,   449,
     478,   105,   109,   478,   478,   112,    20,    21,   479,   108,
      36,    37,    38,   110,    20,    21,   113,    43,    44,    45,
      12,    47,    14,    15,    16,    17,    18,    53,   101,   102,
       9,   111,    35,   108,    60,    61,    62,    63,    12,    42,
     120,   116,   117,   116,   117,    13,   108,    73,   111,   111,
      76,    77,    55,    56,   672,   673,   674,   120,   672,   673,
     674,    64,   108,    89,    90,    91,    92,    93,   108,   116,
     117,   683,   684,    13,   100,    89,    90,    91,    92,   112,
      19,   114,   108,    89,    90,    91,    92,    19,    27,   110,
      35,    94,   111,    13,   108,    27,    41,    89,    90,    91,
      92,   120,   108,   577,   111,   109,    70,    71,   112,   584,
     584,   111,   777,   120,    59,   107,    55,    56,   111,    64,
     120,    13,    17,    55,    56,    20,   110,   120,   746,   111,
     755,   609,   746,   110,   609,   609,   742,    32,   120,   746,
     109,    36,    37,    38,    12,    13,    41,    19,    43,    44,
      45,    19,    47,    79,   109,    19,    17,   112,    53,    20,
      86,    87,    88,    12,    13,    60,    61,    62,    63,   111,
      19,    32,   114,    70,    71,    36,    37,    38,   111,    13,
      41,   114,    43,    44,    45,   109,    47,   108,   112,   118,
     111,   115,    53,   118,    89,    90,    91,    92,    93,    60,
      61,    62,    63,   118,   110,   100,   112,   108,   108,   115,
     111,   111,     9,   108,    78,    79,    80,    81,    82,    83,
      84,    85,    17,   109,   112,    20,   112,   115,    89,    90,
      91,    92,    93,   110,   112,   112,   114,    32,   115,   100,
     109,    36,    37,    38,    28,    29,    41,   108,    43,    44,
      45,   109,    47,   118,   112,   118,    17,   111,    53,    20,
     114,   111,    21,    22,   114,    60,    61,    62,    63,     5,
     118,    32,     8,   670,   671,    36,    37,    38,   673,   674,
      41,   118,    43,    44,    45,    12,    47,    14,    15,    16,
      17,    18,    53,   118,    89,    90,    91,    92,    93,    60,
      61,    62,    63,    33,   118,   100,   102,   103,   104,    35,
     118,   118,   118,   108,   476,   477,    42,   118,    78,    79,
      80,    81,    82,    83,    84,    85,   118,    57,    89,    90,
      91,    92,    93,   108,     9,   109,   109,     9,    64,   100,
      66,    67,   109,    69,    70,    71,   109,   108,    78,    79,
      80,    81,    82,    83,    84,    85,   113,    76,    76,     9,
     109,   109,    89,    90,    91,    92,     4,     5,     6,     7,
       8,   109,   109,    11,     9,   110,    12,   109,   107,    13,
      12,   112,   107,    12,     9,    64,   110,   109,   109,   109,
     116,   117,   109,   109,   109,    19,   110,   110,   110,   110,
     110,   110,   110,   110,   109,   109,   107,   107,   107,   107,
     107,   114,   107,   107,    13,    31,   109,   108,    31,    19,
     110,   110,   110,   110,   110,   109,   109,   119,   110,   110,
     110,    46,   110,   109,    46,   109,   109,   101,   108,   110,
     109,   109,   109,    31,   110,   110,   109,    31,   110,   110,
     110,   109,   107,   110,   110,   109,   109,   101,   110,   110,
     109,   109,    72,   110,   110,   110,   109,    75,   110,   109,
     107,   110,    31,    31,    31,    31,    13,   110,    31,   110,
     110,   107,   110,   110,    13,   107,   109,   107,   109,     9,
     109,   109,   109,   107,     9,    31,   107,    31,    58,    13,
      12,   110,    13,   110,    13,   109,   109,   113,   113,    13,
      13,   112,    13,    13,   109,   109,   107,   109,   120,   112,
     110,   119,   119,   119,   113,     9,   113,   113,   109,   109,
     109,   114,   114,    10,   119,     9,     9,    13,    13,   245,
     106,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,    13,   120,   119,   110,   120,   119,   119,   109,
     114,   109,   114,   110,   110,   109,   109,    13,   109,   114,
     110,   120,   110,   250,   113,   110,   682,   110,   120,   110,
     110,   113,   110,   110,   110,   110,   109,   106,   109,   248,
     436,   772,   714,   798,    -1,   799,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,   107,   122,     9,   107,   124,     0,   107,   124,
     108,   126,   127,   134,   148,   231,   253,   124,   108,   123,
       4,     5,     6,     7,     8,    11,   108,   109,   109,     9,
     107,     9,   107,     9,   107,     9,   107,     9,   107,   109,
     107,    12,    14,    15,    16,    17,    18,    89,    90,    91,
      92,   125,   129,   107,   159,   107,   254,   107,   145,   107,
     235,   129,   110,   110,   110,    17,    13,    12,    12,     9,
     108,   159,    17,    20,    32,    36,    37,    38,    41,    43,
      44,    45,    47,    53,    60,    61,    62,    63,    92,    93,
     100,   108,   125,   136,   216,   255,   108,   145,    21,   108,
     125,   136,   235,     1,    73,    76,    77,    91,    92,   108,
     125,   136,   216,   108,    13,    13,    13,    13,   110,   110,
     110,   133,   109,   108,     9,   118,    19,   135,     1,    19,
      57,   118,   149,   118,   118,   118,    13,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   109,     9,
     108,   109,   108,     9,   109,     9,   108,   109,   113,    12,
     118,    78,    79,    80,    81,    82,    83,    84,    85,   138,
      76,    76,   109,     9,   109,   109,   109,   109,   110,     9,
      12,    13,   107,   128,   109,   107,    35,    42,    64,    66,
      67,    69,    70,    71,   116,   117,   153,   154,   155,   109,
     111,   160,   112,   161,   217,   218,   219,   110,   220,   221,
     222,   223,   224,   226,   225,   227,   228,   229,   230,   165,
     109,   109,   146,   147,   109,    10,    13,    74,   232,   236,
     241,   239,    12,    12,   240,   130,   129,   129,     9,   109,
     109,   109,   129,   107,   129,   152,   110,   110,   110,   110,
     110,   110,   110,   110,    70,    71,    70,    71,   109,   109,
      19,    27,    28,    29,    30,    39,   116,   117,   157,   169,
     170,    33,    57,   138,   107,    27,    34,    35,    40,   116,
     117,   166,   167,   168,   176,   176,   176,    55,    56,   139,
     140,   141,    41,   116,   117,   166,   167,   178,   178,   178,
      19,    46,   116,   117,   173,   180,    49,    52,    59,   184,
      49,    59,   187,   184,    64,   190,   190,    35,    41,    59,
      64,   193,   101,   102,   116,   117,   174,   195,   107,   158,
     107,   107,   144,   114,   107,    20,    21,    96,    97,    98,
      99,   113,   116,   117,   169,   170,   171,   172,   248,   249,
     251,   107,   238,   237,   107,   234,   129,   109,   129,   132,
     131,   108,   129,   108,   153,   139,    55,   151,   232,    58,
      99,   188,    56,    57,    68,   150,   150,    13,    31,    31,
     110,   110,   110,   110,   110,    28,    29,    28,    29,   109,
     109,   119,   163,   162,   156,   110,   110,   110,   110,    27,
      34,    40,    27,    34,    40,   109,   109,   109,   109,   112,
     138,    19,   137,   110,   109,   109,   109,   110,   110,    46,
      46,   109,   110,   110,   110,   109,   110,   110,   109,   109,
     110,   109,   109,   110,   110,   110,   110,   109,   110,   110,
     112,   115,   101,   101,   109,   159,   107,   143,   145,   107,
     110,   247,   248,   110,   110,   113,   110,   110,   110,   110,
     243,   244,   245,   246,    96,    97,    96,    97,   109,    72,
      75,    12,    13,    19,   233,   242,   107,   107,   235,   107,
     129,   129,   129,   108,   109,   109,   109,   112,   115,   109,
     112,   109,   109,   109,    13,    26,    57,   142,    31,    31,
     137,     1,    36,    37,    38,    43,    44,    45,    47,    48,
      53,    60,    61,    62,    63,    65,    93,    95,   100,   105,
     200,   139,   107,   107,   108,   157,    31,    31,    27,   139,
      31,   137,   138,    13,   112,   115,    13,   112,   115,    31,
      13,    50,    51,   181,    13,    79,    86,    87,    88,   182,
     112,   115,   181,    49,    54,    55,   185,    55,    56,   188,
     189,    27,   139,   232,    35,    42,    55,    56,    64,    94,
     191,   189,    31,    13,   110,   110,   108,   159,    23,    24,
      25,    35,   108,   108,   145,     9,   108,   111,   139,     9,
       1,   232,    31,    31,    13,    12,   111,   114,   242,   111,
     114,   200,   113,   113,   108,   111,   247,   247,   108,   235,
     232,   232,    58,   109,   109,   120,   201,   202,   203,   204,
     205,   206,   207,   119,   208,   210,   209,   211,   212,   119,
     215,   119,   213,   214,   109,   120,   156,   156,   109,    13,
      13,    13,    13,   181,   181,    13,    13,   108,   113,   113,
     113,   110,   109,   108,   109,   109,   248,   114,   114,   242,
     200,   232,   232,   109,    12,   242,   108,   108,   108,   119,
     119,   119,   119,   119,   119,   119,    21,    22,   198,   199,
     119,   119,   119,   119,   119,   120,   119,   120,   119,   119,
     164,   108,   108,   139,   142,   139,   139,   110,   114,   114,
     109,   109,   175,   176,   175,   175,   177,   178,   177,   177,
     179,   180,   110,   110,   111,   120,   183,   184,   186,   187,
     183,   190,   190,   192,   193,   194,   195,   102,   103,   104,
     196,   197,   107,   109,   109,   114,   114,   114,   109,     9,
     250,   252,   111,   120,   120,   120,   111,   120,   120,   120,
     111,   120,    10,     9,   199,   111,   120,   111,   120,   120,
     120,   120,   111,   120,   111,   120,   112,   115,   110,   112,
     115,   110,   111,   120,   156,   110,   110,   110,   110,   110,
     176,   178,   180,   184,   187,   193,   195,   110,   110,    13,
     110,   110,    13,   197,   108,   142,     9,   139,   113,   113,
     106,   106,    13,    13,   109,   109,   109,   109,   243,   245,
     114,   114
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 218 "parser.y"
    { YYACCEPT ;}
    break;

  case 3:
#line 219 "parser.y"
    { YYACCEPT ;}
    break;

  case 4:
#line 220 "parser.y"
    { YYACCEPT ;}
    break;

  case 12:
#line 234 "parser.y"
    { yyval.mergemode = defaultmm ;}
    break;

  case 13:
#line 235 "parser.y"
    { yyval.mergemode = augment   ;}
    break;

  case 14:
#line 236 "parser.y"
    { yyval.mergemode = replace   ;}
    break;

  case 15:
#line 237 "parser.y"
    { yyval.mergemode= override   ;}
    break;

  case 20:
#line 254 "parser.y"
    { close_include () ;}
    break;

  case 21:
#line 255 "parser.y"
    { close_include () ;}
    break;

  case 23:
#line 263 "parser.y"
    { 
     min_keys = yyvsp[-2].val;
     current_key = &keys[yyvsp[-2].val];
   ;}
    break;

  case 24:
#line 268 "parser.y"
    { 
     max_keys = yyvsp[-2].val;
     keys = calloc (yyvsp[-2].val, sizeof (struct key));
   ;}
    break;

  case 25:
#line 273 "parser.y"
    { keyname_add (yyvsp[-3].str, yyvsp[-1].val); ;}
    break;

  case 27:
#line 276 "parser.y"
    { keyname_add (yyvsp[-3].str, yyvsp[-1].val); ;}
    break;

  case 29:
#line 278 "parser.y"
    {  ;}
    break;

  case 31:
#line 281 "parser.y"
    { 
     keycode_t key = keyname_find (yyvsp[-1].str);
     if (key)
       keyname_add (yyvsp[-3].str, key);
     else
       {
	 key = keyname_find (yyvsp[-3].str);
	 if (key)
	   keyname_add (yyvsp[-1].str, key);
       }
   ;}
    break;

  case 33:
#line 294 "parser.y"
    { include_sections (yyvsp[0].str, XKBKEYCODES, "keycodes", yyvsp[-1].mergemode); ;}
    break;

  case 37:
#line 307 "parser.y"
    { vmod_add (yyvsp[0].str); ;}
    break;

  case 38:
#line 308 "parser.y"
    { vmod_add (yyvsp[0].str) ;}
    break;

  case 40:
#line 318 "parser.y"
    { yyval.val = vmod_find (yyvsp[0].str); ;}
    break;

  case 41:
#line 323 "parser.y"
    { yyval.val = RMOD_SHIFT ;}
    break;

  case 42:
#line 324 "parser.y"
    { yyval.val = RMOD_LOCK ;}
    break;

  case 43:
#line 325 "parser.y"
    { yyval.val = RMOD_CTRL ;}
    break;

  case 44:
#line 326 "parser.y"
    { yyval.val = RMOD_MOD1 ;}
    break;

  case 45:
#line 327 "parser.y"
    { yyval.val = RMOD_MOD2 ;}
    break;

  case 46:
#line 328 "parser.y"
    { yyval.val = RMOD_MOD3 ;}
    break;

  case 47:
#line 329 "parser.y"
    { yyval.val = RMOD_MOD4 ;}
    break;

  case 48:
#line 330 "parser.y"
    { yyval.val = RMOD_MOD5 ;}
    break;

  case 49:
#line 336 "parser.y"
    { yyval.modmap.rmods = yyvsp[-2].modmap.rmods | yyvsp[0].val; ;}
    break;

  case 50:
#line 337 "parser.y"
    { yyval.modmap.vmods = yyvsp[-2].modmap.vmods | yyvsp[0].val; ;}
    break;

  case 51:
#line 339 "parser.y"
    { yyval.modmap.rmods = 0; yyval.modmap.vmods = 0 ;}
    break;

  case 52:
#line 339 "parser.y"
    { yyval.modmap.rmods = yyvsp[0].val; ;}
    break;

  case 53:
#line 340 "parser.y"
    { yyval.modmap.rmods = 0; yyval.modmap.vmods = 0 ;}
    break;

  case 54:
#line 340 "parser.y"
    { yyval.modmap.vmods = yyvsp[0].val; ;}
    break;

  case 55:
#line 341 "parser.y"
    { yyval.modmap.rmods = 0xFF; yyval.modmap.vmods = 0xFFFF;}
    break;

  case 56:
#line 342 "parser.y"
    { yyval.modmap.rmods = 0; yyval.modmap.vmods = 0 ;}
    break;

  case 57:
#line 348 "parser.y"
    { yyval.val = yyvsp[0].val - 1 ;}
    break;

  case 58:
#line 349 "parser.y"
    { yyval.val = 0      ;}
    break;

  case 59:
#line 350 "parser.y"
    { yyval.val = yyvsp[0].val - 1 ;}
    break;

  case 61:
#line 357 "parser.y"
    { current_keytype->modmask = yyvsp[-1].modmap ;}
    break;

  case 62:
#line 359 "parser.y"
    { keytype_mapadd (current_keytype, yyvsp[-4].modmap, yyvsp[-1].val) ;}
    break;

  case 64:
#line 362 "parser.y"
    { keytype_preserve_add (current_keytype, yyvsp[-4].modmap, yyvsp[-1].modmap) ;}
    break;

  case 65:
#line 367 "parser.y"
    { close_include () ;}
    break;

  case 66:
#line 368 "parser.y"
    { close_include () ;}
    break;

  case 69:
#line 375 "parser.y"
    { keytype_new (yyvsp[0].str, &current_keytype) ;}
    break;

  case 70:
#line 375 "parser.y"
    { ;}
    break;

  case 71:
#line 377 "parser.y"
    { include_sections (yyvsp[0].str, XKBTYPES, "types", yyvsp[-1].mergemode) ;}
    break;

  case 75:
#line 389 "parser.y"
    { yyval.val = (int) XStringToKeysym ( yyvsp[0].str) ? : -1;  ;}
    break;

  case 76:
#line 390 "parser.y"
    { yyval.val = 0  ;}
    break;

  case 77:
#line 391 "parser.y"
    { yyerror ("Invalid symbol.") ;}
    break;

  case 78:
#line 397 "parser.y"
    { yyval.val = yyvsp[0].val ;}
    break;

  case 79:
#line 398 "parser.y"
    { yyval.val = 0 ;}
    break;

  case 80:
#line 399 "parser.y"
    { yyval.val = 0xff ;}
    break;

  case 83:
#line 406 "parser.y"
    {;}
    break;

  case 84:
#line 407 "parser.y"
    { yyval.val = 0xff ;}
    break;

  case 87:
#line 417 "parser.y"
    { current_indicator->modmap = yyvsp[-1].modmap ;}
    break;

  case 88:
#line 418 "parser.y"
    { current_indicator->groups = yyvsp[-1].val ;}
    break;

  case 90:
#line 420 "parser.y"
    { current_indicator->which_mods = yyvsp[-1].val ;}
    break;

  case 91:
#line 421 "parser.y"
    { current_indicator->which_mods = yyvsp[-1].val ;}
    break;

  case 92:
#line 422 "parser.y"
    {;}
    break;

  case 93:
#line 423 "parser.y"
    {;}
    break;

  case 94:
#line 424 "parser.y"
    {;}
    break;

  case 95:
#line 429 "parser.y"
    { yyval.val = 0  ;}
    break;

  case 96:
#line 430 "parser.y"
    { yyval.val = 0  ;}
    break;

  case 97:
#line 431 "parser.y"
    { yyval.val = 1  ;}
    break;

  case 98:
#line 432 "parser.y"
    { yyval.val = yyvsp[0].val ;}
    break;

  case 99:
#line 437 "parser.y"
    { yyval.val = 0  ;}
    break;

  case 100:
#line 438 "parser.y"
    { yyval.val = 0  ;}
    break;

  case 101:
#line 439 "parser.y"
    { yyval.val = 1  ;}
    break;

  case 102:
#line 440 "parser.y"
    { yyval.val = yyvsp[0].val ;}
    break;

  case 105:
#line 451 "parser.y"
    { current_interpretation->match &= 0x7F | (yyvsp[-1].val << 7) ;}
    break;

  case 106:
#line 453 "parser.y"
    {
    current_interpretation->flags &= ~(KEYREPEAT | KEYNOREPEAT);
    current_interpretation->flags |= yyvsp[-1].val;
  ;}
    break;

  case 107:
#line 457 "parser.y"
    {;}
    break;

  case 108:
#line 458 "parser.y"
    { current_interpretation->vmod = yyvsp[-1].val ;}
    break;

  case 109:
#line 460 "parser.y"
    { 
     memcpy (&current_interpretation->action, yyvsp[-1].action, sizeof (xkb_action_t));
     free (yyvsp[-1].action);
   ;}
    break;

  case 110:
#line 468 "parser.y"
    { close_include () ;}
    break;

  case 111:
#line 469 "parser.y"
    { close_include () ;}
    break;

  case 114:
#line 477 "parser.y"
    { current_interpretation = &default_interpretation ;}
    break;

  case 116:
#line 480 "parser.y"
    { 
	  if (yyvsp[0].val != -1)
	    {
	      interpret_new (&current_interpretation, yyvsp[0].val);
	      current_interpretation->match |= 1;
	    }
	;}
    break;

  case 118:
#line 489 "parser.y"
    {
	  if (yyvsp[-2].val != -1)
	    {
	      interpret_new (&current_interpretation, yyvsp[-2].val);
	      current_interpretation->rmods = yyvsp[0].val;
	      current_interpretation->match |= 4;
	    }
	;}
    break;

  case 120:
#line 499 "parser.y"
    {
	  if (yyvsp[-2].val != -1)
	    {
	      interpret_new (&current_interpretation, yyvsp[-2].val);
	      current_interpretation->rmods = 255;
	      current_interpretation->match |= 2;
	    }
	;}
    break;

  case 122:
#line 509 "parser.y"
    {
	  if (yyvsp[-5].val != -1)
	    {
	      interpret_new (&current_interpretation, yyvsp[-5].val);
	      current_interpretation->rmods = yyvsp[-1].modmap.rmods;
	      current_interpretation->match |= yyvsp[-3].val;
	    }
	;}
    break;

  case 126:
#line 521 "parser.y"
    { include_sections (yyvsp[0].str, XKBCOMPAT, "compat", yyvsp[-1].mergemode) ;}
    break;

  case 130:
#line 531 "parser.y"
    { yyval.val = 0 ;}
    break;

  case 131:
#line 532 "parser.y"
    { yyval.val = 0 ;}
    break;

  case 132:
#line 533 "parser.y"
    { yyval.val = 1 ;}
    break;

  case 133:
#line 534 "parser.y"
    { yyval.val = yyvsp[0].val ;}
    break;

  case 134:
#line 539 "parser.y"
    { yyval.val = 0 ;}
    break;

  case 135:
#line 540 "parser.y"
    { yyval.val = 0 ;}
    break;

  case 136:
#line 541 "parser.y"
    { yyval.val = 1 ;}
    break;

  case 137:
#line 542 "parser.y"
    { yyval.val = yyvsp[0].val ;}
    break;

  case 138:
#line 547 "parser.y"
    { yyval.val = 0 ;}
    break;

  case 139:
#line 548 "parser.y"
    { yyval.val = 0 ;}
    break;

  case 140:
#line 549 "parser.y"
    { yyval.val = 1 ;}
    break;

  case 141:
#line 550 "parser.y"
    { yyval.val = yyvsp[0].val ;}
    break;

  case 142:
#line 555 "parser.y"
    { yyval.val = 0 ;}
    break;

  case 143:
#line 556 "parser.y"
    { yyval.val = 0 ;}
    break;

  case 144:
#line 557 "parser.y"
    { yyval.val = 1 ;}
    break;

  case 145:
#line 558 "parser.y"
    { yyval.val = yyvsp[0].val ;}
    break;

  case 146:
#line 563 "parser.y"
    { yyval.val = KEYNOREPEAT ;}
    break;

  case 147:
#line 564 "parser.y"
    { yyval.val = KEYNOREPEAT ;}
    break;

  case 148:
#line 565 "parser.y"
    { yyval.val = KEYREPEAT   ;}
    break;

  case 149:
#line 567 "parser.y"
    {
    if (yyvsp[0].val)
      yyval.val = KEYREPEAT;
    else
      yyval.val = KEYNOREPEAT;
  ;}
    break;

  case 150:
#line 577 "parser.y"
    { yyval.val = 0 ;}
    break;

  case 151:
#line 578 "parser.y"
    { yyval.val = 0 ;}
    break;

  case 152:
#line 579 "parser.y"
    { yyval.val = 1 ;}
    break;

  case 153:
#line 580 "parser.y"
    { yyval.val = yyvsp[0].val ;}
    break;

  case 154:
#line 585 "parser.y"
    { yyval.val = 0  ;}
    break;

  case 155:
#line 586 "parser.y"
    { yyval.val = 0  ;}
    break;

  case 156:
#line 587 "parser.y"
    { yyval.val = 1  ;}
    break;

  case 157:
#line 588 "parser.y"
    { yyval.val = yyvsp[0].val ;}
    break;

  case 158:
#line 593 "parser.y"
    { yyval.val = 0  ;}
    break;

  case 159:
#line 594 "parser.y"
    { yyval.val = 0  ;}
    break;

  case 160:
#line 595 "parser.y"
    { yyval.val = 1  ;}
    break;

  case 161:
#line 596 "parser.y"
    { yyval.val = yyvsp[0].val ;}
    break;

  case 162:
#line 601 "parser.y"
    { yyval.val = 0  ;}
    break;

  case 163:
#line 602 "parser.y"
    { yyval.val = 0  ;}
    break;

  case 164:
#line 603 "parser.y"
    { yyval.val = 1  ;}
    break;

  case 165:
#line 604 "parser.y"
    { yyval.val = yyvsp[0].val ;}
    break;

  case 169:
#line 617 "parser.y"
    { 
    ((action_setmods_t *) current_action)->modmap = yyvsp[0].modmap;
  ;}
    break;

  case 170:
#line 621 "parser.y"
    { ((action_setmods_t *) current_action)->flags |= useModMap;
 ;}
    break;

  case 171:
#line 624 "parser.y"
    {
    ((action_setmods_t *) current_action)->flags &= ~clearLocks;
    ((action_setmods_t *) current_action)->flags |= yyvsp[0].val;
  ;}
    break;

  case 172:
#line 629 "parser.y"
    { 
    ((action_setmods_t *) current_action)->flags &= ~useModMap;
    ((action_setmods_t *) current_action)->flags |= yyvsp[0].val;
  ;}
    break;

  case 173:
#line 634 "parser.y"
    { 
    ((action_setmods_t *) current_action)->flags &= ~latchToLock;
    ((action_setmods_t *) current_action)->flags |= yyvsp[0].val;
  ;}
    break;

  case 177:
#line 649 "parser.y"
    {
     ((action_setgroup_t *) current_action)->group = yyvsp[0].val;
     ((action_setgroup_t *) current_action)->flags |= groupAbsolute;
   ;}
    break;

  case 178:
#line 654 "parser.y"
    {
     ((action_setgroup_t *) current_action)->group = yyvsp[0].val;
   ;}
    break;

  case 179:
#line 658 "parser.y"
    {
     ((action_setgroup_t *) current_action)->group = -yyvsp[0].val;
   ;}
    break;

  case 180:
#line 662 "parser.y"
    {
     ((action_setgroup_t *) current_action)->flags |= yyvsp[0].val;
   ;}
    break;

  case 181:
#line 666 "parser.y"
    {
     ((action_setgroup_t *) current_action)->flags |= yyvsp[0].val;
   ;}
    break;

  case 185:
#line 680 "parser.y"
    {
     ((action_moveptr_t *) current_action)->x = yyvsp[0].val;
     ((action_setgroup_t *) current_action)->flags |= MoveAbsoluteX;
   ;}
    break;

  case 186:
#line 685 "parser.y"
    {
     ((action_moveptr_t *) current_action)->x = yyvsp[0].val;
   ;}
    break;

  case 187:
#line 689 "parser.y"
    {
     ((action_moveptr_t *) current_action)->x = -yyvsp[0].val;
   ;}
    break;

  case 188:
#line 693 "parser.y"
    {
     ((action_moveptr_t *) current_action)->flags |= NoAcceleration;
   ;}
    break;

  case 189:
#line 700 "parser.y"
    { yyval.val = yyvsp[0].val ;}
    break;

  case 190:
#line 701 "parser.y"
    { yyval.val = yyvsp[0].val ;}
    break;

  case 191:
#line 702 "parser.y"
    { yyval.val = 0  ;}
    break;

  case 199:
#line 721 "parser.y"
    { ((action_ptrbtn_t *) current_action)->button = yyvsp[0].val; ;}
    break;

  case 200:
#line 723 "parser.y"
    { ((action_ptrbtn_t *) current_action)->count = yyvsp[0].val;  ;}
    break;

  case 201:
#line 725 "parser.y"
    {
     //     ((action_ptrbtn_t *) $$)->a = $3;
   ;}
    break;

  case 208:
#line 745 "parser.y"
    { ;}
    break;

  case 209:
#line 746 "parser.y"
    { ;}
    break;

  case 210:
#line 747 "parser.y"
    { ;}
    break;

  case 211:
#line 748 "parser.y"
    { ;}
    break;

  case 215:
#line 760 "parser.y"
    { /*$$ = $1*/ 	;}
    break;

  case 216:
#line 761 "parser.y"
    { yyval.val = 0xFFFF 	;}
    break;

  case 217:
#line 762 "parser.y"
    { yyval.val = 0 	;}
    break;

  case 218:
#line 768 "parser.y"
    { /* ((action_setcontrols_t *) $$)->controls = $3; */ ;}
    break;

  case 235:
#line 803 "parser.y"
    {
     ((action_switchscrn_t *) current_action)->screen = yyvsp[0].val;
     ((action_switchscrn_t *) current_action)->flags |= screenAbs;
   ;}
    break;

  case 236:
#line 808 "parser.y"
    {
     ((action_switchscrn_t *) current_action)->screen = yyvsp[0].val;
   ;}
    break;

  case 237:
#line 812 "parser.y"
    {
     ((action_switchscrn_t *) current_action)->screen = -yyvsp[0].val;
   ;}
    break;

  case 238:
#line 816 "parser.y"
    {
     /* XXX: Implement this.  */
/*      ((action_switchscrn_t *) current_action)->flags &= ~0; */
/*      ((action_switchscrn_t *) current_action)->flags |= $1; */
   ;}
    break;

  case 241:
#line 831 "parser.y"
    {
     ((action_consscroll_t *) current_action)->screen = yyvsp[0].dbl;
   ;}
    break;

  case 242:
#line 835 "parser.y"
    {
     ((action_consscroll_t *) current_action)->screen = -yyvsp[0].dbl;
   ;}
    break;

  case 243:
#line 839 "parser.y"
    {
     ((action_consscroll_t *) current_action)->line = yyvsp[0].val;
     ((action_consscroll_t *) current_action)->flags |= lineAbs;
   ;}
    break;

  case 244:
#line 844 "parser.y"
    {
     ((action_consscroll_t *) current_action)->line = yyvsp[0].val;
   ;}
    break;

  case 245:
#line 848 "parser.y"
    {
     ((action_consscroll_t *) current_action)->line = -yyvsp[0].val;
   ;}
    break;

  case 246:
#line 852 "parser.y"
    {
     ((action_consscroll_t *) current_action)->percent = yyvsp[0].val;
     ((action_consscroll_t *) current_action)->flags |= usePercentage;     
   ;}
    break;

  case 250:
#line 866 "parser.y"
    {
    ;}
    break;

  case 251:
#line 869 "parser.y"
    {
    ;}
    break;

  case 252:
#line 876 "parser.y"
    { 
     if (set_default_action (&default_setmods, &current_action))
       YYABORT;
   ;}
    break;

  case 253:
#line 880 "parser.y"
    { yyval.action = current_action ;}
    break;

  case 254:
#line 882 "parser.y"
    { 
     if (set_default_action (&default_latchmods, &current_action))
       YYABORT;
   ;}
    break;

  case 255:
#line 886 "parser.y"
    { yyval.action = current_action ;}
    break;

  case 256:
#line 888 "parser.y"
    {
     if (set_default_action (&default_lockmods, &current_action))
       YYABORT;
   ;}
    break;

  case 257:
#line 892 "parser.y"
    { yyval.action = current_action ;}
    break;

  case 258:
#line 894 "parser.y"
    {
     if (set_default_action (&default_setgroup, &current_action))
       YYABORT;
   ;}
    break;

  case 259:
#line 898 "parser.y"
    { yyval.action = current_action ;}
    break;

  case 260:
#line 900 "parser.y"
    { 
     if (set_default_action (&default_latchgroup, &current_action))
       YYABORT;
   ;}
    break;

  case 261:
#line 904 "parser.y"
    { yyval.action = current_action ;}
    break;

  case 262:
#line 906 "parser.y"
    {
     if (set_default_action (&default_lockgroup, &current_action))
       YYABORT;
   ;}
    break;

  case 263:
#line 910 "parser.y"
    { yyval.action = current_action ;}
    break;

  case 264:
#line 912 "parser.y"
    { 
     if (set_default_action (&default_moveptr, &current_action))
       YYABORT;
   ;}
    break;

  case 265:
#line 916 "parser.y"
    { yyval.action = current_action ;}
    break;

  case 266:
#line 918 "parser.y"
    {
     if (set_default_action (&default_ptrbtn, &current_action))
       YYABORT;
   ;}
    break;

  case 267:
#line 922 "parser.y"
    { yyval.action = current_action ;}
    break;

  case 268:
#line 924 "parser.y"
    {
     if (set_default_action (&default_lockptrbtn, &current_action))
       YYABORT;
   ;}
    break;

  case 269:
#line 928 "parser.y"
    { yyval.action = current_action ;}
    break;

  case 270:
#line 930 "parser.y"
    {
     if (set_default_action (&default_ptrdflt, &current_action))
       YYABORT;
   ;}
    break;

  case 271:
#line 934 "parser.y"
    { yyval.action = current_action ;}
    break;

  case 272:
#line 936 "parser.y"
    {
     if (set_default_action (&default_setcontrols, &current_action))
       YYABORT;
   ;}
    break;

  case 273:
#line 940 "parser.y"
    { yyval.action = current_action ;}
    break;

  case 274:
#line 942 "parser.y"
    { 
     if (set_default_action (&default_lockcontrols, &current_action))
       YYABORT;
   ;}
    break;

  case 275:
#line 946 "parser.y"
    { yyval.action = current_action ;}
    break;

  case 276:
#line 948 "parser.y"
    { yyval.action = calloc (1, sizeof (xkb_action_t)); yyval.action->type = SA_TerminateServer ;}
    break;

  case 277:
#line 950 "parser.y"
    {
     if (set_default_action (&default_switchscrn, &current_action))
       YYABORT;
   ;}
    break;

  case 278:
#line 954 "parser.y"
    { yyval.action = current_action ;}
    break;

  case 279:
#line 956 "parser.y"
    { 
     if (set_default_action (&default_consscroll, &current_action))
       YYABORT;
   ;}
    break;

  case 280:
#line 960 "parser.y"
    { yyval.action = current_action ;}
    break;

  case 281:
#line 962 "parser.y"
    {
    if (set_default_action (&default_isolock, &current_action))
      YYABORT;
  ;}
    break;

  case 282:
#line 966 "parser.y"
    { yyval.action = current_action ;}
    break;

  case 283:
#line 968 "parser.y"
    { yyval.action = calloc (1, sizeof (xkb_action_t)); yyval.action->type = SA_NoAction ;}
    break;

  case 284:
#line 970 "parser.y"
    { yyval.action = calloc (1, sizeof (xkb_action_t)); yyval.action->type = SA_NoAction ;}
    break;

  case 285:
#line 971 "parser.y"
    { yyerror ("Invalid action\n") ;}
    break;

  case 286:
#line 976 "parser.y"
    { current_action = &default_setmods   ;}
    break;

  case 288:
#line 977 "parser.y"
    { current_action = &default_latchmods ;}
    break;

  case 290:
#line 978 "parser.y"
    { current_action = &default_lockmods ;}
    break;

  case 292:
#line 979 "parser.y"
    { current_action = &default_setgroup ;}
    break;

  case 294:
#line 980 "parser.y"
    { current_action = &default_latchgroup ;}
    break;

  case 296:
#line 981 "parser.y"
    { current_action = &default_lockgroup ;}
    break;

  case 298:
#line 982 "parser.y"
    { current_action = &default_moveptr ;}
    break;

  case 300:
#line 983 "parser.y"
    { current_action = &default_ptrbtn ;}
    break;

  case 302:
#line 984 "parser.y"
    { current_action = &default_lockptrbtn ;}
    break;

  case 304:
#line 985 "parser.y"
    { current_action = &default_ptrdflt ;}
    break;

  case 306:
#line 986 "parser.y"
    { current_action = &default_setcontrols ;}
    break;

  case 308:
#line 987 "parser.y"
    { current_action = &default_lockcontrols ;}
    break;

  case 310:
#line 988 "parser.y"
    { current_action = &default_isolock ;}
    break;

  case 312:
#line 989 "parser.y"
    { current_action = &default_switchscrn ;}
    break;

  case 316:
#line 1000 "parser.y"
    { yyval.val = yyvsp[0].val - 1 ;}
    break;

  case 317:
#line 1001 "parser.y"
    { yyval.val = yyvsp[0].val - 1;}
    break;

  case 318:
#line 1002 "parser.y"
    { yyval.val = yyvsp[0].val - 1;}
    break;

  case 319:
#line 1007 "parser.y"
    { set_rmod_keycode (yyvsp[0].str, current_rmod) ;}
    break;

  case 320:
#line 1008 "parser.y"
    { ksrm_add (yyvsp[0].val, current_rmod)  ;}
    break;

  case 321:
#line 1009 "parser.y"
    { set_rmod_keycode (yyvsp[0].str, current_rmod) ;}
    break;

  case 322:
#line 1010 "parser.y"
    { ksrm_add (yyvsp[0].val, current_rmod)  ;}
    break;

  case 323:
#line 1015 "parser.y"
    { close_include () ;}
    break;

  case 324:
#line 1016 "parser.y"
    { close_include () ;}
    break;

  case 328:
#line 1026 "parser.y"
    { 
    key_new (yyvsp[0].str);
    current_group = 0;
  ;}
    break;

  case 330:
#line 1031 "parser.y"
    { 
    key_delete (yyvsp[0].str);
    key_new (yyvsp[0].str);
    current_group = 0;
  ;}
    break;

  case 332:
#line 1037 "parser.y"
    { 
    key_delete (yyvsp[0].str);
    key_new (yyvsp[0].str);
    current_group = 0;
  ;}
    break;

  case 334:
#line 1042 "parser.y"
    { current_rmod = yyvsp[0].val ;}
    break;

  case 336:
#line 1044 "parser.y"
    { include_sections (yyvsp[0].str, XKBSYMBOLS, "symbols", yyvsp[-1].mergemode) ;}
    break;

  case 339:
#line 1047 "parser.y"
    {current_key = default_key ;}
    break;

  case 341:
#line 1048 "parser.y"
    { yyerror ("Error in symbol section\n") ;}
    break;

  case 342:
#line 1053 "parser.y"
    { yyval.val = XStringToKeysym (yyvsp[0].str); ;}
    break;

  case 343:
#line 1054 "parser.y"
    { yyval.val = yyvsp[0].val + '0' ;}
    break;

  case 345:
#line 1062 "parser.y"
    { key_set_keysym (current_key, current_group, symbolcnt++, yyvsp[0].val) ;}
    break;

  case 346:
#line 1063 "parser.y"
    { symbolcnt = 0 ;}
    break;

  case 347:
#line 1064 "parser.y"
    { 
     symbolcnt = 0;
     key_set_keysym (current_key, current_group, symbolcnt++, yyvsp[0].val);
   ;}
    break;

  case 348:
#line 1073 "parser.y"
    { key_set_action (current_key, current_group, actioncnt++, yyvsp[0].action) ;}
    break;

  case 349:
#line 1074 "parser.y"
    { actioncnt = 0 ;}
    break;

  case 350:
#line 1075 "parser.y"
    { key_set_action ( current_key, current_group, actioncnt++, yyvsp[0].action) ;}
    break;

  case 353:
#line 1086 "parser.y"
    {
     current_key->groups[yyvsp[-3].val].keytype = keytype_find (yyvsp[0].str);
   ;}
    break;

  case 354:
#line 1089 "parser.y"
    { yyerror ("Invalid group.\n") ;}
    break;

  case 355:
#line 1091 "parser.y"
    { current_key->groups[current_group].keytype = keytype_find (yyvsp[0].str) ;}
    break;

  case 356:
#line 1092 "parser.y"
    { symbolcnt = 0 ;}
    break;

  case 357:
#line 1092 "parser.y"
    { current_group = yyvsp[-1].val ;}
    break;

  case 358:
#line 1093 "parser.y"
    {
     current_key->numgroups = (yyvsp[-6].val + 1) > current_key->numgroups ?
       (yyvsp[-6].val + 1) : current_key->numgroups;
   ;}
    break;

  case 359:
#line 1097 "parser.y"
    {actioncnt = 0 ;}
    break;

  case 360:
#line 1097 "parser.y"
    { current_group = yyvsp[-1].val ;}
    break;

  case 361:
#line 1098 "parser.y"
    {
     current_key->numgroups = (yyvsp[-6].val + 1) > current_key->numgroups ?
       (yyvsp[-6].val + 1) : current_key->numgroups;   
   ;}
    break;

  case 362:
#line 1103 "parser.y"
    { current_key->mods.vmods = yyvsp[0].modmap.vmods ;}
    break;

  case 363:
#line 1105 "parser.y"
    {
     current_group++;
     current_key->numgroups = current_group > current_key->numgroups ? 
       current_group : current_key->numgroups;   
  ;}
    break;

  case 364:
#line 1111 "parser.y"
    {
     current_group++;
     current_key->numgroups = current_group > current_key->numgroups ?
       current_group : current_key->numgroups;   
   ;}
    break;

  case 365:
#line 1116 "parser.y"
    {;}
    break;

  case 366:
#line 1120 "parser.y"
    {;}
    break;

  case 367:
#line 1121 "parser.y"
    {;}
    break;

  case 370:
#line 1125 "parser.y"
    {
    current_key->flags &= ~(KEYREPEAT | KEYNOREPEAT);
    current_key->flags |= yyvsp[0].val;
  ;}
    break;

  case 371:
#line 1135 "parser.y"
    { skipsection () ;}
    break;

  case 373:
#line 1136 "parser.y"
    { skipsection () ;}
    break;


    }

/* Line 999 of yacc.c.  */
#line 3497 "parser.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 1139 "parser.y"

/* Skip all tokens until a section of the type SECTIONSYMBOL with the
   name SECTIONNAME is found.  */
static void
skip_to_sectionname (char *sectionname, int sectionsymbol)
{
  int symbol;

  do 
    {
      do 
	{
	  symbol = yylex ();
	} while ((symbol != YY_NULL) && (symbol != sectionsymbol));

      if (symbol != YY_NULL)
        symbol = yylex ();

      if (symbol == YY_NULL) {
        char tmpbuf[1024] = 0;
        snprintf(tmpbuf, 1023, "cannot find section %s", sectionanme);
        yyerror(tmpbuf);
        exit(1);
      } else if (symbol != STR)
	continue;

    } while (strcmp (yylval.str, sectionname));
}

/* Skip all tokens until the default section is found.  */
static void
skip_to_defaultsection (void)
{
  int symbol;

  /* Search the default section.  */
  do
    {
      symbol = yylex ();
    } while (symbol != DEFAULT);

  do
    {
      symbol = yylex ();
    } while (symbol != '{');
  scanner_unput ('{');
}

/* Include a single file. INCL is the filename. SECTIONSYMBOL is the
   token that marks the beginning of the section. DIRNAME is the name
   of the directory from where the includefiles must be loaded. NEW_MM
   is the mergemode that should be used.  */
static error_t
include_section (char *incl, int sectionsymbol, char *dirname,
		 mergemode new_mm)
{
  void include_file (FILE *, mergemode, char *);
  char *filename;
  char *sectionname = NULL;
  FILE *includefile;
  
  sectionname = strchr (incl, '(');
  if (sectionname)
    {
      int snlen;

      snlen = strlen (sectionname);
      if (sectionname[snlen-1] != ')')
	return 0;
      sectionname[snlen-1] = '\0';
      sectionname[0] = '\0';
      sectionname++;

      if (asprintf (&filename, "%s/%s", dirname, incl) < 0)
	return ENOMEM;
    }
  else
    {
      if (asprintf (&filename, "%s/%s", dirname, incl) < 0)
	return ENOMEM;
    }

  includefile = fopen (strdup (filename), "r");
  
  if (includefile == NULL)
    {
      fprintf (stderr, "Couldn't open include file \"%s\"\n", filename);
      exit (EXIT_FAILURE);
    }
  
  include_file (includefile, new_mm, strdup (filename));

  /* If there is a sectionname not the entire file should be included,
     the scanner should be positioned at the required section.  */
  if (sectionname)
      skip_to_sectionname (sectionname, sectionsymbol);
  else
      skip_to_defaultsection ();

  return 0;
}

/* Include multiple file sections, seperated by '+'. INCL is the
   include string. SECTIONSYMBOL is the token that marks the beginning
   of the section. DIRNAME is the name of the directory from where the
   includefiles must be loaded. NEW_MM is the mergemode that should be
   used.  */
static error_t
include_sections (char *incl, int sectionsymbol, char *dirname,
		  mergemode new_mm)
{
  char *curstr;
  char *s;

  if (new_mm == defaultmm)
    new_mm = merge_mode;

/*   printf ("dir: %s - include: %s: %d\n", dirname, incl, new_mm); */
  /* Cut of all includes, starting with the first.  The includes are
     pushed on the stack in reversed order.  */
  do {
    curstr = strrchr (incl, '+');
    if (curstr)
      {
	curstr[0] = '\0';
	curstr++;

	s = strdup (curstr);
	if (s == NULL)
	  return ENOMEM;
	
	include_section (s, sectionsymbol, dirname, new_mm);
	free (s);
      }
  } while (curstr);
  
  s = strdup (incl);
  if (s == NULL)
      return ENOMEM;
  
  include_section (s, sectionsymbol, dirname, new_mm);
  free (s);

  return 0;
}

/* Skip all tokens until the end of the section is reached.  */
static void
skipsection (void)
{
  /* Pathesensis counter.  */
  int p = 0;
  while (p >= 0)
    {
      int symbol = yylex ();
      if (symbol == '{')
	p++;
      if (symbol == '}')
	p--;
    }
  scanner_unput ('}');
}

/* Initialize the default action with the default DEF.  */
static error_t
set_default_action (struct xkb_action *def, 
		    struct xkb_action **newact)
{
  struct xkb_action *newaction;
  newaction = malloc (sizeof (struct xkb_action));
  if (newaction == NULL)
    return ENOMEM;
  memcpy (newaction, def, sizeof (struct xkb_action));  
  
  *newact = newaction;
  
  return 0;
}

/* Remove all keysyms bound to the group GROUP or the key KEY.  */
static void
remove_symbols (struct key *key, group_t group)
{
  //  printf ("rem: group: %d\n", group);
  if (key->groups[group].symbols)
    {
      free (key->groups[group].symbols);
      key->groups[group].symbols = NULL;
      key->groups[group].width = 0;
    }
}

/* Set the keysym KS for key KEY on group GROUP and level LEVEL.  */
static void
key_set_keysym (struct key *key, group_t group, int level, symbol ks)
{
  symbol *keysyms = key->groups[group].symbols;

  if ((level + 1) > key->groups[group].width)
    {
      keysyms = realloc (keysyms, level + 1);

      if (!keys)
	{
	  fprintf (stderr, "No mem\n");
	  exit (EXIT_FAILURE);
	}
	 
      key->groups[group].symbols = keysyms;
      key->groups[group].width++;
    }
  else
    /* For NoSymbol leave the old symbol intact.  */
    if (!ks)
      return;

     
  keysyms[level++] = ks;
}

/* Set the action ACTION for key KEY on group GROUP and level LEVEL.  */
void
key_set_action (struct key *key, group_t group, int level, xkb_action_t *action)
{
  xkb_action_t **actions = key->groups[group].actions;
  size_t width = key->groups[group].actionwidth;

  if ((size_t) (level + 1) > width)
    {
      actions = realloc (actions, level + 1);
      /* Previous levels have no actions defined.  */
      memset (&actions[level - 1], 0, level - width);

      if (!keys)
	{
	  fprintf (stderr, "No mem\n");
	  exit (EXIT_FAILURE);
	}
	 
      key->groups[group].actions = actions;
      key->groups[group].actionwidth += level - width + 1;
    }

  actions[level++] = action;
}

/* Delete keycode to keysym mapping.  */
void
key_delete (char *keyname)
{
  group_t group;
  keycode_t kc = keyname_find (keyname);
  
  current_key = &keys[kc];
  for (group = 0; group < current_key->numgroups; group++)
    remove_symbols (current_key, group);
  memset (current_key, 0, sizeof (struct key));

}

/* Create a new keycode to keysym mapping, check if the old one should
   be removed or preserved.  */
static void
key_new (char *keyname)
{
  group_t group;

  int isempty (char *mem, int size)
    {
      int i;
      for (i = 0; i < size; i++)
	if (mem[i])
	  return 0;
      return 1;
    }

  keycode_t kc = keyname_find (keyname);

  if (merge_mode == augment)
    {
      if (!isempty ((char *) &keys[kc], sizeof (struct key)))
	{
	  current_key = &dummy_key;
	  return;
	}
      else
	current_key = &keys[kc];
    }
    
  if (merge_mode == override)
      current_key = &keys[kc];

  if (merge_mode == replace)
    {
      key_delete (keyname);
      current_key = &keys[kc];
    }

  if (current_key->numgroups == 0 || merge_mode == replace)
    {
      /* Clone the default key.  */
      memcpy (current_key, default_key, sizeof (struct key));
      for (group = 0; group < 3; group++)
	{
	  current_key->groups[group].symbols = NULL;
	  current_key->groups[group].actions = NULL;
	  current_key->groups[group].actionwidth = 0;
	  current_key->groups[group].width = 0;
	}
    }
}

/* Load the XKB configuration from the section XKBKEYMAP in the
   keymapfile XKBKEYMAPFILE. Use XKBDIR as root directory for relative
   pathnames.  */
error_t
parse_xkbconfig (char *xkbdir, char *xkbkeymapfile, char *xkbkeymap)
{
  error_t err;
  char *cwd = getcwd (NULL, 0);
  extern FILE *yyin;
  extern char *filename;

  //  xkbkeymap = 0;

  //  xkbkeymapfile = 0;

  //  xkbdir = "/etc/X11/xkb";
  //  xkbdir ="/home/marco/xkb";
  //  xkbkeymapfile = "keymap/hurd";
  //  xkbkeymap = "hack";
    
  debug_printf ("Dir: %s, file: %s sect: %s\n", xkbdir, xkbkeymapfile, xkbkeymap);

  //  xkbkeymapfile = "default.xkb";
  //xkbkeymap = "us";
  //  yydebug = 1;
  if (xkbkeymapfile)
    {
      filename = xkbkeymapfile;

      if (chdir (xkbdir) == -1)
	{
	  fprintf (stderr, "Could not set \"%s\" as the active directory\n", 
		   xkbdir);
	  return errno;
	}

      yyin = fopen (xkbkeymapfile, "r");
      if (yyin == NULL)
	{
	  fprintf (stderr, "Couldn't open keymap file\n");
	  return errno;
	}

      if (xkbkeymap)
	skip_to_sectionname (xkbkeymap, XKBKEYMAP);
    } 
  else /* Use defaults.  */
    {
      extern char *default_xkb_keymap;
      filename = "<<INTERNAL>>";

      yyin = tmpfile ();
      //yyin = fopen ("TEST", "w+");

      if (yyin == NULL)
	{
	  fprintf (stderr, "Couldn't create tmp file.\n");
	  return errno;
	}
      /* XXX: error handling.  */
      fprintf (yyin, "%s\n", default_xkb_keymap);
      
      rewind (yyin);
    }
  err = yyparse ();
  fclose (yyin);

  if (err || yynerrs > 0)
    return EINVAL;

  if (xkbkeymapfile)
    {
      if (chdir (cwd) == -1)
	{
	  fprintf (stderr, 
		   "Could not set \"%s\" as the active directory\n", cwd);
	  return errno;
	}
    }

  /* Apply keysym to realmodifier mappings.  */
  ksrm_apply ();

  free (cwd);
  return 0;
}

