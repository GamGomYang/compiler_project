/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "cbu2.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

#define DEBUG	0

#define	 MAXSYM	100
#define	 MAXSYMLEN	20
#define	 MAXTSYMLEN	15
#define	 MAXTSYMBOL	MAXSYM/2

#define STMTLIST 500

typedef struct nodeType {
	int token;
	int tokenval;
	struct nodeType *son;
	struct nodeType *brother;
	} Node;

#define YYSTYPE Node*

// variable declaration

int tsymbolcnt=0;
int errorcnt=0;

int label_count = 0;
int condition_label = 0;

int while_count=0;

int for_count=0;
int for_end_count=0;
int callback_counter=0;

int plusplus=1;
int minusminus=1;

int count=0;


FILE *yyin;
FILE *fp;

extern char symtbl[MAXSYM][MAXSYMLEN];
extern int maxsym;
extern int lineno;

void DFSTree(Node*);
Node * MakeOPTree(int, Node*, Node*);
Node * MakeNode(int, int);
Node * MakeListTree(Node*, Node*);
void codegen(Node* );
void prtcode(int, int);
Node *MakeCompareNode(int, Node*, Node*);
Node * Makewhiletree( Node *, Node *,Node *);

void	dwgen();
int	gentemp();
void	assgnstmt(int, int);
void	numassgn(int, int);
void	addstmt(int, int, int);
void	substmt(int, int, int);
int		insertsym(char *);

