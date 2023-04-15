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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 69 "facile.y"

#include <stdlib.h>
#include <stdio.h>	
#include <glib.h>
#include <ctype.h>
#include <string.h>

#define YYDEBUG 1 // Debug information

extern void begin_code();
extern void produce_code(GNode* node);
extern void end_code();
extern int yylex(void);
extern int yyerror(const char *msg);
extern FILE *yyin;
extern FILE *yyout;
extern char *yytext;
static GHashTable *table = NULL;

#line 91 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"

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

#include "facile.y.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_NUMBER = 3,                 /* "number"  */
  YYSYMBOL_TOK_IDENTIFIER = 4,             /* "identifier"  */
  YYSYMBOL_TOK_AFFECTATION = 5,            /* ":="  */
  YYSYMBOL_TOK_SEMI_COLON = 6,             /* ";"  */
  YYSYMBOL_TOK_IF = 7,                     /* "if"  */
  YYSYMBOL_TOK_ELSE = 8,                   /* "else"  */
  YYSYMBOL_TOK_ELSEIF = 9,                 /* "elseif"  */
  YYSYMBOL_TOK_THEN = 10,                  /* "then"  */
  YYSYMBOL_TOK_ENDIF = 11,                 /* "endif"  */
  YYSYMBOL_TOK_WHILE = 12,                 /* "while"  */
  YYSYMBOL_TOK_BREAK = 13,                 /* "break"  */
  YYSYMBOL_TOK_CONTINUE = 14,              /* "continue"  */
  YYSYMBOL_TOK_ADD = 15,                   /* TOK_ADD  */
  YYSYMBOL_16_ = 16,                       /* "+"  */
  YYSYMBOL_TOK_SUB = 17,                   /* TOK_SUB  */
  YYSYMBOL_18_ = 18,                       /* "-"  */
  YYSYMBOL_TOK_MUL = 19,                   /* TOK_MUL  */
  YYSYMBOL_20_ = 20,                       /* "*"  */
  YYSYMBOL_TOK_DIV = 21,                   /* TOK_DIV  */
  YYSYMBOL_22_ = 22,                       /* "/"  */
  YYSYMBOL_TOK_OPEN_PARENTHESIS = 23,      /* "("  */
  YYSYMBOL_TOK_CLOSE_PARENTHESIS = 24,     /* ")"  */
  YYSYMBOL_TOK_OPEN_BRACE = 25,            /* "{"  */
  YYSYMBOL_TOK_CLOSE_BRACE = 26,           /* "}"  */
  YYSYMBOL_TOK_PRINT = 27,                 /* "print"  */
  YYSYMBOL_TOK_READ = 28,                  /* "read"  */
  YYSYMBOL_TOK_TRUE = 29,                  /* "true"  */
  YYSYMBOL_TOK_FALSE = 30,                 /* "false"  */
  YYSYMBOL_TOK_GREATER_EQUAL = 31,         /* ">="  */
  YYSYMBOL_TOK_LESSER_EQUAL = 32,          /* "<="  */
  YYSYMBOL_TOK_GREATER = 33,               /* ">"  */
  YYSYMBOL_TOK_LESSER = 34,                /* "<"  */
  YYSYMBOL_TOK_EQUALS = 35,                /* "="  */
  YYSYMBOL_TOK_NOTEQUALS = 36,             /* "#"  */
  YYSYMBOL_TOK_NOT = 37,                   /* "not"  */
  YYSYMBOL_TOK_AND = 38,                   /* "and"  */
  YYSYMBOL_TOK_OR = 39,                    /* "or"  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_program = 41,                   /* program  */
  YYSYMBOL_code = 42,                      /* code  */
  YYSYMBOL_instruction = 43,               /* instruction  */
  YYSYMBOL_affectation = 44,               /* affectation  */
  YYSYMBOL_print = 45,                     /* print  */
  YYSYMBOL_read = 46,                      /* read  */
  YYSYMBOL_loop = 47,                      /* loop  */
  YYSYMBOL_statement = 48,                 /* statement  */
  YYSYMBOL_expression = 49,                /* expression  */
  YYSYMBOL_boolean = 50,                   /* boolean  */
  YYSYMBOL_true = 51,                      /* true  */
  YYSYMBOL_false = 52,                     /* false  */
  YYSYMBOL_identifier = 53,                /* identifier  */
  YYSYMBOL_number = 54                     /* number  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   183

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  41
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  85

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   148,   148,   157,   163,   169,   170,   171,   172,   173,
     177,   185,   191,   198,   204,   208,   215,   222,   229,   231,
     233,   235,   241,   247,   253,   259,   265,   267,   269,   275,
     281,   287,   293,   299,   305,   310,   316,   322,   327,   332,
     338,   354
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"number\"",
  "\"identifier\"", "\":=\"", "\";\"", "\"if\"", "\"else\"", "\"elseif\"",
  "\"then\"", "\"endif\"", "\"while\"", "\"break\"", "\"continue\"",
  "TOK_ADD", "\"+\"", "TOK_SUB", "\"-\"", "TOK_MUL", "\"*\"", "TOK_DIV",
  "\"/\"", "\"(\"", "\")\"", "\"{\"", "\"}\"", "\"print\"", "\"read\"",
  "\"true\"", "\"false\"", "\">=\"", "\"<=\"", "\">\"", "\"<\"", "\"=\"",
  "\"#\"", "\"not\"", "\"and\"", "\"or\"", "$accept", "program", "code",
  "instruction", "affectation", "print", "read", "loop", "statement",
  "expression", "boolean", "true", "false", "identifier", "number", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-22)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-37)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -22,     5,   111,   -22,   -22,   -16,   -14,     8,    21,    26,
      26,   -22,   -22,   -22,   -22,   -22,   -22,    45,    26,    26,
     -22,   -22,   -22,    26,    25,    28,    26,    64,    20,   -22,
     -22,   -22,   -22,    71,    26,   125,   -21,    33,   -11,    70,
     -22,   -22,    22,   -22,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,   -22,    95,     7,    37,
     -22,   -22,   116,   134,   141,   147,   125,   125,   125,   125,
     125,   125,    27,    29,   -22,   111,   111,    38,    43,    44,
     -22,    53,   111,    58,   -22
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     2,     1,    40,     0,     0,     0,     0,     0,
       0,     3,     5,     6,     7,     8,     9,     0,     0,     0,
      14,    15,    41,     0,     0,     0,     0,     0,    20,    26,
      27,    18,    19,     0,     0,     0,    20,    20,     0,    20,
      38,    39,    20,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,     0,     0,
      25,    37,    21,    22,    23,    24,    28,    29,    30,    31,
      32,    33,    20,    20,    10,     0,     0,     0,     0,    17,
      13,     0,     0,     0,    16
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,    -8,
      -7,   -22,   -22,    -2,   -22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    11,    12,    13,    14,    15,    16,    35,
      28,    29,    30,    31,    32
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      17,    27,    33,    58,    44,     3,    45,    18,    46,    19,
      47,    36,    37,    60,    20,    38,    39,    54,    55,    42,
      48,    49,    50,    51,    52,    53,    57,    21,   -34,    22,
       4,    40,    75,   -35,    41,   -36,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,   -34,    72,    73,    23,
      34,   -35,    81,   -36,     0,    24,    25,    59,    54,    55,
      54,    55,    76,    26,    79,    54,    55,    54,    55,    80,
      43,    54,    55,    17,    17,    77,    78,    56,    82,    44,
      17,    45,    83,    46,    84,    47,    44,     0,    45,     0,
      46,     0,    47,     0,    61,    48,    49,    50,    51,    52,
      53,    74,    48,    49,    50,    51,    52,    53,    54,    55,
      44,     0,    45,     0,    46,     4,    47,     0,     5,     0,
       0,     0,     0,     6,     7,     8,    48,    49,    50,    51,
      52,    53,     0,    45,     0,    46,     0,    47,     9,    10,
      44,     0,    45,     0,    46,     0,    47,    48,    49,    50,
      51,    52,    53,    46,     0,    47,    48,    49,    50,    51,
      52,    53,    47,     0,     0,    48,    49,    50,    51,    52,
      53,     0,    48,    49,    50,    51,    52,    53,    48,    49,
      50,    51,    52,    53
};

static const yytype_int8 yycheck[] =
{
       2,     9,    10,    24,    15,     0,    17,    23,    19,    23,
      21,    18,    19,    24,     6,    23,    23,    38,    39,    26,
      31,    32,    33,    34,    35,    36,    34,     6,     6,     3,
       4,     6,    25,     6,     6,     6,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    24,    54,    55,    23,
       5,    24,     8,    24,    -1,    29,    30,    24,    38,    39,
      38,    39,    25,    37,    26,    38,    39,    38,    39,    26,
       6,    38,    39,    75,    76,    75,    76,     6,    25,    15,
      82,    17,    82,    19,    26,    21,    15,    -1,    17,    -1,
      19,    -1,    21,    -1,    24,    31,    32,    33,    34,    35,
      36,     6,    31,    32,    33,    34,    35,    36,    38,    39,
      15,    -1,    17,    -1,    19,     4,    21,    -1,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    31,    32,    33,    34,
      35,    36,    -1,    17,    -1,    19,    -1,    21,    27,    28,
      15,    -1,    17,    -1,    19,    -1,    21,    31,    32,    33,
      34,    35,    36,    19,    -1,    21,    31,    32,    33,    34,
      35,    36,    21,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    31,    32,    33,    34,    35,    36,    31,    32,
      33,    34,    35,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    42,     0,     4,     7,    12,    13,    14,    27,
      28,    43,    44,    45,    46,    47,    48,    53,    23,    23,
       6,     6,     3,    23,    29,    30,    37,    49,    50,    51,
      52,    53,    54,    49,     5,    49,    50,    50,    49,    50,
       6,     6,    50,     6,    15,    17,    19,    21,    31,    32,
      33,    34,    35,    36,    38,    39,     6,    49,    24,    24,
      24,    24,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    50,    50,     6,    25,    25,    43,    43,    26,
      26,     8,    25,    43,    26
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    43,    43,    43,
      44,    45,    46,    47,    47,    47,    48,    48,    49,    49,
      49,    49,    49,    49,    49,    49,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    51,    52,
      53,    54
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       4,     3,     3,     7,     2,     2,    11,     7,     1,     1,
       1,     3,     3,     3,     3,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     2,     2,
       1,     1
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
        yyerror (YY_("syntax error: cannot back up")); \
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
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
      yychar = yylex ();
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
  case 2: /* program: code  */
