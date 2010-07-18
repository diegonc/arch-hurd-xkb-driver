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
/* Line 1240 of yacc.c.  */
#line 258 "parser.tab.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



