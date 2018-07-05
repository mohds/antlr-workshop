grammar number;

num	: NUMBER*;

NUMBER	: [0-9]+;

WS	: [ \t\r\n]+ -> skip;
