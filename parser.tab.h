/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1685 of yacc.c  */
#line 88 "parser.y"

  int val;
  char *str;
  modmap_t modmap;
  struct xkb_action *action;
  double dbl;
  mergemode mergemode;



/* Line 1685 of yacc.c  */
#line 168 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


