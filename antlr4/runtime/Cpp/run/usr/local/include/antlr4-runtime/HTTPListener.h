
// Generated from HTTP.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "HTTPParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by HTTPParser.
 */
class  HTTPListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterKey(HTTPParser::KeyContext *ctx) = 0;
  virtual void exitKey(HTTPParser::KeyContext *ctx) = 0;

  virtual void enterHttp(HTTPParser::HttpContext *ctx) = 0;
  virtual void exitHttp(HTTPParser::HttpContext *ctx) = 0;

  virtual void enterResponse(HTTPParser::ResponseContext *ctx) = 0;
  virtual void exitResponse(HTTPParser::ResponseContext *ctx) = 0;

  virtual void enterStatus_line(HTTPParser::Status_lineContext *ctx) = 0;
  virtual void exitStatus_line(HTTPParser::Status_lineContext *ctx) = 0;

  virtual void enterStatus_code(HTTPParser::Status_codeContext *ctx) = 0;
  virtual void exitStatus_code(HTTPParser::Status_codeContext *ctx) = 0;

  virtual void enterStatus_text(HTTPParser::Status_textContext *ctx) = 0;
  virtual void exitStatus_text(HTTPParser::Status_textContext *ctx) = 0;

  virtual void enterRequest(HTTPParser::RequestContext *ctx) = 0;
  virtual void exitRequest(HTTPParser::RequestContext *ctx) = 0;

  virtual void enterMessage_body(HTTPParser::Message_bodyContext *ctx) = 0;
  virtual void exitMessage_body(HTTPParser::Message_bodyContext *ctx) = 0;

  virtual void enterRequest_line(HTTPParser::Request_lineContext *ctx) = 0;
  virtual void exitRequest_line(HTTPParser::Request_lineContext *ctx) = 0;

  virtual void enterMethod(HTTPParser::MethodContext *ctx) = 0;
  virtual void exitMethod(HTTPParser::MethodContext *ctx) = 0;

  virtual void enterUri(HTTPParser::UriContext *ctx) = 0;
  virtual void exitUri(HTTPParser::UriContext *ctx) = 0;

  virtual void enterUri_text(HTTPParser::Uri_textContext *ctx) = 0;
  virtual void exitUri_text(HTTPParser::Uri_textContext *ctx) = 0;

  virtual void enterHttp_version(HTTPParser::Http_versionContext *ctx) = 0;
  virtual void exitHttp_version(HTTPParser::Http_versionContext *ctx) = 0;

  virtual void enterHeader_message(HTTPParser::Header_messageContext *ctx) = 0;
  virtual void exitHeader_message(HTTPParser::Header_messageContext *ctx) = 0;

  virtual void enterGeneral_header(HTTPParser::General_headerContext *ctx) = 0;
  virtual void exitGeneral_header(HTTPParser::General_headerContext *ctx) = 0;

  virtual void enterLocation(HTTPParser::LocationContext *ctx) = 0;
  virtual void exitLocation(HTTPParser::LocationContext *ctx) = 0;

  virtual void enterSet_cookie(HTTPParser::Set_cookieContext *ctx) = 0;
  virtual void exitSet_cookie(HTTPParser::Set_cookieContext *ctx) = 0;

  virtual void enterCookie_entry(HTTPParser::Cookie_entryContext *ctx) = 0;
  virtual void exitCookie_entry(HTTPParser::Cookie_entryContext *ctx) = 0;

  virtual void enterCookie_definition(HTTPParser::Cookie_definitionContext *ctx) = 0;
  virtual void exitCookie_definition(HTTPParser::Cookie_definitionContext *ctx) = 0;

  virtual void enterCookie_name(HTTPParser::Cookie_nameContext *ctx) = 0;
  virtual void exitCookie_name(HTTPParser::Cookie_nameContext *ctx) = 0;

  virtual void enterCookie_value(HTTPParser::Cookie_valueContext *ctx) = 0;
  virtual void exitCookie_value(HTTPParser::Cookie_valueContext *ctx) = 0;

  virtual void enterCookie_expiration(HTTPParser::Cookie_expirationContext *ctx) = 0;
  virtual void exitCookie_expiration(HTTPParser::Cookie_expirationContext *ctx) = 0;

  virtual void enterCookie_path(HTTPParser::Cookie_pathContext *ctx) = 0;
  virtual void exitCookie_path(HTTPParser::Cookie_pathContext *ctx) = 0;

  virtual void enterCookie_domain(HTTPParser::Cookie_domainContext *ctx) = 0;
  virtual void exitCookie_domain(HTTPParser::Cookie_domainContext *ctx) = 0;

  virtual void enterCookie_secure(HTTPParser::Cookie_secureContext *ctx) = 0;
  virtual void exitCookie_secure(HTTPParser::Cookie_secureContext *ctx) = 0;

  virtual void enterCookie_http_only(HTTPParser::Cookie_http_onlyContext *ctx) = 0;
  virtual void exitCookie_http_only(HTTPParser::Cookie_http_onlyContext *ctx) = 0;

  virtual void enterCookie_list(HTTPParser::Cookie_listContext *ctx) = 0;
  virtual void exitCookie_list(HTTPParser::Cookie_listContext *ctx) = 0;

  virtual void enterCache_control(HTTPParser::Cache_controlContext *ctx) = 0;
  virtual void exitCache_control(HTTPParser::Cache_controlContext *ctx) = 0;

  virtual void enterCache_request(HTTPParser::Cache_requestContext *ctx) = 0;
  virtual void exitCache_request(HTTPParser::Cache_requestContext *ctx) = 0;

  virtual void enterDelta_seconds(HTTPParser::Delta_secondsContext *ctx) = 0;
  virtual void exitDelta_seconds(HTTPParser::Delta_secondsContext *ctx) = 0;

  virtual void enterStale_time(HTTPParser::Stale_timeContext *ctx) = 0;
  virtual void exitStale_time(HTTPParser::Stale_timeContext *ctx) = 0;

  virtual void enterCache_extension(HTTPParser::Cache_extensionContext *ctx) = 0;
  virtual void exitCache_extension(HTTPParser::Cache_extensionContext *ctx) = 0;

  virtual void enterConnection(HTTPParser::ConnectionContext *ctx) = 0;
  virtual void exitConnection(HTTPParser::ConnectionContext *ctx) = 0;

  virtual void enterConnection_token(HTTPParser::Connection_tokenContext *ctx) = 0;
  virtual void exitConnection_token(HTTPParser::Connection_tokenContext *ctx) = 0;

  virtual void enterDate(HTTPParser::DateContext *ctx) = 0;
  virtual void exitDate(HTTPParser::DateContext *ctx) = 0;

  virtual void enterHttp_date(HTTPParser::Http_dateContext *ctx) = 0;
  virtual void exitHttp_date(HTTPParser::Http_dateContext *ctx) = 0;

  virtual void enterRfc1123_date(HTTPParser::Rfc1123_dateContext *ctx) = 0;
  virtual void exitRfc1123_date(HTTPParser::Rfc1123_dateContext *ctx) = 0;

  virtual void enterRfc850_date(HTTPParser::Rfc850_dateContext *ctx) = 0;
  virtual void exitRfc850_date(HTTPParser::Rfc850_dateContext *ctx) = 0;

  virtual void enterAsctime_date(HTTPParser::Asctime_dateContext *ctx) = 0;
  virtual void exitAsctime_date(HTTPParser::Asctime_dateContext *ctx) = 0;

  virtual void enterCookie_date(HTTPParser::Cookie_dateContext *ctx) = 0;
  virtual void exitCookie_date(HTTPParser::Cookie_dateContext *ctx) = 0;

  virtual void enterTime(HTTPParser::TimeContext *ctx) = 0;
  virtual void exitTime(HTTPParser::TimeContext *ctx) = 0;

  virtual void enterDate1(HTTPParser::Date1Context *ctx) = 0;
  virtual void exitDate1(HTTPParser::Date1Context *ctx) = 0;

  virtual void enterDate2(HTTPParser::Date2Context *ctx) = 0;
  virtual void exitDate2(HTTPParser::Date2Context *ctx) = 0;

  virtual void enterDate3(HTTPParser::Date3Context *ctx) = 0;
  virtual void exitDate3(HTTPParser::Date3Context *ctx) = 0;

  virtual void enterDay(HTTPParser::DayContext *ctx) = 0;
  virtual void exitDay(HTTPParser::DayContext *ctx) = 0;

  virtual void enterYear(HTTPParser::YearContext *ctx) = 0;
  virtual void exitYear(HTTPParser::YearContext *ctx) = 0;

  virtual void enterWeekday1(HTTPParser::Weekday1Context *ctx) = 0;
  virtual void exitWeekday1(HTTPParser::Weekday1Context *ctx) = 0;

  virtual void enterWeekday2(HTTPParser::Weekday2Context *ctx) = 0;
  virtual void exitWeekday2(HTTPParser::Weekday2Context *ctx) = 0;

  virtual void enterMonth(HTTPParser::MonthContext *ctx) = 0;
  virtual void exitMonth(HTTPParser::MonthContext *ctx) = 0;

  virtual void enterPragma(HTTPParser::PragmaContext *ctx) = 0;
  virtual void exitPragma(HTTPParser::PragmaContext *ctx) = 0;

  virtual void enterPragma_directive(HTTPParser::Pragma_directiveContext *ctx) = 0;
  virtual void exitPragma_directive(HTTPParser::Pragma_directiveContext *ctx) = 0;

  virtual void enterExtension_pragma(HTTPParser::Extension_pragmaContext *ctx) = 0;
  virtual void exitExtension_pragma(HTTPParser::Extension_pragmaContext *ctx) = 0;

  virtual void enterStringlit(HTTPParser::StringlitContext *ctx) = 0;
  virtual void exitStringlit(HTTPParser::StringlitContext *ctx) = 0;

  virtual void enterTrailer(HTTPParser::TrailerContext *ctx) = 0;
  virtual void exitTrailer(HTTPParser::TrailerContext *ctx) = 0;

  virtual void enterField_name(HTTPParser::Field_nameContext *ctx) = 0;
  virtual void exitField_name(HTTPParser::Field_nameContext *ctx) = 0;

  virtual void enterTransfer_encoding(HTTPParser::Transfer_encodingContext *ctx) = 0;
  virtual void exitTransfer_encoding(HTTPParser::Transfer_encodingContext *ctx) = 0;

  virtual void enterTransfer_coding(HTTPParser::Transfer_codingContext *ctx) = 0;
  virtual void exitTransfer_coding(HTTPParser::Transfer_codingContext *ctx) = 0;

  virtual void enterTransfer_extension(HTTPParser::Transfer_extensionContext *ctx) = 0;
  virtual void exitTransfer_extension(HTTPParser::Transfer_extensionContext *ctx) = 0;

  virtual void enterParameter(HTTPParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(HTTPParser::ParameterContext *ctx) = 0;

  virtual void enterAttribute(HTTPParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(HTTPParser::AttributeContext *ctx) = 0;

  virtual void enterValue(HTTPParser::ValueContext *ctx) = 0;
  virtual void exitValue(HTTPParser::ValueContext *ctx) = 0;

  virtual void enterUpgrade(HTTPParser::UpgradeContext *ctx) = 0;
  virtual void exitUpgrade(HTTPParser::UpgradeContext *ctx) = 0;

  virtual void enterProduct(HTTPParser::ProductContext *ctx) = 0;
  virtual void exitProduct(HTTPParser::ProductContext *ctx) = 0;

  virtual void enterVia(HTTPParser::ViaContext *ctx) = 0;
  virtual void exitVia(HTTPParser::ViaContext *ctx) = 0;

  virtual void enterReceived_info(HTTPParser::Received_infoContext *ctx) = 0;
  virtual void exitReceived_info(HTTPParser::Received_infoContext *ctx) = 0;

  virtual void enterProtocol_name(HTTPParser::Protocol_nameContext *ctx) = 0;
  virtual void exitProtocol_name(HTTPParser::Protocol_nameContext *ctx) = 0;

  virtual void enterProtocol_version(HTTPParser::Protocol_versionContext *ctx) = 0;
  virtual void exitProtocol_version(HTTPParser::Protocol_versionContext *ctx) = 0;

  virtual void enterReceived_by(HTTPParser::Received_byContext *ctx) = 0;
  virtual void exitReceived_by(HTTPParser::Received_byContext *ctx) = 0;

  virtual void enterHost(HTTPParser::HostContext *ctx) = 0;
  virtual void exitHost(HTTPParser::HostContext *ctx) = 0;

  virtual void enterPseudonym(HTTPParser::PseudonymContext *ctx) = 0;
  virtual void exitPseudonym(HTTPParser::PseudonymContext *ctx) = 0;

  virtual void enterWarning(HTTPParser::WarningContext *ctx) = 0;
  virtual void exitWarning(HTTPParser::WarningContext *ctx) = 0;

  virtual void enterWarning_value(HTTPParser::Warning_valueContext *ctx) = 0;
  virtual void exitWarning_value(HTTPParser::Warning_valueContext *ctx) = 0;

  virtual void enterWarn_code(HTTPParser::Warn_codeContext *ctx) = 0;
  virtual void exitWarn_code(HTTPParser::Warn_codeContext *ctx) = 0;

  virtual void enterWarn_agent(HTTPParser::Warn_agentContext *ctx) = 0;
  virtual void exitWarn_agent(HTTPParser::Warn_agentContext *ctx) = 0;

  virtual void enterPort(HTTPParser::PortContext *ctx) = 0;
  virtual void exitPort(HTTPParser::PortContext *ctx) = 0;

  virtual void enterWarn_text(HTTPParser::Warn_textContext *ctx) = 0;
  virtual void exitWarn_text(HTTPParser::Warn_textContext *ctx) = 0;

  virtual void enterWarn_date(HTTPParser::Warn_dateContext *ctx) = 0;
  virtual void exitWarn_date(HTTPParser::Warn_dateContext *ctx) = 0;

  virtual void enterRequest_header(HTTPParser::Request_headerContext *ctx) = 0;
  virtual void exitRequest_header(HTTPParser::Request_headerContext *ctx) = 0;

  virtual void enterAccept(HTTPParser::AcceptContext *ctx) = 0;
  virtual void exitAccept(HTTPParser::AcceptContext *ctx) = 0;

  virtual void enterAccept_info(HTTPParser::Accept_infoContext *ctx) = 0;
  virtual void exitAccept_info(HTTPParser::Accept_infoContext *ctx) = 0;

  virtual void enterMedia_range(HTTPParser::Media_rangeContext *ctx) = 0;
  virtual void exitMedia_range(HTTPParser::Media_rangeContext *ctx) = 0;

  virtual void enterType(HTTPParser::TypeContext *ctx) = 0;
  virtual void exitType(HTTPParser::TypeContext *ctx) = 0;

  virtual void enterSubtype(HTTPParser::SubtypeContext *ctx) = 0;
  virtual void exitSubtype(HTTPParser::SubtypeContext *ctx) = 0;

  virtual void enterSubtype_extension(HTTPParser::Subtype_extensionContext *ctx) = 0;
  virtual void exitSubtype_extension(HTTPParser::Subtype_extensionContext *ctx) = 0;

  virtual void enterAccept_params(HTTPParser::Accept_paramsContext *ctx) = 0;
  virtual void exitAccept_params(HTTPParser::Accept_paramsContext *ctx) = 0;

  virtual void enterQvalue(HTTPParser::QvalueContext *ctx) = 0;
  virtual void exitQvalue(HTTPParser::QvalueContext *ctx) = 0;

  virtual void enterAccept_extension(HTTPParser::Accept_extensionContext *ctx) = 0;
  virtual void exitAccept_extension(HTTPParser::Accept_extensionContext *ctx) = 0;

  virtual void enterAccept_charset(HTTPParser::Accept_charsetContext *ctx) = 0;
  virtual void exitAccept_charset(HTTPParser::Accept_charsetContext *ctx) = 0;

  virtual void enterAccept_charset_info(HTTPParser::Accept_charset_infoContext *ctx) = 0;
  virtual void exitAccept_charset_info(HTTPParser::Accept_charset_infoContext *ctx) = 0;

  virtual void enterCharset(HTTPParser::CharsetContext *ctx) = 0;
  virtual void exitCharset(HTTPParser::CharsetContext *ctx) = 0;

  virtual void enterQuality_value(HTTPParser::Quality_valueContext *ctx) = 0;
  virtual void exitQuality_value(HTTPParser::Quality_valueContext *ctx) = 0;

  virtual void enterAccept_encoding(HTTPParser::Accept_encodingContext *ctx) = 0;
  virtual void exitAccept_encoding(HTTPParser::Accept_encodingContext *ctx) = 0;

  virtual void enterAccept_encoding_info(HTTPParser::Accept_encoding_infoContext *ctx) = 0;
  virtual void exitAccept_encoding_info(HTTPParser::Accept_encoding_infoContext *ctx) = 0;

  virtual void enterCoding(HTTPParser::CodingContext *ctx) = 0;
  virtual void exitCoding(HTTPParser::CodingContext *ctx) = 0;

  virtual void enterAccept_language(HTTPParser::Accept_languageContext *ctx) = 0;
  virtual void exitAccept_language(HTTPParser::Accept_languageContext *ctx) = 0;

  virtual void enterAccept_language_info(HTTPParser::Accept_language_infoContext *ctx) = 0;
  virtual void exitAccept_language_info(HTTPParser::Accept_language_infoContext *ctx) = 0;

  virtual void enterLanguage_range(HTTPParser::Language_rangeContext *ctx) = 0;
  virtual void exitLanguage_range(HTTPParser::Language_rangeContext *ctx) = 0;

  virtual void enterAuthorization(HTTPParser::AuthorizationContext *ctx) = 0;
  virtual void exitAuthorization(HTTPParser::AuthorizationContext *ctx) = 0;

  virtual void enterCredentials(HTTPParser::CredentialsContext *ctx) = 0;
  virtual void exitCredentials(HTTPParser::CredentialsContext *ctx) = 0;

  virtual void enterExpect(HTTPParser::ExpectContext *ctx) = 0;
  virtual void exitExpect(HTTPParser::ExpectContext *ctx) = 0;

  virtual void enterExpect_info(HTTPParser::Expect_infoContext *ctx) = 0;
  virtual void exitExpect_info(HTTPParser::Expect_infoContext *ctx) = 0;

  virtual void enterExpectation_extension(HTTPParser::Expectation_extensionContext *ctx) = 0;
  virtual void exitExpectation_extension(HTTPParser::Expectation_extensionContext *ctx) = 0;

  virtual void enterExpect_params(HTTPParser::Expect_paramsContext *ctx) = 0;
  virtual void exitExpect_params(HTTPParser::Expect_paramsContext *ctx) = 0;

  virtual void enterFrom(HTTPParser::FromContext *ctx) = 0;
  virtual void exitFrom(HTTPParser::FromContext *ctx) = 0;

  virtual void enterHost_(HTTPParser::Host_Context *ctx) = 0;
  virtual void exitHost_(HTTPParser::Host_Context *ctx) = 0;

  virtual void enterIf_match(HTTPParser::If_matchContext *ctx) = 0;
  virtual void exitIf_match(HTTPParser::If_matchContext *ctx) = 0;

  virtual void enterIf_match_info(HTTPParser::If_match_infoContext *ctx) = 0;
  virtual void exitIf_match_info(HTTPParser::If_match_infoContext *ctx) = 0;

  virtual void enterEntity_tag(HTTPParser::Entity_tagContext *ctx) = 0;
  virtual void exitEntity_tag(HTTPParser::Entity_tagContext *ctx) = 0;

  virtual void enterIf_modified_since(HTTPParser::If_modified_sinceContext *ctx) = 0;
  virtual void exitIf_modified_since(HTTPParser::If_modified_sinceContext *ctx) = 0;

  virtual void enterIf_none_match(HTTPParser::If_none_matchContext *ctx) = 0;
  virtual void exitIf_none_match(HTTPParser::If_none_matchContext *ctx) = 0;

  virtual void enterIf_none_match_info(HTTPParser::If_none_match_infoContext *ctx) = 0;
  virtual void exitIf_none_match_info(HTTPParser::If_none_match_infoContext *ctx) = 0;

  virtual void enterIf_range(HTTPParser::If_rangeContext *ctx) = 0;
  virtual void exitIf_range(HTTPParser::If_rangeContext *ctx) = 0;

  virtual void enterIf_unmodified_since(HTTPParser::If_unmodified_sinceContext *ctx) = 0;
  virtual void exitIf_unmodified_since(HTTPParser::If_unmodified_sinceContext *ctx) = 0;

  virtual void enterMax_forwards(HTTPParser::Max_forwardsContext *ctx) = 0;
  virtual void exitMax_forwards(HTTPParser::Max_forwardsContext *ctx) = 0;

  virtual void enterProxy_authorization(HTTPParser::Proxy_authorizationContext *ctx) = 0;
  virtual void exitProxy_authorization(HTTPParser::Proxy_authorizationContext *ctx) = 0;

  virtual void enterRange(HTTPParser::RangeContext *ctx) = 0;
  virtual void exitRange(HTTPParser::RangeContext *ctx) = 0;

  virtual void enterRanges_specifier(HTTPParser::Ranges_specifierContext *ctx) = 0;
  virtual void exitRanges_specifier(HTTPParser::Ranges_specifierContext *ctx) = 0;

  virtual void enterByte_ranges_specifier(HTTPParser::Byte_ranges_specifierContext *ctx) = 0;
  virtual void exitByte_ranges_specifier(HTTPParser::Byte_ranges_specifierContext *ctx) = 0;

  virtual void enterByte_range_set(HTTPParser::Byte_range_setContext *ctx) = 0;
  virtual void exitByte_range_set(HTTPParser::Byte_range_setContext *ctx) = 0;

  virtual void enterByte_range_spec(HTTPParser::Byte_range_specContext *ctx) = 0;
  virtual void exitByte_range_spec(HTTPParser::Byte_range_specContext *ctx) = 0;

  virtual void enterFirst_byte_pos(HTTPParser::First_byte_posContext *ctx) = 0;
  virtual void exitFirst_byte_pos(HTTPParser::First_byte_posContext *ctx) = 0;

  virtual void enterLast_byte_pos(HTTPParser::Last_byte_posContext *ctx) = 0;
  virtual void exitLast_byte_pos(HTTPParser::Last_byte_posContext *ctx) = 0;

  virtual void enterSuffix_byte_range_spec(HTTPParser::Suffix_byte_range_specContext *ctx) = 0;
  virtual void exitSuffix_byte_range_spec(HTTPParser::Suffix_byte_range_specContext *ctx) = 0;

  virtual void enterSuffix_length(HTTPParser::Suffix_lengthContext *ctx) = 0;
  virtual void exitSuffix_length(HTTPParser::Suffix_lengthContext *ctx) = 0;

  virtual void enterReferer(HTTPParser::RefererContext *ctx) = 0;
  virtual void exitReferer(HTTPParser::RefererContext *ctx) = 0;

  virtual void enterUrl(HTTPParser::UrlContext *ctx) = 0;
  virtual void exitUrl(HTTPParser::UrlContext *ctx) = 0;

  virtual void enterTe(HTTPParser::TeContext *ctx) = 0;
  virtual void exitTe(HTTPParser::TeContext *ctx) = 0;

  virtual void enterT_coding(HTTPParser::T_codingContext *ctx) = 0;
  virtual void exitT_coding(HTTPParser::T_codingContext *ctx) = 0;

  virtual void enterUser_agent(HTTPParser::User_agentContext *ctx) = 0;
  virtual void exitUser_agent(HTTPParser::User_agentContext *ctx) = 0;

  virtual void enterComment(HTTPParser::CommentContext *ctx) = 0;
  virtual void exitComment(HTTPParser::CommentContext *ctx) = 0;

  virtual void enterProduct_version(HTTPParser::Product_versionContext *ctx) = 0;
  virtual void exitProduct_version(HTTPParser::Product_versionContext *ctx) = 0;

  virtual void enterEntity_header(HTTPParser::Entity_headerContext *ctx) = 0;
  virtual void exitEntity_header(HTTPParser::Entity_headerContext *ctx) = 0;

  virtual void enterAllow(HTTPParser::AllowContext *ctx) = 0;
  virtual void exitAllow(HTTPParser::AllowContext *ctx) = 0;

  virtual void enterContent_encoding(HTTPParser::Content_encodingContext *ctx) = 0;
  virtual void exitContent_encoding(HTTPParser::Content_encodingContext *ctx) = 0;

  virtual void enterContent_language(HTTPParser::Content_languageContext *ctx) = 0;
  virtual void exitContent_language(HTTPParser::Content_languageContext *ctx) = 0;

  virtual void enterContent_length(HTTPParser::Content_lengthContext *ctx) = 0;
  virtual void exitContent_length(HTTPParser::Content_lengthContext *ctx) = 0;

  virtual void enterContent_length_number(HTTPParser::Content_length_numberContext *ctx) = 0;
  virtual void exitContent_length_number(HTTPParser::Content_length_numberContext *ctx) = 0;

  virtual void enterContent_location(HTTPParser::Content_locationContext *ctx) = 0;
  virtual void exitContent_location(HTTPParser::Content_locationContext *ctx) = 0;

  virtual void enterContent_md5(HTTPParser::Content_md5Context *ctx) = 0;
  virtual void exitContent_md5(HTTPParser::Content_md5Context *ctx) = 0;

  virtual void enterContent_range(HTTPParser::Content_rangeContext *ctx) = 0;
  virtual void exitContent_range(HTTPParser::Content_rangeContext *ctx) = 0;

  virtual void enterContent_type(HTTPParser::Content_typeContext *ctx) = 0;
  virtual void exitContent_type(HTTPParser::Content_typeContext *ctx) = 0;

  virtual void enterMime_value(HTTPParser::Mime_valueContext *ctx) = 0;
  virtual void exitMime_value(HTTPParser::Mime_valueContext *ctx) = 0;

  virtual void enterNot_eol(HTTPParser::Not_eolContext *ctx) = 0;
  virtual void exitNot_eol(HTTPParser::Not_eolContext *ctx) = 0;

  virtual void enterToken_or_key(HTTPParser::Token_or_keyContext *ctx) = 0;
  virtual void exitToken_or_key(HTTPParser::Token_or_keyContext *ctx) = 0;

  virtual void enterToken(HTTPParser::TokenContext *ctx) = 0;
  virtual void exitToken(HTTPParser::TokenContext *ctx) = 0;

  virtual void enterExpires(HTTPParser::ExpiresContext *ctx) = 0;
  virtual void exitExpires(HTTPParser::ExpiresContext *ctx) = 0;

  virtual void enterLast_modified(HTTPParser::Last_modifiedContext *ctx) = 0;
  virtual void exitLast_modified(HTTPParser::Last_modifiedContext *ctx) = 0;

  virtual void enterExtension_header(HTTPParser::Extension_headerContext *ctx) = 0;
  virtual void exitExtension_header(HTTPParser::Extension_headerContext *ctx) = 0;

  virtual void enterNew_line(HTTPParser::New_lineContext *ctx) = 0;
  virtual void exitNew_line(HTTPParser::New_lineContext *ctx) = 0;


};

