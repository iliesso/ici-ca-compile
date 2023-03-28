#include <assert.h>
#define TOK_IF 258
#define TOK_THEN 259

if {
    assert(printf("'if' found"));
    return TOK_IF;
}
then {
    assert(printf("'then' found"));
    return TOK_THEN;
}