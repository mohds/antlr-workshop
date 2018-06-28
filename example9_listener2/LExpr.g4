grammar LExpr;
s	: e ;

e	: e MULT e # Mult
	| e ADD e # Add
	| INT # Int
	;

INT	: [0-9]+
	;

MULT	: '*';

ADD	: '+';

WS	: [ \t\n]+ -> skip ;
