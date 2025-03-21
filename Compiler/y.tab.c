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
#line 38 "./lang.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stdbool.h>
#include <math.h>
#define YYERROR_VERBOSE

int yylex(void);
int variablesCount = 0;
int methodsCount = 0;
int operandsCount = 0;


#line 87 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "./lang.y"

    #include "lang.h"

    nodeType *conInt(int value);
    nodeType *conFloat(float value);
    nodeType *conStr(char *value);
    nodeType *conBool(bool value);
    nodeType *id(char *s);



    #ifndef NODE_H
    #define NODE_H

    nodeType *symbolTable[SYM_LIMIT];
    nodeType *methodsSymbolTable[SYM_LIMIT];
    nodeType *methodOperands[METHOD_OPERANDS_LIMIT];

    #endif


    

    nodeType *opr(int oper, int nops, ...);
    nodeType *setAndDeclare(char *variableName, nodeType* rhs, bool isConst);
    nodeType *defineMethod(char *methodName, nodeType* statements);
    nodeType *callMethod(char *methodName);
    int isVariableDeclared(char *variableName);
    int isMethodDeclared(char *methodName);
    int ex(nodeType *p);
    void addOperand(char *variableName);
    void passOperand(nodeType *p);
    void yyerror(char *);
    void printSymTable(int choice);
    static bool boolFile;


#line 160 "y.tab.c"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INTEGER = 258,                 /* INTEGER  */
    typeMissMatch = 259,           /* typeMissMatch  */
    FLOAT = 260,                   /* FLOAT  */
    STRING = 261,                  /* STRING  */
    BOOL = 262,                    /* BOOL  */
    VARIABLE = 263,                /* VARIABLE  */
    METHOD = 264,                  /* METHOD  */
    METHOD_VARIABLE = 265,         /* METHOD_VARIABLE  */
    WHILE = 266,                   /* WHILE  */
    IF = 267,                      /* IF  */
    PRINT = 268,                   /* PRINT  */
    CONST = 269,                   /* CONST  */
    METHOD_DEF = 270,              /* METHOD_DEF  */
    FOR = 271,                     /* FOR  */
    SWITCH = 272,                  /* SWITCH  */
    CASE = 273,                    /* CASE  */
    REPEAT = 274,                  /* REPEAT  */
    UNTIL = 275,                   /* UNTIL  */
    BREAK = 276,                   /* BREAK  */
    CONTINUE = 277,                /* CONTINUE  */
    GE = 278,                      /* GE  */
    LE = 279,                      /* LE  */
    EQ = 280,                      /* EQ  */
    NE = 281,                      /* NE  */
    GT = 282,                      /* GT  */
    LT = 283,                      /* LT  */
    AND = 284,                     /* AND  */
    OR = 285,                      /* OR  */
    MINUS = 286,                   /* MINUS  */
    PLUS = 287,                    /* PLUS  */
    MULT = 288,                    /* MULT  */
    DIV = 289,                     /* DIV  */
    ASSIG = 290,                   /* ASSIG  */
    WRONG_VARIABLE = 291,          /* WRONG_VARIABLE  */
    IFX = 292,                     /* IFX  */
    ELSE = 293,                    /* ELSE  */
    UMINUS = 294                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INTEGER 258
#define typeMissMatch 259
#define FLOAT 260
#define STRING 261
#define BOOL 262
#define VARIABLE 263
#define METHOD 264
#define METHOD_VARIABLE 265
#define WHILE 266
#define IF 267
#define PRINT 268
#define CONST 269
#define METHOD_DEF 270
#define FOR 271
#define SWITCH 272
#define CASE 273
#define REPEAT 274
#define UNTIL 275
#define BREAK 276
#define CONTINUE 277
#define GE 278
#define LE 279
#define EQ 280
#define NE 281
#define GT 282
#define LT 283
#define AND 284
#define OR 285
#define MINUS 286
#define PLUS 287
#define MULT 288
#define DIV 289
#define ASSIG 290
#define WRONG_VARIABLE 291
#define IFX 292
#define ELSE 293
#define UMINUS 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 54 "./lang.y"

    int iValue;                 /* integer value */
    char sValue[100];                /* string Value */
    bool bValue;                
    float fValue;
    nodeType *nPtr;             /* node pointer */

