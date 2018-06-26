grammar pattern;
  seq 	: '[' INT (',' INT)* ']' ;

  INT	: [0-9]+ ;

  WS	: [ \t\r\n]+ -> skip ;
