/*
void begin_code()
{
	fprintf(stream,
		".assembly %s {}\n"
		".method public static void Main() cil managed\n"
		"{\n"      
		"	.entrypoint\n"
		"	.maxstack %u\n"
		"	.locals init (",
		module_name,
		max_stack
	);
	guint size = g_hash_table_size(table);
	guint i;
	for (i = 0; i < size; i++) {
		if (i) {
			fprintf(stream, ", ");
		}
		fprintf(stream, "int32");
	}
	fprintf(stream, ")\n");
}

void produce_code(GNode * node)
{
	if (node->data == "code") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
	} else if (node->data == "affect") {
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	stloc\t%ld\n", (long) g_node_nth_child(g_node_nth_child(node, 0), 0)->data - 1);
	} else if (node->data == "add") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	add\n");
	} else if (node->data == "sub") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	sub\n");
	} else if (node->data == "mul") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	mul\n");
	} else if (node->data == "div") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	div\n");
	} else if (node->data == "number") {
		fprintf(stream, "	ldc.i4\t%ld\n", (long)g_node_nth_child(node, 0)->data);
	} else if (node->data == "ident") {
		fprintf(stream, "	ldloc\t%ld\n", (long)g_node_nth_child(node, 0)->data - 1);
	} else if (node->data == "print") {
		produce_code(g_node_nth_child(node, 0));
		fprintf(stream, "	call void class [mscorlib]System.Console::WriteLine(int32)\n");
	} else if (node->data == "read") {
		fprintf(stream, "	call string class [mscorlib]System.Console::ReadLine()\n");
		fprintf(stream, "	call int32 int32::Parse(string)\n");
		fprintf(stream, "	stloc\t%ld\n", (long) g_node_nth_child(g_node_nth_child(node, 0), 0)->data - 1);
	}
}

void end_code()
{
	fprintf(stream, "	ret\n}\n");
}
*/

%{
#include <stdlib.h>
#include <stdio.h>	

extern int yylex(void);
extern int yyerror(const char *msg);
%}

%define parse.error verbose

%token TOK_NUMBER	"number"
%token TOK_IDENTIFIER	"identifier"
%token TOK_AFFECTATION	":="
%token TOK_SEMI_COLON	";"
%token TOK_IF	"if"
%token TOK_THEN	"then"
%token TOK_ADD	"+"
%token TOK_SUB	"-"
%token TOK_MUL	"*"
%token TOK_DIV	"/"

%%

program: code;

code: code instruction | ;

instruction: affectation ;

affectation:
	identifier TOK_AFFECTATION expression TOK_SEMI_COLON

expression:
	identifier |
	number;

identifier:
	TOK_IDENTIFIER;

number:
	TOK_NUMBER;
%%

/*
 * file: facile.y
 * version: 0.6.0
 */

int yyerror(const char *msg){
	fprintf(stderr, "%s\n", msg);
}

int main(int argc, char *argv[]){
	yyparse();
	return EXIT_SUCCESS;
}