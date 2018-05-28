/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.ypp" /* yacc.c:339  */

	#include "attributes.h"
	#include <iostream>
	#include <stdlib.h>

	using namespace std;
	stack<int> whileStack;
	bool mainExist = false;
 	type_t funcType = _NULL;
	extern int yylex();
	extern int yylineno;
	extern char * yytext;
	int yyerror(const char * message);
	void match_operands(type_t type1, type_t type2, bool flag);
	stack<Tuple> tables;
	stack<int> offsets;
	vector<Var> args, params;
	type_t get_variable_type(string name);
	bool check_func_exist(string name, vector<Var> argList, type_t* retType);
	int get_arr_size_and_type(string name, type_t* type, int* size);
	string types[6] = {"INT","BOOL","STRING","BYTE","VOID","NONE"};

#line 89 "parser.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "parser.tab.hpp".  */
#ifndef YY_YY_PARSER_TAB_HPP_INCLUDED
# define YY_YY_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    NUM = 259,
    B = 260,
    STRING = 261,
    TRUE = 262,
    FALSE = 263,
    VOID = 264,
    INT = 265,
    IF = 266,
    IFX = 267,
    ELSE = 268,
    BOOL = 269,
    BREAK = 270,
    COMMA = 271,
    BYTE = 272,
    RETURN = 273,
    SC = 274,
    WHILE = 275,
    ERROR = 276,
    ASSIGN = 277,
    OR = 278,
    AND = 279,
    EQ = 280,
    NEQ = 281,
    LT = 282,
    GT = 283,
    LTE = 284,
    GTE = 285,
    ADD = 286,
    SUB = 287,
    DIV = 288,
    MUL = 289,
    NOT = 290,
    LBRACE = 291,
    RBRACE = 292,
    LBRACK = 293,
    RBRACK = 294,
    LPAREN = 295,
    RPAREN = 296
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 182 "parser.tab.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   343

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    74,    47,    91,    92,    96,   101,   106,
     125,    95,   149,   150,   153,   154,   157,   158,   161,   177,
     192,   210,   211,   214,   215,   230,   257,   280,   302,   338,
     393,   394,   405,   421,   423,   426,   425,   433,   442,   452,
     468,   480,   481,   484,   485,   486,   489,   490,   529,   530,
     531,   532,   533,   553,   554,   555,   566,   567,   568,   569,
     579,   580,   581,   582,   583,   584,   585,   586,   589,   597
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "B", "STRING", "TRUE",
  "FALSE", "VOID", "INT", "IF", "IFX", "ELSE", "BOOL", "BREAK", "COMMA",
  "BYTE", "RETURN", "SC", "WHILE", "ERROR", "ASSIGN", "OR", "AND", "EQ",
  "NEQ", "LT", "GT", "LTE", "GTE", "ADD", "SUB", "DIV", "MUL", "NOT",
  "LBRACE", "RBRACE", "LBRACK", "RBRACK", "LPAREN", "RPAREN", "$accept",
  "Program", "$@1", "$@2", "Funcs", "FuncDecl", "$@3", "$@4", "$@5", "$@6",
  "RetType", "Formals", "FormalsList", "FormalDecl", "Statments",
  "Statement", "$@7", "IfExp", "Call", "ExpList", "Type", "Exp",
  "OPENSCOPE", "CLOSESCOPE", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
# endif

