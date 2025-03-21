/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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


#line 87 "y.tab.h"

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

#line 193 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
