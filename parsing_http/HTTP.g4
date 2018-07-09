// Here is the ANTLR4 HTTP grammar
// This is a transaltion from the TXL HTTP grammar written by Ben Kam

grammar HTTP;

key 	: 'Connection' | 'Date' | 'Pragma' | 'Trailer' | 'Transfer-Encoding' | 'Upgrade' | 'Via' | 'Warning' | 'Accept' | 'Accept-Charset' | 'Accept-Encoding' | 'Accept-Language' | 'Authorization' | 'Expect' | 'From' | 'Host' | 'If-Match' | 'If-Modified-Since' | 'If-None-Match' | 'If-Range' | 'If-Unmodified-Since' | 'Max-Forwards' | 'Proxy-Authorization' | 'Range' | 'Referer' | 'TE' | 'User-Agent' | 'Allow' | 'Content-Encoding' | 'Content-Language' | 'Content-Length' | 'Content-Location' | 'Content-MD5' | 'Content-Range' | 'Content-Type' | 'Expires' | 'Last-Modified' | 'Location' | 'Server' | 'X-Powered-By' | ID;

// Ben's grammar separated the request from the reply grammar
// I will join the request and response into the same grammar
http	: (request | response | new_line)*;

response: status_line new_line (header_message new_line)+  response_message_body?;

response_message_body	: .*?;

status_line	: http_version status_code status_text;

status_code	: NUMBER;

status_text	: (~'\n')*?;

// request_message in Ben's HTTP grammar
request	: request_line new_line (header_message new_line)+; // message_body?;

request_line	: method uri  http_version ;

method	: 'OPTIONS' | 'GET' | 'POST' | 'HEAD' | 'PUT' | 'DELETE' | 'TRACE' | 'CONNECT';

uri	: '/' (uri_text '/'?)*  ;

uri_text: ('http' | 'https' | ID | '%' | '.' | '-' | '_' | '=' | '&' | '?' | NUMBER | '1')+;

http_version	: 'HTTP/1.0' | 'HTTP/1.1';

header_message	: general_header 
		| request_header
		| entity_header 
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
		| set_cookie
		| cookie_list
		;

set_cookie	: 'Set-Cookie' ':' cookie_entry (';' cookie_entry)*;
cookie_entry	: cookie_definition
		| cookie_expiration
		| cookie_path
		| cookie_domain
		| cookie_secure
		| cookie_http_only
		;

cookie_definition	: cookie_name '=' cookie_value;
cookie_name	: ID;
cookie_value	: ('1' | NUMBER | ID)+; // 1 is a hack, it is being parsed as an independant token and not NUMBER

cookie_expiration	: 'expires' '=' http_date;

cookie_path	: 'path' '=' uri;

cookie_domain	: 'domain' '=' '.'? ID ('.' ID)*;

cookie_secure	: 'Secure';

cookie_http_only: 'HttpOnly';

cookie_list	: 'Cookie' ':' cookie_definition (';' cookie_definition)*;

cache_control	: 'Cache-Control' ':' cache_request (',' cache_request)*;

// cache_request_directive in Ben's grammar
cache_request	: 'no-cache' ('=' 'Set-Cookie')? // hack
		| 'no-store'
		| 'max-age' '=' delta_seconds
		| 'max-stale' (stale_time)?
		| 'min-fresh' '=' delta_seconds
		| 'no-transform'
		| 'only-if-cached'
		| cache_extension 
		| 'post-check' '=' NUMBER
		| 'pre-check' '=' NUMBER
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
		| cookie_date 
		;

rfc1123_date	: weekday1 ',' date1 time 'GMT';

rfc850_date	: weekday2 ',' date2 time 'GMT';

asctime_date	: weekday1 ',' date3 time NUMBER;

cookie_date	: weekday1 ',' date2 time 'GMT';

time	: NUMBER ':' NUMBER ':' NUMBER;

date1	: day month year;

date2	: day '-' (month '-' year | ID);

date3	: month NUMBER;

day	: NUMBER;
year	: NUMBER;

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
stringlit	: STRING;

trailer	:'Trailer' ':' field_name (',' field_name)*;

field_name	: ID;

transfer_encoding	: 'Transfer-Encoding' ':' transfer_coding (transfer_coding)*;

transfer_coding	: 'chunked' 
		| transfer_extension
		;

transfer_extension	: ID (parameter)+;

parameter	: attribute '=' value;

attribute	: ID;

value	: ID
	| stringlit
	;

upgrade	:'Upgrade' ':' product (',' product)*; 

product	: ID;

via	:'Via' received_info (',' received_info)*;

received_info	: protocol_name? protocol_version;

protocol_name	: ID '/';

protocol_version: ID;

// not referenced anywhere but defined by Ben
received_by	: host ':' (port? | pseudonym);

host:	ID '.' ID ('.' ID)*;

pseudonym	: ID;

warning	: 'Warning' ':' warning_value (',' warning_value)*;

warning_value	:warn_code warn_agent warn_text warn_date?;

warn_code	: NUMBER;

warn_agent	: host ':' (port? | pseudonym);

port	: NUMBER;

warn_text	: stringlit;

warn_date	: http_date;

request_header	: accept
		| accept_charset
		| accept_encoding
		| accept_language
		| authorization
		| expect
		| from
		| host_
		| if_match
		| if_modified_since
		| if_none_match
		| if_range
		| if_unmodified_since
		| if_none_match
		| if_range
		| if_unmodified_since
		| max_forwards
		| proxy_authorization
		| range
		| referer
		| te
		| user_agent 
		;