#line 266 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER = 3,                    /* INTEGER  */
  YYSYMBOL_typeMissMatch = 4,              /* typeMissMatch  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_BOOL = 7,                       /* BOOL  */
  YYSYMBOL_VARIABLE = 8,                   /* VARIABLE  */
  YYSYMBOL_METHOD = 9,                     /* METHOD  */
  YYSYMBOL_METHOD_VARIABLE = 10,           /* METHOD_VARIABLE  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_PRINT = 13,                     /* PRINT  */
  YYSYMBOL_CONST = 14,                     /* CONST  */
  YYSYMBOL_METHOD_DEF = 15,                /* METHOD_DEF  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_SWITCH = 17,                    /* SWITCH  */
  YYSYMBOL_CASE = 18,                      /* CASE  */
  YYSYMBOL_REPEAT = 19,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 20,                     /* UNTIL  */
  YYSYMBOL_BREAK = 21,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 22,                  /* CONTINUE  */
  YYSYMBOL_GE = 23,                        /* GE  */
  YYSYMBOL_LE = 24,                        /* LE  */
  YYSYMBOL_EQ = 25,                        /* EQ  */
  YYSYMBOL_NE = 26,                        /* NE  */
  YYSYMBOL_GT = 27,                        /* GT  */
  YYSYMBOL_LT = 28,                        /* LT  */
  YYSYMBOL_AND = 29,                       /* AND  */
  YYSYMBOL_OR = 30,                        /* OR  */
  YYSYMBOL_MINUS = 31,                     /* MINUS  */
  YYSYMBOL_PLUS = 32,                      /* PLUS  */
  YYSYMBOL_MULT = 33,                      /* MULT  */
  YYSYMBOL_DIV = 34,                       /* DIV  */
  YYSYMBOL_ASSIG = 35,                     /* ASSIG  */
  YYSYMBOL_WRONG_VARIABLE = 36,            /* WRONG_VARIABLE  */
  YYSYMBOL_IFX = 37,                       /* IFX  */
  YYSYMBOL_ELSE = 38,                      /* ELSE  */
  YYSYMBOL_39_ = 39,                       /* ','  */
  YYSYMBOL_UMINUS = 40,                    /* UMINUS  */
  YYSYMBOL_41_ = 41,                       /* ':'  */
  YYSYMBOL_42_ = 42,                       /* ';'  */
  YYSYMBOL_43_ = 43,                       /* '('  */
  YYSYMBOL_44_ = 44,                       /* '{'  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_46_ = 46,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_program = 48,                   /* program  */
  YYSYMBOL_function = 49,                  /* function  */
  YYSYMBOL_stmt = 50,                      /* stmt  */
  YYSYMBOL_wrongAssigStmt = 51,            /* wrongAssigStmt  */
  YYSYMBOL_assignStmt = 52,                /* assignStmt  */
  YYSYMBOL_caseStmt = 53,                  /* caseStmt  */
  YYSYMBOL_stmtList = 54,                  /* stmtList  */
  YYSYMBOL_expr = 55,                      /* expr  */
  YYSYMBOL_logicExpr = 56,                 /* logicExpr  */
  YYSYMBOL_val = 57,                       /* val  */
  YYSYMBOL_passedOperand = 58,             /* passedOperand  */
  YYSYMBOL_methodOperand = 59              /* methodOperand  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   423

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  146

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
      43,    45,     2,     2,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    41,    42,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    46,     2,     2,     2,     2,
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
      35,    36,    37,    38,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    88,    88,    92,    93,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     115,   116,   120,   121,   122,   127,   128,   132,   133,   137,
     138,   139,   140,   141,   142,   143,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   159,   160,   161,   162,   163,
     164,   168,   169,   170,   174,   175,   176
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
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER",
  "typeMissMatch", "FLOAT", "STRING", "BOOL", "VARIABLE", "METHOD",
  "METHOD_VARIABLE", "WHILE", "IF", "PRINT", "CONST", "METHOD_DEF", "FOR",
  "SWITCH", "CASE", "REPEAT", "UNTIL", "BREAK", "CONTINUE", "GE", "LE",
  "EQ", "NE", "GT", "LT", "AND", "OR", "MINUS", "PLUS", "MULT", "DIV",
  "ASSIG", "WRONG_VARIABLE", "IFX", "ELSE", "','", "UMINUS", "':'", "';'",
  "'('", "'{'", "')'", "'}'", "$accept", "program", "function", "stmt",
  "wrongAssigStmt", "assignStmt", "caseStmt", "stmtList", "expr",
  "logicExpr", "val", "passedOperand", "methodOperand", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-37)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-26)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -37,    27,   312,   -37,    -7,   -10,    -1,     9,    18,    59,
      -6,    23,    20,    28,    -8,    -5,     8,    35,   -37,   312,
     -37,   -37,    46,    59,   409,    59,   409,   409,   -37,   -37,
     -37,   -37,   -37,   -37,    59,    59,     7,   -37,    54,    58,
      51,    12,   409,   312,   -37,   -37,    59,   -37,   131,   -37,
      53,   -37,   -24,    53,   104,   -37,   350,   -37,   -22,    59,
      59,    59,    59,   -37,    59,    59,    85,    88,    56,    55,
     147,    53,   -37,   -37,   409,    61,   409,   409,   409,   409,
     409,   409,   409,   409,    57,    60,   -37,   -20,   -20,   -37,
     -37,    53,    53,   -37,   -14,   409,    63,    90,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   312,   312,
      85,    67,   381,    87,    69,   186,   202,   -37,   312,    12,
     409,    70,   409,   -37,    77,   241,    72,    79,   -37,   373,
      74,   -37,    78,   312,    82,   312,   312,   349,   -37,   257,
     296,    83,   -37,   -37,   -11,   -37
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     0,
       3,    19,     0,     0,    53,     0,     0,     0,    47,    48,
      46,    45,    49,    50,     0,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     7,     8,     0,    27,     0,    10,
      22,    51,     0,    23,     0,    44,     0,    29,     0,     0,
       0,     0,     0,     6,     0,     0,    56,     0,     0,     0,
       0,    20,    18,    28,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    35,    34,    33,    31,
      32,    24,    21,    54,     0,     0,     0,     0,    52,    13,
      38,    40,    41,    39,    36,    37,    42,    43,     0,     0,
      56,     0,     0,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     0,    12,    16,     0,     0,     0,     9,     0,
       0,    14,     0,     0,     0,     0,     0,     0,    11,     0,
       0,     0,    17,    15,     7,    26
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -37,   -37,   -37,    -2,   -37,   -36,   -18,   -27,   -17,    -3,
     -23,    47,    26
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    47,    21,    22,   121,    48,    36,    54,
      37,    52,    94
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    51,    38,    55,    55,    68,    50,   120,    53,    59,
      60,    61,    62,    61,    62,    74,    70,    57,    58,    69,
       4,    75,     6,    86,    56,   110,    67,     3,    23,    71,
      39,   111,    40,    24,    25,   -25,    43,    44,    59,    60,
      61,    62,    87,    88,    89,    90,    73,    91,    92,    63,
      45,    51,    26,    55,    55,    55,    55,    55,    55,    55,
      55,    27,    28,    41,    29,    30,    31,    32,    73,    33,
      46,    42,    55,   100,   101,   102,   103,   104,   105,   106,
     107,   115,   116,   126,    59,    60,    61,    62,    49,    64,
      34,   125,   112,    65,    66,    93,    38,   127,    95,    55,
      96,   108,    35,    99,   109,   120,   137,   113,   139,   140,
     114,   118,   122,    73,    73,   130,   128,   132,   135,   129,
     133,    98,   136,    73,   138,   144,   145,    76,    77,    78,
      79,    80,    81,    82,    83,    73,   117,    73,    73,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    84,
      14,     0,    15,    16,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,    14,    17,    15,    16,
       0,     0,     0,    18,     0,    19,     0,    72,     0,     0,
       0,     0,     0,    17,     0,     0,     0,     0,     0,    18,
       0,    19,     0,    97,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,    14,     0,    15,    16,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       0,    14,    17,    15,    16,     0,     0,     0,    18,     0,
      19,     0,   123,     0,     0,     0,     0,     0,    17,     0,
       0,     0,     0,     0,    18,     0,    19,     0,   124,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
      14,     0,    15,    16,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,    14,    17,    15,    16,
       0,     0,     0,    18,     0,    19,     0,   131,     0,     0,
       0,     0,     0,    17,     0,     0,     0,     0,     0,    18,
       0,    19,     0,   142,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,    14,     0,    15,    16,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       0,    14,    17,    15,    16,     0,     0,     0,    18,     0,
      19,     0,   143,     0,     0,     0,     0,     0,    17,     0,
       0,     0,     0,     0,    18,     0,    19,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,    14,     0,
     141,    16,     0,    76,    77,    78,    79,    80,    81,    82,
      83,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,    18,     0,    19,     0,    85,    76,    77,    78,    79,
      80,    81,    82,    83,    76,    77,    78,    79,    80,    81,
      82,    83,    28,     0,    29,    30,    31,    32,   134,    33,
       0,     0,     0,   119
};

static const yytype_int16 yycheck[] =
{
       2,    24,     8,    26,    27,    41,    23,    18,    25,    31,
      32,    33,    34,    33,    34,    39,    43,    34,    35,    42,
       8,    45,    10,    45,    27,    39,    14,     0,    35,    46,
      36,    45,     9,    43,    35,    46,    44,    42,    31,    32,
      33,    34,    59,    60,    61,    62,    48,    64,    65,    42,
      42,    74,    43,    76,    77,    78,    79,    80,    81,    82,
      83,    43,     3,    43,     5,     6,     7,     8,    70,    10,
      35,    43,    95,    76,    77,    78,    79,    80,    81,    82,
      83,   108,   109,   119,    31,    32,    33,    34,    42,    35,
      31,   118,    95,    35,    43,    10,     8,   120,    42,   122,
      45,    44,    43,    42,    44,    18,   133,    44,   135,   136,
      20,    44,    43,   115,   116,    38,    46,    45,    44,   122,
      41,    74,    44,   125,    42,    42,   144,    23,    24,    25,
      26,    27,    28,    29,    30,   137,   110,   139,   140,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    45,
      19,    -1,    21,    22,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    36,    21,    22,
      -1,    -1,    -1,    42,    -1,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,    -1,    46,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    -1,    21,    22,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    36,    21,    22,    -1,    -1,    -1,    42,    -1,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    -1,    21,    22,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    36,    21,    22,
      -1,    -1,    -1,    42,    -1,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,    -1,    46,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    -1,    21,    22,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    36,    21,    22,    -1,    -1,    -1,    42,    -1,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    44,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    -1,
      21,    22,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    -1,    45,    23,    24,    25,    26,
      27,    28,    29,    30,    23,    24,    25,    26,    27,    28,
      29,    30,     3,    -1,     5,     6,     7,     8,    45,    10,
      -1,    -1,    -1,    42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    48,    49,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    19,    21,    22,    36,    42,    44,
      50,    51,    52,    35,    43,    35,    43,    43,     3,     5,
       6,     7,     8,    10,    31,    43,    55,    57,     8,    36,
       9,    43,    43,    44,    42,    42,    35,    50,    54,    42,
      55,    57,    58,    55,    56,    57,    56,    55,    55,    31,
      32,    33,    34,    42,    35,    35,    43,    14,    52,    57,
      54,    55,    46,    50,    39,    45,    23,    24,    25,    26,
      27,    28,    29,    30,    45,    45,    45,    55,    55,    55,
      55,    55,    55,    10,    59,    42,    45,    46,    58,    42,
      56,    56,    56,    56,    56,    56,    56,    56,    44,    44,
      39,    45,    56,    44,    20,    54,    54,    59,    44,    42,
      18,    53,    43,    46,    46,    54,    52,    57,    46,    56,
      38,    46,    45,    41,    45,    44,    44,    54,    42,    54,
      54,    21,    46,    46,    42,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      51,    51,    52,    52,    52,    53,    53,    54,    54,    55,
      55,    55,    55,    55,    55,    55,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    57,    57,    57,    57,    57,
      57,    58,    58,    58,    59,    59,    59
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     3,     2,     2,     7,
       2,     9,     7,     5,     8,    11,     7,    11,     3,     1,
       3,     4,     3,     3,     4,     6,     7,     1,     2,     2,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     1,     3,     0
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
  case 2: /* program: function  */
