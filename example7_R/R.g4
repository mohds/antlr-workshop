grammar R;

prog	: ( expr_or_assign (';' | NL) | NL )* EOF ;

expr_or_assign	: expr ('<-' | '=' | '<<-') expr_or_assign
		| expr
		;

NL	: '\r'? 'n' ;

expr	: '{' exprlist '}'
	| 'if' '(' expr ')' expr
	| 'if' '(' expr ')' expr 'else' expr
	| 'for' '(' ID 'in' expr ')' expr
	| 'while' '(' expr ')' expr
	| 'repeat' expr
	| '?' expr
	| 'next'
	| 'break'
	| expr '[[' sublist ']' ']'
	| expr '[' sublist ']'
	| expr ('::'|':::') expr
	| expr ('$'|'@') expr
	| expr '^'<assoc=right> expr
	| ('-'|'+') expr
	| expr ':' expr
	| expr USER_OP expr
	| expr ('*'|'/') expr
	| expr ('+'|'-') expr
	| expr ('>'|'>='|'<'|'<='|'=='|'!=') expr
	| '!' expr
	| expr ('&'|'&&') expr
	| '~' expr
	| expr '~' expr
	| expr ('->'|'->>'|':=') expr
	| 'function' '(' formlist? ')' expr
	| expr '(' sublist ')'
	| STRING
	| ID
	| INT
	;

exprlist	: expr_or_assign ((';' | NL) expr_or_assign?)*
		|
		;

formlist	: form (',' form)* ;

form	: ID
	| ID '=' expr
	| '...'
	;

sublist	: sub (',' sub)* ;

sub	: expr
	| ID '='
	| ID '=' expr
	| STRING '='
	| STRING '=' expr
	| 'NULL' '='
	| 'NULL' '=' expr
	| '...'
	|
	;

ID	: '.' (LETTER|'_'|'.') (LETTER|DIGIT|'_'|'.')*
	| LETTER (LETTER|DIGIT|'_'|'.')*
	;

INT	: DIGIT+ ;

STRING	: '"' (  ~[\\"] )*? '"'
	| '\'' ( ~[\\'] )*? '\''
	;

fragment LETTER	: [a-zA-Z];
fragment DIGIT: [0-9];

WS	: [ \r\n\t] -> skip ;
