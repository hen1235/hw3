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
	int whileFlag = 0;
	type_t funcType = _NONE;
	extern int yylex();
	extern int yylineno;
	extern char * yytext;
	int yyerror(const char * message);
	void match_operands(type_t type1, type_t type2, bool flag);
	stack<Tuple> tables;
	stack<int> offsets;
	vector<string> args;
	bool check_variable_exist(string name);
	bool check_func_exist(string name, vector<string> argList);
	vector<string> get_args(Var var);
	string types[6] = {"INT","BOOL","STRING","BYTE","VOID","NONE"};

#line 88 "parser.tab.cpp" /* yacc.c:339  */

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
    IFX = 266,
    ELSE = 267,
    BOOL = 268,
    BREAK = 269,
    COMMA = 270,
    BYTE = 271,
    IF = 272,
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

#line 181 "parser.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   337

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
       0,    45,    45,    45,    84,    85,    89,    92,    93,   101,
     110,    88,   114,   115,   118,   119,   122,   123,   126,   132,
     137,   145,   146,   149,   150,   163,   175,   187,   199,   224,
     252,   253,   258,   263,   264,   266,   265,   267,   274,   274,
     284,   295,   296,   299,   300,   301,   304,   305,   312,   313,
     314,   315,   316,   324,   325,   326,   327,   328,   329,   330,
     336,   337,   338,   339,   340,   341,   342,   343,   346,   354
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "B", "STRING", "TRUE",
  "FALSE", "VOID", "INT", "IFX", "ELSE", "BOOL", "BREAK", "COMMA", "BYTE",
  "IF", "RETURN", "SC", "WHILE", "ERROR", "ASSIGN", "OR", "AND", "EQ",
  "NEQ", "LT", "GT", "LTE", "GTE", "ADD", "SUB", "DIV", "MUL", "NOT",
  "LBRACE", "RBRACE", "LBRACK", "RBRACK", "LPAREN", "RPAREN", "$accept",
  "Program", "$@1", "Funcs", "FuncDecl", "$@2", "$@3", "$@4", "$@5", "$@6",
  "RetType", "Formals", "FormalsList", "FormalDecl", "Statments",
  "Statement", "$@7", "Call", "$@8", "ExpList", "Type", "Exp", "OPENSCOPE",
  "CLOSESCOPE", YY_NULLPTR
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

#define YYPACT_NINF -84

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-84)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -84,    22,    69,   -84,   -84,   -84,   -84,   -84,   -84,    69,
     -84,   -84,   -84,    23,   -84,   -84,   -12,     5,    -4,   -84,
      14,    27,     7,     5,    12,   -84,   -84,    48,   -84,    -3,
     101,    15,   -84,     2,    36,    16,     4,    17,   -84,   101,
     -84,    42,    59,   -84,    91,    91,    39,    24,   -84,    91,
     -21,    72,   -84,   -84,   -84,   -84,    91,    91,   -84,   218,
      91,   101,   -84,   -84,   -84,    -6,   234,   184,   -84,    91,
     127,    91,   -84,   -84,   146,   -84,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,   165,   101,
      47,   -84,    91,    82,   -84,    65,    49,   115,   -84,   201,
     -84,   277,   287,   295,   295,   303,   303,   303,   303,   -29,
     -29,   -84,   -84,   -84,    52,   -84,   250,     9,    91,   -84,
      91,   101,   -84,   -84,   -84,   -84,    53,    77,   266,   -84,
     -84,   101,    81,   -84,   -84,    93,   -84,   -84,   -84,   -84,
     101,   -84,   -84
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     4,     1,    13,    43,    45,    44,     3,     4,
       6,    12,     5,     0,     7,     8,     0,    14,     0,    15,
      16,     0,     0,     0,    18,    68,    17,     0,     9,     0,
       0,     0,    19,     0,     0,     0,     0,     0,    68,    10,
      21,     0,     0,    20,     0,     0,     0,     0,    37,     0,
      52,    54,    56,    57,    58,    31,     0,     0,    53,     0,
       0,     0,    69,    22,    30,     0,     0,     0,    40,     0,
       0,     0,    55,    59,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
       0,    24,     0,     0,    28,     0,     0,    41,    68,     0,
      46,    61,    60,    62,    63,    64,    65,    66,    67,    49,
      48,    51,    50,    35,     0,    11,     0,     0,     0,    39,
       0,     0,    47,    68,    23,    25,     0,     0,     0,    42,
      69,     0,     0,    26,    29,    33,    69,    27,    68,    36,
       0,    69,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -84,   -84,   -84,    97,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,    85,   -84,    51,   -38,   -84,   -30,   -84,    -7,
      18,   -11,   -35,   -83
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     8,     9,    13,    15,    16,    30,    62,
      10,    18,    19,    20,    39,    40,   123,    58,    47,    96,
      42,    97,    28,    90
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    63,    31,    61,    86,    87,   114,    50,    51,    41,
      52,    53,    54,    91,   126,     5,    92,    71,     6,    46,
      11,     7,     3,    55,    44,    59,    14,    11,    17,    23,
      24,    41,    93,    66,    67,    21,    32,    22,    70,    56,
      45,    21,    46,    25,    57,    73,    74,   135,   127,    88,
      27,    63,    29,   139,    43,    48,    49,    60,   142,    41,
      99,    64,    65,   121,    69,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    72,     4,     5,
      68,   116,     6,   130,   115,     7,   117,   118,   131,   124,
     119,    41,   132,   136,    50,    51,   133,    52,    53,    54,
     137,    41,   141,   140,    33,   138,    12,   128,    26,     0,
      41,     5,    89,   129,     6,    34,     0,     7,    35,    36,
       0,    37,     0,     0,     0,     0,    56,     0,     0,     0,
     120,    57,     0,     0,     0,     0,     0,    38,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,     0,     0,     0,     0,     0,     0,    98,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,     0,     0,     0,     0,     0,     0,   100,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
       0,     0,     0,     0,     0,     0,   113,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,     0,
       0,     0,     0,    95,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,     0,    75,     0,     0,
     122,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    94,     0,     0,     0,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,   125,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,   134,     0,     0,     0,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    80,    81,    82,    83,    84,    85,    86,    87,
      -1,    -1,    -1,    -1,    84,    85,    86,    87
};