#line 88 "./lang.y"
                                {boolFile=false; exit(0);}
#line 1444 "y.tab.c"
    break;

  case 3: /* function: function stmt  */
#line 92 "./lang.y"
                                {ex((yyvsp[0].nPtr));}
#line 1450 "y.tab.c"
    break;

  case 5: /* stmt: ';'  */
#line 97 "./lang.y"
                                                                                {(yyval.nPtr) = opr(';', 2, NULL, NULL);}
#line 1456 "y.tab.c"
    break;

  case 6: /* stmt: PRINT expr ';'  */
#line 98 "./lang.y"
                                                                                {(yyval.nPtr) = opr(PRINT, 1, (yyvsp[-1].nPtr));}
#line 1462 "y.tab.c"
    break;

  case 7: /* stmt: BREAK ';'  */
#line 99 "./lang.y"
                                                                                {(yyval.nPtr) = opr(BREAK, 0);}
#line 1468 "y.tab.c"
    break;

  case 8: /* stmt: CONTINUE ';'  */
#line 100 "./lang.y"
                                                                                {(yyval.nPtr) = opr(CONTINUE, 0);}
#line 1474 "y.tab.c"
    break;

  case 9: /* stmt: SWITCH '(' val ')' '{' caseStmt '}'  */
#line 101 "./lang.y"
                                                                                {(yyval.nPtr) = opr(SWITCH, 2, (yyvsp[-4].nPtr), (yyvsp[-1].nPtr));}
