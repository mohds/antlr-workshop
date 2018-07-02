// Here is the ANTLR4 HTTP grammar
// This is a transaltion from the TXL HTTP grammar written by Ben Kam

grammar HTTP;

key 	: 'OPTIONS' | 'GET' | 'HEAD' | 'POST' | 'PUT' | 'DELETE' | 'TRACE' | 'CONNECT' | 'Cache-Control' | 'Connection' | 'Date' | 'Pragma' | 'Trailer' | 'Transfer-Encoding' | 'Upgrade' | 'Via' | 'Warning' | 'Accept' | 'Accept-Charset' | 'Accept-Encoding' | 'Accept-Language' | 'Authorization' | 'Expect' | 'From' | 'Host' | 'If-Match' | 'If-Modified-Since' | 'If-None-Match' | 'If-Range' | 'If-Unmodified-Since' | 'Max-Forwards' | 'Proxy-Authorization' | 'Range' | 'Referer' | 'TE' | 'User-Agent' | 'Allow' | 'Content-Encoding' | 'Content-Language' | 'Content-Length' | 'Content-Location' | 'Content-MD5' | 'Content-Range' | 'Content-Type' | 'Expires' | 'Last-Modified' ;

// Ben's grammar separated the request from the reply grammar
// I will join the request and reply into the same grammar
http	: request
//	| reply
	;

// request_message in Ben's HTTP grammar
request	: request_line (header_message)+ message_body;

request_line	: method request_uri http_version new_line;

//reply	:
//	;

method	: 'OPTIONS' | 'GET' | 'POST' | 'HEAD' | 'PUT' | 'DELETE' | 'TRACE' | 'CONNECT';

request_uri	: TEXT;

http_version	: 'HTTP\/1.0' | 'HTTP\/1.1';

header_message	: general_header new_line
		| request_header new_line
		| entity_header new_line 
		;

general_header	: cache_control
		| connection
		| date
		| pragma
		| trailer
		| transfer_encoding
		| upgrade
		| via
		| warning
		;

cache_control	: 'Cache-Control' ':' cache_request (',' cache_request)*;

// cache_request_directive in Ben's grammar
cache_request	: 'no-cache'
		| 'no-store'
		| 'max-age' '=' delta_seconds
		| 'max-stale' (stale_time)?
		| 'min-fresh' '=' delta_seconds
		| 'no-transform'
		| 'only-if-cached'
		| cache_extension 
		;

delta_seconds	: NUMBER;

stale_time	: '=' delta_seconds;

cache_extension	: ID;

connection	: 'Connection' ':' connection_token (',' connection_token)*;

connection_token: ID;

date	: 'Date' ':' http_date;

http_date	: rfc1123_date
		| rfc850_date
		| asctime_date 
		;

rfc1123_date	: weekday1 ',' date1 time 'GMT';

rfc850_date	: weekday2 ',' date2 time 'GMT';

asctime_date	: weekday1 ',' date3 time NUMBER;

time	: NUMBER;

date1	: NUMBER month NUMBER;

date2	: NUMBER '-' month '-' number;

date3	: month NUMBER;

weekday1: 'Mon' | 'Tue' | 'Wed' | 'Thu' | 'Fri' | 'Sat' | 'Sun';

weekday2: 'Monday' | 'Tuesday' | 'Wednesday' | 'Thursday' | 'Friday' | 'Saturday' | 'Sunday';

month	: 'Jan' | 'Feb' | 'Mar' |'Apr' | 'May' | 'Jun' | 'Jul' | 'Aug' | 'Sep' | 'Oct' | 'Nov' | 'Dec';

pragma	: 'Pragma' ':' pragma_directive (',' pragma_directive)*;

pragma_directive: 'no-cache'
		| extension_pragma
		;

extension_pragma: ID '=' ID
		| ID '=' stringlit
		;

message_body	:
		| // can be empty
		;

new_line	: '\n';
NUMBER	: '0' | [1-9] ([0-9])*;
TEXT	: (ESC | ~[\\])*;
ID	: [a-zA-Z] ([a-zA-Z0-9])*;
STRING	: '"' (ESC | ~["\\]) '"';
fragment ESC	: '\\' (["\\/bfnrt] | UNICODE);
fragment UNICODE: 'u' HEX HEX HEX HEX;
fragment HEX	: [0-9a-fA-F];