accept	:'Accept' ':' accept_info (',' accept_info)*;

accept_info	: media_range accept_params? (',' accept_params)*;

media_range	: '*/*'
		| type '/*'
		| type '/' subtype	
		;

type	: ID;

subtype	: ID (subtype_extension)+;

subtype_extension	: '+' ID;

accept_params	: ';' 'q' '=' qvalue accept_extension?;

qvalue	: '0' | '0.1' | '0.2' | '0.3' | '0.4' | '0.5' | '0.6' | '0.7' | '0.8' | '0.9' | '1'; 

accept_extension: ';' ID '=' ID
		| ';' ID '=' stringlit
		;
accept_charset	: 'Accept-Charset' ':' accept_charset_info (',' accept_charset_info)*;

accept_charset_info	: charset quality_value?;

charset	: '*'
	| ID
	;

quality_value	: ';' 'q' '=' qvalue;

accept_encoding	: 'Accept-Encoding' ':' accept_encoding_info (',' accept_encoding_info)*;

accept_encoding_info	: coding quality_value?;

coding	: '*'
	| ID
	;

accept_language	: 'Accept-Language' ':' accept_language_info (',' accept_language_info)*;

accept_language_info	: language_range quality_value?;

language_range	: '*'
		| ID
		| ID '-' ID
		;

authorization	: 'Authorization' ':' credentials;

credentials	: ID;

expect	: 'Expect' ':' expect_info (',' expect_info)*;

expect_info	: '100-continue'
		| expectation_extension
		;

expectation_extension	: ID
			| ID '=' ID expect_params?
			| ID '=' stringlit expect_params?
			;

expect_params	: ';' ID
		| ';' ID '=' ID
		| ';' ID '=' stringlit
		;

from	: 'From' ':' ID;

host_	: 'Host' ':' host (':')?;

if_match: 'If-Match' ':' if_match_info;

if_match_info	: '*'
		| entity_tag (',' entity_tag)
		;

entity_tag	: ID;

if_modified_since	: 'If-Modified-Since' ':' http_date;

if_none_match	: 'If-None-Match' ':' if_none_match_info;

if_none_match_info	: '*'
			| entity_tag (',' entity_tag)
			;
if_range: 'If-Range' ':' entity_tag
	| 'If-Range' ':' http_date
	;

if_unmodified_since	: 'If-Unmodified-Since' ':' http_date;

max_forwards	: 'Max-Forwards' ':' NUMBER;

proxy_authorization	: 'Proxy-Authorization' ':' credentials;

range	: 'Range' ':' ranges_specifier;

ranges_specifier: byte_ranges_specifier;

byte_ranges_specifier	: 'bytes' '=' byte_range_set;

byte_range_set	: byte_range_spec (',' byte_range_spec)*
		| suffix_byte_range_spec (',' suffix_byte_range_spec)*
		;

byte_range_spec	: first_byte_pos '-' last_byte_pos?;

first_byte_pos	: NUMBER;

last_byte_pos	: NUMBER;

suffix_byte_range_spec	: '-' suffix_length;

suffix_length	: NUMBER;

referer	: 'Referer' ':' url  ; 

url	: ('http' | 'https') ':' '//' (uri_text '/'?)+;

te	: 'TE' ':' t_coding (',' t_coding)*;

t_coding: trailer
	| transfer_extension accept_params?
	;

user_agent	: 'User-Agent' ':' product '/' product_version comment ;

comment	: (~'\n' | '(' | ')')*? ;

product_version	: NUMBER ('.' (NUMBER | '0' | '1'))* ; // FIX THIS

// comment	: (':' | ';' | ')' | '(' | '/' | '-' | ID | '.' | '*' | ',')*; // improve this

// COMMENT	: (~[\n])*;

entity_header	: allow
		| content_encoding
		| content_language
		| content_length
		| content_location
		| content_md5
		| content_type
		| expires
		| last_modified
		| extension_header
		;

allow	: 'Allow' ':' method (',' method)*;

content_encoding: 'Content-Encoding' ':' ID (',' ID);

content_language: 'Content-Language' ':' ID (',' ID);

content_length	: 'Content-Length' ':' content_length_number;

content_length_number	: NUMBER;

content_location: 'Content-Location' ':' ID '.' ID '.' ID;

content_md5	: 'Content-MD5' ':' ID; // ID should be TEXT

content_range	: 'Content-Range' ':' ID NUMBER '-' NUMBER '/' NUMBER;

content_type	: 'Content-Type' ':' mime_value;

mime_value	: (not_eol)+;

not_eol	: ~'\n'; // token_or_key ;

token_or_key	: token | key;

token : key; // temp, just to compile

expires: 'Expires' ':' http_date;

last_modified	: 'Last-Modified' ':' http_date;

extension_header: key ':' mime_value?;

message_body	: (token_or_key)*
		;

new_line	: '\n';
ID	: [a-zA-Z] ([\-a-zA-Z0-9])*;
STRING	: '"' (ESC | ~["\\])* '"';
// TEXT	: (ESC | ~[\\])+;
fragment ESC	: '\\' (["\\/bfnrt] | UNICODE);
fragment UNICODE: 'u' HEX HEX HEX HEX;
fragment HEX	: [0-9a-fA-F];
// COMMENT: .*?;
NUMBER	: [0-9]+;

WS	: [ \t\r]+ -> skip;
//ErrorCharacter	: . ;