#define YYPACT_NINF -55

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-55)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -55,    10,    13,   -55,   -55,   -55,   -55,   -55,   -55,    13,
     -55,   -55,   -55,   -55,    11,   -55,   -55,   -21,   100,   -16,
     -55,    24,    38,   -55,   100,    16,    12,   -55,    56,   -55,
      -3,   -55,    22,   -55,   122,   -55,     7,    37,    43,    88,
      39,   -55,    98,   -55,    59,    80,    49,    49,     9,    49,
     -55,    -5,    93,   -55,   -55,   -55,   -55,    49,    49,   -55,
     220,    49,   122,   -55,   -55,   -55,    -1,   236,   186,   -55,
      44,   136,    52,   280,    49,   -55,   -55,   148,   -55,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,   167,   122,   -55,   -55,    49,    99,   -55,    82,   -55,
      49,   -55,   203,   -55,   291,   301,   116,   116,   309,   309,
     309,   309,   -27,   -27,   -55,   -55,   -55,    65,   252,     0,
      49,   -55,   122,   -55,   -55,   -55,   -55,    72,   101,   268,
     -55,   122,   102,   -55,   -55,   106,   -55,   -55,   -55,   -55,
     122,   -55,   -55
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     5,     1,    13,    43,    45,    44,     3,     5,
       7,    12,    69,     6,     0,     4,     8,     0,    14,     0,
      15,    16,     0,     9,     0,    18,     0,    17,     0,    68,
       0,    10,     0,    19,     0,    20,     0,     0,     0,     0,
       0,    68,     0,    21,     0,     0,     0,     0,     0,     0,
      37,    52,    54,    56,    57,    58,    31,     0,     0,    53,
       0,     0,     0,    69,    22,    30,     0,     0,     0,    40,
       0,    41,     0,    38,     0,    55,    59,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    69,    11,    24,     0,     0,    28,     0,    39,
       0,    68,     0,    46,    61,    60,    62,    63,    64,    65,
      66,    67,    49,    48,    51,    50,    35,     0,     0,     0,
       0,    42,     0,    47,    68,    23,    25,     0,     0,     0,
      69,     0,     0,    26,    29,    33,    69,    27,    68,    36,
       0,    69,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -55,   -55,   -55,   -55,   113,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   103,   -55,    62,   -41,   -55,   -55,   -34,    26,
       2,   -15,   -38,   -54
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    12,     8,     9,    14,    17,    26,    34,
      10,    19,    20,    21,    42,    43,   124,    72,    59,    70,
      45,    71,    31,    15
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    64,    32,    62,    11,   127,    89,    90,    44,    93,
       3,    11,    51,    52,    16,    53,    54,    55,    94,    18,
      22,    95,     4,     5,    60,    23,    22,     6,    44,    46,
       7,    67,    68,    74,    73,    48,    33,    96,   117,   128,
      24,    25,    76,    77,    57,    47,    91,    48,    29,    58,
      69,    64,    51,    52,    28,    53,    54,    55,    44,   102,
      30,    35,    50,   122,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   135,    49,    65,    61,
     118,   130,   139,    66,    57,    99,   131,   142,    44,    58,
     136,    51,    52,   101,    53,    54,    55,    44,    75,   141,
     140,    36,   125,   119,   120,   129,    44,    56,     5,    37,
       5,   132,     6,    38,     6,     7,    39,     7,    40,   138,
     133,   137,    13,    57,    92,    36,   121,    27,    58,     0,
       0,     0,     5,    37,    41,    63,     6,    38,     0,     7,
      39,     0,    40,    83,    84,    85,    86,    87,    88,    89,
      90,     0,   100,     0,     0,     0,     0,     0,    41,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     0,     0,     0,     0,     0,     0,   103,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,     0,     0,     0,     0,     0,     0,   116,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,     0,     0,     0,     0,    98,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    78,
       0,     0,   123,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    97,     0,     0,     0,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,   126,     0,     0,     0,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,   134,     0,     0,
       0,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      87,    88,    89,    90
};

