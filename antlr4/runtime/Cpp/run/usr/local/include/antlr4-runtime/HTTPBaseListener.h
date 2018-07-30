
// Generated from HTTP.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "HTTPListener.h"


/**
 * This class provides an empty implementation of HTTPListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  HTTPBaseListener : public HTTPListener {
public:

  virtual void enterKey(HTTPParser::KeyContext * /*ctx*/) override { }
  virtual void exitKey(HTTPParser::KeyContext * /*ctx*/) override { }

  virtual void enterHttp(HTTPParser::HttpContext * /*ctx*/) override { }
  virtual void exitHttp(HTTPParser::HttpContext * /*ctx*/) override { }

  virtual void enterResponse(HTTPParser::ResponseContext * /*ctx*/) override { }
  virtual void exitResponse(HTTPParser::ResponseContext * /*ctx*/) override { }

  virtual void enterStatus_line(HTTPParser::Status_lineContext * /*ctx*/) override { }
  virtual void exitStatus_line(HTTPParser::Status_lineContext * /*ctx*/) override { }

  virtual void enterStatus_code(HTTPParser::Status_codeContext * /*ctx*/) override { }
  virtual void exitStatus_code(HTTPParser::Status_codeContext * /*ctx*/) override { }

  virtual void enterStatus_text(HTTPParser::Status_textContext * /*ctx*/) override { }
  virtual void exitStatus_text(HTTPParser::Status_textContext * /*ctx*/) override { }

  virtual void enterRequest(HTTPParser::RequestContext * /*ctx*/) override { }
  virtual void exitRequest(HTTPParser::RequestContext * /*ctx*/) override { }

  virtual void enterMessage_body(HTTPParser::Message_bodyContext * /*ctx*/) override { }
  virtual void exitMessage_body(HTTPParser::Message_bodyContext * /*ctx*/) override { }

  virtual void enterRequest_line(HTTPParser::Request_lineContext * /*ctx*/) override { }
  virtual void exitRequest_line(HTTPParser::Request_lineContext * /*ctx*/) override { }

  virtual void enterMethod(HTTPParser::MethodContext * /*ctx*/) override { }
  virtual void exitMethod(HTTPParser::MethodContext * /*ctx*/) override { }

  virtual void enterUri(HTTPParser::UriContext * /*ctx*/) override { }
  virtual void exitUri(HTTPParser::UriContext * /*ctx*/) override { }

  virtual void enterUri_text(HTTPParser::Uri_textContext * /*ctx*/) override { }
  virtual void exitUri_text(HTTPParser::Uri_textContext * /*ctx*/) override { }

  virtual void enterHttp_version(HTTPParser::Http_versionContext * /*ctx*/) override { }
  virtual void exitHttp_version(HTTPParser::Http_versionContext * /*ctx*/) override { }

  virtual void enterHeader_message(HTTPParser::Header_messageContext * /*ctx*/) override { }
  virtual void exitHeader_message(HTTPParser::Header_messageContext * /*ctx*/) override { }

  virtual void enterGeneral_header(HTTPParser::General_headerContext * /*ctx*/) override { }
  virtual void exitGeneral_header(HTTPParser::General_headerContext * /*ctx*/) override { }

  virtual void enterLocation(HTTPParser::LocationContext * /*ctx*/) override { }
  virtual void exitLocation(HTTPParser::LocationContext * /*ctx*/) override { }

  virtual void enterSet_cookie(HTTPParser::Set_cookieContext * /*ctx*/) override { }
  virtual void exitSet_cookie(HTTPParser::Set_cookieContext * /*ctx*/) override { }

  virtual void enterCookie_entry(HTTPParser::Cookie_entryContext * /*ctx*/) override { }
  virtual void exitCookie_entry(HTTPParser::Cookie_entryContext * /*ctx*/) override { }

  virtual void enterCookie_definition(HTTPParser::Cookie_definitionContext * /*ctx*/) override { }
  virtual void exitCookie_definition(HTTPParser::Cookie_definitionContext * /*ctx*/) override { }

  virtual void enterCookie_name(HTTPParser::Cookie_nameContext * /*ctx*/) override { }
  virtual void exitCookie_name(HTTPParser::Cookie_nameContext * /*ctx*/) override { }

  virtual void enterCookie_value(HTTPParser::Cookie_valueContext * /*ctx*/) override { }
  virtual void exitCookie_value(HTTPParser::Cookie_valueContext * /*ctx*/) override { }

  virtual void enterCookie_expiration(HTTPParser::Cookie_expirationContext * /*ctx*/) override { }
  virtual void exitCookie_expiration(HTTPParser::Cookie_expirationContext * /*ctx*/) override { }

  virtual void enterCookie_path(HTTPParser::Cookie_pathContext * /*ctx*/) override { }
  virtual void exitCookie_path(HTTPParser::Cookie_pathContext * /*ctx*/) override { }

  virtual void enterCookie_domain(HTTPParser::Cookie_domainContext * /*ctx*/) override { }
  virtual void exitCookie_domain(HTTPParser::Cookie_domainContext * /*ctx*/) override { }

  virtual void enterCookie_secure(HTTPParser::Cookie_secureContext * /*ctx*/) override { }
  virtual void exitCookie_secure(HTTPParser::Cookie_secureContext * /*ctx*/) override { }

  virtual void enterCookie_http_only(HTTPParser::Cookie_http_onlyContext * /*ctx*/) override { }
  virtual void exitCookie_http_only(HTTPParser::Cookie_http_onlyContext * /*ctx*/) override { }

  virtual void enterCookie_list(HTTPParser::Cookie_listContext * /*ctx*/) override { }
  virtual void exitCookie_list(HTTPParser::Cookie_listContext * /*ctx*/) override { }

  virtual void enterCache_control(HTTPParser::Cache_controlContext * /*ctx*/) override { }
  virtual void exitCache_control(HTTPParser::Cache_controlContext * /*ctx*/) override { }

  virtual void enterCache_request(HTTPParser::Cache_requestContext * /*ctx*/) override { }
  virtual void exitCache_request(HTTPParser::Cache_requestContext * /*ctx*/) override { }

  virtual void enterDelta_seconds(HTTPParser::Delta_secondsContext * /*ctx*/) override { }
  virtual void exitDelta_seconds(HTTPParser::Delta_secondsContext * /*ctx*/) override { }

  virtual void enterStale_time(HTTPParser::Stale_timeContext * /*ctx*/) override { }
  virtual void exitStale_time(HTTPParser::Stale_timeContext * /*ctx*/) override { }

  virtual void enterCache_extension(HTTPParser::Cache_extensionContext * /*ctx*/) override { }
  virtual void exitCache_extension(HTTPParser::Cache_extensionContext * /*ctx*/) override { }

  virtual void enterConnection(HTTPParser::ConnectionContext * /*ctx*/) override { }
  virtual void exitConnection(HTTPParser::ConnectionContext * /*ctx*/) override { }

  virtual void enterConnection_token(HTTPParser::Connection_tokenContext * /*ctx*/) override { }
  virtual void exitConnection_token(HTTPParser::Connection_tokenContext * /*ctx*/) override { }

  virtual void enterDate(HTTPParser::DateContext * /*ctx*/) override { }
  virtual void exitDate(HTTPParser::DateContext * /*ctx*/) override { }

  virtual void enterHttp_date(HTTPParser::Http_dateContext * /*ctx*/) override { }
  virtual void exitHttp_date(HTTPParser::Http_dateContext * /*ctx*/) override { }

  virtual void enterRfc1123_date(HTTPParser::Rfc1123_dateContext * /*ctx*/) override { }
  virtual void exitRfc1123_date(HTTPParser::Rfc1123_dateContext * /*ctx*/) override { }

  virtual void enterRfc850_date(HTTPParser::Rfc850_dateContext * /*ctx*/) override { }
  virtual void exitRfc850_date(HTTPParser::Rfc850_dateContext * /*ctx*/) override { }

  virtual void enterAsctime_date(HTTPParser::Asctime_dateContext * /*ctx*/) override { }
  virtual void exitAsctime_date(HTTPParser::Asctime_dateContext * /*ctx*/) override { }

  virtual void enterCookie_date(HTTPParser::Cookie_dateContext * /*ctx*/) override { }
  virtual void exitCookie_date(HTTPParser::Cookie_dateContext * /*ctx*/) override { }

  virtual void enterTime(HTTPParser::TimeContext * /*ctx*/) override { }
  virtual void exitTime(HTTPParser::TimeContext * /*ctx*/) override { }

  virtual void enterDate1(HTTPParser::Date1Context * /*ctx*/) override { }
  virtual void exitDate1(HTTPParser::Date1Context * /*ctx*/) override { }

  virtual void enterDate2(HTTPParser::Date2Context * /*ctx*/) override { }
  virtual void exitDate2(HTTPParser::Date2Context * /*ctx*/) override { }

  virtual void enterDate3(HTTPParser::Date3Context * /*ctx*/) override { }
  virtual void exitDate3(HTTPParser::Date3Context * /*ctx*/) override { }

  virtual void enterDay(HTTPParser::DayContext * /*ctx*/) override { }
  virtual void exitDay(HTTPParser::DayContext * /*ctx*/) override { }

  virtual void enterYear(HTTPParser::YearContext * /*ctx*/) override { }
  virtual void exitYear(HTTPParser::YearContext * /*ctx*/) override { }

  virtual void enterWeekday1(HTTPParser::Weekday1Context * /*ctx*/) override { }
  virtual void exitWeekday1(HTTPParser::Weekday1Context * /*ctx*/) override { }

  virtual void enterWeekday2(HTTPParser::Weekday2Context * /*ctx*/) override { }
  virtual void exitWeekday2(HTTPParser::Weekday2Context * /*ctx*/) override { }

  virtual void enterMonth(HTTPParser::MonthContext * /*ctx*/) override { }
  virtual void exitMonth(HTTPParser::MonthContext * /*ctx*/) override { }

  virtual void enterPragma(HTTPParser::PragmaContext * /*ctx*/) override { }
  virtual void exitPragma(HTTPParser::PragmaContext * /*ctx*/) override { }

  virtual void enterPragma_directive(HTTPParser::Pragma_directiveContext * /*ctx*/) override { }
  virtual void exitPragma_directive(HTTPParser::Pragma_directiveContext * /*ctx*/) override { }

  virtual void enterExtension_pragma(HTTPParser::Extension_pragmaContext * /*ctx*/) override { }
  virtual void exitExtension_pragma(HTTPParser::Extension_pragmaContext * /*ctx*/) override { }

  virtual void enterStringlit(HTTPParser::StringlitContext * /*ctx*/) override { }
  virtual void exitStringlit(HTTPParser::StringlitContext * /*ctx*/) override { }

  virtual void enterTrailer(HTTPParser::TrailerContext * /*ctx*/) override { }
  virtual void exitTrailer(HTTPParser::TrailerContext * /*ctx*/) override { }

  virtual void enterField_name(HTTPParser::Field_nameContext * /*ctx*/) override { }
  virtual void exitField_name(HTTPParser::Field_nameContext * /*ctx*/) override { }

  virtual void enterTransfer_encoding(HTTPParser::Transfer_encodingContext * /*ctx*/) override { }
  virtual void exitTransfer_encoding(HTTPParser::Transfer_encodingContext * /*ctx*/) override { }

  virtual void enterTransfer_coding(HTTPParser::Transfer_codingContext * /*ctx*/) override { }
  virtual void exitTransfer_coding(HTTPParser::Transfer_codingContext * /*ctx*/) override { }

  virtual void enterTransfer_extension(HTTPParser::Transfer_extensionContext * /*ctx*/) override { }
  virtual void exitTransfer_extension(HTTPParser::Transfer_extensionContext * /*ctx*/) override { }

  virtual void enterParameter(HTTPParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(HTTPParser::ParameterContext * /*ctx*/) override { }

  virtual void enterAttribute(HTTPParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(HTTPParser::AttributeContext * /*ctx*/) override { }

  virtual void enterValue(HTTPParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(HTTPParser::ValueContext * /*ctx*/) override { }

  virtual void enterUpgrade(HTTPParser::UpgradeContext * /*ctx*/) override { }
  virtual void exitUpgrade(HTTPParser::UpgradeContext * /*ctx*/) override { }

  virtual void enterProduct(HTTPParser::ProductContext * /*ctx*/) override { }
  virtual void exitProduct(HTTPParser::ProductContext * /*ctx*/) override { }

  virtual void enterVia(HTTPParser::ViaContext * /*ctx*/) override { }
  virtual void exitVia(HTTPParser::ViaContext * /*ctx*/) override { }

  virtual void enterReceived_info(HTTPParser::Received_infoContext * /*ctx*/) override { }
  virtual void exitReceived_info(HTTPParser::Received_infoContext * /*ctx*/) override { }

  virtual void enterProtocol_name(HTTPParser::Protocol_nameContext * /*ctx*/) override { }
  virtual void exitProtocol_name(HTTPParser::Protocol_nameContext * /*ctx*/) override { }

  virtual void enterProtocol_version(HTTPParser::Protocol_versionContext * /*ctx*/) override { }
  virtual void exitProtocol_version(HTTPParser::Protocol_versionContext * /*ctx*/) override { }

  virtual void enterReceived_by(HTTPParser::Received_byContext * /*ctx*/) override { }
  virtual void exitReceived_by(HTTPParser::Received_byContext * /*ctx*/) override { }

  virtual void enterHost(HTTPParser::HostContext * /*ctx*/) override { }
  virtual void exitHost(HTTPParser::HostContext * /*ctx*/) override { }

  virtual void enterPseudonym(HTTPParser::PseudonymContext * /*ctx*/) override { }
  virtual void exitPseudonym(HTTPParser::PseudonymContext * /*ctx*/) override { }

  virtual void enterWarning(HTTPParser::WarningContext * /*ctx*/) override { }
  virtual void exitWarning(HTTPParser::WarningContext * /*ctx*/) override { }

  virtual void enterWarning_value(HTTPParser::Warning_valueContext * /*ctx*/) override { }
  virtual void exitWarning_value(HTTPParser::Warning_valueContext * /*ctx*/) override { }

  virtual void enterWarn_code(HTTPParser::Warn_codeContext * /*ctx*/) override { }
  virtual void exitWarn_code(HTTPParser::Warn_codeContext * /*ctx*/) override { }

  virtual void enterWarn_agent(HTTPParser::Warn_agentContext * /*ctx*/) override { }
  virtual void exitWarn_agent(HTTPParser::Warn_agentContext * /*ctx*/) override { }

  virtual void enterPort(HTTPParser::PortContext * /*ctx*/) override { }
  virtual void exitPort(HTTPParser::PortContext * /*ctx*/) override { }

  virtual void enterWarn_text(HTTPParser::Warn_textContext * /*ctx*/) override { }
  virtual void exitWarn_text(HTTPParser::Warn_textContext * /*ctx*/) override { }

  virtual void enterWarn_date(HTTPParser::Warn_dateContext * /*ctx*/) override { }
  virtual void exitWarn_date(HTTPParser::Warn_dateContext * /*ctx*/) override { }

  virtual void enterRequest_header(HTTPParser::Request_headerContext * /*ctx*/) override { }
  virtual void exitRequest_header(HTTPParser::Request_headerContext * /*ctx*/) override { }

  virtual void enterAccept(HTTPParser::AcceptContext * /*ctx*/) override { }
  virtual void exitAccept(HTTPParser::AcceptContext * /*ctx*/) override { }

  virtual void enterAccept_info(HTTPParser::Accept_infoContext * /*ctx*/) override { }
  virtual void exitAccept_info(HTTPParser::Accept_infoContext * /*ctx*/) override { }

  virtual void enterMedia_range(HTTPParser::Media_rangeContext * /*ctx*/) override { }
  virtual void exitMedia_range(HTTPParser::Media_rangeContext * /*ctx*/) override { }

  virtual void enterType(HTTPParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(HTTPParser::TypeContext * /*ctx*/) override { }

  virtual void enterSubtype(HTTPParser::SubtypeContext * /*ctx*/) override { }
  virtual void exitSubtype(HTTPParser::SubtypeContext * /*ctx*/) override { }

  virtual void enterSubtype_extension(HTTPParser::Subtype_extensionContext * /*ctx*/) override { }
  virtual void exitSubtype_extension(HTTPParser::Subtype_extensionContext * /*ctx*/) override { }

  virtual void enterAccept_params(HTTPParser::Accept_paramsContext * /*ctx*/) override { }
  virtual void exitAccept_params(HTTPParser::Accept_paramsContext * /*ctx*/) override { }

  virtual void enterQvalue(HTTPParser::QvalueContext * /*ctx*/) override { }
  virtual void exitQvalue(HTTPParser::QvalueContext * /*ctx*/) override { }

  virtual void enterAccept_extension(HTTPParser::Accept_extensionContext * /*ctx*/) override { }
  virtual void exitAccept_extension(HTTPParser::Accept_extensionContext * /*ctx*/) override { }

  virtual void enterAccept_charset(HTTPParser::Accept_charsetContext * /*ctx*/) override { }
  virtual void exitAccept_charset(HTTPParser::Accept_charsetContext * /*ctx*/) override { }

  virtual void enterAccept_charset_info(HTTPParser::Accept_charset_infoContext * /*ctx*/) override { }
  virtual void exitAccept_charset_info(HTTPParser::Accept_charset_infoContext * /*ctx*/) override { }

  virtual void enterCharset(HTTPParser::CharsetContext * /*ctx*/) override { }
  virtual void exitCharset(HTTPParser::CharsetContext * /*ctx*/) override { }

  virtual void enterQuality_value(HTTPParser::Quality_valueContext * /*ctx*/) override { }
  virtual void exitQuality_value(HTTPParser::Quality_valueContext * /*ctx*/) override { }

  virtual void enterAccept_encoding(HTTPParser::Accept_encodingContext * /*ctx*/) override { }
  virtual void exitAccept_encoding(HTTPParser::Accept_encodingContext * /*ctx*/) override { }

  virtual void enterAccept_encoding_info(HTTPParser::Accept_encoding_infoContext * /*ctx*/) override { }
  virtual void exitAccept_encoding_info(HTTPParser::Accept_encoding_infoContext * /*ctx*/) override { }

  virtual void enterCoding(HTTPParser::CodingContext * /*ctx*/) override { }
  virtual void exitCoding(HTTPParser::CodingContext * /*ctx*/) override { }

  virtual void enterAccept_language(HTTPParser::Accept_languageContext * /*ctx*/) override { }
  virtual void exitAccept_language(HTTPParser::Accept_languageContext * /*ctx*/) override { }

  virtual void enterAccept_language_info(HTTPParser::Accept_language_infoContext * /*ctx*/) override { }
  virtual void exitAccept_language_info(HTTPParser::Accept_language_infoContext * /*ctx*/) override { }

  virtual void enterLanguage_range(HTTPParser::Language_rangeContext * /*ctx*/) override { }
  virtual void exitLanguage_range(HTTPParser::Language_rangeContext * /*ctx*/) override { }

  virtual void enterAuthorization(HTTPParser::AuthorizationContext * /*ctx*/) override { }
  virtual void exitAuthorization(HTTPParser::AuthorizationContext * /*ctx*/) override { }

  virtual void enterCredentials(HTTPParser::CredentialsContext * /*ctx*/) override { }
  virtual void exitCredentials(HTTPParser::CredentialsContext * /*ctx*/) override { }

  virtual void enterExpect(HTTPParser::ExpectContext * /*ctx*/) override { }
  virtual void exitExpect(HTTPParser::ExpectContext * /*ctx*/) override { }

  virtual void enterExpect_info(HTTPParser::Expect_infoContext * /*ctx*/) override { }
  virtual void exitExpect_info(HTTPParser::Expect_infoContext * /*ctx*/) override { }

  virtual void enterExpectation_extension(HTTPParser::Expectation_extensionContext * /*ctx*/) override { }
  virtual void exitExpectation_extension(HTTPParser::Expectation_extensionContext * /*ctx*/) override { }

  virtual void enterExpect_params(HTTPParser::Expect_paramsContext * /*ctx*/) override { }
  virtual void exitExpect_params(HTTPParser::Expect_paramsContext * /*ctx*/) override { }

  virtual void enterFrom(HTTPParser::FromContext * /*ctx*/) override { }
  virtual void exitFrom(HTTPParser::FromContext * /*ctx*/) override { }

  virtual void enterHost_(HTTPParser::Host_Context * /*ctx*/) override { }
  virtual void exitHost_(HTTPParser::Host_Context * /*ctx*/) override { }

  virtual void enterIf_match(HTTPParser::If_matchContext * /*ctx*/) override { }
  virtual void exitIf_match(HTTPParser::If_matchContext * /*ctx*/) override { }

  virtual void enterIf_match_info(HTTPParser::If_match_infoContext * /*ctx*/) override { }
  virtual void exitIf_match_info(HTTPParser::If_match_infoContext * /*ctx*/) override { }

  virtual void enterEntity_tag(HTTPParser::Entity_tagContext * /*ctx*/) override { }
  virtual void exitEntity_tag(HTTPParser::Entity_tagContext * /*ctx*/) override { }

  virtual void enterIf_modified_since(HTTPParser::If_modified_sinceContext * /*ctx*/) override { }
  virtual void exitIf_modified_since(HTTPParser::If_modified_sinceContext * /*ctx*/) override { }

  virtual void enterIf_none_match(HTTPParser::If_none_matchContext * /*ctx*/) override { }
  virtual void exitIf_none_match(HTTPParser::If_none_matchContext * /*ctx*/) override { }

  virtual void enterIf_none_match_info(HTTPParser::If_none_match_infoContext * /*ctx*/) override { }
  virtual void exitIf_none_match_info(HTTPParser::If_none_match_infoContext * /*ctx*/) override { }

  virtual void enterIf_range(HTTPParser::If_rangeContext * /*ctx*/) override { }
  virtual void exitIf_range(HTTPParser::If_rangeContext * /*ctx*/) override { }

  virtual void enterIf_unmodified_since(HTTPParser::If_unmodified_sinceContext * /*ctx*/) override { }
  virtual void exitIf_unmodified_since(HTTPParser::If_unmodified_sinceContext * /*ctx*/) override { }

  virtual void enterMax_forwards(HTTPParser::Max_forwardsContext * /*ctx*/) override { }
  virtual void exitMax_forwards(HTTPParser::Max_forwardsContext * /*ctx*/) override { }

  virtual void enterProxy_authorization(HTTPParser::Proxy_authorizationContext * /*ctx*/) override { }
  virtual void exitProxy_authorization(HTTPParser::Proxy_authorizationContext * /*ctx*/) override { }

  virtual void enterRange(HTTPParser::RangeContext * /*ctx*/) override { }
  virtual void exitRange(HTTPParser::RangeContext * /*ctx*/) override { }

  virtual void enterRanges_specifier(HTTPParser::Ranges_specifierContext * /*ctx*/) override { }
  virtual void exitRanges_specifier(HTTPParser::Ranges_specifierContext * /*ctx*/) override { }

  virtual void enterByte_ranges_specifier(HTTPParser::Byte_ranges_specifierContext * /*ctx*/) override { }
  virtual void exitByte_ranges_specifier(HTTPParser::Byte_ranges_specifierContext * /*ctx*/) override { }

  virtual void enterByte_range_set(HTTPParser::Byte_range_setContext * /*ctx*/) override { }
  virtual void exitByte_range_set(HTTPParser::Byte_range_setContext * /*ctx*/) override { }

  virtual void enterByte_range_spec(HTTPParser::Byte_range_specContext * /*ctx*/) override { }
  virtual void exitByte_range_spec(HTTPParser::Byte_range_specContext * /*ctx*/) override { }

  virtual void enterFirst_byte_pos(HTTPParser::First_byte_posContext * /*ctx*/) override { }
  virtual void exitFirst_byte_pos(HTTPParser::First_byte_posContext * /*ctx*/) override { }

  virtual void enterLast_byte_pos(HTTPParser::Last_byte_posContext * /*ctx*/) override { }
  virtual void exitLast_byte_pos(HTTPParser::Last_byte_posContext * /*ctx*/) override { }

  virtual void enterSuffix_byte_range_spec(HTTPParser::Suffix_byte_range_specContext * /*ctx*/) override { }
  virtual void exitSuffix_byte_range_spec(HTTPParser::Suffix_byte_range_specContext * /*ctx*/) override { }

  virtual void enterSuffix_length(HTTPParser::Suffix_lengthContext * /*ctx*/) override { }
  virtual void exitSuffix_length(HTTPParser::Suffix_lengthContext * /*ctx*/) override { }

  virtual void enterReferer(HTTPParser::RefererContext * /*ctx*/) override { }
  virtual void exitReferer(HTTPParser::RefererContext * /*ctx*/) override { }

  virtual void enterUrl(HTTPParser::UrlContext * /*ctx*/) override { }
  virtual void exitUrl(HTTPParser::UrlContext * /*ctx*/) override { }

  virtual void enterTe(HTTPParser::TeContext * /*ctx*/) override { }
  virtual void exitTe(HTTPParser::TeContext * /*ctx*/) override { }

  virtual void enterT_coding(HTTPParser::T_codingContext * /*ctx*/) override { }
  virtual void exitT_coding(HTTPParser::T_codingContext * /*ctx*/) override { }

  virtual void enterUser_agent(HTTPParser::User_agentContext * /*ctx*/) override { }
  virtual void exitUser_agent(HTTPParser::User_agentContext * /*ctx*/) override { }

  virtual void enterComment(HTTPParser::CommentContext * /*ctx*/) override { }
  virtual void exitComment(HTTPParser::CommentContext * /*ctx*/) override { }

  virtual void enterProduct_version(HTTPParser::Product_versionContext * /*ctx*/) override { }
  virtual void exitProduct_version(HTTPParser::Product_versionContext * /*ctx*/) override { }

  virtual void enterEntity_header(HTTPParser::Entity_headerContext * /*ctx*/) override { }
  virtual void exitEntity_header(HTTPParser::Entity_headerContext * /*ctx*/) override { }

  virtual void enterAllow(HTTPParser::AllowContext * /*ctx*/) override { }
  virtual void exitAllow(HTTPParser::AllowContext * /*ctx*/) override { }

  virtual void enterContent_encoding(HTTPParser::Content_encodingContext * /*ctx*/) override { }
  virtual void exitContent_encoding(HTTPParser::Content_encodingContext * /*ctx*/) override { }

  virtual void enterContent_language(HTTPParser::Content_languageContext * /*ctx*/) override { }
  virtual void exitContent_language(HTTPParser::Content_languageContext * /*ctx*/) override { }

  virtual void enterContent_length(HTTPParser::Content_lengthContext * /*ctx*/) override { }
  virtual void exitContent_length(HTTPParser::Content_lengthContext * /*ctx*/) override { }

  virtual void enterContent_length_number(HTTPParser::Content_length_numberContext * /*ctx*/) override { }
  virtual void exitContent_length_number(HTTPParser::Content_length_numberContext * /*ctx*/) override { }

  virtual void enterContent_location(HTTPParser::Content_locationContext * /*ctx*/) override { }
  virtual void exitContent_location(HTTPParser::Content_locationContext * /*ctx*/) override { }

  virtual void enterContent_md5(HTTPParser::Content_md5Context * /*ctx*/) override { }
  virtual void exitContent_md5(HTTPParser::Content_md5Context * /*ctx*/) override { }

  virtual void enterContent_range(HTTPParser::Content_rangeContext * /*ctx*/) override { }
  virtual void exitContent_range(HTTPParser::Content_rangeContext * /*ctx*/) override { }

  virtual void enterContent_type(HTTPParser::Content_typeContext * /*ctx*/) override { }
  virtual void exitContent_type(HTTPParser::Content_typeContext * /*ctx*/) override { }

  virtual void enterMime_value(HTTPParser::Mime_valueContext * /*ctx*/) override { }
  virtual void exitMime_value(HTTPParser::Mime_valueContext * /*ctx*/) override { }

  virtual void enterNot_eol(HTTPParser::Not_eolContext * /*ctx*/) override { }
  virtual void exitNot_eol(HTTPParser::Not_eolContext * /*ctx*/) override { }

  virtual void enterToken_or_key(HTTPParser::Token_or_keyContext * /*ctx*/) override { }
  virtual void exitToken_or_key(HTTPParser::Token_or_keyContext * /*ctx*/) override { }

  virtual void enterToken(HTTPParser::TokenContext * /*ctx*/) override { }
  virtual void exitToken(HTTPParser::TokenContext * /*ctx*/) override { }

  virtual void enterExpires(HTTPParser::ExpiresContext * /*ctx*/) override { }
  virtual void exitExpires(HTTPParser::ExpiresContext * /*ctx*/) override { }

  virtual void enterLast_modified(HTTPParser::Last_modifiedContext * /*ctx*/) override { }
  virtual void exitLast_modified(HTTPParser::Last_modifiedContext * /*ctx*/) override { }

  virtual void enterExtension_header(HTTPParser::Extension_headerContext * /*ctx*/) override { }
  virtual void exitExtension_header(HTTPParser::Extension_headerContext * /*ctx*/) override { }

  virtual void enterNew_line(HTTPParser::New_lineContext * /*ctx*/) override { }
  virtual void exitNew_line(HTTPParser::New_lineContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

