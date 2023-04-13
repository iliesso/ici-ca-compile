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

#ifndef YY_YY_HOME_ILJA_DOCUMENTS_WORK_L3_INFO_PROJETFLEXBISON_BUILD_FACILE_Y_H_INCLUDED
# define YY_YY_HOME_ILJA_DOCUMENTS_WORK_L3_INFO_PROJETFLEXBISON_BUILD_FACILE_Y_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOK_NUMBER = 258,              /* "number"  */
    TOK_IDENTIFIER = 259,          /* "identifier"  */
    TOK_AFFECTATION = 260,         /* ":="  */
    TOK_SEMI_COLON = 261,          /* ";"  */
    TOK_IF = 262,                  /* "if"  */
    TOK_ELSE = 263,                /* "else"  */
    TOK_ELSEIF = 264,              /* "elseif"  */
    TOK_THEN = 265,                /* "then"  */
    TOK_ENDIF = 266,               /* "endif"  */
    TOK_ADD = 267,                 /* TOK_ADD  */
    TOK_SUB = 269,                 /* TOK_SUB  */
    TOK_MUL = 271,                 /* TOK_MUL  */
    TOK_DIV = 273,                 /* TOK_DIV  */
    TOK_OPEN_PARENTHESIS = 275,    /* "("  */
    TOK_CLOSE_PARENTHESIS = 276,   /* ")"  */
    TOK_OPEN_BRACE = 277,          /* "{"  */
    TOK_CLOSE_BRACE = 278,         /* "}"  */
    TOK_PRINT = 279,               /* "print"  */
    TOK_READ = 280,                /* "read"  */
    TOK_TRUE = 281,                /* "true"  */
    TOK_FALSE = 282,               /* "false"  */
    TOK_GREATER_EQUAL = 283,       /* ">="  */
    TOK_LESSER_EQUAL = 284,        /* "<="  */
    TOK_GREATER = 285,             /* ">"  */
    TOK_LESSER = 286,              /* "<"  */
    TOK_EQUALS = 287,              /* "="  */
    TOK_NOTEQUALS = 288,           /* "#"  */
    TOK_NOT = 289,                 /* "not"  */
    TOK_AND = 290,                 /* "and"  */
    TOK_OR = 291                   /* "or"  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 91 "facile.y"

gulong number;
gchar *string;
GNode * node;

#line 102 "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_HOME_ILJA_DOCUMENTS_WORK_L3_INFO_PROJETFLEXBISON_BUILD_FACILE_Y_H_INCLUDED  */
