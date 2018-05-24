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
	bool check_func_exist(string name, vector<Var> argList);
	vector<string> get_args(Var var);
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
#define YYLAST   338

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

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
       0,    47,    47,    47,    77,    78,    82,    87,    91,   107,
      81,   120,   121,   124,   125,   128,   129,   132,   143,   154,
     168,   169,   172,   173,   188,   215,   238,   260,   287,   327,
     328,   335,   347,   349,   352,   351,   353,   362,   372,   385,
     396,   397,   400,   401,   402,   405,   406,   429,   430,   431,
     432,   433,   444,   445,   446,   447,   448,   449,   450,   456,
     457,   458,   459,   460,   461,   462,   463,   466,   474
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
  "Program", "$@1", "Funcs", "FuncDecl", "$@2", "$@3", "$@4", "$@5",
  "RetType", "Formals", "FormalsList", "FormalDecl", "Statments",
  "Statement", "$@6", "IfExp", "Call", "ExpList", "Type", "Exp",
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

#define YYPACT_NINF -41

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-41)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -41,     7,    63,   -41,   -41,   -41,   -41,   -41,   -41,    63,
     -41,   -41,   -41,   -41,    14,   -41,   -14,    10,   -39,   -41,
      25,    27,   -41,    10,     6,    18,   -41,    52,   -41,    -1,
     -41,    20,   -41,   117,   -41,    -9,    17,    42,    15,    22,
     -41,   117,   -41,    44,    62,    29,    29,     8,    29,   -41,
       2,    66,   -41,   -41,   -41,   -41,    29,    29,   -41,   215,
      29,   117,   -41,    37,   -41,   -13,   231,   181,   -41,    26,
     131,    38,   275,    29,   -41,   -41,   143,   -41,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
     162,   117,   -41,   -41,    29,    77,   -41,    60,   -41,    29,
     -41,   198,   -41,   286,   296,   111,   111,   304,   304,   304,
     304,    13,    13,   -41,   -41,   -41,    47,   247,     0,    29,
     -41,   117,   -41,   -41,   -41,   -41,    46,    72,   263,   -41,
     117,    75,   -41,   -41,    83,   -41,   -41,   -41,   -41,   117,
     -41,   -41
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     4,     1,    12,    42,    44,    43,    68,     4,
       6,    11,     3,     5,     0,     7,     0,    13,     0,    14,
      15,     0,     8,     0,    17,     0,    16,     0,    67,     0,
       9,     0,    18,     0,    19,     0,     0,     0,     0,     0,
      67,    68,    20,     0,     0,     0,     0,     0,     0,    36,
      51,    53,    55,    56,    57,    30,     0,     0,    52,     0,
       0,     0,    21,     0,    29,     0,     0,     0,    39,     0,
      40,     0,    37,     0,    54,    58,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,    10,    23,     0,     0,    27,     0,    38,     0,
      67,     0,    45,    60,    59,    61,    62,    63,    64,    65,
      66,    48,    47,    50,    49,    34,     0,     0,     0,     0,
      41,     0,    46,    67,    22,    24,     0,     0,     0,    68,
       0,     0,    25,    28,    32,    68,    26,    67,    35,     0,
      68,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -41,   -41,   -41,    89,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,    76,   -41,    41,   -38,   -41,   -41,   -33,     5,    43,
      30,   -30,   -40
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     8,     9,    14,    16,    25,    33,    10,
      18,    19,    20,    41,    42,   123,    71,    58,    69,    44,
      70,    30,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    63,    22,    62,    31,   126,    93,     3,    43,    94,
      61,    50,    51,    45,    52,    53,    54,    15,    50,    51,
       5,    52,    53,    54,     6,    95,    17,     7,    43,    46,
      24,    47,    50,    51,    55,    52,    53,    54,    32,   127,
      73,    23,    47,    56,    27,    11,    88,    89,    57,    68,
      56,   116,    11,    62,    28,    57,    29,    48,    43,    34,
      21,    49,    60,    64,    56,    65,    21,    98,    59,    57,
     121,    74,     4,     5,    92,    66,    67,     6,    72,   100,
       7,   118,   119,   129,   124,   131,    75,    76,    43,   134,
      90,   132,   135,   130,   136,   138,   137,    43,    13,    26,
     141,   140,    91,   101,   120,     0,    43,   139,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      35,     0,     0,     0,   117,     0,     0,     5,    36,     0,
       0,     6,    37,     0,     7,    38,     0,    39,    82,    83,
      84,    85,    86,    87,    88,    89,     0,    99,     0,   128,
       0,     0,     0,    40,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,     0,     0,
       0,     0,     0,     0,   102,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,     0,     0,     0,
       0,     0,     0,   115,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,     0,     0,     0,     0,
      97,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,     0,    77,     0,     0,   122,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      96,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,   125,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,   133,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    -1,    -1,    -1,    -1,    86,    87,    88,    89
};