#line 1480 "y.tab.c"
    break;

  case 10: /* stmt: assignStmt ';'  */
#line 102 "./lang.y"
                                                                                {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1486 "y.tab.c"
    break;

  case 11: /* stmt: REPEAT '{' stmtList '}' UNTIL '(' logicExpr ')' ';'  */
#line 103 "./lang.y"
                                                                                {(yyval.nPtr) = opr(REPEAT, 2, (yyvsp[-6].nPtr), (yyvsp[-2].nPtr));}
#line 1492 "y.tab.c"
    break;

  case 12: /* stmt: WHILE '(' logicExpr ')' '{' stmtList '}'  */
#line 104 "./lang.y"
                                                                                {(yyval.nPtr) = opr(WHILE, 2, (yyvsp[-4].nPtr), (yyvsp[-1].nPtr));}
#line 1498 "y.tab.c"
    break;

  case 13: /* stmt: METHOD '(' passedOperand ')' ';'  */
#line 105 "./lang.y"
                                                                                {(yyval.nPtr) = callMethod((yyvsp[-4].sValue));}
#line 1504 "y.tab.c"
    break;

  case 14: /* stmt: METHOD_DEF METHOD '(' methodOperand ')' '{' stmtList '}'  */
#line 106 "./lang.y"
                                                                                {(yyval.nPtr) = defineMethod((yyvsp[-6].sValue), (yyvsp[-1].nPtr));}
#line 1510 "y.tab.c"
    break;

  case 15: /* stmt: FOR '(' assignStmt ';' logicExpr ';' assignStmt ')' '{' stmtList '}'  */
#line 107 "./lang.y"
                                                                                {(yyval.nPtr) = opr(FOR, 4, (yyvsp[-8].nPtr), (yyvsp[-6].nPtr), (yyvsp[-4].nPtr), (yyvsp[-1].nPtr));}
#line 1516 "y.tab.c"
    break;

  case 16: /* stmt: IF '(' logicExpr ')' '{' stmtList '}'  */
#line 108 "./lang.y"
                                                                                {(yyval.nPtr) = opr(IF, 2, (yyvsp[-4].nPtr), (yyvsp[-1].nPtr));}
#line 1522 "y.tab.c"
    break;

  case 17: /* stmt: IF '(' logicExpr ')' '{' stmtList '}' ELSE '{' stmtList '}'  */
#line 109 "./lang.y"
                                                                                {(yyval.nPtr) = opr(IF, 3, (yyvsp[-8].nPtr), (yyvsp[-5].nPtr), (yyvsp[-1].nPtr)); }
#line 1528 "y.tab.c"
    break;

  case 18: /* stmt: '{' stmtList '}'  */
#line 110 "./lang.y"
                                                                                {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1534 "y.tab.c"
    break;

  case 19: /* stmt: wrongAssigStmt  */
#line 111 "./lang.y"
                                                                                {}
#line 1540 "y.tab.c"
    break;

  case 20: /* wrongAssigStmt: WRONG_VARIABLE ASSIG expr  */
#line 115 "./lang.y"
                                                                                {yyerror("wrong variable name");}
#line 1546 "y.tab.c"
    break;

  case 21: /* wrongAssigStmt: CONST WRONG_VARIABLE ASSIG expr  */
#line 116 "./lang.y"
                                                                                {yyerror("wrong variable name");}
#line 1552 "y.tab.c"
    break;

  case 22: /* assignStmt: VARIABLE ASSIG expr  */
#line 120 "./lang.y"
                                                                                {(yyval.nPtr) = setAndDeclare((yyvsp[-2].sValue), (yyvsp[0].nPtr), false);}
#line 1558 "y.tab.c"
    break;

  case 23: /* assignStmt: METHOD_VARIABLE ASSIG expr  */
#line 121 "./lang.y"
                                                                                {(yyval.nPtr) = setAndDeclare((yyvsp[-2].sValue), (yyvsp[0].nPtr), false);}
#line 1564 "y.tab.c"
    break;

  case 24: /* assignStmt: CONST VARIABLE ASSIG expr  */
#line 122 "./lang.y"
                                                                                {(yyval.nPtr) = setAndDeclare((yyvsp[-2].sValue), (yyvsp[0].nPtr), true);}
#line 1570 "y.tab.c"
    break;

  case 25: /* caseStmt: CASE val ':' stmtList BREAK ';'  */
#line 127 "./lang.y"
                                                                                {(yyval.nPtr) = opr(CASE, 2, (yyvsp[-4].nPtr), (yyvsp[-2].nPtr)); }
#line 1576 "y.tab.c"
    break;

  case 26: /* caseStmt: CASE val ':' stmtList BREAK ';' caseStmt  */
#line 128 "./lang.y"
                                                                                {(yyval.nPtr) = opr(CASE, 3, (yyvsp[-5].nPtr), (yyvsp[-3].nPtr), (yyvsp[0].nPtr)); }
#line 1582 "y.tab.c"
    break;

  case 27: /* stmtList: stmt  */
#line 132 "./lang.y"
                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1588 "y.tab.c"
    break;

  case 28: /* stmtList: stmtList stmt  */
#line 133 "./lang.y"
                                {(yyval.nPtr) = opr(';', 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1594 "y.tab.c"
    break;

  case 29: /* expr: MINUS expr  */
#line 137 "./lang.y"
                                        {(yyval.nPtr) = opr(UMINUS, 1, (yyvsp[0].nPtr));}
#line 1600 "y.tab.c"
    break;

  case 30: /* expr: val  */
#line 138 "./lang.y"
                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1606 "y.tab.c"
    break;

  case 31: /* expr: expr MULT expr  */
#line 139 "./lang.y"
                                        {(yyval.nPtr) = opr(MULT, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1612 "y.tab.c"
    break;

  case 32: /* expr: expr DIV expr  */
#line 140 "./lang.y"
                                        {(yyval.nPtr) = opr(DIV, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1618 "y.tab.c"
    break;

  case 33: /* expr: expr PLUS expr  */
#line 141 "./lang.y"
                                        {(yyval.nPtr) = opr(PLUS, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1624 "y.tab.c"
    break;

  case 34: /* expr: expr MINUS expr  */
#line 142 "./lang.y"
                                        {(yyval.nPtr) = opr(MINUS, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1630 "y.tab.c"
    break;

  case 35: /* expr: '(' expr ')'  */
#line 143 "./lang.y"
                                        {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1636 "y.tab.c"
    break;

  case 36: /* logicExpr: logicExpr GT logicExpr  */
#line 147 "./lang.y"
                                           {(yyval.nPtr) = opr(GT, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1642 "y.tab.c"
    break;

  case 37: /* logicExpr: logicExpr LT logicExpr  */
#line 148 "./lang.y"
                                           {(yyval.nPtr) = opr(LT, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1648 "y.tab.c"
    break;

  case 38: /* logicExpr: logicExpr GE logicExpr  */
#line 149 "./lang.y"
                                           {(yyval.nPtr) = opr(GE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1654 "y.tab.c"
    break;

  case 39: /* logicExpr: logicExpr NE logicExpr  */
#line 150 "./lang.y"
                                           {(yyval.nPtr) = opr(NE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1660 "y.tab.c"
    break;

  case 40: /* logicExpr: logicExpr LE logicExpr  */
#line 151 "./lang.y"
                                           {(yyval.nPtr) = opr(LE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1666 "y.tab.c"
    break;

  case 41: /* logicExpr: logicExpr EQ logicExpr  */
#line 152 "./lang.y"
                                           {(yyval.nPtr) = opr(EQ, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1672 "y.tab.c"
    break;

  case 42: /* logicExpr: logicExpr AND logicExpr  */
#line 153 "./lang.y"
                                           {(yyval.nPtr) = opr(AND, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1678 "y.tab.c"
    break;

  case 43: /* logicExpr: logicExpr OR logicExpr  */
#line 154 "./lang.y"
                                           {(yyval.nPtr) = opr(OR, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1684 "y.tab.c"
    break;

  case 44: /* logicExpr: val  */
#line 155 "./lang.y"
                                           {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1690 "y.tab.c"
    break;

  case 45: /* val: BOOL  */
#line 159 "./lang.y"
                       {(yyval.nPtr) = conBool((yyvsp[0].bValue));}
#line 1696 "y.tab.c"
    break;

  case 46: /* val: STRING  */
#line 160 "./lang.y"
                       {(yyval.nPtr) = conStr((yyvsp[0].sValue));}
#line 1702 "y.tab.c"
    break;

  case 47: /* val: INTEGER  */
#line 161 "./lang.y"
                       {(yyval.nPtr) = conInt((yyvsp[0].iValue));}
#line 1708 "y.tab.c"
    break;

  case 48: /* val: FLOAT  */
#line 162 "./lang.y"
                       {(yyval.nPtr) = conFloat((yyvsp[0].fValue));}
#line 1714 "y.tab.c"
    break;

  case 49: /* val: VARIABLE  */
#line 163 "./lang.y"
                       {(yyval.nPtr) = id((yyvsp[0].sValue));}
#line 1720 "y.tab.c"
    break;

  case 50: /* val: METHOD_VARIABLE  */
#line 164 "./lang.y"
                              {(yyval.nPtr) = id((yyvsp[0].sValue));}
#line 1726 "y.tab.c"
    break;

  case 51: /* passedOperand: val  */
#line 168 "./lang.y"
                                                       {passOperand((yyvsp[0].nPtr));}
#line 1732 "y.tab.c"
    break;

  case 54: /* methodOperand: METHOD_VARIABLE  */
#line 174 "./lang.y"
                                                       {addOperand((yyvsp[0].sValue));}
#line 1738 "y.tab.c"
    break;


#line 1742 "y.tab.c"

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

#line 179 "./lang.y"



int getDataType(nodeType *node) {
    int dataType;
    if (node->type == typeCon) {
        dataType = node->con.dataType;
    }
    else if (node->type == typeId) {
        dataType = node->id.dataType;
    }
    else if (node->type == typeOpr) {
        dataType = node->opr.dataType;
    }
    return dataType;
}

int isVariableDeclared(char *variableName) {

     for(int i = 0 ; i < variablesCount; i++) {
        if(strcmp(symbolTable[i]->id.variableName, variableName) == 0) {
            return i;
        }
    }
    return -1;
}

int isMethodDeclared(char *methodName) {

     for(int i = 0 ; i < methodsCount; i++) {
        if(strcmp(methodsSymbolTable[i]->mth.methodName, methodName) == 0) {
            return i;
        }
    }
    return -1;
}

void addOperand(char *variableName){
    nodeType *p;
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    p->type = typeId;
    strcpy(p->id.variableName, variableName);

    if(operandsCount >= METHOD_OPERANDS_LIMIT){
        yyerror("Number of operands exceeded the limit");
        return;
    }

    methodOperands[operandsCount] = p;
    operandsCount++;
}

void passOperand(nodeType *p){
    
    if(operandsCount >= METHOD_OPERANDS_LIMIT){
        yyerror("Number of operands exceeded the limit");
        return;
    }

    methodOperands[operandsCount] = p;
    operandsCount++;
}

nodeType *defineMethod( char *methodName, nodeType* statements){
    int methodIndex = isMethodDeclared(methodName);
    nodeType *p;
    int i;

    /* allocate node, extending op array */
    if ((p = malloc(sizeof(nodeType) + (operandsCount) * sizeof(nodeType *))) == NULL)
        yyerror("out of memory");
    
    if (methodIndex == -1) {
        if(methodsCount >= SYM_LIMIT){
            yyerror("Stack Overflow");
        }
        methodIndex = methodsCount;
        if ((methodsSymbolTable[methodIndex] = malloc(sizeof(nodeType))) == NULL)
            yyerror("out of memory");

        /* copy information */
        methodsSymbolTable[methodIndex]->type = typeMth;
        methodsSymbolTable[methodIndex]->mth.nops = operandsCount;
        strcpy(methodsSymbolTable[methodIndex]->mth.methodName, methodName);
        printSymTable(1);
        p->type = typeMth;
        p->mth.type = typeD;
        p->mth.nops = operandsCount;
        strcpy(p->mth.methodName, methodName);

        for (i = 0; i < operandsCount; i++) {
            p->mth.op[i] = methodOperands[i];
        }
        p->mth.op[operandsCount] = statements;

        methodsCount++;
    }
    else{
        yyerror("Method already defined");
    }
    operandsCount = 0;
    return p;
}

nodeType *callMethod(char *methodName){
    int methodIndex = isMethodDeclared(methodName);
    if(methodIndex == -1)
        yyerror("Method undefined");
    else if (methodsSymbolTable[methodIndex]->mth.nops != operandsCount){
        yyerror("Number of operands do not match with defined method");
    }

    nodeType *p;
    if ((p = malloc(sizeof(nodeType) + (operandsCount-1) * sizeof(nodeType *))) == NULL)
        yyerror("out of memory");

    p->type = typeMth;
    p->mth.type = typeC;
    p->mth.nops = operandsCount;
    strcpy(p->mth.methodName, methodName);

    for (int i = 0; i < operandsCount; i++) {
        p->mth.op[i] = methodOperands[i];
    }
    operandsCount = 0;
    return p;
}

nodeType *setAndDeclare(char *variableName, nodeType* rhs, bool isConst) {
    int variableIndex = isVariableDeclared(variableName);
    int dataType = getDataType(rhs);
    // printf("rhs datatype %d\n", dataType);
    if (variableIndex == -1) {
        if(variablesCount >= SYM_LIMIT){
            yyerror("Stack Overflow");
        }
        variableIndex = variablesCount;
        if ((symbolTable[variableIndex] = malloc(sizeof(nodeType))) == NULL)
            yyerror("out of memory");

        symbolTable[variableIndex]->type = typeId;
        symbolTable[variableIndex]->id.dataType = dataType;
        symbolTable[variableIndex]->id.isConst = isConst;
        strcpy(symbolTable[variableIndex]->id.variableName, variableName);
        printSymTable(0);
        // printf("declaring variable %s of datatype %d\n", variableName, symbolTable[variableIndex]->id.dataType);
        variablesCount++;
    }
    else {
        // printf("Setting variable %s of datatype %d\n", variableName, symbolTable[variableIndex]->id.dataType);
        if(symbolTable[variableIndex]->id.isConst){
            yyerror("Can not change a constant value");
        }
        else if(symbolTable[variableIndex]->id.dataType != dataType) {
            yyerror("Type Mismatch");
        }
    }
    return opr(ASSIG, 2, symbolTable[variableIndex], rhs);
}


nodeType *opr(int oper, int nops, ...) {
    va_list ap;
    nodeType *p;
    int i;

    /* allocate node, extending op array */
    if ((p = malloc(sizeof(nodeType) + (nops-1) * sizeof(nodeType *))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeOpr;
    p->opr.oper = oper;
    p->opr.nops = nops;

    va_start(ap, nops);
    for (i = 0; i < nops; i++) {
        p->opr.op[i] = va_arg(ap, nodeType*);
    }
    va_end(ap);
    
    if(oper == MULT || oper == PLUS || oper == DIV || oper == MINUS || oper == UMINUS)
    {
        // printf("here*******\n");
        int dataType = getDataType(p->opr.op[0]);
        for(int i=1; i<nops; i++) {
            if(!(p->opr.op[i]->type == typeId && p->opr.op[i]->id.variableName[0] == '@')) {
                if(dataType != getDataType(p->opr.op[i])) {
                    // printf("operand %d of type %d\n", i, getDataType(p->opr.op[i]));
                    yyerror("Type Mismatch");
                    p->opr.dataType = typeMissMatch;
                }
            }
        }
        if(p->opr.dataType != typeMissMatch) {
            p->opr.dataType = dataType;
        }
        return p;
    }
    else if(oper == GT || oper == LT || oper == GE || oper == NE || oper == LE || oper == EQ || oper == AND || oper == OR){
        int dataType = getDataType(p->opr.op[0]);
        for(int i=1; i<nops; i++) {
            if(dataType != getDataType(p->opr.op[i])) {
                yyerror("Type Missmatch");
                p->opr.dataType = typeMissMatch;
            }
        }
        if(p->opr.dataType != typeMissMatch) {
            p->opr.dataType = dataType;
        }
    }
    return p;
}

nodeType *id(char *s) {
    nodeType *p;

    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    p->type = typeId;
    strcpy(p->id.variableName, s);
    
    int variableIndex = isVariableDeclared(s);
    if( variableIndex == -1) {
        if(s[0] != '@')
            yyerror("Using undeclared variable");
    }
    else {
        p->id.dataType = symbolTable[variableIndex]->id.dataType;
    }

    return p;
}

nodeType *conInt(int value){
    nodeType *p;

    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    p->type = typeCon;
    p->con.dataType = INTEGER;
    p->con.integerValue = value;

    return p;
}
nodeType *conFloat(float value){
    nodeType *p;

    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    p->type = typeCon;
    p->con.dataType = FLOAT;
    p->con.floatValue = value;

    return p;
}
nodeType *conStr(char *value){
    nodeType *p;

    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    p->type = typeCon;
    p->con.dataType = STRING;
    strcpy(p->con.stringValue, value);

    return p;
}
nodeType *conBool(bool value){
    nodeType *p;

    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    p->type = typeCon;
    p->con.dataType = BOOL;
    p->con.boolValue = value;

    return p;
}

void yyerror(char *s) {
    FILE * fp;
    fp = fopen ("errors.txt","a");
    fprintf(fp, "%s\n", s);
    fclose(fp);
}

void printSymTable(int choice)
{
    FILE * fp;
    fp = fopen ("SymbolTable.txt","a");
    if(choice == 0)
    {
        fprintf(fp, "Variable Name: %s, Is Constant: %s\n", symbolTable[variablesCount]->id.variableName, (symbolTable[variablesCount]->id.isConst)?"true":"false");
    }
    else
    {
        fprintf(fp, "Method Name: %s, Number of Operands: %d\n", methodsSymbolTable[methodsCount]->mth.methodName, methodsSymbolTable[methodsCount]->mth.nops);
    }
    fclose(fp);
}

int main(void) {
    yyparse();
    return 0;
}