static const yytype_int16 yycheck[] =
{
      34,    42,     5,    41,     2,     5,    33,    34,    42,    63,
       0,     9,     3,     4,     3,     6,     7,     8,    19,    40,
      18,    22,     9,    10,    39,    41,    24,    14,    62,    22,
      17,    46,    47,    38,    49,    40,    39,    38,    92,    39,
      16,     3,    57,    58,    35,    38,    61,    40,    36,    40,
      41,    92,     3,     4,    38,     6,     7,     8,    92,    74,
       4,    39,    19,   101,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,   130,    40,    19,    40,
      95,   122,   136,     3,    35,    41,   124,   141,   122,    40,
     131,     3,     4,    41,     6,     7,     8,   131,     5,   140,
     138,     3,    37,     4,    22,   120,   140,    19,    10,    11,
      10,    39,    14,    15,    14,    17,    18,    17,    20,    13,
      19,    19,     9,    35,    62,     3,   100,    24,    40,    -1,
      -1,    -1,    10,    11,    36,    37,    14,    15,    -1,    17,
      18,    -1,    20,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    16,    -1,    -1,    -1,    -1,    -1,    36,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    39,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    19,
      -1,    -1,    39,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    19,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    19,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    27,    28,    29,    30,
      31,    32,    33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    43,    44,     0,     9,    10,    14,    17,    46,    47,
      52,    62,    45,    46,    48,    65,     3,    49,    40,    53,
      54,    55,    62,    41,    16,     3,    50,    54,    38,    36,
       4,    64,     5,    39,    51,    39,     3,    11,    15,    18,
      20,    36,    56,    57,    60,    62,    22,    38,    40,    40,
      19,     3,     4,     6,     7,     8,    19,    35,    40,    60,
      63,    40,    64,    37,    57,    19,     3,    63,    63,    41,
      61,    63,    59,    63,    38,     5,    63,    63,    19,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    63,    56,    65,    19,    22,    38,    19,    39,    41,
      16,    41,    63,    41,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    41,    65,    63,     4,
      22,    61,    64,    39,    58,    37,    19,     5,    39,    63,
      57,    64,    39,    19,    19,    65,    57,    19,    13,    65,
      64,    57,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    44,    45,    43,    46,    46,    48,    49,    50,
      51,    47,    52,    52,    53,    53,    54,    54,    55,    55,
      55,    56,    56,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    58,    57,    57,    59,    60,
      60,    61,    61,    62,    62,    62,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    64,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     4,     0,     2,     0,     0,     0,
       0,    14,     1,     1,     0,     1,     1,     3,     2,     5,
       6,     1,     2,     5,     3,     5,     6,     7,     4,     7,
       2,     2,     3,     7,    11,     0,     8,     2,     1,     4,
       3,     1,     3,     1,     1,     1,     3,     4,     3,     3,
       3,     3,     1,     1,     1,     2,     1,     1,     1,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     0,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
        case 2:
#line 47 "parser.ypp" /* yacc.c:1646  */
    {
			/* insert print function to symbol table */
			Tuple tuple;
			vector<Var> printArgs;
			Var var1 = {_STRING,-1,"a"};
			printArgs.push_back(var1);
			BaseRecord* printRecord = new FuncRecord("print",_VOID,printArgs);
			tuple.table.push_back(printRecord);

			// FuncRecord* funcRecord = dynamic_cast<FuncRecord*>(print.table.back());
			// if(funcRecord != NULL){
			// 	// cout << funcRecord->args[0] << " *****\n" << endl;
			// }

			/* insert printi function to symbol table */
			vector<Var> printiArgs;
			Var var2 = {_INT,-1,"a"}; 
			printiArgs.push_back(var2);
			BaseRecord* printiRecord = new FuncRecord("printi",_VOID,printiArgs);
			tuple.table.push_back(printiRecord);

			tuple.parent = NULL;
			tables.push(tuple);
			offsets.push(0);
			// cout << tables.top().table.size() << " $$$$" << endl;

		}
#line 1420 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 74 "parser.ypp" /* yacc.c:1646  */
    { 
			// cout << "-" << yytext << "-" << endl;
			string tmp = yytext;
			// cout << (tmp.compare("}")) << " " << tmp << " " << (tmp.empty()) << endl;

			if((tmp.compare("}") != 0) && (tmp.empty() == 0)){
				errorSyn(yylineno);
				exit(0);
			}
			if(mainExist == false){
				errorMainMissing();
				exit(0);
			} 
		}
#line 1439 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 96 "parser.ypp" /* yacc.c:1646  */
    { 
				funcType = (yyvsp[0]).type;
				// cout << $1.type << endl; 
			}
#line 1448 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 101 "parser.ypp" /* yacc.c:1646  */
    { 					
				// cout << "here "<< endl;
				(yyvsp[0]).type = (yyvsp[-2]).type;	

			}
#line 1458 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 106 "parser.ypp" /* yacc.c:1646  */
    {
				if((yyvsp[-6]).type == _VOID && (yyvsp[-4]).name == "main" && args.empty()){
					mainExist = true;
				}
				type_t type;
				if(check_func_exist((yyvsp[-4]).name, args,&type)){
					errorDef(yylineno, (yyvsp[-4]).name);
					exit(0);
				}
				BaseRecord* funcRecord = new FuncRecord((yyvsp[-4]).name, (yyvsp[-6]).type, args);
				
				//cout << $3.name << " " << $1.type << " " << dynamic_cast<FuncRecord*>(funcRecord)->args[0] << endl;
				tables.top().table.push_back(funcRecord);
				// FuncRecord* tmp = dynamic_cast<FuncRecord*>((tables.top().table).back());
				// cout << tmp->args[0] << " ******\n" << endl;
				// cout << tables.top().table.size() << " -----" << endl;
				
				
			}
#line 1482 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 125 "parser.ypp" /* yacc.c:1646  */
    {
				// cout << "here" << endl;
				BaseRecord* record;
				int size, offset = offsets.top();
				// cout << offsets.top() << endl;
				for(vector<Var>::iterator it = args.begin(); it != args.end(); ++it){
					// cout << "size = " << it->size << endl;
					if(it->size > 0){
						offset -= it->size;
						record = new ArrRecord(it->name,it->type,offset,it->size);
					}
					else {
						offset--;
						record = new Record(it->name,it->type,offset);
					}
					// cout << size << endl;
					tables.top().table.push_back(record);
				}

				args.clear();
			}
#line 1508 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 145 "parser.ypp" /* yacc.c:1646  */
    { funcType = _NULL; }
#line 1514 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 149 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type; }
#line 1520 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 150 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _VOID; }
#line 1526 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 162 "parser.ypp" /* yacc.c:1646  */
    { 
				// cout << "here\n" << endl;
				type_t type;
				if(check_func_exist((yyvsp[0]).name, vector<Var>(),NULL)){
					errorDef(yylineno, (yyvsp[0]).name);
					exit(0);
				}
				Var var = {(yyvsp[-1]).type,-1,(yyvsp[0]).name};

				args.push_back(var);
					
				// cout << "size = " << tables.top().table.size() << "\n" << endl;
				// cout << tmp->name << " " << tmp->offset << "\n" << endl;
				// cout << tables.top().table.size() << " ****\n" << endl;
			}
#line 1546 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 178 "parser.ypp" /* yacc.c:1646  */
    { 
				type_t type;
				if(check_func_exist((yyvsp[-3]).name, vector<Var>(),NULL)){
					errorDef(yylineno, (yyvsp[-3]).name);
					exit(0);
				}
				if((yyvsp[-1]).val <= 0 || (yyvsp[-1]).val >= 256){
					errorInvalidArraySize(yylineno,(yyvsp[-3]).name);
					exit(0);
				}
				Var var = {(yyvsp[-4]).type,(yyvsp[-1]).val,(yyvsp[-3]).name};
				args.push_back(var);

			}
#line 1565 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 193 "parser.ypp" /* yacc.c:1646  */
    { 
				type_t type;
				if(check_func_exist((yyvsp[-4]).name, vector<Var>(),NULL)){
					errorDef(yylineno, (yyvsp[-4]).name);
					exit(0);
				}				
				if((yyvsp[-2]).val <= 0 || (yyvsp[-2]).val >= 256){
					errorInvalidArraySize(yylineno,(yyvsp[-4]).name);
					exit(0);
				}
				Var var = {(yyvsp[-5]).type,(yyvsp[-2]).val,(yyvsp[-4]).name};
				args.push_back(var);
	 

			}
#line 1585 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 216 "parser.ypp" /* yacc.c:1646  */
    { 
				// cout << "here" << endl;
				type_t type = get_variable_type((yyvsp[-1]).name);
				if(type != _NULL){
					errorDef(yylineno, (yyvsp[-1]).name);
					exit(0);
				}
				(yyvsp[-1]).type = (yyvsp[-2]).type;
				(yyvsp[-1]).size = -1;
				BaseRecord* record = new Record((yyvsp[-1]).name, (yyvsp[-2]).type, offsets.top());
				tables.top().table.push_back(record);
				offsets.top()++;

			}
#line 1604 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 231 "parser.ypp" /* yacc.c:1646  */
    { 
				// cout << "here1" << endl;
				type_t type = get_variable_type((yyvsp[-3]).name);
				if(type != _NULL){
					errorDef(yylineno, (yyvsp[-3]).name);
					exit(0);
				}
				// if($4.size != -1){
				// 	errorMismatch(yylineno);
				// 	exit(0);
				// }
				else if((yyvsp[-4]).type == _INT && ((yyvsp[-1]).type != _INT && (yyvsp[-1]).type != _BYTE )){
					errorMismatch(yylineno); 
					exit(0); 
				}
				else if((yyvsp[-4]).type != _INT && (yyvsp[-4]).type != (yyvsp[-1]).type){
					errorMismatch(yylineno); 
					exit(0); 
				}

				(yyvsp[-3]).type = (yyvsp[-4]).type;
				(yyvsp[-3]).size = -1;
				BaseRecord* record = new Record((yyvsp[-3]).name, (yyvsp[-4]).type, offsets.top());
				tables.top().table.push_back(record);
				offsets.top()++;
			}
#line 1635 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 258 "parser.ypp" /* yacc.c:1646  */
    { 
				// cout << "here2" << endl;
				type_t type;
				int size, res;
				res = get_arr_size_and_type((yyvsp[-4]).name, &type, &size);
				type = get_variable_type((yyvsp[-4]).name);
				if(res == 0 || type != _NULL){
					// cout << res << " " << type << " " << $4.val << endl;
					errorDef(yylineno, (yyvsp[-4]).name);
					exit(0);
				}
				if((yyvsp[-2]).val <= 0 || (yyvsp[-2]).val >= 256){
					errorInvalidArraySize(yylineno,(yyvsp[-4]).name);
					exit(0);
				}
				(yyvsp[-4]).type = (yyvsp[-5]).type;
				(yyvsp[-4]).size = (yyvsp[-2]).val;
				// cout << $4.val << " ***2***"<< $2.type << endl;
				BaseRecord* record = new ArrRecord((yyvsp[-4]).name, (yyvsp[-5]).type, offsets.top(), (yyvsp[-4]).size);
				tables.top().table.push_back(record);
				offsets.top()+=(yyvsp[-4]).size;
			}
#line 1662 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 281 "parser.ypp" /* yacc.c:1646  */
    { 
				// cout << "here3" << endl;				
				type_t type;
				int size, res;
				res = get_arr_size_and_type((yyvsp[-5]).name, &type, &size);
				type = get_variable_type((yyvsp[-5]).name);
				if(res == 0 || type != _NULL){
					errorDef(yylineno, (yyvsp[-5]).name);
					exit(0);
				}
				if((yyvsp[-3]).val <= 0 || (yyvsp[-3]).val >= 256){
					errorInvalidArraySize(yylineno,(yyvsp[-5]).name);
					exit(0);
				}
				(yyvsp[-5]).type = (yyvsp[-6]).type;
				(yyvsp[-5]).size = (yyvsp[-3]).val;
				// cout << $4.val << " ***1***"<< endl;
				BaseRecord* record = new ArrRecord((yyvsp[-5]).name, (yyvsp[-6]).type, offsets.top(), (yyvsp[-5]).size);
				tables.top().table.push_back(record);
				offsets.top()+=(yyvsp[-5]).size;
			}
#line 1688 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 303 "parser.ypp" /* yacc.c:1646  */
    {
				type_t type1, type2;
				int size, res;
				if((res = get_arr_size_and_type((yyvsp[-3]).name, &type1, &size)) == -1 && 
					(type2 = get_variable_type((yyvsp[-3]).name)) == _NULL){ // ID var or arr don't exist
					errorUndef(yylineno, (yyvsp[-3]).name);
					exit(0);
				}
				else if(res == 0){ // ID is arr
					(yyvsp[-3]).type = type1;
					(yyvsp[-3]).size = size;
				}
				else if(type2 != _NULL){ // ID is var
					(yyvsp[-3]).type = type2;
					(yyvsp[-3]).size = -1;
				}

				// cout << $1.size << " " << $3.size << endl;
				if((yyvsp[-1]).size != (yyvsp[-3]).size){
					errorMismatch(yylineno);
					exit(0);
				}
				else if ((yyvsp[-3]).size > 0 && (yyvsp[-1]).type != (yyvsp[-3]).type){
					errorMismatch(yylineno);
					exit(0);
				}
				else if((yyvsp[-3]).type == _INT && ((yyvsp[-1]).type != _INT && (yyvsp[-1]).type != _BYTE )){
					errorMismatch(yylineno); 
					exit(0); 
				}
				else if((yyvsp[-3]).type != _INT && (yyvsp[-3]).type != (yyvsp[-1]).type){
					errorMismatch(yylineno); 
					exit(0); 
				}
			}
#line 1728 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 339 "parser.ypp" /* yacc.c:1646  */
    {
				// cout << "****** array assignment ********" << endl;
				type_t type;
				int size, res;
				res = get_arr_size_and_type((yyvsp[-6]).name, &type, &size);
				if(res == -1){
					// cout << "here" << endl;
					errorUndef(yylineno, (yyvsp[-6]).name);
					exit(0);
				}
				(yyvsp[-6]).type = type;
				(yyvsp[-6]).size = size;
				
				type_t type1, type2;
				if((res = get_arr_size_and_type((yyvsp[-1]).name, &type1, &size)) == -1 && 
					(type2 = get_variable_type((yyvsp[-1]).name)) == _NULL){ // ID var or arr don't exist
					// cout << "here1" << endl;					
					// errorUndef(yylineno, $6.name);
					// exit(0);
				}
				else if(res == 0){ // ID is arr
					(yyvsp[-1]).type = type1;
					(yyvsp[-1]).size = size;
				}
				else if(type2 != _NULL){ // ID is var
					(yyvsp[-1]).type = type2;
					(yyvsp[-1]).size = -1;
				}
				// cout << $1.size << " " << $6.size << endl;

				if((yyvsp[-4]).type != _INT && (yyvsp[-4]).type != _BYTE){
					errorMismatch(yylineno); 
					exit(0); 
				}
				else if((yyvsp[-6]).type == _INT && ((yyvsp[-1]).type != _INT && (yyvsp[-1]).type != _BYTE )){
					errorMismatch(yylineno); 
					exit(0); 
				}
				else if((yyvsp[-6]).type == _BYTE && (yyvsp[-1]).type != _BYTE){
					errorMismatch(yylineno); 
					exit(0); 
				}
				else if((yyvsp[-6]).type == _BOOL && (yyvsp[-1]).type !=_BOOL){
					errorMismatch(yylineno); 
					exit(0); 
				}
				else if((yyvsp[-6]).type == _STRING && (yyvsp[-1]).type !=_STRING){
					errorMismatch(yylineno); 
					exit(0); 
				}



			}
#line 1787 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 395 "parser.ypp" /* yacc.c:1646  */
    { 
				if(funcType == _NULL){
					errorSyn(yylineno); 
					exit(0);
				}
				if(funcType != _VOID){ 
					errorMismatch(yylineno); 
					exit(0); 
				}
			}
#line 1802 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 406 "parser.ypp" /* yacc.c:1646  */
    { 
				// cout << $2.type << " " << funcType << endl;
				if(funcType == _NULL){ 
					errorSyn(yylineno); 
					exit(0); 
				}
				if (funcType == _INT && ((yyvsp[-1]).type != _INT && (yyvsp[-1]).type != _BYTE)){
					errorMismatch(yylineno); 
					exit(0); 
				}
				else if(funcType != _INT && funcType != (yyvsp[-1]).type){ 
					errorMismatch(yylineno); 
					exit(0); 
				}
			}
#line 1822 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 426 "parser.ypp" /* yacc.c:1646  */
    { 
				whileStack.push(1); 
				if((yyvsp[-1]).type != _BOOL){
					errorMismatch(yylineno);
					exit(0);
				} 
			}
#line 1834 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 432 "parser.ypp" /* yacc.c:1646  */
    { whileStack.pop(); }
#line 1840 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 434 "parser.ypp" /* yacc.c:1646  */
    { 
				if(whileStack.empty() || !whileStack.top()){ 
					errorUnexpectedBreak(yylineno); 
					exit(0);
				}
			}
#line 1851 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 443 "parser.ypp" /* yacc.c:1646  */
    {
			// cout << "$3.type = " << $3.type << endl;
			if((yyvsp[0]).type != _BOOL){
			// cout << "here" << endl;
				errorMismatch(yylineno);
				exit(0);
			}
		}
#line 1864 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 453 "parser.ypp" /* yacc.c:1646  */
    {
 			//vector<Var> argList = params;
 			//
 			// cout << params.size() << " " << params[0].type << " "<< params[0].size << endl;
 			type_t type;
			if(!check_func_exist((yyvsp[-3]).name, params, &type)){
				errorUndefFunc(yylineno, (yyvsp[-3]).name);
				exit(0);
			}
			// cout << "func" << endl;

			(yyval).type = (yyvsp[-3]).type = type;
			params.clear();

		}
#line 1884 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 469 "parser.ypp" /* yacc.c:1646  */
    {
 			type_t type;			
			if(!check_func_exist((yyvsp[-2]).name, params,&type)){
				errorUndefFunc(yylineno, (yyvsp[-2]).name);
				exit(0);
			}
			(yyval).type = (yyvsp[-2]).type = type;

		}
#line 1898 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 480 "parser.ypp" /* yacc.c:1646  */
    { Var var = {(yyvsp[0]).type, (yyvsp[0]).size};params.push_back(var); }
#line 1904 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 481 "parser.ypp" /* yacc.c:1646  */
    { Var var = {(yyvsp[-2]).type, (yyvsp[-2]).size}; params.push_back(var); }
#line 1910 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 484 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _INT; }
#line 1916 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 485 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _BYTE; }
#line 1922 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 486 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _BOOL; }
#line 1928 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 489 "parser.ypp" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1934 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 491 "parser.ypp" /* yacc.c:1646  */
    { 
			// cout << "here1" << endl;
			type_t type = _NULL;

			int size = -1, res, size1;
			res = get_arr_size_and_type((yyvsp[-3]).name, &type, &size);
			if(res == -1){
				errorUndef(yylineno, (yyvsp[-3]).name);
				exit(0);
			}
			(yyvsp[-3]).type = type;
			type_t type1, type2;
			if((res = get_arr_size_and_type((yyvsp[-1]).name, &type1, &size1)) == -1 && 
				(type2 = get_variable_type((yyvsp[-1]).name)) == _NULL){ // ID var or arr don't exist
				// errorUndef(yylineno, $3.name);
				// exit(0);
			}
			else if(res == 0){ // ID is arr
				(yyvsp[-1]).type = type1;
				(yyvsp[-1]).size = size1;
			}
			else if(type2 != _NULL){ // ID is var
				// cout << $1.name << endl;
				(yyvsp[-1]).type = type2;
				(yyvsp[-1]).size = -1;
			}
			// cout << $1.type << " " << $3.type << endl;
			if((yyvsp[-1]).type != _BYTE && (yyvsp[-1]).type != _INT){
				// cout << "here" << endl;
				errorMismatch(yylineno);
				exit(0);
			}
			// cout << "here2" << endl;

			(yyval).type = (yyvsp[-3]).type;
			(yyval).size = -1;

		}
#line 1977 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 529 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _INT; (yyval).size = -1;}
#line 1983 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 530 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _INT; (yyval).size = -1;}
#line 1989 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 531 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _INT; (yyval).size = -1;}
#line 1995 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 532 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _INT; (yyval).size = -1;}
#line 2001 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 534 "parser.ypp" /* yacc.c:1646  */
    { 
			type_t type1, type2;
			int size, res;
			if((res = get_arr_size_and_type((yyvsp[0]).name, &type1, &size)) == -1 && 
				(type2 = get_variable_type((yyvsp[0]).name)) == _NULL){ // ID var or arr don't exist
				errorUndef(yylineno, (yyvsp[0]).name);
				exit(0);
			}
			else if(res == 0){ // ID is arr
				(yyvsp[0]).type = type1;
				(yyvsp[0]).size = size;
			}
			else if(type2 != _NULL){ // ID is var
				// cout << $1.name << endl;
				(yyvsp[0]).type = type2;
				(yyvsp[0]).size = -1;
			}
			(yyval) = (yyvsp[0]); 
		}
#line 2025 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 553 "parser.ypp" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval).size = -1;}
#line 2031 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 554 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _INT; (yyval).val = (yyvsp[0]).val; (yyval).size = -1;}
#line 2037 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 556 "parser.ypp" /* yacc.c:1646  */
    { 
			
			if((yyvsp[-1]).val < 0 || (yyvsp[-1]).val >= 256){
				errorByteTooLarge(yylineno,NumberToString((yyvsp[-1]).val));
				exit(0);
			}
			(yyval).type = _BYTE; 
			(yyval).val = (yyvsp[-1]).val;
			(yyval).size = -1; 
		}
#line 2052 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 566 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _STRING; (yyval).size = -1;}
#line 2058 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 567 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _BOOL; (yyval).size = -1;}
#line 2064 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 568 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _BOOL; (yyval).size = -1;}
#line 2070 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 570 "parser.ypp" /* yacc.c:1646  */
    { 
			if((yyvsp[0]).type != _BOOL){
				// cout << "here" << endl;
				errorMismatch(yylineno);
				exit(0);
			} 
			(yyval).type = _BOOL;
			(yyval).size = -1;
		}
#line 2084 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 579 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,false); (yyval).type = _BOOL; (yyval).size = -1;}
#line 2090 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 580 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,false); (yyval).type = _BOOL; (yyval).size = -1;}
#line 2096 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 581 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _BOOL; (yyval).size = -1;}
#line 2102 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 582 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _BOOL; (yyval).size = -1;}
#line 2108 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 583 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _BOOL; (yyval).size = -1;}
#line 2114 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 584 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _BOOL; (yyval).size = -1;}
#line 2120 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 585 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _BOOL; (yyval).size = -1;}
#line 2126 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 586 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _BOOL; (yyval).size = -1;}
#line 2132 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 589 "parser.ypp" /* yacc.c:1646  */
    {
				Tuple tuple;
				tuple.parent = &(tables.top());
				tables.push(tuple);
				offsets.push(offsets.top());
			}
#line 2143 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 597 "parser.ypp" /* yacc.c:1646  */
    {
				endScope();
				// cout << "ok0\n" << endl;
				Tuple* tuple = &(tables.top());
				vector<BaseRecord*>* table = &(tuple->table);
				//cout << tables.top().table.size() << " ****\n" << endl;
				Record* record;
				ArrRecord* arrRecord;
				FuncRecord* funcRecord;
				for(vector<BaseRecord*>::iterator it = table->begin(); it != table->end(); ++it){
					// cout << table->size() << " ****\n" << endl;

					arrRecord = dynamic_cast<ArrRecord*>(*it);
					if(arrRecord != NULL){ // record of array
						// cout << "ok\n" << endl;
						printID(arrRecord->name,arrRecord->offset,makeArrayType(types[arrRecord->type],arrRecord->size));
						continue;
					}
					// cout << "ok4\n" << endl;

					record = dynamic_cast<Record*>(*it);
					if(record != NULL){ // record of variable
						// cout << "ok1\n" << endl;
						printID(record->name, record->offset, types[record->type]);
						continue;
					}

					// cout << "ok3\n" << endl;
					funcRecord = dynamic_cast<FuncRecord*>(*it);
					if(funcRecord != NULL){ // record of function
						// cout << "ok2\n" << endl;
						vector<string> tmp;
						for(vector<Var>::iterator it = funcRecord->args.begin(); it != funcRecord->args.end(); ++it){
							if(it->size > 0){
								tmp.push_back(types[it->type]+'['+NumberToString(it->size)+']');
								continue;
							}
							tmp.push_back(types[it->type]);

						}
						printID(funcRecord->name, 0, makeFunctionType(types[funcRecord->type],tmp));
						continue;
					}
					
				}
				tables.pop();
				offsets.pop();
			}
#line 2196 "parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2200 "parser.tab.cpp" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 647 "parser.ypp" /* yacc.c:1906  */


int main()
{
	yyparse();
}

int yyerror(const char * message)
{
	errorSyn(yylineno);
	exit(0);
}

/* flag == true checks for numeric types, type == false checks for bool value */
void match_operands(type_t type1, type_t type2, bool flag){
	// cout << type1 << " " << type2 << " " << flag << endl;
	if (flag == true){
		if((type1 != _INT && type1 != _BYTE) || (type2 != _INT && type2 != _BYTE)){
			// cout << "here" << endl;
			errorMismatch(yylineno);
			exit(0);
		}
	}
	else if (flag == false){
		if((type1 != _BOOL) || (type2 != _BOOL)){
			// cout << "here1" << endl;
			errorMismatch(yylineno);
			exit(0);
		}
	}
}

/* return true if varialbe was declared, false if not */
type_t get_variable_type(string name){
	Tuple *tuple = &(tables.top());
	vector<BaseRecord*>* table;
	Record* record;
	while(tuple != NULL){
		table = &(tuple->table);
		for(vector<BaseRecord*>::iterator it = table->begin(); it != table->end(); ++it){
			record = dynamic_cast<Record*>(*it);
			if(record == NULL){
				continue;
			}
			if(record->name == name){
				return record->type;
			}
		}
		tuple = tuple->parent;
	}
	return _NULL;
}

int get_arr_size_and_type(string name, type_t* type, int* size){
	if(!type || !size){
		return -1;
	}

	Tuple *tuple = &(tables.top());
	vector<BaseRecord*>* table;
	ArrRecord* arrRecord;
	while(tuple != NULL){
		table = &(tuple->table);
		for(vector<BaseRecord*>::iterator it = table->begin(); it != table->end(); ++it){
			arrRecord = dynamic_cast<ArrRecord*>(*it);
			if(arrRecord == NULL){
				continue;
			}
			if(arrRecord->name == name){
				// cout << arrRecord->name  << " " << arrRecord->type << " " << arrRecord->size << endl;
				*type = (arrRecord->type);
				*size = (arrRecord->size);
				return 0;
			}
		}
		tuple = tuple->parent;
	}
	return -1;
}

bool check_func_exist(string name, vector<Var> argList, type_t* retType){
	Tuple *tuple = &(tables.top());
	vector<BaseRecord*>* table;
	vector<Var>::iterator it1,it2, tmp;
	vector<string> errorArgs;
	FuncRecord* funcRecord;
	BaseRecord* baseRecord;
	while(tuple != NULL){
		table = &(tuple->table);

		for(vector<BaseRecord*>::iterator it = tuple->table.begin(); it != tuple->table.end(); ++it){
			//cout << it->name << "\n" << endl;
			funcRecord = dynamic_cast<FuncRecord*>(*it);
			if(funcRecord == NULL){
				continue;
			}
			// cout << funcRecord->name << " /////\n" << endl;
			if(funcRecord->name == name){
				if(retType == NULL){
					return true;
				}
				for(it1 = argList.begin(),it2 = funcRecord->args.begin(); 
					it1 != argList.end() && it2 != funcRecord->args.end(); ++it1, ++it2){
					// cout << it1->type << " " << it1->size << " "<< it2->type << " " << it2->size << endl; 
					if(it1->type != it2->type || it1->size != it2->size){
						for(tmp = funcRecord->args.begin(); tmp != funcRecord->args.end();++tmp){
							if(tmp->size > 0){
								errorArgs.push_back(types[tmp->type]+'['+NumberToString(tmp->size)+']');
								continue;
							}
							errorArgs.push_back(types[tmp->type]);

						}
						errorPrototypeMismatch(yylineno,name,errorArgs);
						exit(0);
					}
				}
				*retType = funcRecord->type;
				return true;
			}
		}
		tuple = tuple->parent;
	}
	return false;
}

