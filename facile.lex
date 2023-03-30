%{
  #include <assert.h>
  #include <glib.h>
  #include "facile.y.h"
%}

%option yylineno

%%

if {
    assert(printf("'if' found"));
    return TOK_IF;
}

then {
    assert (printf("'then' found"));
    return TOK_THEN;
}

";" {
assert(printf("';' found"));
return TOK_SEMI_COLON;
}

":=" {
assert(printf("':=' found"));
return TOK_AFFECTATION;
}

"+" {
assert(printf("'+' found"));
return TOK_ADD;
}

"-" {
assert(printf("'-' found"));
return TOK_SUB;
}

"*" {
assert(printf("'*' found"));
return TOK_MUL;
}

"/" {
assert(printf("'/' found"));
return TOK_DIV;
}

"(" {
assert(printf("'(' found"));
return TOK_OPEN_PARENTHESIS;
}

")" {
assert(printf("')' found"));
return TOK_CLOSE_PARENTHESIS;
}

"print" {
assert(printf("'print' found"));
return TOK_PRINT;
}

"read" {
assert(printf("'read' found"));
return TOK_READ;
}

[a-zA-Z][a-zA-Z0-9]* {
  assert(printf("identifier '%s(%d)' found", yytext, yyleng));
  yylval.string = yytext;
  return TOK_IDENTIFIER;
}

"0" {
  assert(printf("number '%s(%d)' found", yytext, yyleng));
  sscanf(yytext, "%lu", &yylval.number);
  return TOK_NUMBER;
}

[ \t\n] ;

. {
return yytext[0];
}

<<EOF>> {
  yypop_buffer_state();
if ( !YY_CURRENT_BUFFER )
{
yyterminate();
}
}

%%

/*
 * file: facile.lex
 * version: 0.6.0
 */