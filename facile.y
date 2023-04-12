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
%}

%define parse.error verbose

%union {
gulong number;
gchar *string;
GNode * node;
}

%token<number> TOK_NUMBER	"number"
%token<string> TOK_IDENTIFIER	"identifier"
%token TOK_AFFECTATION	":="
%token TOK_SEMI_COLON	";"
%token TOK_IF	"if"
%token TOK_ELSE "else"
%token TOK_ELSEIF "elseif"
%token TOK_THEN	"then"
%token TOK_ENDIF "endif"
%left TOK_ADD	"+"
%left TOK_SUB	"-"
%left TOK_MUL	"*"
%left TOK_DIV	"/"
%token TOK_OPEN_PARENTHESIS "("
%token TOK_CLOSE_PARENTHESIS ")"
%token TOK_OPEN_BRACE "{"
%token TOK_CLOSE_BRACE "}"
%token TOK_PRINT "print"
%token TOK_READ "read"
%token TOK_TRUE "true"
%token TOK_FALSE "false"
%token TOK_GREATER_EQUAL ">="
%token TOK_LESSER_EQUAL "<="
%token TOK_GREATER ">"
%token TOK_LESSER "<"
%token TOK_EQUALS "="
%token TOK_NOTEQUALS "#"
%token TOK_NOT "not"
%token TOK_AND "and"
%token TOK_OR "or"

%type<node> code
%type<node> expression
%type<node> instruction
%type<node> identifier
%type<node> print
%type<node> read
%type<node> affectation
%type<node> number
%type<node> statement
%type<node> boolean
%type<node> true
%type<node> false

%%
//Arbre syntaxique et ses noeuds

program: code{
	begin_code();
	produce_code($1);
	end_code();
	g_node_destroy($1);
};

//On définit ici ce qui doit être reconnu comme du code par bison.
code: 
	code instruction { 
		$$ = g_node_new("code");  //Dollar dollar représente la valeur des non terminaux correspondant à la règle code.
		g_node_append($$, $1);	  //Chaque instruction est ajoutée au code,
		g_node_append($$, $2);	  //On ajoute le 2: identifier. Tout cela doit être reconne comme du code.
	}
|
	{
		$$ = g_node_new("");
	};

//changer la position du statement, instruction, ajouter condition.
statement:
	TOK_IF TOK_OPEN_PARENTHESIS boolean TOK_CLOSE_PARENTHESIS TOK_OPEN_BRACE instruction TOK_CLOSE_BRACE TOK_ELSE TOK_OPEN_BRACE instruction TOK_CLOSE_BRACE{
		$$ = $3; //what needs to be tested
		
	}
|
	TOK_IF TOK_OPEN_PARENTHESIS boolean TOK_CLOSE_PARENTHESIS TOK_OPEN_BRACE instruction TOK_CLOSE_BRACE{
		$$ = g_node_new("condition"); //Return value
		if($3 != 0){			   //Si le test marche, alors return prend la valeur
			$$ = $6;
		}
	}
|
	expression;

//On définit ici tout ce qui doit être reconnu comme une instruction.
instruction: 
	affectation |
	print |
	read;

//On définit ici tout ce qui doit être reconnu comme une affectation.
affectation:
	identifier TOK_AFFECTATION expression TOK_SEMI_COLON
	{
		$$ = g_node_new("affectation");
		g_node_append($$, $1);
		g_node_append($$, $3);	
	};

print:
	TOK_PRINT expression TOK_SEMI_COLON {
		$$ = g_node_new("print");
		g_node_append($$, $2);
	};

read:
	TOK_READ expression TOK_SEMI_COLON {
		$$ = g_node_new("read");
		g_node_append($$, $2);
	}
;

boolean:
	true
|
	false
|	
	expression TOK_GREATER_EQUAL expression {
		$$ = g_node_new("greater_equal");
		g_node_append($$, $1);
		g_node_append($$, $3);
	}
|
	expression TOK_LESSER_EQUAL expression {
		$$ = g_node_new("lesser_equal");
		g_node_append($$, $1);
		g_node_append($$, $3);
	}
