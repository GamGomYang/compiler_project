/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_CBU2_H_INCLUDED
# define YY_YY_CBU2_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ADD = 258,
     SUB = 259,
     MUL = 260,
     DIV = 261,
     MOD = 262,
     ASSGN = 263,
     ASSGNADD = 264,
     ASSGNSUB = 265,
     ASSGNMUL = 266,
     ASSGNDIV = 267,
     ID = 268,
     NUM = 269,
     STMTEND = 270,
     START = 271,
     END = 272,
     ID2 = 273,
     DECID = 274,
     EQUAL = 275,
     NOTEQUAL = 276,
     GREATEREQUAL = 277,
     GREATER = 278,
     LESS = 279,
     LESSEQUAL = 280,
     INCREASE = 281,
     DECREASE = 282,
     LEFTBLOCK = 283,
     RIGHTBLOCK = 284,
     LEFTPAR = 285,
     RIGHTPAR = 286,
     IF = 287,
     ELSE = 288,
     IFELSE = 289,
     CONDELESS = 290,
     CONDGREATER = 291,
     CONDLESSEQUAL = 292,
     CONDGREATEREQUAL = 293,
     CONDEQUAL = 294,
     CONDNOTEQUAL = 295,
     WHILE = 296,
     INITCONDCOMPARE = 297,
     FOR = 298,
     STMTFOR = 299,
     FORCON = 300,
     FORSTART = 301,
     LOOPEND = 302,
     FORSENTENCE = 303,
     FOREND = 304,
     ONE = 305,
     TWO = 306,
     THREE = 307,
     FOUR = 308,
     FIVE = 309,
     SIX = 310,
     SEVEN = 311,
     EIGHT = 312,
     NINE = 313,
     TEN = 314,
     ZERO = 315
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_CBU2_H_INCLUDED  */
