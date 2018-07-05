// Generated from HTTP.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link HTTPParser}.
 */
public interface HTTPListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link HTTPParser#key}.
	 * @param ctx the parse tree
	 */
	void enterKey(HTTPParser.KeyContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#key}.
	 * @param ctx the parse tree
	 */
	void exitKey(HTTPParser.KeyContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#http}.
	 * @param ctx the parse tree
	 */
	void enterHttp(HTTPParser.HttpContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#http}.
	 * @param ctx the parse tree
	 */
	void exitHttp(HTTPParser.HttpContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#request}.
	 * @param ctx the parse tree
	 */
	void enterRequest(HTTPParser.RequestContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#request}.
	 * @param ctx the parse tree
	 */
	void exitRequest(HTTPParser.RequestContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#request_line}.
	 * @param ctx the parse tree
	 */
	void enterRequest_line(HTTPParser.Request_lineContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#request_line}.
	 * @param ctx the parse tree
	 */
	void exitRequest_line(HTTPParser.Request_lineContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#method}.
	 * @param ctx the parse tree
	 */
	void enterMethod(HTTPParser.MethodContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#method}.
	 * @param ctx the parse tree
	 */
	void exitMethod(HTTPParser.MethodContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#request_uri}.
	 * @param ctx the parse tree
	 */
	void enterRequest_uri(HTTPParser.Request_uriContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#request_uri}.
	 * @param ctx the parse tree
	 */
	void exitRequest_uri(HTTPParser.Request_uriContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#http_version}.
	 * @param ctx the parse tree
	 */
	void enterHttp_version(HTTPParser.Http_versionContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#http_version}.
	 * @param ctx the parse tree
	 */
	void exitHttp_version(HTTPParser.Http_versionContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#header_message}.
	 * @param ctx the parse tree
	 */
	void enterHeader_message(HTTPParser.Header_messageContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#header_message}.
	 * @param ctx the parse tree
	 */
	void exitHeader_message(HTTPParser.Header_messageContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#general_header}.
	 * @param ctx the parse tree
	 */
	void enterGeneral_header(HTTPParser.General_headerContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#general_header}.
	 * @param ctx the parse tree
	 */
	void exitGeneral_header(HTTPParser.General_headerContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#cache_control}.
	 * @param ctx the parse tree
	 */
	void enterCache_control(HTTPParser.Cache_controlContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#cache_control}.
	 * @param ctx the parse tree
	 */
	void exitCache_control(HTTPParser.Cache_controlContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#cache_request}.
	 * @param ctx the parse tree
	 */
	void enterCache_request(HTTPParser.Cache_requestContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#cache_request}.
	 * @param ctx the parse tree
	 */
	void exitCache_request(HTTPParser.Cache_requestContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#delta_seconds}.
	 * @param ctx the parse tree
	 */
	void enterDelta_seconds(HTTPParser.Delta_secondsContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#delta_seconds}.
	 * @param ctx the parse tree
	 */
	void exitDelta_seconds(HTTPParser.Delta_secondsContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#stale_time}.
	 * @param ctx the parse tree
	 */
	void enterStale_time(HTTPParser.Stale_timeContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#stale_time}.
	 * @param ctx the parse tree
	 */
	void exitStale_time(HTTPParser.Stale_timeContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#cache_extension}.
	 * @param ctx the parse tree
	 */
	void enterCache_extension(HTTPParser.Cache_extensionContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#cache_extension}.
	 * @param ctx the parse tree
	 */
	void exitCache_extension(HTTPParser.Cache_extensionContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#connection}.
	 * @param ctx the parse tree
	 */
	void enterConnection(HTTPParser.ConnectionContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#connection}.
	 * @param ctx the parse tree
	 */
	void exitConnection(HTTPParser.ConnectionContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#connection_token}.
	 * @param ctx the parse tree
	 */
	void enterConnection_token(HTTPParser.Connection_tokenContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#connection_token}.
	 * @param ctx the parse tree
	 */
	void exitConnection_token(HTTPParser.Connection_tokenContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#date}.
	 * @param ctx the parse tree
	 */
	void enterDate(HTTPParser.DateContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#date}.
	 * @param ctx the parse tree
	 */
	void exitDate(HTTPParser.DateContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#http_date}.
	 * @param ctx the parse tree
	 */
	void enterHttp_date(HTTPParser.Http_dateContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#http_date}.
	 * @param ctx the parse tree
	 */
	void exitHttp_date(HTTPParser.Http_dateContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#rfc1123_date}.
	 * @param ctx the parse tree
	 */
	void enterRfc1123_date(HTTPParser.Rfc1123_dateContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#rfc1123_date}.
	 * @param ctx the parse tree
	 */
	void exitRfc1123_date(HTTPParser.Rfc1123_dateContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#rfc850_date}.
	 * @param ctx the parse tree
	 */
	void enterRfc850_date(HTTPParser.Rfc850_dateContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#rfc850_date}.
	 * @param ctx the parse tree
	 */
	void exitRfc850_date(HTTPParser.Rfc850_dateContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#asctime_date}.
	 * @param ctx the parse tree
	 */
	void enterAsctime_date(HTTPParser.Asctime_dateContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#asctime_date}.
	 * @param ctx the parse tree
	 */
	void exitAsctime_date(HTTPParser.Asctime_dateContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#time}.
	 * @param ctx the parse tree
	 */
	void enterTime(HTTPParser.TimeContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#time}.
	 * @param ctx the parse tree
	 */
	void exitTime(HTTPParser.TimeContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#date1}.
	 * @param ctx the parse tree
	 */
	void enterDate1(HTTPParser.Date1Context ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#date1}.
	 * @param ctx the parse tree
	 */
	void exitDate1(HTTPParser.Date1Context ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#date2}.
	 * @param ctx the parse tree
	 */
	void enterDate2(HTTPParser.Date2Context ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#date2}.
	 * @param ctx the parse tree
	 */
	void exitDate2(HTTPParser.Date2Context ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#date3}.
	 * @param ctx the parse tree
	 */
	void enterDate3(HTTPParser.Date3Context ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#date3}.
	 * @param ctx the parse tree
	 */
	void exitDate3(HTTPParser.Date3Context ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#weekday1}.
	 * @param ctx the parse tree
	 */
	void enterWeekday1(HTTPParser.Weekday1Context ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#weekday1}.
	 * @param ctx the parse tree
	 */
	void exitWeekday1(HTTPParser.Weekday1Context ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#weekday2}.
	 * @param ctx the parse tree
	 */
	void enterWeekday2(HTTPParser.Weekday2Context ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#weekday2}.
	 * @param ctx the parse tree
	 */
	void exitWeekday2(HTTPParser.Weekday2Context ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#month}.
	 * @param ctx the parse tree
	 */
	void enterMonth(HTTPParser.MonthContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#month}.
	 * @param ctx the parse tree
	 */
	void exitMonth(HTTPParser.MonthContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#pragma}.
	 * @param ctx the parse tree
	 */
	void enterPragma(HTTPParser.PragmaContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#pragma}.
	 * @param ctx the parse tree
	 */
	void exitPragma(HTTPParser.PragmaContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#pragma_directive}.
	 * @param ctx the parse tree
	 */
	void enterPragma_directive(HTTPParser.Pragma_directiveContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#pragma_directive}.
	 * @param ctx the parse tree
	 */
	void exitPragma_directive(HTTPParser.Pragma_directiveContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#extension_pragma}.
	 * @param ctx the parse tree
	 */
	void enterExtension_pragma(HTTPParser.Extension_pragmaContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#extension_pragma}.
	 * @param ctx the parse tree
	 */
	void exitExtension_pragma(HTTPParser.Extension_pragmaContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#stringlit}.
	 * @param ctx the parse tree
	 */
	void enterStringlit(HTTPParser.StringlitContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#stringlit}.
	 * @param ctx the parse tree
	 */
	void exitStringlit(HTTPParser.StringlitContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#trailer}.
	 * @param ctx the parse tree
	 */
	void enterTrailer(HTTPParser.TrailerContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#trailer}.
	 * @param ctx the parse tree
	 */
	void exitTrailer(HTTPParser.TrailerContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#field_name}.
	 * @param ctx the parse tree
	 */
	void enterField_name(HTTPParser.Field_nameContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#field_name}.
	 * @param ctx the parse tree
	 */
	void exitField_name(HTTPParser.Field_nameContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#transfer_encoding}.
	 * @param ctx the parse tree
	 */
	void enterTransfer_encoding(HTTPParser.Transfer_encodingContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#transfer_encoding}.
	 * @param ctx the parse tree
	 */
	void exitTransfer_encoding(HTTPParser.Transfer_encodingContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#transfer_coding}.
	 * @param ctx the parse tree
	 */
	void enterTransfer_coding(HTTPParser.Transfer_codingContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#transfer_coding}.
	 * @param ctx the parse tree
	 */
	void exitTransfer_coding(HTTPParser.Transfer_codingContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#transfer_extension}.
	 * @param ctx the parse tree
	 */
	void enterTransfer_extension(HTTPParser.Transfer_extensionContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#transfer_extension}.
	 * @param ctx the parse tree
	 */
	void exitTransfer_extension(HTTPParser.Transfer_extensionContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#parameter}.
	 * @param ctx the parse tree
	 */
	void enterParameter(HTTPParser.ParameterContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#parameter}.
	 * @param ctx the parse tree
	 */
	void exitParameter(HTTPParser.ParameterContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#attribute}.
	 * @param ctx the parse tree
	 */
	void enterAttribute(HTTPParser.AttributeContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#attribute}.
	 * @param ctx the parse tree
	 */
	void exitAttribute(HTTPParser.AttributeContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#value}.
	 * @param ctx the parse tree
	 */
	void enterValue(HTTPParser.ValueContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#value}.
	 * @param ctx the parse tree
	 */
	void exitValue(HTTPParser.ValueContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#upgrade}.
	 * @param ctx the parse tree
	 */
	void enterUpgrade(HTTPParser.UpgradeContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#upgrade}.
	 * @param ctx the parse tree
	 */
	void exitUpgrade(HTTPParser.UpgradeContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#product}.
	 * @param ctx the parse tree
	 */
	void enterProduct(HTTPParser.ProductContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#product}.
	 * @param ctx the parse tree
	 */
	void exitProduct(HTTPParser.ProductContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#via}.
	 * @param ctx the parse tree
	 */
	void enterVia(HTTPParser.ViaContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#via}.
	 * @param ctx the parse tree
	 */
	void exitVia(HTTPParser.ViaContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#received_info}.
	 * @param ctx the parse tree
	 */
	void enterReceived_info(HTTPParser.Received_infoContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#received_info}.
	 * @param ctx the parse tree
	 */
	void exitReceived_info(HTTPParser.Received_infoContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#protocol_name}.
	 * @param ctx the parse tree
	 */
	void enterProtocol_name(HTTPParser.Protocol_nameContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#protocol_name}.
	 * @param ctx the parse tree
	 */
	void exitProtocol_name(HTTPParser.Protocol_nameContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#protocol_version}.
	 * @param ctx the parse tree
	 */
	void enterProtocol_version(HTTPParser.Protocol_versionContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#protocol_version}.
	 * @param ctx the parse tree
	 */
	void exitProtocol_version(HTTPParser.Protocol_versionContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#received_by}.
	 * @param ctx the parse tree
	 */
	void enterReceived_by(HTTPParser.Received_byContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#received_by}.
	 * @param ctx the parse tree
	 */
	void exitReceived_by(HTTPParser.Received_byContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#host}.
	 * @param ctx the parse tree
	 */
	void enterHost(HTTPParser.HostContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#host}.
	 * @param ctx the parse tree
	 */
	void exitHost(HTTPParser.HostContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#pseudonym}.
	 * @param ctx the parse tree
	 */
	void enterPseudonym(HTTPParser.PseudonymContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#pseudonym}.
	 * @param ctx the parse tree
	 */
	void exitPseudonym(HTTPParser.PseudonymContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#warning}.
	 * @param ctx the parse tree
	 */
	void enterWarning(HTTPParser.WarningContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#warning}.
	 * @param ctx the parse tree
	 */
	void exitWarning(HTTPParser.WarningContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#warning_value}.
	 * @param ctx the parse tree
	 */
	void enterWarning_value(HTTPParser.Warning_valueContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#warning_value}.
	 * @param ctx the parse tree
	 */
	void exitWarning_value(HTTPParser.Warning_valueContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#warn_code}.
	 * @param ctx the parse tree
	 */
	void enterWarn_code(HTTPParser.Warn_codeContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#warn_code}.
	 * @param ctx the parse tree
	 */
	void exitWarn_code(HTTPParser.Warn_codeContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#warn_agent}.
	 * @param ctx the parse tree
	 */
	void enterWarn_agent(HTTPParser.Warn_agentContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#warn_agent}.
	 * @param ctx the parse tree
	 */
	void exitWarn_agent(HTTPParser.Warn_agentContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#port}.
	 * @param ctx the parse tree
	 */
	void enterPort(HTTPParser.PortContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#port}.
	 * @param ctx the parse tree
	 */
	void exitPort(HTTPParser.PortContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#warn_text}.
	 * @param ctx the parse tree
	 */
	void enterWarn_text(HTTPParser.Warn_textContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#warn_text}.
	 * @param ctx the parse tree
	 */
	void exitWarn_text(HTTPParser.Warn_textContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#warn_date}.
	 * @param ctx the parse tree
	 */
	void enterWarn_date(HTTPParser.Warn_dateContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#warn_date}.
	 * @param ctx the parse tree
	 */
	void exitWarn_date(HTTPParser.Warn_dateContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#request_header}.
	 * @param ctx the parse tree
	 */
	void enterRequest_header(HTTPParser.Request_headerContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#request_header}.
	 * @param ctx the parse tree
	 */
	void exitRequest_header(HTTPParser.Request_headerContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#accept}.
	 * @param ctx the parse tree
	 */
	void enterAccept(HTTPParser.AcceptContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#accept}.
	 * @param ctx the parse tree
	 */
	void exitAccept(HTTPParser.AcceptContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#accept_info}.
	 * @param ctx the parse tree
	 */
	void enterAccept_info(HTTPParser.Accept_infoContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#accept_info}.
	 * @param ctx the parse tree
	 */
	void exitAccept_info(HTTPParser.Accept_infoContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#media_range}.
	 * @param ctx the parse tree
	 */
	void enterMedia_range(HTTPParser.Media_rangeContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#media_range}.
	 * @param ctx the parse tree
	 */
	void exitMedia_range(HTTPParser.Media_rangeContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#type}.
	 * @param ctx the parse tree
	 */
	void enterType(HTTPParser.TypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#type}.
	 * @param ctx the parse tree
	 */
	void exitType(HTTPParser.TypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#subtype}.
	 * @param ctx the parse tree
	 */
	void enterSubtype(HTTPParser.SubtypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#subtype}.
	 * @param ctx the parse tree
	 */
	void exitSubtype(HTTPParser.SubtypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#subtype_extension}.
	 * @param ctx the parse tree
	 */
	void enterSubtype_extension(HTTPParser.Subtype_extensionContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#subtype_extension}.
	 * @param ctx the parse tree
	 */
	void exitSubtype_extension(HTTPParser.Subtype_extensionContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#accept_params}.
	 * @param ctx the parse tree
	 */
	void enterAccept_params(HTTPParser.Accept_paramsContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#accept_params}.
	 * @param ctx the parse tree
	 */
	void exitAccept_params(HTTPParser.Accept_paramsContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#qvalue}.
	 * @param ctx the parse tree
	 */
	void enterQvalue(HTTPParser.QvalueContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#qvalue}.
	 * @param ctx the parse tree
	 */
	void exitQvalue(HTTPParser.QvalueContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#accept_extension}.
	 * @param ctx the parse tree
	 */
	void enterAccept_extension(HTTPParser.Accept_extensionContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#accept_extension}.
	 * @param ctx the parse tree
	 */
	void exitAccept_extension(HTTPParser.Accept_extensionContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#accept_charset}.
	 * @param ctx the parse tree
	 */
	void enterAccept_charset(HTTPParser.Accept_charsetContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#accept_charset}.
	 * @param ctx the parse tree
	 */
	void exitAccept_charset(HTTPParser.Accept_charsetContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#accept_charset_info}.
	 * @param ctx the parse tree
	 */
	void enterAccept_charset_info(HTTPParser.Accept_charset_infoContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#accept_charset_info}.
	 * @param ctx the parse tree
	 */
	void exitAccept_charset_info(HTTPParser.Accept_charset_infoContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#charset}.
	 * @param ctx the parse tree
	 */
	void enterCharset(HTTPParser.CharsetContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#charset}.
	 * @param ctx the parse tree
	 */
	void exitCharset(HTTPParser.CharsetContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#quality_value}.
	 * @param ctx the parse tree
	 */
	void enterQuality_value(HTTPParser.Quality_valueContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#quality_value}.
	 * @param ctx the parse tree
	 */
	void exitQuality_value(HTTPParser.Quality_valueContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#accept_encoding}.
	 * @param ctx the parse tree
	 */
	void enterAccept_encoding(HTTPParser.Accept_encodingContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#accept_encoding}.
	 * @param ctx the parse tree
	 */
	void exitAccept_encoding(HTTPParser.Accept_encodingContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#accept_encoding_info}.
	 * @param ctx the parse tree
	 */
	void enterAccept_encoding_info(HTTPParser.Accept_encoding_infoContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#accept_encoding_info}.
	 * @param ctx the parse tree
	 */
	void exitAccept_encoding_info(HTTPParser.Accept_encoding_infoContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#coding}.
	 * @param ctx the parse tree
	 */
	void enterCoding(HTTPParser.CodingContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#coding}.
	 * @param ctx the parse tree
	 */
	void exitCoding(HTTPParser.CodingContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#accept_language}.
	 * @param ctx the parse tree
	 */
	void enterAccept_language(HTTPParser.Accept_languageContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#accept_language}.
	 * @param ctx the parse tree
	 */
	void exitAccept_language(HTTPParser.Accept_languageContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#accept_language_info}.
	 * @param ctx the parse tree
	 */
	void enterAccept_language_info(HTTPParser.Accept_language_infoContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#accept_language_info}.
	 * @param ctx the parse tree
	 */
	void exitAccept_language_info(HTTPParser.Accept_language_infoContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#language_range}.
	 * @param ctx the parse tree
	 */
	void enterLanguage_range(HTTPParser.Language_rangeContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#language_range}.
	 * @param ctx the parse tree
	 */
	void exitLanguage_range(HTTPParser.Language_rangeContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#authorization}.
	 * @param ctx the parse tree
	 */
	void enterAuthorization(HTTPParser.AuthorizationContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#authorization}.
	 * @param ctx the parse tree
	 */
	void exitAuthorization(HTTPParser.AuthorizationContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#credentials}.
	 * @param ctx the parse tree
	 */
	void enterCredentials(HTTPParser.CredentialsContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#credentials}.
	 * @param ctx the parse tree
	 */
	void exitCredentials(HTTPParser.CredentialsContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#expect}.
	 * @param ctx the parse tree
	 */
	void enterExpect(HTTPParser.ExpectContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#expect}.
	 * @param ctx the parse tree
	 */
	void exitExpect(HTTPParser.ExpectContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#expect_info}.
	 * @param ctx the parse tree
	 */
	void enterExpect_info(HTTPParser.Expect_infoContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#expect_info}.
	 * @param ctx the parse tree
	 */
	void exitExpect_info(HTTPParser.Expect_infoContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#expectation_extension}.
	 * @param ctx the parse tree
	 */
	void enterExpectation_extension(HTTPParser.Expectation_extensionContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#expectation_extension}.
	 * @param ctx the parse tree
	 */
	void exitExpectation_extension(HTTPParser.Expectation_extensionContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#expect_params}.
	 * @param ctx the parse tree
	 */
	void enterExpect_params(HTTPParser.Expect_paramsContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#expect_params}.
	 * @param ctx the parse tree
	 */
	void exitExpect_params(HTTPParser.Expect_paramsContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#from}.
	 * @param ctx the parse tree
	 */
	void enterFrom(HTTPParser.FromContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#from}.
	 * @param ctx the parse tree
	 */
	void exitFrom(HTTPParser.FromContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#host_}.
	 * @param ctx the parse tree
	 */
	void enterHost_(HTTPParser.Host_Context ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#host_}.
	 * @param ctx the parse tree
	 */
	void exitHost_(HTTPParser.Host_Context ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#if_match}.
	 * @param ctx the parse tree
	 */
	void enterIf_match(HTTPParser.If_matchContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#if_match}.
	 * @param ctx the parse tree
	 */
	void exitIf_match(HTTPParser.If_matchContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#if_match_info}.
	 * @param ctx the parse tree
	 */
	void enterIf_match_info(HTTPParser.If_match_infoContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#if_match_info}.
	 * @param ctx the parse tree
	 */
	void exitIf_match_info(HTTPParser.If_match_infoContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#entity_tag}.
	 * @param ctx the parse tree
	 */
	void enterEntity_tag(HTTPParser.Entity_tagContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#entity_tag}.
	 * @param ctx the parse tree
	 */
	void exitEntity_tag(HTTPParser.Entity_tagContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#if_modified_since}.
	 * @param ctx the parse tree
	 */
	void enterIf_modified_since(HTTPParser.If_modified_sinceContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#if_modified_since}.
	 * @param ctx the parse tree
	 */
	void exitIf_modified_since(HTTPParser.If_modified_sinceContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#if_none_match}.
	 * @param ctx the parse tree
	 */
	void enterIf_none_match(HTTPParser.If_none_matchContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#if_none_match}.
	 * @param ctx the parse tree
	 */
	void exitIf_none_match(HTTPParser.If_none_matchContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#if_none_match_info}.
	 * @param ctx the parse tree
	 */
	void enterIf_none_match_info(HTTPParser.If_none_match_infoContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#if_none_match_info}.
	 * @param ctx the parse tree
	 */
	void exitIf_none_match_info(HTTPParser.If_none_match_infoContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#if_range}.
	 * @param ctx the parse tree
	 */
	void enterIf_range(HTTPParser.If_rangeContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#if_range}.
	 * @param ctx the parse tree
	 */
	void exitIf_range(HTTPParser.If_rangeContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#if_unmodified_since}.
	 * @param ctx the parse tree
	 */
	void enterIf_unmodified_since(HTTPParser.If_unmodified_sinceContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#if_unmodified_since}.
	 * @param ctx the parse tree
	 */
	void exitIf_unmodified_since(HTTPParser.If_unmodified_sinceContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#max_forwards}.
	 * @param ctx the parse tree
	 */
	void enterMax_forwards(HTTPParser.Max_forwardsContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#max_forwards}.
	 * @param ctx the parse tree
	 */
	void exitMax_forwards(HTTPParser.Max_forwardsContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#proxy_authorization}.
	 * @param ctx the parse tree
	 */
	void enterProxy_authorization(HTTPParser.Proxy_authorizationContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#proxy_authorization}.
	 * @param ctx the parse tree
	 */
	void exitProxy_authorization(HTTPParser.Proxy_authorizationContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#range}.
	 * @param ctx the parse tree
	 */
	void enterRange(HTTPParser.RangeContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#range}.
	 * @param ctx the parse tree
	 */
	void exitRange(HTTPParser.RangeContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#ranges_specifier}.
	 * @param ctx the parse tree
	 */
	void enterRanges_specifier(HTTPParser.Ranges_specifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#ranges_specifier}.
	 * @param ctx the parse tree
	 */
	void exitRanges_specifier(HTTPParser.Ranges_specifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#byte_ranges_specifier}.
	 * @param ctx the parse tree
	 */
	void enterByte_ranges_specifier(HTTPParser.Byte_ranges_specifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#byte_ranges_specifier}.
	 * @param ctx the parse tree
	 */
	void exitByte_ranges_specifier(HTTPParser.Byte_ranges_specifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#byte_range_set}.
	 * @param ctx the parse tree
	 */
	void enterByte_range_set(HTTPParser.Byte_range_setContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#byte_range_set}.
	 * @param ctx the parse tree
	 */
	void exitByte_range_set(HTTPParser.Byte_range_setContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#byte_range_spec}.
	 * @param ctx the parse tree
	 */
	void enterByte_range_spec(HTTPParser.Byte_range_specContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#byte_range_spec}.
	 * @param ctx the parse tree
	 */
	void exitByte_range_spec(HTTPParser.Byte_range_specContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#first_byte_pos}.
	 * @param ctx the parse tree
	 */
	void enterFirst_byte_pos(HTTPParser.First_byte_posContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#first_byte_pos}.
	 * @param ctx the parse tree
	 */
	void exitFirst_byte_pos(HTTPParser.First_byte_posContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#last_byte_pos}.
	 * @param ctx the parse tree
	 */
	void enterLast_byte_pos(HTTPParser.Last_byte_posContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#last_byte_pos}.
	 * @param ctx the parse tree
	 */
	void exitLast_byte_pos(HTTPParser.Last_byte_posContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#suffix_byte_range_spec}.
	 * @param ctx the parse tree
	 */
	void enterSuffix_byte_range_spec(HTTPParser.Suffix_byte_range_specContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#suffix_byte_range_spec}.
	 * @param ctx the parse tree
	 */
	void exitSuffix_byte_range_spec(HTTPParser.Suffix_byte_range_specContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#suffix_length}.
	 * @param ctx the parse tree
	 */
	void enterSuffix_length(HTTPParser.Suffix_lengthContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#suffix_length}.
	 * @param ctx the parse tree
	 */
	void exitSuffix_length(HTTPParser.Suffix_lengthContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#referer}.
	 * @param ctx the parse tree
	 */
	void enterReferer(HTTPParser.RefererContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#referer}.
	 * @param ctx the parse tree
	 */
	void exitReferer(HTTPParser.RefererContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#te}.
	 * @param ctx the parse tree
	 */
	void enterTe(HTTPParser.TeContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#te}.
	 * @param ctx the parse tree
	 */
	void exitTe(HTTPParser.TeContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#t_coding}.
	 * @param ctx the parse tree
	 */
	void enterT_coding(HTTPParser.T_codingContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#t_coding}.
	 * @param ctx the parse tree
	 */
	void exitT_coding(HTTPParser.T_codingContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#user_agent}.
	 * @param ctx the parse tree
	 */
	void enterUser_agent(HTTPParser.User_agentContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#user_agent}.
	 * @param ctx the parse tree
	 */
	void exitUser_agent(HTTPParser.User_agentContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#comment}.
	 * @param ctx the parse tree
	 */
	void enterComment(HTTPParser.CommentContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#comment}.
	 * @param ctx the parse tree
	 */
	void exitComment(HTTPParser.CommentContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#product_version}.
	 * @param ctx the parse tree
	 */
	void enterProduct_version(HTTPParser.Product_versionContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#product_version}.
	 * @param ctx the parse tree
	 */
	void exitProduct_version(HTTPParser.Product_versionContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#entity_header}.
	 * @param ctx the parse tree
	 */
	void enterEntity_header(HTTPParser.Entity_headerContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#entity_header}.
	 * @param ctx the parse tree
	 */
	void exitEntity_header(HTTPParser.Entity_headerContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#allow}.
	 * @param ctx the parse tree
	 */
	void enterAllow(HTTPParser.AllowContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#allow}.
	 * @param ctx the parse tree
	 */
	void exitAllow(HTTPParser.AllowContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#content_encoding}.
	 * @param ctx the parse tree
	 */
	void enterContent_encoding(HTTPParser.Content_encodingContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#content_encoding}.
	 * @param ctx the parse tree
	 */
	void exitContent_encoding(HTTPParser.Content_encodingContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#content_language}.
	 * @param ctx the parse tree
	 */
	void enterContent_language(HTTPParser.Content_languageContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#content_language}.
	 * @param ctx the parse tree
	 */
	void exitContent_language(HTTPParser.Content_languageContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#content_length}.
	 * @param ctx the parse tree
	 */
	void enterContent_length(HTTPParser.Content_lengthContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#content_length}.
	 * @param ctx the parse tree
	 */
	void exitContent_length(HTTPParser.Content_lengthContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#content_length_number}.
	 * @param ctx the parse tree
	 */
	void enterContent_length_number(HTTPParser.Content_length_numberContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#content_length_number}.
	 * @param ctx the parse tree
	 */
	void exitContent_length_number(HTTPParser.Content_length_numberContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#content_location}.
	 * @param ctx the parse tree
	 */
	void enterContent_location(HTTPParser.Content_locationContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#content_location}.
	 * @param ctx the parse tree
	 */
	void exitContent_location(HTTPParser.Content_locationContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#content_md5}.
	 * @param ctx the parse tree
	 */
	void enterContent_md5(HTTPParser.Content_md5Context ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#content_md5}.
	 * @param ctx the parse tree
	 */
	void exitContent_md5(HTTPParser.Content_md5Context ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#content_range}.
	 * @param ctx the parse tree
	 */
	void enterContent_range(HTTPParser.Content_rangeContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#content_range}.
	 * @param ctx the parse tree
	 */
	void exitContent_range(HTTPParser.Content_rangeContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#content_type}.
	 * @param ctx the parse tree
	 */
	void enterContent_type(HTTPParser.Content_typeContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#content_type}.
	 * @param ctx the parse tree
	 */
	void exitContent_type(HTTPParser.Content_typeContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#mime_value}.
	 * @param ctx the parse tree
	 */
	void enterMime_value(HTTPParser.Mime_valueContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#mime_value}.
	 * @param ctx the parse tree
	 */
	void exitMime_value(HTTPParser.Mime_valueContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#not_eol}.
	 * @param ctx the parse tree
	 */
	void enterNot_eol(HTTPParser.Not_eolContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#not_eol}.
	 * @param ctx the parse tree
	 */
	void exitNot_eol(HTTPParser.Not_eolContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#token_or_key}.
	 * @param ctx the parse tree
	 */
	void enterToken_or_key(HTTPParser.Token_or_keyContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#token_or_key}.
	 * @param ctx the parse tree
	 */
	void exitToken_or_key(HTTPParser.Token_or_keyContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#token}.
	 * @param ctx the parse tree
	 */
	void enterToken(HTTPParser.TokenContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#token}.
	 * @param ctx the parse tree
	 */
	void exitToken(HTTPParser.TokenContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#expires}.
	 * @param ctx the parse tree
	 */
	void enterExpires(HTTPParser.ExpiresContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#expires}.
	 * @param ctx the parse tree
	 */
	void exitExpires(HTTPParser.ExpiresContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#last_modified}.
	 * @param ctx the parse tree
	 */
	void enterLast_modified(HTTPParser.Last_modifiedContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#last_modified}.
	 * @param ctx the parse tree
	 */
	void exitLast_modified(HTTPParser.Last_modifiedContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#extension_header}.
	 * @param ctx the parse tree
	 */
	void enterExtension_header(HTTPParser.Extension_headerContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#extension_header}.
	 * @param ctx the parse tree
	 */
	void exitExtension_header(HTTPParser.Extension_headerContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#message_body}.
	 * @param ctx the parse tree
	 */
	void enterMessage_body(HTTPParser.Message_bodyContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#message_body}.
	 * @param ctx the parse tree
	 */
	void exitMessage_body(HTTPParser.Message_bodyContext ctx);
	/**
	 * Enter a parse tree produced by {@link HTTPParser#new_line}.
	 * @param ctx the parse tree
	 */
	void enterNew_line(HTTPParser.New_lineContext ctx);
	/**
	 * Exit a parse tree produced by {@link HTTPParser#new_line}.
	 * @param ctx the parse tree
	 */
	void exitNew_line(HTTPParser.New_lineContext ctx);
}