|
	expression TOK_GREATER expression {
		$$ = g_node_new("greater");
		g_node_append($$, $1);
		g_node_append($$, $3);
	}
|
	expression TOK_LESSER expression {
		$$ = g_node_new("lesser");
		g_node_append($$, $1);
		g_node_append($$, $3);
	}
|
	expression TOK_EQUALS expression {
		$$ = g_node_new("equals");
		g_node_append($$, $1);
		g_node_append($$, $3);
	}
|
	expression TOK_NOTEQUALS expression {
		$$ = g_node_new("notequals");
		g_node_append($$, $1);
		g_node_append($$, $3);
	}
|
	TOK_NOT boolean {
		$$ = g_node_new("not");
		g_node_append($$, $2);
	}
|
	boolean TOK_AND boolean {
		$$ = g_node_new("and");
		g_node_append($$, $1);
		g_node_append($$, $3);
	}
|
	boolean TOK_OR boolean {
		$$ = g_node_new("or");
		g_node_append($$, $1);
		g_node_append($$, $3);
	}
|
	TOK_OPEN_PARENTHESIS boolean TOK_CLOSE_PARENTHESIS {
		$$ = $2;
	}

true:
	TOK_TRUE TOK_SEMI_COLON {
		$$ = g_node_new("true");
		$$ = "true";
	}

false:
	TOK_FALSE TOK_SEMI_COLON {
		$$ = g_node_new("false");
		$$ = "false";
	}

expression:
	identifier 
|
	number
|
	expression TOK_ADD expression {
		$$ = g_node_new("add");
		g_node_append($$, $1);
		g_node_append($$, $3);
	}
|
	expression TOK_SUB expression {
		$$ = g_node_new("sub");
		g_node_append($$, $1);
		g_node_append($$, $3);
	}
|
	expression TOK_MUL expression {
		$$ = g_node_new("mul");
		g_node_append($$, $1);
		g_node_append($$, $3);
	}
|
	expression TOK_DIV expression {
		$$ = g_node_new("div");
		g_node_append($$, $1);
		g_node_append($$, $3);
	}
|
	TOK_OPEN_PARENTHESIS expression TOK_CLOSE_PARENTHESIS {
		$$ = $2;
	}
;

identifier:
	TOK_IDENTIFIER {
		$$ = g_node_new("identifier");
        if (!table) {
            table = g_hash_table_new(g_str_hash, g_str_equal);
        }
		gulong value = (gulong) g_hash_table_lookup(table, $1);
		char *id = strdup(yytext);
		if (!value) {
			value = g_hash_table_size(table) + 1;
			g_hash_table_insert(table, strdup($1), (gpointer) value);
		}
		guint size = g_hash_table_size(table);
		g_node_append_data($$, (gpointer) value);
	};

number:
	TOK_NUMBER {
		$$ = g_node_new("number");
		g_node_append_data($$, (gpointer)$1);
	};
%%

/*
 * file: facile.y
 * version: 0.6.0
 */

int label_counter = 0;

char* new_label() {
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
	if (node->data == "code"){
		//Aller chercher chaque "mot" (noeud) du code pour le traduire
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
	} else if (node->data == "affectation"){
		produce_code(g_node_nth_child(node, 1));
		fprintf(yyout, "stloc\t%ld\n", (long)g_node_nth_child(g_node_nth_child(node, 0), 0)->data -1);
	} else if (node->data == "if") {
		produce_code(g_node_nth_child(node, 0)); // Produce code for boolean expression
		int else_label = new_label();  // Jump to else block if false
		fprintf(yyout, "brfalse\tL%d\n", else_label);
		produce_code(g_node_nth_child(node, 1)); // Produce code for if block

		int end_label = new_label();
		fprintf(yyout, "br\tL%d\n", end_label);
		
		fprintf(yyout, "L%d:\n", else_label);  // Produce code for else block
		produce_code(g_node_nth_child(node, 2));
		
		fprintf(yyout, "L%d:\n", end_label);  	// End label
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