static const yytype_int16 yycheck[] =
{
      33,    41,    41,    41,     5,     5,    19,     0,    41,    22,
      40,     3,     4,    22,     6,     7,     8,     3,     3,     4,
      10,     6,     7,     8,    14,    38,    40,    17,    61,    38,
       3,    40,     3,     4,    19,     6,     7,     8,    39,    39,
      38,    16,    40,    35,    38,     2,    33,    34,    40,    41,
      35,    91,     9,    91,    36,    40,     4,    40,    91,    39,
      17,    19,    40,    19,    35,     3,    23,    41,    38,    40,
     100,     5,     9,    10,    37,    45,    46,    14,    48,    41,
      17,     4,    22,   121,    37,    39,    56,    57,   121,   129,
      60,    19,   130,   123,    19,   135,    13,   130,     9,    23,
     140,   139,    61,    73,    99,    -1,   139,   137,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
       3,    -1,    -1,    -1,    94,    -1,    -1,    10,    11,    -1,
      -1,    14,    15,    -1,    17,    18,    -1,    20,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    16,    -1,   119,
      -1,    -1,    -1,    36,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      39,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    19,    -1,    -1,    39,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    27,    28,    29,    30,    31,    32,    33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    43,    44,     0,     9,    10,    14,    17,    45,    46,
      51,    61,    64,    45,    47,     3,    48,    40,    52,    53,
      54,    61,    41,    16,     3,    49,    53,    38,    36,     4,
      63,     5,    39,    50,    39,     3,    11,    15,    18,    20,
      36,    55,    56,    59,    61,    22,    38,    40,    40,    19,
       3,     4,     6,     7,     8,    19,    35,    40,    59,    62,
      40,    63,    56,    64,    19,     3,    62,    62,    41,    60,
      62,    58,    62,    38,     5,    62,    62,    19,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      62,    55,    37,    19,    22,    38,    19,    39,    41,    16,
      41,    62,    41,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    41,    64,    62,     4,    22,
      60,    63,    39,    57,    37,    19,     5,    39,    62,    56,
      63,    39,    19,    19,    64,    56,    19,    13,    64,    63,
      56,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    44,    43,    45,    45,    47,    48,    49,    50,
      46,    51,    51,    52,    52,    53,    53,    54,    54,    54,
      55,    55,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    57,    56,    56,    58,    59,    59,
      60,    60,    61,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    63,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     0,     2,     0,     0,     0,     0,
      14,     1,     1,     0,     1,     1,     3,     2,     5,     6,
       1,     2,     5,     3,     5,     6,     7,     4,     7,     2,
       2,     3,     7,    11,     0,     8,     2,     1,     4,     3,
       1,     3,     1,     1,     1,     3,     4,     3,     3,     3,
       3,     1,     1,     1,     2,     1,     1,     1,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     0,     0
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
			Var var1 = {_STRING,0,"a"};
			printArgs.push_back(var1);
			BaseRecord* printRecord = new FuncRecord("print",_VOID,printArgs);
			tuple.table.push_back(printRecord);

			// FuncRecord* funcRecord = dynamic_cast<FuncRecord*>(print.table.back());
			// if(funcRecord != NULL){
			// 	// cout << funcRecord->args[0] << " *****\n" << endl;
			// }

			/* insert printi function to symbol table */
			vector<Var> printiArgs;
			Var var2 = {_INT,0,"a"}; 
			printiArgs.push_back(var2);
			BaseRecord* printiRecord = new FuncRecord("printi",_VOID,printiArgs);
			tuple.table.push_back(printiRecord);

			tuple.parent = NULL;
			tables.push(tuple);
			offsets.push(0);
			// cout << tables.top().table.size() << " $$$$" << endl;

		}
