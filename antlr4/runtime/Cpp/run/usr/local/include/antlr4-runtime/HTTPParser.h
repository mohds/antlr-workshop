
// Generated from HTTP.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  HTTPParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, T__61 = 62, 
    T__62 = 63, T__63 = 64, T__64 = 65, T__65 = 66, T__66 = 67, T__67 = 68, 
    T__68 = 69, T__69 = 70, T__70 = 71, T__71 = 72, T__72 = 73, T__73 = 74, 
    T__74 = 75, T__75 = 76, T__76 = 77, T__77 = 78, T__78 = 79, T__79 = 80, 
    T__80 = 81, T__81 = 82, T__82 = 83, T__83 = 84, T__84 = 85, T__85 = 86, 
    T__86 = 87, T__87 = 88, T__88 = 89, T__89 = 90, T__90 = 91, T__91 = 92, 
    T__92 = 93, T__93 = 94, T__94 = 95, T__95 = 96, T__96 = 97, T__97 = 98, 
    T__98 = 99, T__99 = 100, T__100 = 101, T__101 = 102, T__102 = 103, T__103 = 104, 
    T__104 = 105, T__105 = 106, T__106 = 107, T__107 = 108, T__108 = 109, 
    T__109 = 110, T__110 = 111, T__111 = 112, T__112 = 113, T__113 = 114, 
    T__114 = 115, T__115 = 116, T__116 = 117, T__117 = 118, T__118 = 119, 
    T__119 = 120, T__120 = 121, T__121 = 122, T__122 = 123, T__123 = 124, 
    T__124 = 125, T__125 = 126, T__126 = 127, T__127 = 128, T__128 = 129, 
    T__129 = 130, T__130 = 131, ID = 132, STRING = 133, NUMBER = 134, WS = 135, 
    MESSAGEBODY = 136
  };

  enum {
    RuleKey = 0, RuleHttp = 1, RuleResponse = 2, RuleStatus_line = 3, RuleStatus_code = 4, 
    RuleStatus_text = 5, RuleRequest = 6, RuleMessage_body = 7, RuleRequest_line = 8, 
    RuleMethod = 9, RuleUri = 10, RuleUri_text = 11, RuleHttp_version = 12, 
    RuleHeader_message = 13, RuleGeneral_header = 14, RuleLocation = 15, 
    RuleSet_cookie = 16, RuleCookie_entry = 17, RuleCookie_definition = 18, 
    RuleCookie_name = 19, RuleCookie_value = 20, RuleCookie_expiration = 21, 
    RuleCookie_path = 22, RuleCookie_domain = 23, RuleCookie_secure = 24, 
    RuleCookie_http_only = 25, RuleCookie_list = 26, RuleCache_control = 27, 
    RuleCache_request = 28, RuleDelta_seconds = 29, RuleStale_time = 30, 
    RuleCache_extension = 31, RuleConnection = 32, RuleConnection_token = 33, 
    RuleDate = 34, RuleHttp_date = 35, RuleRfc1123_date = 36, RuleRfc850_date = 37, 
    RuleAsctime_date = 38, RuleCookie_date = 39, RuleTime = 40, RuleDate1 = 41, 
    RuleDate2 = 42, RuleDate3 = 43, RuleDay = 44, RuleYear = 45, RuleWeekday1 = 46, 
    RuleWeekday2 = 47, RuleMonth = 48, RulePragma = 49, RulePragma_directive = 50, 
    RuleExtension_pragma = 51, RuleStringlit = 52, RuleTrailer = 53, RuleField_name = 54, 
    RuleTransfer_encoding = 55, RuleTransfer_coding = 56, RuleTransfer_extension = 57, 
    RuleParameter = 58, RuleAttribute = 59, RuleValue = 60, RuleUpgrade = 61, 
    RuleProduct = 62, RuleVia = 63, RuleReceived_info = 64, RuleProtocol_name = 65, 
    RuleProtocol_version = 66, RuleReceived_by = 67, RuleHost = 68, RulePseudonym = 69, 
    RuleWarning = 70, RuleWarning_value = 71, RuleWarn_code = 72, RuleWarn_agent = 73, 
    RulePort = 74, RuleWarn_text = 75, RuleWarn_date = 76, RuleRequest_header = 77, 
    RuleAccept = 78, RuleAccept_info = 79, RuleMedia_range = 80, RuleType = 81, 
    RuleSubtype = 82, RuleSubtype_extension = 83, RuleAccept_params = 84, 
    RuleQvalue = 85, RuleAccept_extension = 86, RuleAccept_charset = 87, 
    RuleAccept_charset_info = 88, RuleCharset = 89, RuleQuality_value = 90, 
    RuleAccept_encoding = 91, RuleAccept_encoding_info = 92, RuleCoding = 93, 
    RuleAccept_language = 94, RuleAccept_language_info = 95, RuleLanguage_range = 96, 
    RuleAuthorization = 97, RuleCredentials = 98, RuleExpect = 99, RuleExpect_info = 100, 
    RuleExpectation_extension = 101, RuleExpect_params = 102, RuleFrom = 103, 
    RuleHost_ = 104, RuleIf_match = 105, RuleIf_match_info = 106, RuleEntity_tag = 107, 
    RuleIf_modified_since = 108, RuleIf_none_match = 109, RuleIf_none_match_info = 110, 
    RuleIf_range = 111, RuleIf_unmodified_since = 112, RuleMax_forwards = 113, 
    RuleProxy_authorization = 114, RuleRange = 115, RuleRanges_specifier = 116, 
    RuleByte_ranges_specifier = 117, RuleByte_range_set = 118, RuleByte_range_spec = 119, 
    RuleFirst_byte_pos = 120, RuleLast_byte_pos = 121, RuleSuffix_byte_range_spec = 122, 
    RuleSuffix_length = 123, RuleReferer = 124, RuleUrl = 125, RuleTe = 126, 
    RuleT_coding = 127, RuleUser_agent = 128, RuleComment = 129, RuleProduct_version = 130, 
    RuleEntity_header = 131, RuleAllow = 132, RuleContent_encoding = 133, 
    RuleContent_language = 134, RuleContent_length = 135, RuleContent_length_number = 136, 
    RuleContent_location = 137, RuleContent_md5 = 138, RuleContent_range = 139, 
    RuleContent_type = 140, RuleMime_value = 141, RuleNot_eol = 142, RuleToken_or_key = 143, 
    RuleToken = 144, RuleExpires = 145, RuleLast_modified = 146, RuleExtension_header = 147, 
    RuleNew_line = 148
  };

  HTTPParser(antlr4::TokenStream *input);
  ~HTTPParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class KeyContext;
  class HttpContext;
  class ResponseContext;
  class Status_lineContext;
  class Status_codeContext;
  class Status_textContext;
  class RequestContext;
  class Message_bodyContext;
  class Request_lineContext;
  class MethodContext;
  class UriContext;
  class Uri_textContext;
  class Http_versionContext;
  class Header_messageContext;
  class General_headerContext;
  class LocationContext;
  class Set_cookieContext;
  class Cookie_entryContext;
  class Cookie_definitionContext;
  class Cookie_nameContext;
  class Cookie_valueContext;
  class Cookie_expirationContext;
  class Cookie_pathContext;
  class Cookie_domainContext;
  class Cookie_secureContext;
  class Cookie_http_onlyContext;
  class Cookie_listContext;
  class Cache_controlContext;
  class Cache_requestContext;
  class Delta_secondsContext;
  class Stale_timeContext;
  class Cache_extensionContext;
  class ConnectionContext;
  class Connection_tokenContext;
  class DateContext;
  class Http_dateContext;
  class Rfc1123_dateContext;
  class Rfc850_dateContext;
  class Asctime_dateContext;
  class Cookie_dateContext;
  class TimeContext;
  class Date1Context;
  class Date2Context;
  class Date3Context;
  class DayContext;
  class YearContext;
  class Weekday1Context;
  class Weekday2Context;
  class MonthContext;
  class PragmaContext;
  class Pragma_directiveContext;
  class Extension_pragmaContext;
  class StringlitContext;
  class TrailerContext;
  class Field_nameContext;
  class Transfer_encodingContext;
  class Transfer_codingContext;
  class Transfer_extensionContext;
  class ParameterContext;
  class AttributeContext;
  class ValueContext;
  class UpgradeContext;
  class ProductContext;
  class ViaContext;
  class Received_infoContext;
  class Protocol_nameContext;
  class Protocol_versionContext;
  class Received_byContext;
  class HostContext;
  class PseudonymContext;
  class WarningContext;
  class Warning_valueContext;
  class Warn_codeContext;
  class Warn_agentContext;
  class PortContext;
  class Warn_textContext;
  class Warn_dateContext;
  class Request_headerContext;
  class AcceptContext;
  class Accept_infoContext;
  class Media_rangeContext;
  class TypeContext;
  class SubtypeContext;
  class Subtype_extensionContext;
  class Accept_paramsContext;
  class QvalueContext;
  class Accept_extensionContext;
  class Accept_charsetContext;
  class Accept_charset_infoContext;
  class CharsetContext;
  class Quality_valueContext;
  class Accept_encodingContext;
  class Accept_encoding_infoContext;
  class CodingContext;
  class Accept_languageContext;
  class Accept_language_infoContext;
  class Language_rangeContext;
  class AuthorizationContext;
  class CredentialsContext;
  class ExpectContext;
  class Expect_infoContext;
  class Expectation_extensionContext;
  class Expect_paramsContext;
  class FromContext;
  class Host_Context;
  class If_matchContext;
  class If_match_infoContext;
  class Entity_tagContext;
  class If_modified_sinceContext;
  class If_none_matchContext;
  class If_none_match_infoContext;
  class If_rangeContext;
  class If_unmodified_sinceContext;
  class Max_forwardsContext;
  class Proxy_authorizationContext;
  class RangeContext;
  class Ranges_specifierContext;
  class Byte_ranges_specifierContext;
  class Byte_range_setContext;
  class Byte_range_specContext;
  class First_byte_posContext;
  class Last_byte_posContext;
  class Suffix_byte_range_specContext;
  class Suffix_lengthContext;
  class RefererContext;
  class UrlContext;
  class TeContext;
  class T_codingContext;
  class User_agentContext;
  class CommentContext;
  class Product_versionContext;
  class Entity_headerContext;
  class AllowContext;
  class Content_encodingContext;
  class Content_languageContext;
  class Content_lengthContext;
  class Content_length_numberContext;
  class Content_locationContext;
  class Content_md5Context;
  class Content_rangeContext;
  class Content_typeContext;
  class Mime_valueContext;
  class Not_eolContext;
  class Token_or_keyContext;
  class TokenContext;
  class ExpiresContext;
  class Last_modifiedContext;
  class Extension_headerContext;
  class New_lineContext; 

  class  KeyContext : public antlr4::ParserRuleContext {
  public:
    KeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeyContext* key();

  class  HttpContext : public antlr4::ParserRuleContext {
  public:
    HttpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RequestContext *> request();
    RequestContext* request(size_t i);
    std::vector<ResponseContext *> response();
    ResponseContext* response(size_t i);
    std::vector<New_lineContext *> new_line();
    New_lineContext* new_line(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HttpContext* http();

  class  ResponseContext : public antlr4::ParserRuleContext {
  public:
    ResponseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Status_lineContext *status_line();
    std::vector<New_lineContext *> new_line();
    New_lineContext* new_line(size_t i);
    std::vector<Header_messageContext *> header_message();
    Header_messageContext* header_message(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ResponseContext* response();

  class  Status_lineContext : public antlr4::ParserRuleContext {
  public:
    Status_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Http_versionContext *http_version();
    Status_codeContext *status_code();
    Status_textContext *status_text();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Status_lineContext* status_line();

  class  Status_codeContext : public antlr4::ParserRuleContext {
  public:
    Status_codeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Status_codeContext* status_code();

  class  Status_textContext : public antlr4::ParserRuleContext {
  public:
    Status_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Status_textContext* status_text();

  class  RequestContext : public antlr4::ParserRuleContext {
  public:
    RequestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Request_lineContext *request_line();
    std::vector<New_lineContext *> new_line();
    New_lineContext* new_line(size_t i);
    std::vector<Header_messageContext *> header_message();
    Header_messageContext* header_message(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RequestContext* request();

  class  Message_bodyContext : public antlr4::ParserRuleContext {
  public:
    Message_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Message_bodyContext* message_body();

  class  Request_lineContext : public antlr4::ParserRuleContext {
  public:
    Request_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MethodContext *method();
    UriContext *uri();
    Http_versionContext *http_version();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Request_lineContext* request_line();

  class  MethodContext : public antlr4::ParserRuleContext {
  public:
    MethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodContext* method();

  class  UriContext : public antlr4::ParserRuleContext {
  public:
    UriContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Uri_textContext *> uri_text();
    Uri_textContext* uri_text(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UriContext* uri();

  class  Uri_textContext : public antlr4::ParserRuleContext {
  public:
    Uri_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Uri_textContext* uri_text();

  class  Http_versionContext : public antlr4::ParserRuleContext {
  public:
    Http_versionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Http_versionContext* http_version();

  class  Header_messageContext : public antlr4::ParserRuleContext {
  public:
    Header_messageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    General_headerContext *general_header();
    Request_headerContext *request_header();
    Entity_headerContext *entity_header();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Header_messageContext* header_message();

  class  General_headerContext : public antlr4::ParserRuleContext {
  public:
    General_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cache_controlContext *cache_control();
    ConnectionContext *connection();
    DateContext *date();
    PragmaContext *pragma();
    TrailerContext *trailer();
    Transfer_encodingContext *transfer_encoding();
    UpgradeContext *upgrade();
    ViaContext *via();
    WarningContext *warning();
    Set_cookieContext *set_cookie();
    Cookie_listContext *cookie_list();
    LocationContext *location();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  General_headerContext* general_header();

  class  LocationContext : public antlr4::ParserRuleContext {
  public:
    LocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UrlContext *url();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LocationContext* location();

  class  Set_cookieContext : public antlr4::ParserRuleContext {
  public:
    Set_cookieContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Cookie_entryContext *> cookie_entry();
    Cookie_entryContext* cookie_entry(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Set_cookieContext* set_cookie();

  class  Cookie_entryContext : public antlr4::ParserRuleContext {
  public:
    Cookie_entryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cookie_definitionContext *cookie_definition();
    Cookie_expirationContext *cookie_expiration();
    Cookie_pathContext *cookie_path();
    Cookie_domainContext *cookie_domain();
    Cookie_secureContext *cookie_secure();
    Cookie_http_onlyContext *cookie_http_only();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cookie_entryContext* cookie_entry();

  class  Cookie_definitionContext : public antlr4::ParserRuleContext {
  public:
    Cookie_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cookie_nameContext *cookie_name();
    Cookie_valueContext *cookie_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cookie_definitionContext* cookie_definition();

  class  Cookie_nameContext : public antlr4::ParserRuleContext {
  public:
    Cookie_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cookie_nameContext* cookie_name();

  class  Cookie_valueContext : public antlr4::ParserRuleContext {
  public:
    Cookie_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cookie_valueContext* cookie_value();

  class  Cookie_expirationContext : public antlr4::ParserRuleContext {
  public:
    Cookie_expirationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Http_dateContext *http_date();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cookie_expirationContext* cookie_expiration();

  class  Cookie_pathContext : public antlr4::ParserRuleContext {
  public:
    Cookie_pathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UriContext *uri();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cookie_pathContext* cookie_path();

  class  Cookie_domainContext : public antlr4::ParserRuleContext {
  public:
    Cookie_domainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cookie_domainContext* cookie_domain();

  class  Cookie_secureContext : public antlr4::ParserRuleContext {
  public:
    Cookie_secureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cookie_secureContext* cookie_secure();

  class  Cookie_http_onlyContext : public antlr4::ParserRuleContext {
  public:
    Cookie_http_onlyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cookie_http_onlyContext* cookie_http_only();

  class  Cookie_listContext : public antlr4::ParserRuleContext {
  public:
    Cookie_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Cookie_definitionContext *> cookie_definition();
    Cookie_definitionContext* cookie_definition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cookie_listContext* cookie_list();

  class  Cache_controlContext : public antlr4::ParserRuleContext {
  public:
    Cache_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Cache_requestContext *> cache_request();
    Cache_requestContext* cache_request(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cache_controlContext* cache_control();

  class  Cache_requestContext : public antlr4::ParserRuleContext {
  public:
    Cache_requestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delta_secondsContext *delta_seconds();
    Stale_timeContext *stale_time();
    Cache_extensionContext *cache_extension();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cache_requestContext* cache_request();

  class  Delta_secondsContext : public antlr4::ParserRuleContext {
  public:
    Delta_secondsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delta_secondsContext* delta_seconds();

  class  Stale_timeContext : public antlr4::ParserRuleContext {
  public:
    Stale_timeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delta_secondsContext *delta_seconds();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Stale_timeContext* stale_time();

  class  Cache_extensionContext : public antlr4::ParserRuleContext {
  public:
    Cache_extensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cache_extensionContext* cache_extension();

  class  ConnectionContext : public antlr4::ParserRuleContext {
  public:
    ConnectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Connection_tokenContext *> connection_token();
    Connection_tokenContext* connection_token(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConnectionContext* connection();

  class  Connection_tokenContext : public antlr4::ParserRuleContext {
  public:
    Connection_tokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Connection_tokenContext* connection_token();

  class  DateContext : public antlr4::ParserRuleContext {
  public:
    DateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Http_dateContext *http_date();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DateContext* date();

  class  Http_dateContext : public antlr4::ParserRuleContext {
  public:
    Http_dateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rfc1123_dateContext *rfc1123_date();
    Rfc850_dateContext *rfc850_date();
    Asctime_dateContext *asctime_date();
    Cookie_dateContext *cookie_date();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Http_dateContext* http_date();

  class  Rfc1123_dateContext : public antlr4::ParserRuleContext {
  public:
    Rfc1123_dateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Weekday1Context *weekday1();
    Date1Context *date1();
    TimeContext *time();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rfc1123_dateContext* rfc1123_date();

  class  Rfc850_dateContext : public antlr4::ParserRuleContext {
  public:
    Rfc850_dateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Weekday2Context *weekday2();
    Date2Context *date2();
    TimeContext *time();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rfc850_dateContext* rfc850_date();

  class  Asctime_dateContext : public antlr4::ParserRuleContext {
  public:
    Asctime_dateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Weekday1Context *weekday1();
    Date3Context *date3();
    TimeContext *time();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Asctime_dateContext* asctime_date();

  class  Cookie_dateContext : public antlr4::ParserRuleContext {
  public:
    Cookie_dateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Weekday1Context *weekday1();
    Date2Context *date2();
    TimeContext *time();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cookie_dateContext* cookie_date();

  class  TimeContext : public antlr4::ParserRuleContext {
  public:
    TimeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TimeContext* time();

  class  Date1Context : public antlr4::ParserRuleContext {
  public:
    Date1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DayContext *day();
    MonthContext *month();
    YearContext *year();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Date1Context* date1();

  class  Date2Context : public antlr4::ParserRuleContext {
  public:
    Date2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DayContext *day();
    MonthContext *month();
    YearContext *year();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Date2Context* date2();

  class  Date3Context : public antlr4::ParserRuleContext {
  public:
    Date3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MonthContext *month();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Date3Context* date3();

  class  DayContext : public antlr4::ParserRuleContext {
  public:
    DayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DayContext* day();

  class  YearContext : public antlr4::ParserRuleContext {
  public:
    YearContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  YearContext* year();

  class  Weekday1Context : public antlr4::ParserRuleContext {
  public:
    Weekday1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Weekday1Context* weekday1();

  class  Weekday2Context : public antlr4::ParserRuleContext {
  public:
    Weekday2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Weekday2Context* weekday2();

  class  MonthContext : public antlr4::ParserRuleContext {
  public:
    MonthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MonthContext* month();

  class  PragmaContext : public antlr4::ParserRuleContext {
  public:
    PragmaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pragma_directiveContext *> pragma_directive();
    Pragma_directiveContext* pragma_directive(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PragmaContext* pragma();

  class  Pragma_directiveContext : public antlr4::ParserRuleContext {
  public:
    Pragma_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Extension_pragmaContext *extension_pragma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pragma_directiveContext* pragma_directive();

  class  Extension_pragmaContext : public antlr4::ParserRuleContext {
  public:
    Extension_pragmaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    StringlitContext *stringlit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extension_pragmaContext* extension_pragma();

  class  StringlitContext : public antlr4::ParserRuleContext {
  public:
    StringlitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringlitContext* stringlit();

  class  TrailerContext : public antlr4::ParserRuleContext {
  public:
    TrailerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Field_nameContext *> field_name();
    Field_nameContext* field_name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TrailerContext* trailer();

  class  Field_nameContext : public antlr4::ParserRuleContext {
  public:
    Field_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Field_nameContext* field_name();

  class  Transfer_encodingContext : public antlr4::ParserRuleContext {
  public:
    Transfer_encodingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Transfer_codingContext *> transfer_coding();
    Transfer_codingContext* transfer_coding(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Transfer_encodingContext* transfer_encoding();

  class  Transfer_codingContext : public antlr4::ParserRuleContext {
  public:
    Transfer_codingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Transfer_extensionContext *transfer_extension();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Transfer_codingContext* transfer_coding();

  class  Transfer_extensionContext : public antlr4::ParserRuleContext {
  public:
    Transfer_extensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Transfer_extensionContext* transfer_extension();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeContext *attribute();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterContext* parameter();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeContext* attribute();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    StringlitContext *stringlit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValueContext* value();

  class  UpgradeContext : public antlr4::ParserRuleContext {
  public:
    UpgradeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ProductContext *> product();
    ProductContext* product(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UpgradeContext* upgrade();

  class  ProductContext : public antlr4::ParserRuleContext {
  public:
    ProductContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProductContext* product();

  class  ViaContext : public antlr4::ParserRuleContext {
  public:
    ViaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Received_infoContext *> received_info();
    Received_infoContext* received_info(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ViaContext* via();

  class  Received_infoContext : public antlr4::ParserRuleContext {
  public:
    Received_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Protocol_versionContext *protocol_version();
    Protocol_nameContext *protocol_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Received_infoContext* received_info();

  class  Protocol_nameContext : public antlr4::ParserRuleContext {
  public:
    Protocol_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protocol_nameContext* protocol_name();

  class  Protocol_versionContext : public antlr4::ParserRuleContext {
  public:
    Protocol_versionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Protocol_versionContext* protocol_version();

  class  Received_byContext : public antlr4::ParserRuleContext {
  public:
    Received_byContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HostContext *host();
    PseudonymContext *pseudonym();
    PortContext *port();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Received_byContext* received_by();

  class  HostContext : public antlr4::ParserRuleContext {
  public:
    HostContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HostContext* host();

  class  PseudonymContext : public antlr4::ParserRuleContext {
  public:
    PseudonymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PseudonymContext* pseudonym();

  class  WarningContext : public antlr4::ParserRuleContext {
  public:
    WarningContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Warning_valueContext *> warning_value();
    Warning_valueContext* warning_value(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WarningContext* warning();

  class  Warning_valueContext : public antlr4::ParserRuleContext {
  public:
    Warning_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Warn_codeContext *warn_code();
    Warn_agentContext *warn_agent();
    Warn_textContext *warn_text();
    Warn_dateContext *warn_date();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Warning_valueContext* warning_value();

  class  Warn_codeContext : public antlr4::ParserRuleContext {
  public:
    Warn_codeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Warn_codeContext* warn_code();

  class  Warn_agentContext : public antlr4::ParserRuleContext {
  public:
    Warn_agentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HostContext *host();
    PseudonymContext *pseudonym();
    PortContext *port();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Warn_agentContext* warn_agent();

  class  PortContext : public antlr4::ParserRuleContext {
  public:
    PortContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PortContext* port();

  class  Warn_textContext : public antlr4::ParserRuleContext {
  public:
    Warn_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringlitContext *stringlit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Warn_textContext* warn_text();

  class  Warn_dateContext : public antlr4::ParserRuleContext {
  public:
    Warn_dateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Http_dateContext *http_date();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Warn_dateContext* warn_date();

  class  Request_headerContext : public antlr4::ParserRuleContext {
  public:
    Request_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AcceptContext *accept();
    Accept_charsetContext *accept_charset();
    Accept_encodingContext *accept_encoding();
    Accept_languageContext *accept_language();
    AuthorizationContext *authorization();
    ExpectContext *expect();
    FromContext *from();
    Host_Context *host_();
    If_matchContext *if_match();
    If_modified_sinceContext *if_modified_since();
    If_none_matchContext *if_none_match();
    If_rangeContext *if_range();
    If_unmodified_sinceContext *if_unmodified_since();
    Max_forwardsContext *max_forwards();
    Proxy_authorizationContext *proxy_authorization();
    RangeContext *range();
    RefererContext *referer();
    TeContext *te();
    User_agentContext *user_agent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Request_headerContext* request_header();

  class  AcceptContext : public antlr4::ParserRuleContext {
  public:
    AcceptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Accept_infoContext *> accept_info();
    Accept_infoContext* accept_info(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AcceptContext* accept();

  class  Accept_infoContext : public antlr4::ParserRuleContext {
  public:
    Accept_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Media_rangeContext *media_range();
    std::vector<Accept_paramsContext *> accept_params();
    Accept_paramsContext* accept_params(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Accept_infoContext* accept_info();

  class  Media_rangeContext : public antlr4::ParserRuleContext {
  public:
    Media_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    SubtypeContext *subtype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Media_rangeContext* media_range();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeContext* type();

  class  SubtypeContext : public antlr4::ParserRuleContext {
  public:
    SubtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    std::vector<Subtype_extensionContext *> subtype_extension();
    Subtype_extensionContext* subtype_extension(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtypeContext* subtype();

  class  Subtype_extensionContext : public antlr4::ParserRuleContext {
  public:
    Subtype_extensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subtype_extensionContext* subtype_extension();

  class  Accept_paramsContext : public antlr4::ParserRuleContext {
  public:
    Accept_paramsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QvalueContext *qvalue();
    Accept_extensionContext *accept_extension();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Accept_paramsContext* accept_params();

  class  QvalueContext : public antlr4::ParserRuleContext {
  public:
    QvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QvalueContext* qvalue();

  class  Accept_extensionContext : public antlr4::ParserRuleContext {
  public:
    Accept_extensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    StringlitContext *stringlit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Accept_extensionContext* accept_extension();

  class  Accept_charsetContext : public antlr4::ParserRuleContext {
  public:
    Accept_charsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Accept_charset_infoContext *> accept_charset_info();
    Accept_charset_infoContext* accept_charset_info(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Accept_charsetContext* accept_charset();

  class  Accept_charset_infoContext : public antlr4::ParserRuleContext {
  public:
    Accept_charset_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CharsetContext *charset();
    Quality_valueContext *quality_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Accept_charset_infoContext* accept_charset_info();

  class  CharsetContext : public antlr4::ParserRuleContext {
  public:
    CharsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CharsetContext* charset();

  class  Quality_valueContext : public antlr4::ParserRuleContext {
  public:
    Quality_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QvalueContext *qvalue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Quality_valueContext* quality_value();

  class  Accept_encodingContext : public antlr4::ParserRuleContext {
  public:
    Accept_encodingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Accept_encoding_infoContext *> accept_encoding_info();
    Accept_encoding_infoContext* accept_encoding_info(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Accept_encodingContext* accept_encoding();

  class  Accept_encoding_infoContext : public antlr4::ParserRuleContext {
  public:
    Accept_encoding_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CodingContext *coding();
    Quality_valueContext *quality_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Accept_encoding_infoContext* accept_encoding_info();

  class  CodingContext : public antlr4::ParserRuleContext {
  public:
    CodingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CodingContext* coding();

  class  Accept_languageContext : public antlr4::ParserRuleContext {
  public:
    Accept_languageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Accept_language_infoContext *> accept_language_info();
    Accept_language_infoContext* accept_language_info(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Accept_languageContext* accept_language();

  class  Accept_language_infoContext : public antlr4::ParserRuleContext {
  public:
    Accept_language_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Language_rangeContext *language_range();
    Quality_valueContext *quality_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Accept_language_infoContext* accept_language_info();

  class  Language_rangeContext : public antlr4::ParserRuleContext {
  public:
    Language_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Language_rangeContext* language_range();

  class  AuthorizationContext : public antlr4::ParserRuleContext {
  public:
    AuthorizationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CredentialsContext *credentials();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AuthorizationContext* authorization();

  class  CredentialsContext : public antlr4::ParserRuleContext {
  public:
    CredentialsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CredentialsContext* credentials();

  class  ExpectContext : public antlr4::ParserRuleContext {
  public:
    ExpectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Expect_infoContext *> expect_info();
    Expect_infoContext* expect_info(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpectContext* expect();

  class  Expect_infoContext : public antlr4::ParserRuleContext {
  public:
    Expect_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expectation_extensionContext *expectation_extension();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expect_infoContext* expect_info();

  class  Expectation_extensionContext : public antlr4::ParserRuleContext {
  public:
    Expectation_extensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    Expect_paramsContext *expect_params();
    StringlitContext *stringlit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expectation_extensionContext* expectation_extension();

  class  Expect_paramsContext : public antlr4::ParserRuleContext {
  public:
    Expect_paramsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    StringlitContext *stringlit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expect_paramsContext* expect_params();

  class  FromContext : public antlr4::ParserRuleContext {
  public:
    FromContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FromContext* from();

  class  Host_Context : public antlr4::ParserRuleContext {
  public:
    Host_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HostContext *host();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Host_Context* host_();

  class  If_matchContext : public antlr4::ParserRuleContext {
  public:
    If_matchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_match_infoContext *if_match_info();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_matchContext* if_match();

  class  If_match_infoContext : public antlr4::ParserRuleContext {
  public:
    If_match_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Entity_tagContext *> entity_tag();
    Entity_tagContext* entity_tag(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_match_infoContext* if_match_info();

  class  Entity_tagContext : public antlr4::ParserRuleContext {
  public:
    Entity_tagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Entity_tagContext* entity_tag();

  class  If_modified_sinceContext : public antlr4::ParserRuleContext {
  public:
    If_modified_sinceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Http_dateContext *http_date();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_modified_sinceContext* if_modified_since();

  class  If_none_matchContext : public antlr4::ParserRuleContext {
  public:
    If_none_matchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_none_match_infoContext *if_none_match_info();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_none_matchContext* if_none_match();

  class  If_none_match_infoContext : public antlr4::ParserRuleContext {
  public:
    If_none_match_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Entity_tagContext *> entity_tag();
    Entity_tagContext* entity_tag(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_none_match_infoContext* if_none_match_info();

  class  If_rangeContext : public antlr4::ParserRuleContext {
  public:
    If_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Entity_tagContext *entity_tag();
    Http_dateContext *http_date();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_rangeContext* if_range();

  class  If_unmodified_sinceContext : public antlr4::ParserRuleContext {
  public:
    If_unmodified_sinceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Http_dateContext *http_date();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_unmodified_sinceContext* if_unmodified_since();

  class  Max_forwardsContext : public antlr4::ParserRuleContext {
  public:
    Max_forwardsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Max_forwardsContext* max_forwards();

  class  Proxy_authorizationContext : public antlr4::ParserRuleContext {
  public:
    Proxy_authorizationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CredentialsContext *credentials();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Proxy_authorizationContext* proxy_authorization();

  class  RangeContext : public antlr4::ParserRuleContext {
  public:
    RangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ranges_specifierContext *ranges_specifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangeContext* range();

  class  Ranges_specifierContext : public antlr4::ParserRuleContext {
  public:
    Ranges_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Byte_ranges_specifierContext *byte_ranges_specifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ranges_specifierContext* ranges_specifier();

  class  Byte_ranges_specifierContext : public antlr4::ParserRuleContext {
  public:
    Byte_ranges_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Byte_range_setContext *byte_range_set();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Byte_ranges_specifierContext* byte_ranges_specifier();

  class  Byte_range_setContext : public antlr4::ParserRuleContext {
  public:
    Byte_range_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Byte_range_specContext *> byte_range_spec();
    Byte_range_specContext* byte_range_spec(size_t i);
    std::vector<Suffix_byte_range_specContext *> suffix_byte_range_spec();
    Suffix_byte_range_specContext* suffix_byte_range_spec(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Byte_range_setContext* byte_range_set();

  class  Byte_range_specContext : public antlr4::ParserRuleContext {
  public:
    Byte_range_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    First_byte_posContext *first_byte_pos();
    Last_byte_posContext *last_byte_pos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Byte_range_specContext* byte_range_spec();

  class  First_byte_posContext : public antlr4::ParserRuleContext {
  public:
    First_byte_posContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  First_byte_posContext* first_byte_pos();

  class  Last_byte_posContext : public antlr4::ParserRuleContext {
  public:
    Last_byte_posContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Last_byte_posContext* last_byte_pos();

  class  Suffix_byte_range_specContext : public antlr4::ParserRuleContext {
  public:
    Suffix_byte_range_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Suffix_lengthContext *suffix_length();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Suffix_byte_range_specContext* suffix_byte_range_spec();

  class  Suffix_lengthContext : public antlr4::ParserRuleContext {
  public:
    Suffix_lengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Suffix_lengthContext* suffix_length();

  class  RefererContext : public antlr4::ParserRuleContext {
  public:
    RefererContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UrlContext *url();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RefererContext* referer();

  class  UrlContext : public antlr4::ParserRuleContext {
  public:
    UrlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Uri_textContext *> uri_text();
    Uri_textContext* uri_text(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UrlContext* url();

  class  TeContext : public antlr4::ParserRuleContext {
  public:
    TeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<T_codingContext *> t_coding();
    T_codingContext* t_coding(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TeContext* te();

  class  T_codingContext : public antlr4::ParserRuleContext {
  public:
    T_codingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TrailerContext *trailer();
    Transfer_extensionContext *transfer_extension();
    Accept_paramsContext *accept_params();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  T_codingContext* t_coding();

  class  User_agentContext : public antlr4::ParserRuleContext {
  public:
    User_agentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProductContext *product();
    Product_versionContext *product_version();
    CommentContext *comment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  User_agentContext* user_agent();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommentContext* comment();

  class  Product_versionContext : public antlr4::ParserRuleContext {
  public:
    Product_versionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Product_versionContext* product_version();

  class  Entity_headerContext : public antlr4::ParserRuleContext {
  public:
    Entity_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AllowContext *allow();
    Content_encodingContext *content_encoding();
    Content_languageContext *content_language();
    Content_lengthContext *content_length();
    Content_locationContext *content_location();
    Content_md5Context *content_md5();
    Content_typeContext *content_type();
    ExpiresContext *expires();
    Last_modifiedContext *last_modified();
    Extension_headerContext *extension_header();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Entity_headerContext* entity_header();

  class  AllowContext : public antlr4::ParserRuleContext {
  public:
    AllowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MethodContext *> method();
    MethodContext* method(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AllowContext* allow();

  class  Content_encodingContext : public antlr4::ParserRuleContext {
  public:
    Content_encodingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Content_encodingContext* content_encoding();

  class  Content_languageContext : public antlr4::ParserRuleContext {
  public:
    Content_languageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Content_languageContext* content_language();

  class  Content_lengthContext : public antlr4::ParserRuleContext {
  public:
    Content_lengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Content_length_numberContext *content_length_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Content_lengthContext* content_length();

  class  Content_length_numberContext : public antlr4::ParserRuleContext {
  public:
    Content_length_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Content_length_numberContext* content_length_number();

  class  Content_locationContext : public antlr4::ParserRuleContext {
  public:
    Content_locationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Content_locationContext* content_location();

  class  Content_md5Context : public antlr4::ParserRuleContext {
  public:
    Content_md5Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Content_md5Context* content_md5();

  class  Content_rangeContext : public antlr4::ParserRuleContext {
  public:
    Content_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Content_rangeContext* content_range();

  class  Content_typeContext : public antlr4::ParserRuleContext {
  public:
    Content_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mime_valueContext *mime_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Content_typeContext* content_type();

  class  Mime_valueContext : public antlr4::ParserRuleContext {
  public:
    Mime_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Not_eolContext *> not_eol();
    Not_eolContext* not_eol(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mime_valueContext* mime_value();

  class  Not_eolContext : public antlr4::ParserRuleContext {
  public:
    Not_eolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Not_eolContext* not_eol();

  class  Token_or_keyContext : public antlr4::ParserRuleContext {
  public:
    Token_or_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TokenContext *token();
    KeyContext *key();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Token_or_keyContext* token_or_key();

  class  TokenContext : public antlr4::ParserRuleContext {
  public:
    TokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyContext *key();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TokenContext* token();

  class  ExpiresContext : public antlr4::ParserRuleContext {
  public:
    ExpiresContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Http_dateContext *http_date();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpiresContext* expires();

  class  Last_modifiedContext : public antlr4::ParserRuleContext {
  public:
    Last_modifiedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Http_dateContext *http_date();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Last_modifiedContext* last_modified();

  class  Extension_headerContext : public antlr4::ParserRuleContext {
  public:
    Extension_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyContext *key();
    Mime_valueContext *mime_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extension_headerContext* extension_header();

  class  New_lineContext : public antlr4::ParserRuleContext {
  public:
    New_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  New_lineContext* new_line();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

