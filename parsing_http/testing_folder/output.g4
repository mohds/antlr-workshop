grammar output;

test: FILEPATH NEWLINE TITLE ;
TITLE: ('A'..'Z'|'a'..'z'|' ')+ ;
FILEPATH: ('A'..'Z'|'a'..'z'|'0'..'9'|':'|'\\'|'/'|' '|'-'|'_'|'.')+ ;
NEWLINE: '\r'? '\n' ;