static const yytype_int16 yycheck[] =
{
      30,    39,     5,    38,    33,    34,    89,     3,     4,    39,
       6,     7,     8,    19,     5,    10,    22,    38,    13,    40,
       2,    16,     0,    19,    22,    36,     3,     9,    40,    15,
       3,    61,    38,    44,    45,    17,    39,    41,    49,    35,
      38,    23,    40,    36,    40,    56,    57,   130,    39,    60,
      38,    89,     4,   136,    39,    19,    40,    40,   141,    89,
      71,    19,     3,    98,    40,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,     5,     9,    10,
      41,    92,    13,   121,    37,    16,     4,    22,   123,    37,
      41,   121,    39,   131,     3,     4,    19,     6,     7,     8,
      19,   131,   140,   138,     3,    12,     9,   118,    23,    -1,
     140,    10,    61,   120,    13,    14,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      15,    40,    -1,    -1,    -1,    -1,    -1,    36,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    41,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    39,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    19,    -1,    -1,
      39,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    19,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    27,    28,    29,    30,    31,    32,    33,    34,
      27,    28,    29,    30,    31,    32,    33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    43,    44,     0,     9,    10,    13,    16,    45,    46,
      52,    62,    45,    47,     3,    48,    49,    40,    53,    54,
      55,    62,    41,    15,     3,    36,    54,    38,    64,     4,
      50,     5,    39,     3,    14,    17,    18,    20,    36,    56,
      57,    59,    62,    39,    22,    38,    40,    60,    19,    40,
       3,     4,     6,     7,     8,    19,    35,    40,    59,    63,
      40,    64,    51,    57,    19,     3,    63,    63,    41,    40,
      63,    38,     5,    63,    63,    19,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    63,    56,
      65,    19,    22,    38,    19,    39,    61,    63,    41,    63,
      41,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    41,    65,    37,    63,     4,    22,    41,
      15,    64,    39,    58,    37,    19,     5,    39,    63,    61,
      57,    64,    39,    19,    19,    65,    57,    19,    12,    65,
      64,    57,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    44,    43,    45,    45,    47,    48,    49,    50,
      51,    46,    52,    52,    53,    53,    54,    54,    55,    55,
      55,    56,    56,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    58,    57,    57,    60,    59,
      59,    61,    61,    62,    62,    62,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    64,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     0,     0,     0,     0,
       0,    15,     1,     1,     0,     1,     1,     3,     2,     5,
       6,     1,     2,     5,     3,     5,     6,     7,     4,     7,
       2,     2,     3,     7,    11,     0,     8,     2,     0,     5,
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
#line 45 "parser.ypp" /* yacc.c:1646  */
    {

			/* insert print function to symbol table */
			Tuple print, printi;
			print.parent = NULL;
			vector<string> printArgs;
			printArgs.push_back("STRING");
			BaseRecord* printRecord = new FuncRecord("print",_VOID,printArgs);
			print.table.push_back(*printRecord);
			tables.push(print);
			offsets.push(0);

			/* insert printi function to symbol table */
			printi.parent = &(tables.top());
			vector<string> printiArgs;
			printiArgs.push_back("INT");
			BaseRecord* printiRecord = new FuncRecord("printi",_VOID,printiArgs);
			printi.table.push_back(*printiRecord);
			tables.push(printi);
			offsets.push(0);

			Tuple tuple;
			tuple.parent = &(tables.top());
			tables.push(tuple);
			offsets.push(0);



		}
#line 1419 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 74 "parser.ypp" /* yacc.c:1646  */
    {				
			tables.pop();
			offsets.pop();
			tables.pop();
			offsets.pop();
			tables.pop();
			offsets.pop();
		}
#line 1432 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 89 "parser.ypp" /* yacc.c:1646  */
    { 
				funcType = (yyvsp[0]).type; 
			}
#line 1440 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 92 "parser.ypp" /* yacc.c:1646  */
    { (yyvsp[0]).name = yytext; }
#line 1446 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 93 "parser.ypp" /* yacc.c:1646  */
    { 					
				if(check_variable_exist((yyvsp[-1]).name)){
					errorDef(yylineno, (yyvsp[-1]).name);
					exit(0);
				}
				(yyvsp[-1]).type = (yyvsp[-3]).type;	

			}
#line 1459 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 101 "parser.ypp" /* yacc.c:1646  */
    {
				BaseRecord* funcRecord = new FuncRecord((yyvsp[-7]).name, (yyvsp[-9]).type, args);
				args.clear();
				//cout << $3.name << " " << $1.type << " " << dynamic_cast<FuncRecord*>(funcRecord)->args[0] << endl;
				tables.top().table.push_back(*funcRecord);
				Tuple tuple;
				tuple.parent = &(tables.top());
				tables.push(tuple);
			}
#line 1473 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 110 "parser.ypp" /* yacc.c:1646  */
    { funcType = _NONE; }
#line 1479 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 114 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type;}
#line 1485 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 115 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _VOID; }
#line 1491 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 127 "parser.ypp" /* yacc.c:1646  */
    { 
				args.push_back(types[(yyvsp[-1]).type]); 
				tables.top().table.push_back(Record((yyvsp[0]).name,(yyvsp[-1]).type,offsets.top()-1)); 

			}
#line 1501 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 133 "parser.ypp" /* yacc.c:1646  */
    { 
				args.push_back(types[(yyvsp[-3]).type]);
				tables.top().table.push_back(Record((yyvsp[-3]).name,(yyvsp[-3]).type,offsets.top()-1)); 
			}
#line 1510 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 138 "parser.ypp" /* yacc.c:1646  */
    { 
				args.push_back(types[(yyvsp[-4]).type]);
				tables.top().table.push_back(Record((yyvsp[-4]).name,(yyvsp[-4]).type,offsets.top()-1)); 

			}
#line 1520 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 151 "parser.ypp" /* yacc.c:1646  */
    { 
				if(check_variable_exist((yyvsp[-1]).name)){
					errorDef(yylineno, (yyvsp[-1]).name);
					exit(0);
				}
				(yyvsp[-1]).type = (yyvsp[-2]).type;
				(yyvsp[-1]).size = -1;
				Record record((yyvsp[-1]).name, (yyvsp[-2]).type, offsets.top());
				tables.top().table.push_back(record);
				offsets.top()++;

			}
#line 1537 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 164 "parser.ypp" /* yacc.c:1646  */
    { 
				if(check_variable_exist((yyvsp[-3]).name)){
					errorUndef(yylineno, (yyvsp[-3]).name);
					exit(0);
				}
				(yyvsp[-3]).type = (yyvsp[-4]).type;
				(yyvsp[-3]).size = -1;
				Record record((yyvsp[-3]).name, (yyvsp[-4]).type, offsets.top());
				tables.top().table.push_back(record);
				offsets.top()++;
			}
#line 1553 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 176 "parser.ypp" /* yacc.c:1646  */
    { 
				if(check_variable_exist((yyvsp[-4]).name)){
					errorDef(yylineno, (yyvsp[-4]).name);
					exit(0);
				}
				(yyvsp[-4]).type = (yyvsp[-5]).type;
				(yyvsp[-4]).size = (yyvsp[-2]).size;
				ArrRecord record((yyvsp[-4]).name, (yyvsp[-5]).type, offsets.top(), (yyvsp[-2]).size);
				tables.top().table.push_back(record);
				offsets.top()++;
			}
#line 1569 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 188 "parser.ypp" /* yacc.c:1646  */
    { 
				if(check_variable_exist((yyvsp[-5]).name)){
					errorDef(yylineno, (yyvsp[-5]).name);
					exit(0);
				}
				(yyvsp[-5]).type = (yyvsp[-6]).type;
				(yyvsp[-5]).size = (yyvsp[-3]).size;
				ArrRecord record((yyvsp[-5]).name, (yyvsp[-6]).type, offsets.top(), (yyvsp[-3]).size);
				tables.top().table.push_back(record);
				offsets.top()++;
			}
#line 1585 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 200 "parser.ypp" /* yacc.c:1646  */
    {
			 
				if(!check_variable_exist((yyvsp[-3]).name)){
					errorUndef(yylineno, (yyvsp[-3]).name);
					exit(0);
				}
			
				else if((yyvsp[-3]).type == _INT && ((yyvsp[-1]).type != _INT && (yyvsp[-1]).type != _BYTE )){
					errorMismatch(yylineno); 
					exit(0); 
				}
				else if((yyvsp[-3]).type == _BYTE && (yyvsp[-1]).type != _BYTE){
					errorMismatch(yylineno); 
					exit(0); 
				}
				else if((yyvsp[-3]).type == _BOOL && (yyvsp[-1]).type !=_BOOL){
					errorMismatch(yylineno); 
					exit(0); 
				}
				else if((yyvsp[-3]).type == _STRING && (yyvsp[-1]).type !=_STRING){
					errorMismatch(yylineno); 
					exit(0); 
				}
			}
#line 1614 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 225 "parser.ypp" /* yacc.c:1646  */
    {
				if(!check_variable_exist((yyvsp[-6]).name)){
					errorUndef(yylineno, (yyvsp[-6]).name);
					exit(0);
				}
				else if((yyvsp[-4]).type != _INT && (yyvsp[-4]).type != _BYTE){
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
#line 1646 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 253 "parser.ypp" /* yacc.c:1646  */
    { if(funcType != _VOID){ 
							errorMismatch(yylineno); 
							exit(0); 
							}
						}
#line 1656 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 258 "parser.ypp" /* yacc.c:1646  */
    { if(funcType != (yyvsp[-1]).type){ 
								errorMismatch(yylineno); 
								exit(0); 
								}
							}
#line 1666 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 266 "parser.ypp" /* yacc.c:1646  */
    { whileFlag = 1; }
#line 1672 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 266 "parser.ypp" /* yacc.c:1646  */
    { whileFlag = 0; }
#line 1678 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 267 "parser.ypp" /* yacc.c:1646  */
    { if(!whileFlag){ 
							errorUnexpectedBreak(yylineno); 
							exit(0);
							}
						}
#line 1688 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 274 "parser.ypp" /* yacc.c:1646  */
    { cout << yytext << endl; }
#line 1694 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 275 "parser.ypp" /* yacc.c:1646  */
    {
 			vector<string> argList = get_args((yyvsp[-2]));
			if(!check_func_exist((yyvsp[-4]).name, argList)){
				errorUndef(yylineno, (yyvsp[-4]).name);
				exit(0);
			}
			(yyval).type = (yyvsp[-4]).type;

		}
#line 1708 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 285 "parser.ypp" /* yacc.c:1646  */
    {
			if(!check_func_exist((yyvsp[-2]).name, vector<string>())){
				errorUndef(yylineno, (yyvsp[-2]).name);
				exit(0);
			}
			(yyval).type = (yyvsp[-2]).type;

		}
#line 1721 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 299 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _INT; }
#line 1727 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 300 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _BYTE; }
#line 1733 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 301 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _BOOL; }
#line 1739 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 304 "parser.ypp" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1745 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 306 "parser.ypp" /* yacc.c:1646  */
    { 
			if((yyvsp[-1]).type != _BYTE || (yyvsp[-1]).type != _INT){
				errorMismatch(yylineno);
				exit(0);
				}
		}
#line 1756 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 312 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _INT; }
#line 1762 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 313 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _INT; }
#line 1768 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 314 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _INT; }
#line 1774 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 315 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _INT; }
#line 1780 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 317 "parser.ypp" /* yacc.c:1646  */
    { 
			if(!check_variable_exist((yyvsp[0]).name)){
				errorUndef(yylineno, (yyvsp[0]).name);
				exit(0);
			}
			(yyval) = (yyvsp[0]); 
		}
#line 1792 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 325 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _INT; }
#line 1798 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 326 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _BYTE; }
#line 1804 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 327 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _STRING; }
#line 1810 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 328 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _BOOL;}
#line 1816 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 329 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _BOOL; }
#line 1822 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 330 "parser.ypp" /* yacc.c:1646  */
    { if((yyvsp[0]).type != _BOOL){
						errorMismatch(yylineno);
						exit(0);
						} 
					(yyval).type = _BOOL;
				}
#line 1833 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 336 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[-1]).type,false); (yyval).type = _BOOL; }
#line 1839 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 337 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[-1]).type,false); (yyval).type = _BOOL; }
#line 1845 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 338 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[-1]).type,true); (yyval).type = _BOOL; }
#line 1851 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 339 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[-1]).type,true); (yyval).type = _BOOL; }
#line 1857 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 340 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[-1]).type,true); (yyval).type = _BOOL; }
#line 1863 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 341 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[-1]).type,true); (yyval).type = _BOOL; }
#line 1869 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 342 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[-1]).type,true); (yyval).type = _BOOL; }
#line 1875 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 343 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[-1]).type,true); (yyval).type = _BOOL; }
#line 1881 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 346 "parser.ypp" /* yacc.c:1646  */
    {
				Tuple tuple;
				tuple.parent = &(tables.top());
				tables.push(tuple);
				offsets.push(offsets.top());
			}
#line 1892 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 354 "parser.ypp" /* yacc.c:1646  */
    {
				endScope();
				Tuple* tuple = &(tables.top());
				vector<BaseRecord>* table = &(tuple->table);
				Record* record;
				ArrRecord* arrRecord;
				FuncRecord* funcRecord;
				for(vector<BaseRecord>::iterator it = table->begin(); it != table->end(); ++it){
					arrRecord = dynamic_cast<ArrRecord*>(&(*it));
					if(arrRecord != NULL){ // record of array
						printID(arrRecord->name,arrRecord->offset,makeArrayType(types[arrRecord->type],arrRecord->size));
					}
					record = dynamic_cast<Record*>(&(*it));
					if(record != NULL){ // record of variable
						printID(record->name, record->offset, types[record->type]);
					}
					funcRecord = dynamic_cast<FuncRecord*>(&(*it));
					if(funcRecord == NULL){ // record of function
						printID(funcRecord->name, 0, makeFunctionType(types[funcRecord->type],funcRecord->args));
					}
				}
				tables.pop();
				offsets.pop();
			}
#line 1921 "parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 1925 "parser.tab.cpp" /* yacc.c:1646  */
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
#line 379 "parser.ypp" /* yacc.c:1906  */


int main()
{
	yyparse();
}

int yyerror(const char * message)
{
	cout<<"Parse error: "<<message<<endl;
	exit(0);
}

/* flag == true checks for numeric types, type == false checks for bool value */
void match_operands(type_t type1, type_t type2, bool flag){
	if (flag == true){
		if((type1 != _INT && type1 != _BYTE) || (type2 != _INT && type2 != _BYTE)){
			errorMismatch(yylineno);
			exit(0);
		}
	}
	else if (flag == false){
		if((type1 != _BOOL) || (type2 != _BOOL)){
			errorMismatch(yylineno);
			exit(0);
		}
	}
}

/* return true if varialbe was declared, false if not */
bool check_variable_exist(string name){
	Tuple *tuple = &(tables.top());
	vector<BaseRecord>* table;
	while(tuple != NULL){
		table = &(tuple->table);
		for(vector<BaseRecord>::iterator it = table->begin(); it != table->end(); ++it){
			if(it->name == name){
				return true;
			}
		}
		tuple = tuple->parent;
	}
	return false;
}

bool check_func_exist(string name, vector<string> argList){
	cout << name << "\n" << endl;
	Tuple *tuple = &(tables.top());
	vector<BaseRecord>* table;
	BaseRecord* baseRecord;
	FuncRecord* funcRecord;
	while(tuple != NULL){
		table = &(tuple->table);

		for(vector<BaseRecord>::iterator it = table->begin(); it != table->end(); ++it){
			funcRecord = dynamic_cast<FuncRecord*>(&(*it));
			if(funcRecord == NULL){
				continue;
			}
			cout << it->name << "\n" << endl;
			if(it->name == name && argList == funcRecord->args){
				return true;
			}
		}
		tuple = tuple->parent;
	}
	return false;
}

/*type_t get_type(type_t var){



	return _VOID;
}*/

vector<string> get_args(Var var){
	vector<string> argList;
	




	return argList;
}
