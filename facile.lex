%{
  #include <assert.h>
  #include <glib.h>
  #include "facile.y.h"
%}

%option yylineno

%%

if {
    return TOK_IF;
}

then {
    return TOK_THEN;
}

else {
    return TOK_ELSE;
}

elseif {
    return TOK_ELSEIF;
}

endif {
    return TOK_ENDIF;
}

";" {
return TOK_SEMI_COLON;
}

":=" {
return TOK_AFFECTATION;
}

"+" {
return TOK_ADD;
}

"-" {
return TOK_SUB;
}

"*" {
return TOK_MUL;
}

"/" {
return TOK_DIV;
}

"(" {
return TOK_OPEN_PARENTHESIS;
}

")" {
return TOK_CLOSE_PARENTHESIS;
}

"{" {
  return TOK_OPEN_BRACE;
}

"}" {
    return TOK_CLOSE_BRACE;
}

"print" {
return TOK_PRINT;
}

"read" {
return TOK_READ;
}

"true" {
return TOK_TRUE;
}

"false" {
return TOK_FALSE;
}

">=" {
return TOK_GREATER_EQUAL;
}

"<=" {
return TOK_LESSER_EQUAL;
}

">" {
return TOK_GREATER;
}

"<" {
return TOK_LESSER;
}

"=" {
return TOK_EQUALS;
}

"#" {
return TOK_NOTEQUALS;
}

"not" {
return TOK_NOT;
}

"and" {
return TOK_AND;
}

"or" {
return TOK_OR;
}

[a-zA-Z][a-zA-Z0-9_]* {
  yylval.string = yytext;
  return TOK_IDENTIFIER;
}

"0" {
  sscanf(yytext, "%lu", &yylval.number);
  return TOK_NUMBER;
}

[ \t\n] ;

. {
return yytext[0];
}


%%

/*
 * file: facile.lex
 * version: 0.6.0
 */