#line 148 "facile.y"
             {
	begin_code();
	produce_code((yyvsp[0].node));
	end_code();
	g_node_destroy((yyvsp[0].node));
}
#line 1478 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 3: /* code: code instruction  */
#line 157 "facile.y"
                         { 
		(yyval.node) = g_node_new("code");  //Dollar dollar représente la valeur des non terminaux correspondant à la règle code.
		g_node_append((yyval.node), (yyvsp[-1].node));	  //Chaque instruction est ajoutée au code,
		g_node_append((yyval.node), (yyvsp[0].node));	  //On ajoute le 2: identifier. Tout cela doit être reconne comme du code.
	}
#line 1488 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 4: /* code: %empty  */
#line 163 "facile.y"
        {
		(yyval.node) = g_node_new("");
	}
#line 1496 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 10: /* affectation: identifier ":=" expression ";"  */
#line 178 "facile.y"
        {
		(yyval.node) = g_node_new("affectation");
		g_node_append((yyval.node), (yyvsp[-3].node));
		g_node_append((yyval.node), (yyvsp[-1].node));	
	}
#line 1506 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 11: /* print: "print" expression ";"  */
#line 185 "facile.y"
                                            {
		(yyval.node) = g_node_new("print");
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1515 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 12: /* read: "read" expression ";"  */
#line 191 "facile.y"
                                           {
		(yyval.node) = g_node_new("read");
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1524 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 13: /* loop: "while" "(" boolean ")" "{" instruction "}"  */
#line 198 "facile.y"
                                                                                                               {
		(yyval.node) = g_node_new("while");
		g_node_append((yyval.node), (yyvsp[-4].node));   //what needs to be tested
		g_node_append((yyval.node), (yyvsp[-1].node));   //instruction
	}
#line 1534 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 14: /* loop: "break" ";"  */
#line 204 "facile.y"
                                 {
		(yyval.node) = g_node_new("break");
	}
#line 1542 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 15: /* loop: "continue" ";"  */
#line 208 "facile.y"
                                    {
		(yyval.node) = g_node_new("continue");
	}
#line 1550 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 16: /* statement: "if" "(" boolean ")" "{" instruction "}" "else" "{" instruction "}"  */
#line 215 "facile.y"
                                                                                                                                                                {
		(yyval.node) = g_node_new("ifelse");
		g_node_append((yyval.node), (yyvsp[-8].node));   //what needs to be tested
		g_node_append((yyval.node), (yyvsp[-5].node));   //instruction
		g_node_append((yyval.node), (yyvsp[-1].node));  //else instruction
	}
#line 1561 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 17: /* statement: "if" "(" boolean ")" "{" instruction "}"  */
#line 222 "facile.y"
                                                                                                            {
		(yyval.node) = g_node_new("if");
		g_node_append((yyval.node), (yyvsp[-4].node)); //what needs to be tested
		g_node_append((yyval.node), (yyvsp[-1].node));
	}
#line 1571 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 21: /* expression: expression TOK_ADD expression  */
#line 235 "facile.y"
                                      {
		(yyval.node) = g_node_new("add");
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1581 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 22: /* expression: expression TOK_SUB expression  */
#line 241 "facile.y"
                                      {
		(yyval.node) = g_node_new("sub");
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1591 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 23: /* expression: expression TOK_MUL expression  */
#line 247 "facile.y"
                                      {
		(yyval.node) = g_node_new("mul");
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1601 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 24: /* expression: expression TOK_DIV expression  */
#line 253 "facile.y"
                                      {
		(yyval.node) = g_node_new("div");
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1611 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 25: /* expression: "(" expression ")"  */
#line 259 "facile.y"
                                                              {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 1619 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 28: /* boolean: expression ">=" expression  */
#line 269 "facile.y"
                                                {
		(yyval.node) = g_node_new("greater_equal");
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1629 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 29: /* boolean: expression "<=" expression  */
#line 275 "facile.y"
                                               {
		(yyval.node) = g_node_new("lesser_equal");
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1639 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 30: /* boolean: expression ">" expression  */
#line 281 "facile.y"
                                          {
		(yyval.node) = g_node_new("greater");
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1649 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 31: /* boolean: expression "<" expression  */
#line 287 "facile.y"
                                         {
		(yyval.node) = g_node_new("lesser");
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1659 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 32: /* boolean: expression "=" expression  */
#line 293 "facile.y"
                                         {
		(yyval.node) = g_node_new("equals");
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1669 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 33: /* boolean: expression "#" expression  */
#line 299 "facile.y"
                                            {
		(yyval.node) = g_node_new("notequals");
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1679 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 34: /* boolean: "not" boolean  */
#line 305 "facile.y"
                        {
		(yyval.node) = g_node_new("not");
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1688 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 35: /* boolean: boolean "and" boolean  */
#line 310 "facile.y"
                                {
		(yyval.node) = g_node_new("and");
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1698 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 36: /* boolean: boolean "or" boolean  */
#line 316 "facile.y"
                               {
		(yyval.node) = g_node_new("or");
		g_node_append((yyval.node), (yyvsp[-2].node));
		g_node_append((yyval.node), (yyvsp[0].node));
	}
#line 1708 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 37: /* boolean: "(" boolean ")"  */
#line 322 "facile.y"
                                                           {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 1716 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 38: /* true: "true" ";"  */
#line 327 "facile.y"
                                {
		(yyval.node) = g_node_new("true");
	}
#line 1724 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 39: /* false: "false" ";"  */
#line 332 "facile.y"
                                 {
		(yyval.node) = g_node_new("false");
	}
#line 1732 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 40: /* identifier: "identifier"  */
#line 338 "facile.y"
                       {
		(yyval.node) = g_node_new("identifier");
        if (!table) {
            table = g_hash_table_new(g_str_hash, g_str_equal);
        }
		gulong value = (gulong) g_hash_table_lookup(table, (yyvsp[0].string));
		char *id = strdup(yytext);
		if (!value) {
			value = g_hash_table_size(table) + 1;
			g_hash_table_insert(table, strdup((yyvsp[0].string)), (gpointer) value);
		}
		guint size = g_hash_table_size(table);
		g_node_append_data((yyval.node), (gpointer) value);
	}
#line 1751 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;

  case 41: /* number: "number"  */
#line 354 "facile.y"
                   {
		(yyval.node) = g_node_new("number");
		g_node_append_data((yyval.node), (gpointer)(yyvsp[0].number));
	}
#line 1760 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"
    break;


#line 1764 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 358 "facile.y"


/*
 * file: facile.y
 * version: 0.6.0
 */

int label_counter = 0;
char* label() {
    char* label = malloc(20 * sizeof(char));
    sprintf(label, "L%d", label_counter++);
    return label;
}

/* produce_code(GNode* node)
*   La fonction produce_code() permet de décomposer l'entrée pour générer du code CIL (assembleur)
*   à partir de chaque élément généré par notre arbre syntaxique.
*/

void produce_code(GNode* node){
	//si l'arbre syntaxique trouve un noeud "code"
	char* start_label_while = NULL;
    char* end_label_while = NULL;
	if (node->data == "code"){
		//Aller chercher chaque "mot" (noeud) du code pour le traduire
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
	} else if (node->data == "affectation"){
		produce_code(g_node_nth_child(node, 1));
		fprintf(yyout, "stloc\t%ld\n", (long)g_node_nth_child(g_node_nth_child(node, 0), 0)->data -1);
	} else if (node->data == "while"){

		start_label_while = label();
        end_label_while = label();
		fprintf(yyout, "br\t%s\n", start_label_while);  //jump to start of loop
		fprintf(yyout, "%s:\n", start_label_while);
		produce_code(g_node_nth_child(node, 0));  //boolean expression

		fprintf(yyout, "brfalse\t%s\n", end_label_while);  //exit loop if false

		produce_code(g_node_nth_child(node, 1));  //expressions
		fprintf(yyout, "br\t%s\n", start_label_while);  //jump to start of loop
		fprintf(yyout, "%s:\n", end_label_while);
	} else if (node->data == "break"){
		fprintf(yyout, "br\t%s\n", end_label_while);
	} else if (node->data == "continue"){
		fprintf(yyout, "br\t%s\n", start_label_while);
	} else if (node->data == "ifelse") {
		produce_code(g_node_nth_child(node, 0)); //boolean expression
		char* else_label = label();  //Jump to else branchement if false
		fprintf(yyout, "brfalse\t%s\n", else_label);
		produce_code(g_node_nth_child(node, 1)); //if block

		char* end_label = label();
		fprintf(yyout, "br\t%s\n", end_label);
		
		fprintf(yyout, "%s:\n", else_label);
		produce_code(g_node_nth_child(node, 2)); //else block
		
		fprintf(yyout, "%s:\n", end_label);
	} else if (node->data == "if") {
		produce_code(g_node_nth_child(node, 0));
		char* end_label = label();
		fprintf(yyout, "brfalse\t%s\n", end_label);
		produce_code(g_node_nth_child(node, 1));
		fprintf(yyout, "%s:\n", end_label);  
	} else if (node->data == "greater"){
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(yyout, "cgt\n");
	} else if (node->data == "lesser"){
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(yyout, "clt\n");
	} else if (node->data == "greater_equal"){
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(yyout, "cge\n");
	} else if (node->data == "lesser_equal"){
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(yyout, "cle\n");
	} else if (node->data == "equals"){
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(yyout, "ceq\n");
	} else if (node->data == "add"){
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(yyout, "add\n");
	} else if (node->data == "sub") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(yyout, " sub\n");
	} else if (node->data == "mul") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(yyout, " mul\n");
	} else if (node->data == "div") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(yyout, " div\n");
	} else if (node->data == "number"){
		fprintf(yyout, "ldc.i4\t%ld\n", (long)g_node_nth_child(node,0)->data);
	} else if (node->data == "identifier"){
		fprintf(yyout, "ldloc\t%ld\n", (long)g_node_nth_child(node, 0)->data - 1);
	} else if (node->data == "print"){
		produce_code(g_node_nth_child(node, 0));
		fprintf(yyout, "call void class [mscorlib]System.Console::WriteLine(int32)\n");
	} else if (node->data == "read") {
		fprintf(yyout, " call string class [mscorlib]System.Console::ReadLine()\n");
		fprintf(yyout, " call int32 int32::Parse(string)\n");
		fprintf(yyout, " stloc\t%ld\n", (long)g_node_nth_child(g_node_nth_child(node, 0), 0)->data - 1);
	}
}

void begin_code()
{
	char *module_name = "texte";
	int max_stack = 10;
	fprintf(yyout,
		".assembly %s {}\n"
		".method public static void Main() cil managed\n"
		"{\n"      
		"	.entrypoint\n"
		"	.maxstack %u\n"
		"	.locals init (",
		module_name,
		max_stack
	);
	//AVOIR LA TAILLE DE LA TABLe!
    guint size = g_hash_table_size(table);
	guint i;
	//Pour chaque identifieur à initialiser en mémoire, ajouter un int32 au code assembleur.
	for (i = 0; i < size; i++) {
		if (i) {
			fprintf(yyout, ", ");
		}
		fprintf(yyout, "int32");
	}
	fprintf(yyout, ")\n");
}

void end_code()
{
	fprintf(yyout, "	ret\n}\n");
}

int yyerror(const char *msg){
	fprintf(stderr, "%s\n", msg);
}

int main(int argc, char *argv[]){
if (argc == 2) {
    char *file_name_input = argv[1];
    char *extension;
    char *directory_delimiter;
    char *basename;
    extension = rindex(file_name_input, '.');
    if (!extension || strcmp(extension, ".facile") != 0) {
        fprintf(stderr, "Input filename extension must be '.facile'\n");
        return EXIT_FAILURE;
    }
    directory_delimiter = rindex(file_name_input, '/');
    if (!directory_delimiter) {
        directory_delimiter = rindex(file_name_input, '\\');
    }
    if (directory_delimiter) {
        basename = strdup(directory_delimiter + 1);
    } else {
        basename = strdup(file_name_input);
    }
    char *module_name = strdup(basename);
    *rindex(module_name, '.') = '\0';
    strcpy(rindex(basename, '.'), ".il");
    char *onechar = module_name;
    if (!isalpha(*onechar) && *onechar != '_') {
        free(basename);
        fprintf(stderr, "Base input filename must start with a letter or an underscore\n");
        return EXIT_FAILURE;
    }
    onechar++;
    while (*onechar) {
        if (!isalnum(*onechar) && *onechar != '_') {
            free(basename);
            fprintf(stderr, "Base input filename cannot contains special characters\n");
            return EXIT_FAILURE;
        }
        onechar++;
    }
    if (yyin = fopen(file_name_input, "r")) {
        if (yyout = fopen(basename, "w")) {
            //GHashTable* table = g_hash_table_new_full(g_str_hash, g_str_equal, free, NULL);
			yyparse();
            //g_hash_table_destroy(table);
            fclose(yyout);
            fclose(stdin);
        } else {
            free(basename);
            fclose(yyin);
            fprintf(stderr, "Output filename cannot be opened\n");
            return EXIT_FAILURE;
        }
    } else {
        free(basename);
        fprintf(stderr, "Input filename cannot be opened\n");
        return EXIT_FAILURE;
    }
    free(basename);
} else {
    fprintf(stderr, "No input filename given\n");
    return EXIT_FAILURE;
}
return EXIT_SUCCESS;
}
