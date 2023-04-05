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

[a-zA-Z][a-zA-Z0-9]* {
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