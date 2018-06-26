grammar Cymbol;

file	: (functionDecl | varDecl)+ ;

varDecl	: type ID ('=' expr)? ';'
	;

type	: 'float' | 'int' | 'void' ;

functionDecl	: type ID '(' formalParameters? ')' block
		;

formalParameters	: formalParameter (',' formalParameter)*
			;

formalParameter	: type ID
		;

block	: '{' stat* '}' ;

stat	: block
	| varDecl
	| 'if' expr 'then' stat ('else' stat)?
	| 'return' expr? ';'
	| expr '=' expr ';'
	| expr ';'
	;

expr	: ID '(' exprList? ')'
	| ID '[' expr ']'
	| '-' expr
	| '!' expr
	| expr '*' expr
	| expr ('+'|'-') expr
	| expr '==' expr
	| ID
	| xINT
	| '(' expr ')'
	;

exprList	: expr (',' expr)*
		;

ID	: LETTER (LETTER | DIGIT)*;

LETTER	: [a-zA-Z\u0080-\u00FF_] ;

DIGIT	:[0-9];

xINT	: DIGIT+ ;

WS	: [ \t\n\r] -> skip ; 