#line 1418 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 82 "parser.ypp" /* yacc.c:1646  */
    { 
				funcType = (yyvsp[0]).type;
				// cout << $1.type << endl; 
			}
#line 1427 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 87 "parser.ypp" /* yacc.c:1646  */
    { 					
				(yyvsp[0]).type = (yyvsp[-2]).type;	

			}
#line 1436 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 91 "parser.ypp" /* yacc.c:1646  */
    {
				
				if(check_func_exist((yyvsp[-4]).name, args)){
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
#line 1457 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 107 "parser.ypp" /* yacc.c:1646  */
    {
				// cout << "here" << endl;

				for(vector<Var>::iterator it = args.begin(); it != args.end(); ++it){
					BaseRecord* record =  new Record(it->name,it->type,offsets.top()-1);
					tables.top().table.push_back(record);
					offsets.top()++;
				}
				args.clear();
			}
#line 1472 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 116 "parser.ypp" /* yacc.c:1646  */
    { funcType = _NULL; }
#line 1478 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 120 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[0]).type;}
#line 1484 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 121 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _VOID; }
#line 1490 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 133 "parser.ypp" /* yacc.c:1646  */
    { 
				// cout << "here\n" << endl;
				Var var = {(yyvsp[-1]).type,0,(yyvsp[0]).name};

				args.push_back(var);
				
				// cout << "size = " << tables.top().table.size() << "\n" << endl;
				// cout << tmp->name << " " << tmp->offset << "\n" << endl;
				// cout << tables.top().table.size() << " ****\n" << endl;
			}
#line 1505 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 144 "parser.ypp" /* yacc.c:1646  */
    { 
				if((yyvsp[-1]).val <= 0 || (yyvsp[-1]).val >= 256){
					errorInvalidArraySize(yylineno,(yyvsp[-3]).name);
					exit(0);
				}
				Var var = {(yyvsp[-4]).type,0,(yyvsp[-3]).name};
				args.push_back(var);
				BaseRecord* arrRecord =  new ArrRecord((yyvsp[-3]).name,(yyvsp[-3]).type,offsets.top()-(yyvsp[-1]).val,(yyvsp[-1]).val);
				tables.top().table.push_back(arrRecord); 
			}
#line 1520 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 155 "parser.ypp" /* yacc.c:1646  */
    { 
				if((yyvsp[-2]).val <= 0 || (yyvsp[-2]).val >= 256){
					errorInvalidArraySize(yylineno,(yyvsp[-4]).name);
					exit(0);
				}
				Var var = {(yyvsp[-5]).type,0,(yyvsp[-4]).name};
				args.push_back(var);
				BaseRecord* arrRecord = new ArrRecord((yyvsp[-4]).name,(yyvsp[-4]).type,offsets.top()-(yyvsp[-2]).val,(yyvsp[-2]).val);
				tables.top().table.push_back(arrRecord); 

			}
#line 1536 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 174 "parser.ypp" /* yacc.c:1646  */
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
#line 1555 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 189 "parser.ypp" /* yacc.c:1646  */
    { 
				// cout << "here1" << endl;
				type_t type = get_variable_type((yyvsp[-3]).name);
				if(type != _NULL){
					errorUndef(yylineno, (yyvsp[-3]).name);
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
#line 1586 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 216 "parser.ypp" /* yacc.c:1646  */
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
#line 1613 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 239 "parser.ypp" /* yacc.c:1646  */
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
#line 1639 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 261 "parser.ypp" /* yacc.c:1646  */
    {
			 	// cout << "here" << endl;
				type_t type;
				int size, res;
				res = get_arr_size_and_type((yyvsp[-3]).name, &type, &size);
				if(res == -1){
					if((type = get_variable_type((yyvsp[-3]).name)) == _NULL){
						errorUndef(yylineno, (yyvsp[-3]).name);
						exit(0);
					}
				}

				if((yyvsp[-1]).size != (yyvsp[-3]).size){
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
				(yyvsp[-3]).type = type;
			}
#line 1670 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 288 "parser.ypp" /* yacc.c:1646  */
    {
				// cout << "****** array assignment ********" << endl;
				type_t type;
				int size, res;
				res = get_arr_size_and_type((yyvsp[-6]).name, &type, &size);
				if(res == -1){
					errorUndef(yylineno, (yyvsp[-6]).name);
					exit(0);
				}
								if((yyvsp[-3]).size != -1){
					errorMismatch(yylineno);
					exit(0);
				}
				(yyvsp[-6]).type = type;
				(yyvsp[-6]).size = size;
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
#line 1714 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 329 "parser.ypp" /* yacc.c:1646  */
    { 
				if(funcType != _VOID){ 
					errorMismatch(yylineno); 
					exit(0); 
				}
			}
#line 1725 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 336 "parser.ypp" /* yacc.c:1646  */
    { 
				// cout << $2.type << " " << funcType << endl;
				if (funcType == _INT && ((yyvsp[-1]).type != _INT && (yyvsp[-1]).type != _BYTE)){
					errorMismatch(yylineno); 
					exit(0); 
				}
				else if(funcType != _INT && funcType != (yyvsp[-1]).type){ 
					errorMismatch(yylineno); 
					exit(0); 
				}
			}
#line 1741 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 352 "parser.ypp" /* yacc.c:1646  */
    { whileFlag = 1; }
#line 1747 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 352 "parser.ypp" /* yacc.c:1646  */
    { whileFlag = 0; }
#line 1753 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 354 "parser.ypp" /* yacc.c:1646  */
    { 
				if(!whileFlag){ 
					errorUnexpectedBreak(yylineno); 
					exit(0);
				}
			}
#line 1764 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 363 "parser.ypp" /* yacc.c:1646  */
    {
			// cout << "$3.type = " << $3.type << endl;
			if((yyvsp[0]).type != _BOOL){
			// cout << "here" << endl;
				errorMismatch(yylineno);
				exit(0);
			}
		}
#line 1777 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 373 "parser.ypp" /* yacc.c:1646  */
    {
 			//vector<Var> argList = params;
 			//
 			// cout << $1.name << " " << argList[0] << "\n" << endl;
			if(!check_func_exist((yyvsp[-3]).name, params)){
				errorUndef(yylineno, (yyvsp[-3]).name);
				exit(0);
			}
			(yyval).type = (yyvsp[-3]).type;
			params.clear();

		}
#line 1794 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 386 "parser.ypp" /* yacc.c:1646  */
    {
			if(!check_func_exist((yyvsp[-2]).name, vector<Var>())){
				errorUndef(yylineno, (yyvsp[-2]).name);
				exit(0);
			}
			(yyval).type = (yyvsp[-2]).type;

		}
#line 1807 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 396 "parser.ypp" /* yacc.c:1646  */
    { Var var = {(yyvsp[0]).type, (yyvsp[0]).size, (yyvsp[0]).name}; params.push_back(var); }
#line 1813 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 397 "parser.ypp" /* yacc.c:1646  */
    { Var var = {(yyvsp[-2]).type, (yyvsp[-2]).size, (yyvsp[-2]).name}; params.push_back(var); }
#line 1819 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 400 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _INT; }
#line 1825 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 401 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _BYTE; }
#line 1831 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 402 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _BOOL; }
#line 1837 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 405 "parser.ypp" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1843 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 407 "parser.ypp" /* yacc.c:1646  */
    { 
			// cout << "here1" << endl;
			type_t type = _NULL;

			int size, res;
			res = get_arr_size_and_type((yyvsp[-3]).name, &type, &size);
			if(res == -1){
				errorUndef(yylineno, (yyvsp[-3]).name);
				exit(0);
			}
			// cout << "type = " << type << endl;
			if((yyvsp[-1]).type != _BYTE && (yyvsp[-1]).type != _INT){
				// cout << "here" << endl;
				errorMismatch(yylineno);
				exit(0);
			}
			// cout << "here2" << endl;

			(yyval).type = (yyvsp[-3]).type = type;
			(yyval).size = -1;

		}
#line 1870 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 429 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _INT; }
#line 1876 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 430 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _INT; }
#line 1882 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 431 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _INT; }
#line 1888 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 432 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _INT; }
#line 1894 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 434 "parser.ypp" /* yacc.c:1646  */
    { 
			type_t type = get_variable_type((yyvsp[0]).name);
			if(type == _NULL){
				errorUndef(yylineno, (yyvsp[0]).name);
				exit(0);
			}
			(yyvsp[0]).type = type;
			// $1.size = -1;
			(yyval) = (yyvsp[0]); 
		}
#line 1909 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 444 "parser.ypp" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1915 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 445 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _INT; (yyval).val = (yyvsp[0]).val; }
#line 1921 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 446 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _BYTE; (yyval).val = (yyvsp[-1]).val; }
#line 1927 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 447 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _STRING; }
#line 1933 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 448 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _BOOL;}
#line 1939 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 449 "parser.ypp" /* yacc.c:1646  */
    { (yyval).type = _BOOL; }
#line 1945 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 450 "parser.ypp" /* yacc.c:1646  */
    { if((yyvsp[0]).type != _BOOL){
						errorMismatch(yylineno);
						exit(0);
						} 
					(yyval).type = _BOOL;
				}
#line 1956 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 456 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,false); (yyval).type = _BOOL; }
#line 1962 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 457 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,false); (yyval).type = _BOOL; }
#line 1968 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 458 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _BOOL; }
#line 1974 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 459 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _BOOL; }
#line 1980 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 460 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _BOOL; }
#line 1986 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 461 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _BOOL; }
#line 1992 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 462 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _BOOL; }
#line 1998 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 463 "parser.ypp" /* yacc.c:1646  */
    { match_operands((yyvsp[-2]).type,(yyvsp[0]).type,true); (yyval).type = _BOOL; }
#line 2004 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 466 "parser.ypp" /* yacc.c:1646  */
    {
				Tuple tuple;
				tuple.parent = &(tables.top());
				tables.push(tuple);
				offsets.push(offsets.top());
			}
#line 2015 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 474 "parser.ypp" /* yacc.c:1646  */
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
							tmp.push_back(types[it->type]);
						}
						printID(funcRecord->name, 0, makeFunctionType(types[funcRecord->type],tmp));
						continue;
					}
					
				}
				tables.pop();
				offsets.pop();
			}
#line 2063 "parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2067 "parser.tab.cpp" /* yacc.c:1646  */
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
#line 519 "parser.ypp" /* yacc.c:1906  */


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

bool check_func_exist(string name, vector<Var> argList){
	Tuple *tuple = &(tables.top());
	vector<BaseRecord*>* table;
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
			if(funcRecord->name == name /*&& argList == funcRecord->args*/){
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