/* Line 371 of yacc.c  */
#line 139 "cbu2.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "cbu2.h".  */
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

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 265 "cbu2.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   343

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNRULES -- Number of states.  */
#define YYNSTATES  129

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,    10,    12,    15,    20,    23,    28,
      30,    34,    36,    38,    40,    45,    50,    55,    60,    64,
      68,    72,    76,    78,    82,    86,    90,    92,    94,    96,
      98,   102,   105,   107,   109,   111,   113,   115,   117,   119,
     121,   123,   125,   127,   129,   132,   140,   145,   149,   153,
     157,   161,   165,   169,   173,   177,   181,   185,   189,   193,
     197,   203,   209,   214,   217,   218
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    16,    63,    17,    -1,    63,    64,    -1,
      64,    -1,     1,    15,    -1,    13,     8,    67,    15,    -1,
      75,    15,    -1,    13,     8,    75,    15,    -1,    77,    -1,
      43,    80,    79,    -1,    72,    -1,    65,    -1,    66,    -1,
      13,     9,    67,    15,    -1,    13,    10,    67,    15,    -1,
      13,    11,    67,    15,    -1,    13,    12,    67,    15,    -1,
      13,    26,    15,    -1,    13,    27,    15,    -1,    67,     3,
      68,    -1,    67,     4,    68,    -1,    68,    -1,    68,     5,
      69,    -1,    68,     6,    69,    -1,    68,     7,    69,    -1,
      69,    -1,    13,    -1,    14,    -1,    70,    -1,    71,    59,
      71,    -1,    71,    59,    -1,    71,    -1,    50,    -1,    51,
      -1,    52,    -1,    53,    -1,    54,    -1,    55,    -1,    56,
      -1,    57,    -1,    58,    -1,    60,    -1,    73,    -1,    73,
      74,    -1,    32,    30,    76,    31,    28,    63,    29,    -1,
      33,    28,    63,    29,    -1,    68,    20,    68,    -1,    68,
      21,    68,    -1,    68,    22,    68,    -1,    68,    23,    68,
      -1,    68,    24,    68,    -1,    68,    25,    68,    -1,    67,
      39,    67,    -1,    67,    35,    67,    -1,    67,    36,    67,
      -1,    67,    37,    67,    -1,    67,    38,    67,    -1,    67,
      40,    67,    -1,    41,    30,    78,    -1,    83,    31,    28,
      63,    29,    -1,    64,    31,    28,    63,    29,    -1,    30,
      81,    76,    15,    -1,    64,    82,    -1,    -1,    76,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    91,    91,    94,    95,    96,   100,   101,   102,   103,
     104,   105,   106,   107,   110,   111,   112,   113,   117,   118,
     122,   123,   124,   128,   129,   130,   131,   134,   135,   136,
     139,   140,   141,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   156,   157,   160,   163,   167,   168,   169,
     170,   171,   172,   175,   176,   177,   178,   179,   180,   184,
     186,   189,   191,   193,   197,   201
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ADD", "SUB", "MUL", "DIV", "MOD",
  "ASSGN", "ASSGNADD", "ASSGNSUB", "ASSGNMUL", "ASSGNDIV", "ID", "NUM",
  "STMTEND", "START", "END", "ID2", "DECID", "EQUAL", "NOTEQUAL",
  "GREATEREQUAL", "GREATER", "LESS", "LESSEQUAL", "INCREASE", "DECREASE",
  "LEFTBLOCK", "RIGHTBLOCK", "LEFTPAR", "RIGHTPAR", "IF", "ELSE", "IFELSE",
  "CONDELESS", "CONDGREATER", "CONDLESSEQUAL", "CONDGREATEREQUAL",
  "CONDEQUAL", "CONDNOTEQUAL", "WHILE", "INITCONDCOMPARE", "FOR",
  "STMTFOR", "FORCON", "FORSTART", "LOOPEND", "FORSENTENCE", "FOREND",
  "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE",
  "TEN", "ZERO", "$accept", "program", "stmt_list", "stmt",
  "assgn_oprator", "plusplus_minusminus", "expr", "term", "fact", "NUMBER",
  "decimal_NUMBER", "if_sentence", "if_stmt", "else_stmt", "compare",
  "cond_compare", "while_opration", "while_end", "for_opration",
  "for_condition", "for_begin", "for_end", "init_cond_compare", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    64,    65,    65,    65,    65,    66,    66,
      67,    67,    67,    68,    68,    68,    68,    69,    69,    69,
      70,    70,    70,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    72,    72,    73,    74,    75,    75,    75,
      75,    75,    75,    76,    76,    76,    76,    76,    76,    77,
      78,    79,    80,    81,    82,    83
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     2,     4,     2,     4,     1,
       3,     1,     1,     1,     4,     4,     4,     4,     3,     3,
       3,     3,     1,     3,     3,     3,     1,     1,     1,     1,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     7,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     5,     4,     2,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    27,    28,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     0,
       4,    12,    13,     0,    26,    29,    32,    11,    43,     0,
       9,     1,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    44,     7,    27,
       0,    22,     0,     0,    22,     0,     0,     0,    18,    19,
       0,     0,    65,    59,     0,    64,     0,     0,    10,    23,
      24,    25,    47,    48,    49,    50,    51,    52,    30,     0,
       0,     0,     6,     8,    14,    15,    16,    17,     0,     0,
       0,     0,     0,     0,     0,     0,    63,     0,     0,     0,
      20,    21,    54,    55,    56,    57,    53,    58,     0,     0,
      62,     0,    46,     0,     0,     0,    45,    60,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    19,    20,    21,    22,    70,    64,    24,    25,
      26,    27,    28,    57,    29,    71,    30,    73,    78,    43,
      76,   106,    74
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -83
static const yytype_int16 yypact[] =
{
      -8,    42,    30,     8,     2,   -83,    15,    17,    24,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,    96,
     -83,   -83,   -83,   109,   -83,   -83,   -21,   -83,     7,    51,
     -83,   -83,   -83,   272,   272,   272,   272,   272,    58,    60,
     272,   272,   255,   255,   -83,   -83,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   283,    29,   -83,   -83,   -83,
      16,   109,    62,    18,    10,    31,    61,   123,   -83,   -83,
      23,    53,   -83,   -83,    55,   -83,   272,    56,   -83,   -83,
     -83,   -83,    10,    10,    10,    10,    10,    10,   -83,    42,
     272,   272,   -83,   -83,   -83,   -83,   -83,   -83,   272,   272,
     272,   272,   272,   272,    73,    75,   -83,    89,    83,   128,
      10,    10,    78,    78,    78,    78,    78,    78,    42,    42,
     -83,    42,   -83,   160,   192,   224,   -83,   -83,   -83
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -83,   -83,   -82,   -18,   -83,   -83,   -31,    -1,    32,   -83,
      57,   -83,   -83,   -83,    86,   -32,   -83,   -83,   -83,   -83,
     -83,   -83,   -83
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      23,    45,    60,    63,    65,    66,    67,   109,     1,    72,
      33,    34,    35,    36,    37,    46,    47,    48,    23,    90,
      91,    90,    91,    32,    75,    77,    90,    91,    38,    39,
      31,    92,    61,    94,    90,    91,   123,   124,    55,   125,
      56,    23,    23,     3,   107,    40,    95,    41,    82,    83,
      84,    85,    86,    87,    42,     4,     5,    89,    98,    99,
     100,   101,   102,   103,    90,    91,    58,   112,   113,   114,
     115,   116,   117,    68,     6,    69,    96,    93,    79,    80,
      81,    90,    91,     7,   104,     8,   105,   108,    23,   110,
     111,    45,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   118,    18,   119,   120,    45,    45,    45,    23,     4,
       5,   121,    88,    44,    46,    47,    48,    23,    23,    62,
      23,     0,    23,    23,    23,     0,    90,    91,     6,    49,
      50,    51,    52,    53,    54,     0,     0,     7,    97,     8,
       0,     4,     5,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     0,    18,   122,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       0,     8,     0,     4,     5,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     0,    18,   126,
       0,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     0,     8,     0,     4,     5,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
      18,   127,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     0,     8,     0,     4,     5,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     0,    18,   128,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     8,     4,     5,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     0,    18,    59,     5,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     8,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     0,    18,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     0,    18,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     0,    18
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-83)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       1,    19,    33,    34,    35,    36,    37,    89,    16,    41,
       8,     9,    10,    11,    12,     5,     6,     7,    19,     3,
       4,     3,     4,    15,    42,    43,     3,     4,    26,    27,
       0,    15,    33,    15,     3,     4,   118,   119,    59,   121,
      33,    42,    43,     1,    76,    30,    15,    30,    49,    50,
      51,    52,    53,    54,    30,    13,    14,    28,    35,    36,
      37,    38,    39,    40,     3,     4,    15,    98,    99,   100,
     101,   102,   103,    15,    32,    15,    15,    15,    46,    47,
      48,     3,     4,    41,    31,    43,    31,    31,    89,    90,
      91,   109,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    28,    60,    28,    15,   123,   124,   125,   109,    13,
      14,    28,    55,    17,     5,     6,     7,   118,   119,    33,
     121,    -1,   123,   124,   125,    -1,     3,     4,    32,    20,
      21,    22,    23,    24,    25,    -1,    -1,    41,    15,    43,
      -1,    13,    14,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    60,    29,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    43,    -1,    13,    14,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    60,    29,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    43,    -1,    13,    14,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    29,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    43,    -1,    13,    14,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    60,    29,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    13,    14,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    60,    13,    14,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    60,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    60
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    62,     1,    13,    14,    32,    41,    43,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    60,    63,
      64,    65,    66,    68,    69,    70,    71,    72,    73,    75,
      77,     0,    15,     8,     9,    10,    11,    12,    26,    27,
      30,    30,    30,    80,    17,    64,     5,     6,     7,    20,
      21,    22,    23,    24,    25,    59,    33,    74,    15,    13,
      67,    68,    75,    67,    68,    67,    67,    67,    15,    15,
      67,    76,    76,    78,    83,    64,    81,    64,    79,    69,
      69,    69,    68,    68,    68,    68,    68,    68,    71,    28,
       3,     4,    15,    15,    15,    15,    15,    15,    35,    36,
      37,    38,    39,    40,    31,    31,    82,    76,    31,    63,
      68,    68,    67,    67,    67,    67,    67,    67,    28,    28,
      15,    28,    29,    63,    63,    63,    29,    29,    29
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1792 of yacc.c  */
#line 91 "cbu2.y"
    { if (errorcnt == 0) { codegen((yyvsp[(2) - (3)])); dwgen(); } }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 94 "cbu2.y"
    { (yyval) = MakeListTree((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 95 "cbu2.y"
    { (yyval) = MakeListTree(NULL, (yyvsp[(1) - (1)])); }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 96 "cbu2.y"
    { errorcnt++; yyerrok; }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 100 "cbu2.y"
    { (yyvsp[(1) - (4)])->token = ID2; (yyval) = MakeOPTree(ASSGN, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])); }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 101 "cbu2.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 102 "cbu2.y"
    { (yyvsp[(1) - (4)])->token = ID2; (yyval) = MakeOPTree(ASSGN, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 104 "cbu2.y"
    { (yyval)=MakeOPTree(FOR, (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 110 "cbu2.y"
    {(yyvsp[(1) - (4)])->token = DECID; (yyval)=MakeOPTree(ASSGNADD, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 111 "cbu2.y"
    {(yyvsp[(1) - (4)])->token = DECID; (yyval)=MakeOPTree(ASSGNSUB, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 112 "cbu2.y"
    {(yyvsp[(1) - (4)])->token = DECID; (yyval)=MakeOPTree(ASSGNMUL, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 113 "cbu2.y"
    {(yyvsp[(1) - (4)])->token = DECID; (yyval)=MakeOPTree(ASSGNDIV, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 117 "cbu2.y"
    { (yyvsp[(1) - (3)])->token = DECID; (yyval)=MakeOPTree(INCREASE, (yyvsp[(1) - (3)]), NULL);}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 118 "cbu2.y"
    { (yyvsp[(1) - (3)])->token = DECID; (yyval)=MakeOPTree(DECREASE, (yyvsp[(1) - (3)]), NULL);}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 122 "cbu2.y"
    { (yyval) = MakeOPTree(ADD, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 123 "cbu2.y"
    { (yyval) = MakeOPTree(SUB, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 128 "cbu2.y"
    { (yyval) = MakeOPTree(MUL, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 129 "cbu2.y"
    { (yyval) = MakeOPTree(DIV, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 130 "cbu2.y"
    { (yyval) = MakeOPTree(MOD, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 134 "cbu2.y"
    { /* ID node is created in lex */ }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 135 "cbu2.y"
    { /* NUM node is created in lex */ }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 139 "cbu2.y"
    { (yyval) = MakeNode(NUM, (yyvsp[(1) - (3)])->tokenval * 10 + (yyvsp[(3) - (3)])->tokenval); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 140 "cbu2.y"
    { (yyval) = MakeNode(NUM, (yyvsp[(1) - (2)])->tokenval * 10); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 141 "cbu2.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 144 "cbu2.y"
    { (yyval) = MakeNode(NUM, 1); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 145 "cbu2.y"
    { (yyval) = MakeNode(NUM, 2); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 146 "cbu2.y"
    { (yyval) = MakeNode(NUM, 3); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 147 "cbu2.y"
    { (yyval) = MakeNode(NUM, 4); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 148 "cbu2.y"
    { (yyval) = MakeNode(NUM, 5); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 149 "cbu2.y"
    { (yyval) = MakeNode(NUM, 6); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 150 "cbu2.y"
    { (yyval) = MakeNode(NUM, 7); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 151 "cbu2.y"
    { (yyval) = MakeNode(NUM, 8); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 152 "cbu2.y"
    { (yyval) = MakeNode(NUM, 9); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 153 "cbu2.y"
    {(yyval) = MakeNode(NUM, 0);}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 157 "cbu2.y"
    { (yyval)=MakeOPTree(IFELSE, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 160 "cbu2.y"
    { (yyval)=MakeOPTree(IF, (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)])); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 163 "cbu2.y"
    { (yyval)=MakeOPTree(ELSE, (yyvsp[(3) - (4)]), NULL); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 167 "cbu2.y"
    { (yyval) = MakeCompareNode(EQUAL, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 168 "cbu2.y"
    { (yyval) = MakeCompareNode(NOTEQUAL, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 169 "cbu2.y"
    { (yyval) = MakeCompareNode(GREATEREQUAL, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 170 "cbu2.y"
    { (yyval) = MakeCompareNode(GREATER, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 171 "cbu2.y"
    { (yyval) = MakeCompareNode(LESS, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 172 "cbu2.y"
    { (yyval) = MakeCompareNode(LESSEQUAL, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 175 "cbu2.y"
    { (yyval)=MakeOPTree(CONDEQUAL, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 176 "cbu2.y"
    { (yyval)=MakeOPTree(CONDELESS, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 177 "cbu2.y"
    { (yyval)=MakeOPTree(CONDGREATER, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 178 "cbu2.y"
    { (yyval)=MakeOPTree(CONDLESSEQUAL, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 179 "cbu2.y"
    { (yyval)=MakeOPTree(CONDGREATEREQUAL, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 180 "cbu2.y"
    { (yyval)=MakeOPTree(CONDNOTEQUAL, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 184 "cbu2.y"
    { (yyval)=MakeOPTree(WHILE, (yyvsp[(2) - (3)]), NULL); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 186 "cbu2.y"
    { (yyval)=MakeListTree((yyvsp[(1) - (5)]), (yyvsp[(5) - (5)])); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 189 "cbu2.y"
    {(yyval)=MakeOPTree(STMTFOR, (yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 191 "cbu2.y"
    {(yyval)=MakeOPTree(FORCON, (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 193 "cbu2.y"
    {(yyval)=MakeOPTree(FORSTART, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 197 "cbu2.y"
    { (yyval)=MakeNode(LOOPEND, LOOPEND); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 201 "cbu2.y"
    { (yyval)=MakeOPTree(INITCONDCOMPARE, (yyvsp[(1) - (1)]), NULL); }
    break;


/* Line 1792 of yacc.c  */
#line 1953 "cbu2.c"
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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
		      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 203 "cbu2.y"

int main(int argc, char *argv[]) 
{
	printf("#2022041052 Kimgeumyoung compiler project 2024 \n");
	printf("gam language\n");
	
	if (argc == 2)
		yyin = fopen(argv[1], "r");
	else {
		printf("Usage: cbu2 inputfile\noutput file is 'a.asm'\n");
		return(0);
		}
		
	fp=fopen("a.asm", "w");
	
	yyparse();
	
	fclose(yyin);
	fclose(fp);

	if (errorcnt==0) 
		{ printf("Successfully compiled. Assembly code is in 'a.asm'.\n");}
}

yyerror(s)
char *s;
{
	printf("%s (line %d)\n", s, lineno);
}

Node* MakeCompareNode(int token, Node* arg1, Node* arg2){
    Node* newnode = MakeNode(token, token);
    newnode->son = arg1;
    arg1->brother = arg2;
    return newnode;
}



Node * MakeOPTree(int op, Node* operand1, Node* operand2)
{
Node * newnode;

	newnode = (Node *)malloc(sizeof (Node));
	newnode->token = op;
	newnode->tokenval = op;
	newnode->son = operand1;
	newnode->brother = NULL;
	operand1->brother = operand2;
	return newnode;
}

Node * MakeNode(int token, int operand)
{
Node * newnode;

	newnode = (Node *) malloc(sizeof (Node));
	newnode->token = token;
	newnode->tokenval = operand; 
	newnode->son = newnode->brother = NULL;
	return newnode;
}



Node * MakeListTree(Node* operand1, Node* operand2)
{
Node * newnode;
Node * node;

	if (operand1 == NULL){
		newnode = (Node *)malloc(sizeof (Node));
		newnode->token = newnode-> tokenval = STMTLIST;
		newnode->son = operand2;
		newnode->brother = NULL;
		return newnode;
		}
	else {
		node = operand1->son;
		while (node->brother != NULL) node = node->brother;
		node->brother = operand2;
		return operand1;
		}
}

void codegen(Node * root)
{
	DFSTree(root);
}

void DFSTree(Node * n)
{
	Node * brother;
	if (n==NULL) return;
	DFSTree(n->son);
	if (n->token == IF) {
	if(n->brother != NULL) {
	if(n->brother->token == ELSE) {
	fprintf(fp, "GOTO L%d\n", count+1);
			}
		}
	}
	prtcode(n->token, n->tokenval);
	DFSTree(n->brother);
	
}

void prtcode(int token, int val)
{
	switch (token) {
	case ID:
		fprintf(fp,"RVALUE %s\n", symtbl[val]);
		break;
	case ID2:
		fprintf(fp, "LVALUE %s\n", symtbl[val]);
		break;
	case NUM:
		fprintf(fp, "PUSH %d\n", val);
		break;
	case DECID:
		fprintf(fp, "LVALUE %s\n", symtbl[val]); 
		fprintf(fp, "RVALUE %s\n", symtbl[val]);
		break;
	case ADD:
		fprintf(fp, "+\n");
		break;
	case SUB:
		fprintf(fp, "-\n");
		break;
	case MUL:
		fprintf(fp, "*\n");
		break;
	case DIV:
		fprintf(fp, "/\n");
		break;
	case ASSGN:
		fprintf(fp, ":=\n");
		break;
	case ASSGNADD:
		fprintf(fp, "+\n");
		fprintf(fp, ":=\n");
		break;
	case ASSGNSUB:
		fprintf(fp, "-\n");
		fprintf(fp, ":=\n");
		break;
	case ASSGNMUL:
		fprintf(fp, "*\n");
		fprintf(fp, ":=\n");
		break;
	case ASSGNDIV:
		fprintf(fp, "/\n");
		fprintf(fp, ":=\n");
		break;
	case INCREASE:
		fprintf(fp, "PUSH %d\n", plusplus);
		fprintf(fp, "+\n");
		fprintf(fp, ":=\n");
		break;
	case DECREASE:
		fprintf(fp, "PUSH %d\n", minusminus);
		fprintf(fp, "-\n");
		fprintf(fp, ":=\n");
		break;
    case EQUAL:
	    fprintf(fp, "-\n");
        fprintf(fp, "GOFALSE label%d\n", label_count);
        fprintf(fp, "PUSH 0\n"); 
        fprintf(fp, "GOTO label%d\n", label_count + 1);
        fprintf(fp, "LABEL label%d\n", label_count++);
        fprintf(fp, "PUSH 1\n"); 
        fprintf(fp, "LABEL label%d\n", label_count++);
        break;

    case NOTEQUAL:
    	fprintf(fp, "-\n");
        fprintf(fp, "GOFALSE label%d\n", label_count);
        fprintf(fp, "PUSH 1\n"); 
        fprintf(fp, "GOTO label%d\n", label_count + 1);
        fprintf(fp, "LABEL label%d\n", label_count++);
        fprintf(fp, "PUSH 0\n"); 
        fprintf(fp, "LABEL label%d\n", label_count++);
        break;
	
    case GREATER:
        fprintf(fp, "-\n");
        fprintf(fp, "GOPLUS condition%d\n", condition_label);
        fprintf(fp, "PUSH 0\n");
        fprintf(fp, "GOTO end%d\n", label_count);
        fprintf(fp, "LABEL condition%d\n", condition_label++);
        fprintf(fp, "PUSH 1\n");
        fprintf(fp, "LABEL end%d\n", label_count++);
        break;
    case LESS:
        fprintf(fp, "-\n");
        fprintf(fp, "GOMINUS condition%d\n", condition_label);
        fprintf(fp, "PUSH 0\n");
        fprintf(fp, "GOTO end%d\n", label_count);
        fprintf(fp, "LABEL condition%d\n", condition_label++);
        fprintf(fp, "PUSH 1\n");
        fprintf(fp, "LABEL end%d\n", label_count++);
        break;
    case GREATEREQUAL:
        fprintf(fp, "-\n");
        fprintf(fp, "GOPLUS condition%d\n", condition_label);
        fprintf(fp, "PUSH 0\n");
        fprintf(fp, "GOTO end%d\n", label_count);
        fprintf(fp, "LABEL condition%d\n", condition_label++);
        fprintf(fp, "PUSH 1\n");
        fprintf(fp, "LABEL end%d\n", label_count++);
        break;
    case LESSEQUAL:
        fprintf(fp, "-\n");
        fprintf(fp, "GOMINUS condition%d\n", condition_label);
        fprintf(fp, "PUSH 0\n");
        fprintf(fp, "GOTO end%d\n", label_count);
        fprintf(fp, "LABEL condition%d\n", condition_label++);
        fprintf(fp, "PUSH 1\n");
        fprintf(fp, "LABEL end%d\n", label_count++);
        break;
    case IF:
      		fprintf(fp, "LABEL L%d\n", count++);
      		break;
	case IFELSE:
		fprintf(fp, "LABEL L%d\n", count);
		break;
	case CONDEQUAL:
		count++;
      		fprintf(fp, "-\n");
      		fprintf(fp, "GOTRUE L%d\n", count);
      		break;
   	case CONDNOTEQUAL:
		count++;
      		fprintf(fp, "-\n");
      		fprintf(fp, "GOFALSE L%d\n", count);
      		break;
	case CONDELESS:
		count++;
		fprintf(fp, "-\n");
		fprintf(fp, "COPY\n");
		fprintf(fp, "GOPLUS L%d\n", count);
		fprintf(fp, "GOFALSE L%d\n", count);
		break;
	case CONDGREATER:
		count++;
		fprintf(fp, "-\n");
		fprintf(fp, "COPY\n");
		fprintf(fp, "GOMINUS L%d\n", count);
		fprintf(fp, "GOFALSE L%d\n", count);
		break;
	case CONDLESSEQUAL:
		count++;
		fprintf(fp, "-\n");
		fprintf(fp, "GOPLUS L%d\n", count);
		break;
	case CONDGREATEREQUAL:
		count++;
		fprintf(fp, "-\n");
		fprintf(fp, "GOMINUS L%d\n", count);
		break;

	case WHILE:
		fprintf(fp, "GOTO loop%d\n", while_count-1);
		fprintf(fp, "LABEL label%d\n", label_count++);
		break;

	case FOR:
		fprintf(fp, "GOTO FLOOP%d\n", for_count);   
		fprintf(fp, "LABEL L%d\n", count);
		count--;
		break;
	case LOOPEND:
		fprintf(fp, "LABEL FLOOP%d\n", ++for_count);  
		break;
	case FOREND:
		fprintf(fp, "GOTO FLABEL%d\n", ++for_end_count);    
		fprintf(fp, "LABEL CALLBACK%d\n", callback_counter);
		callback_counter--;
		break;
	case STMTLIST:
	default:
		break;
	};
}


/*
int gentemp()
{
char buffer[MAXTSYMLEN];
char tempsym[MAXSYMLEN]="TTCBU";

	tsymbolcnt++;
	if (tsymbolcnt > MAXTSYMBOL) printf("temp symbol overflow\n");
	itoa(tsymbolcnt, buffer, 10);
	strcat(tempsym, buffer);
	return( insertsym(tempsym) ); // Warning: duplicated symbol is not checked for lazy implementation
}
*/
void dwgen()
{
int i;
	fprintf(fp, "HALT\n");
	fprintf(fp, "$ -- END OF EXECUTION CODE AND START OF VAR DEFINITIONS --\n");

// Warning: this code should be different if variable declaration is supported in the language 
	for(i=0; i<maxsym; i++) 
		fprintf(fp, "DW %s\n", symtbl[i]);
	fprintf(fp, "END\n");
}

