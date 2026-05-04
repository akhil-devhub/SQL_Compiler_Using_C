%{
#include <stdio.h>
#include <string.h>
#include <regex.h> 
#include <stdlib.h>
#include <stdbool.h>

// Declarations
bool is_type(char *);
char* substring(char *, int, int);
int check_regex(char *);
char* yytext(void);
int yylineno(void);

// Token structure
typedef struct token {
    int token_class;
    char *token_text;
    int line_no;
} token;

// Include the Bison-generated header file
#include "yacc.tab.h"

// Function prototypes
void tokenizefull(void);

// Bison declarations
int yylex(void);
void yyerror(const char *s);
int yyparse(void);

%}

// Rules and grammar definitions go here

// Main function
int main(void) {
    yyparse(); // EXECUTION BASED ON RULES
    return 0;
}

