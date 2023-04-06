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

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    DOUBLE_NUM = 258,              /* DOUBLE_NUM  */
    NUMBER = 259,                  /* NUMBER  */
    BOOL = 260,                    /* BOOL  */
    WORD = 261,                    /* WORD  */
    SLASH = 262,                   /* SLASH  */
    START_FILTER = 263,            /* START_FILTER  */
    END_FILTER = 264,              /* END_FILTER  */
    OPEN_BRACKET = 265,            /* OPEN_BRACKET  */
    CLOSE_BRACKET = 266,           /* CLOSE_BRACKET  */
    COMMA = 267,                   /* COMMA  */
    IS_ATTRIBUTE = 268,            /* IS_ATTRIBUTE  */
    EQUAL = 269,                   /* EQUAL  */
    NOT_EQUAL = 270,               /* NOT_EQUAL  */
    LESS = 271,                    /* LESS  */
    MORE = 272,                    /* MORE  */
    UPDATE = 273,                  /* UPDATE  */
    REMOVE = 274,                  /* REMOVE  */
    CREATE_EL = 275,               /* CREATE_EL  */
    CREATE_SCH = 276               /* CREATE_SCH  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define DOUBLE_NUM 258
#define NUMBER 259
#define BOOL 260
#define WORD 261
#define SLASH 262
#define START_FILTER 263
#define END_FILTER 264
#define OPEN_BRACKET 265
#define CLOSE_BRACKET 266
#define COMMA 267
#define IS_ATTRIBUTE 268
#define EQUAL 269
#define NOT_EQUAL 270
#define LESS 271
#define MORE 272
#define UPDATE 273
#define REMOVE 274
#define CREATE_EL 275
#define CREATE_SCH 276

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "parser.y"

    int number;
    int op;
    char* str;
    char* node_name;
    char* attribute_name;
    bool boolean;
    double double_num;
    filters_list*  filters_l;

#line 120 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
