
// Generated from HTTP.g4 by ANTLR 4.7.1


#include "HTTPListener.h"

#include "HTTPParser.h"


using namespace antlrcpp;
using namespace antlr4;

HTTPParser::HTTPParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

HTTPParser::~HTTPParser() {
  delete _interpreter;
}

std::string HTTPParser::getGrammarFileName() const {
  return "HTTP.g4";
}

const std::vector<std::string>& HTTPParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& HTTPParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- KeyContext ------------------------------------------------------------------

HTTPParser::KeyContext::KeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::KeyContext::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::KeyContext::getRuleIndex() const {
  return HTTPParser::RuleKey;
}

void HTTPParser::KeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKey(this);
}

void HTTPParser::KeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKey(this);
}

HTTPParser::KeyContext* HTTPParser::key() {
  KeyContext *_localctx = _tracker.createInstance<KeyContext>(_ctx, getState());
  enterRule(_localctx, 0, HTTPParser::RuleKey);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HTTPParser::T__0)
      | (1ULL << HTTPParser::T__1)
      | (1ULL << HTTPParser::T__2)
      | (1ULL << HTTPParser::T__3)
      | (1ULL << HTTPParser::T__4)
      | (1ULL << HTTPParser::T__5)
      | (1ULL << HTTPParser::T__6)
      | (1ULL << HTTPParser::T__7)
      | (1ULL << HTTPParser::T__8)
      | (1ULL << HTTPParser::T__9)
      | (1ULL << HTTPParser::T__10)
      | (1ULL << HTTPParser::T__11)
      | (1ULL << HTTPParser::T__12)
      | (1ULL << HTTPParser::T__13)
      | (1ULL << HTTPParser::T__14)
      | (1ULL << HTTPParser::T__15)
      | (1ULL << HTTPParser::T__16)
      | (1ULL << HTTPParser::T__17)
      | (1ULL << HTTPParser::T__18)
      | (1ULL << HTTPParser::T__19)
      | (1ULL << HTTPParser::T__20)
      | (1ULL << HTTPParser::T__21)
      | (1ULL << HTTPParser::T__22)
      | (1ULL << HTTPParser::T__23)
      | (1ULL << HTTPParser::T__24)
      | (1ULL << HTTPParser::T__25)
      | (1ULL << HTTPParser::T__26)
      | (1ULL << HTTPParser::T__27)
      | (1ULL << HTTPParser::T__28)
      | (1ULL << HTTPParser::T__29)
      | (1ULL << HTTPParser::T__30)
      | (1ULL << HTTPParser::T__31)
      | (1ULL << HTTPParser::T__32)
      | (1ULL << HTTPParser::T__33)
      | (1ULL << HTTPParser::T__34)
      | (1ULL << HTTPParser::T__35)
      | (1ULL << HTTPParser::T__36)
      | (1ULL << HTTPParser::T__37)
      | (1ULL << HTTPParser::T__38))) != 0) || _la == HTTPParser::ID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HttpContext ------------------------------------------------------------------

HTTPParser::HttpContext::HttpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::RequestContext *> HTTPParser::HttpContext::request() {
  return getRuleContexts<HTTPParser::RequestContext>();
}

HTTPParser::RequestContext* HTTPParser::HttpContext::request(size_t i) {
  return getRuleContext<HTTPParser::RequestContext>(i);
}

std::vector<HTTPParser::ResponseContext *> HTTPParser::HttpContext::response() {
  return getRuleContexts<HTTPParser::ResponseContext>();
}

HTTPParser::ResponseContext* HTTPParser::HttpContext::response(size_t i) {
  return getRuleContext<HTTPParser::ResponseContext>(i);
}

std::vector<HTTPParser::New_lineContext *> HTTPParser::HttpContext::new_line() {
  return getRuleContexts<HTTPParser::New_lineContext>();
}

HTTPParser::New_lineContext* HTTPParser::HttpContext::new_line(size_t i) {
  return getRuleContext<HTTPParser::New_lineContext>(i);
}


size_t HTTPParser::HttpContext::getRuleIndex() const {
  return HTTPParser::RuleHttp;
}

void HTTPParser::HttpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHttp(this);
}

void HTTPParser::HttpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHttp(this);
}

HTTPParser::HttpContext* HTTPParser::http() {
  HttpContext *_localctx = _tracker.createInstance<HttpContext>(_ctx, getState());
  enterRule(_localctx, 2, HTTPParser::RuleHttp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HTTPParser::T__39)
      | (1ULL << HTTPParser::T__40)
      | (1ULL << HTTPParser::T__41)
      | (1ULL << HTTPParser::T__42)
      | (1ULL << HTTPParser::T__43)
      | (1ULL << HTTPParser::T__44)
      | (1ULL << HTTPParser::T__45)
      | (1ULL << HTTPParser::T__46)
      | (1ULL << HTTPParser::T__47)
      | (1ULL << HTTPParser::T__59)
      | (1ULL << HTTPParser::T__60))) != 0)) {
      setState(303);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HTTPParser::T__40:
        case HTTPParser::T__41:
        case HTTPParser::T__42:
        case HTTPParser::T__43:
        case HTTPParser::T__44:
        case HTTPParser::T__45:
        case HTTPParser::T__46:
        case HTTPParser::T__47: {
          setState(300);
          request();
          break;
        }

        case HTTPParser::T__59:
        case HTTPParser::T__60: {
          setState(301);
          response();
          break;
        }

        case HTTPParser::T__39: {
          setState(302);
          new_line();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(307);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResponseContext ------------------------------------------------------------------

HTTPParser::ResponseContext::ResponseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Status_lineContext* HTTPParser::ResponseContext::status_line() {
  return getRuleContext<HTTPParser::Status_lineContext>(0);
}

std::vector<HTTPParser::New_lineContext *> HTTPParser::ResponseContext::new_line() {
  return getRuleContexts<HTTPParser::New_lineContext>();
}

HTTPParser::New_lineContext* HTTPParser::ResponseContext::new_line(size_t i) {
  return getRuleContext<HTTPParser::New_lineContext>(i);
}

std::vector<HTTPParser::Header_messageContext *> HTTPParser::ResponseContext::header_message() {
  return getRuleContexts<HTTPParser::Header_messageContext>();
}

HTTPParser::Header_messageContext* HTTPParser::ResponseContext::header_message(size_t i) {
  return getRuleContext<HTTPParser::Header_messageContext>(i);
}


size_t HTTPParser::ResponseContext::getRuleIndex() const {
  return HTTPParser::RuleResponse;
}

void HTTPParser::ResponseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResponse(this);
}

void HTTPParser::ResponseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResponse(this);
}

HTTPParser::ResponseContext* HTTPParser::response() {
  ResponseContext *_localctx = _tracker.createInstance<ResponseContext>(_ctx, getState());
  enterRule(_localctx, 4, HTTPParser::RuleResponse);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
    status_line();
    setState(309);
    new_line();
    setState(313); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(310);
      header_message();
      setState(311);
      new_line();
      setState(315); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 1) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 1)) & ((1ULL << (HTTPParser::T__0 - 1))
      | (1ULL << (HTTPParser::T__1 - 1))
      | (1ULL << (HTTPParser::T__2 - 1))
      | (1ULL << (HTTPParser::T__3 - 1))
      | (1ULL << (HTTPParser::T__4 - 1))
      | (1ULL << (HTTPParser::T__5 - 1))
      | (1ULL << (HTTPParser::T__6 - 1))
      | (1ULL << (HTTPParser::T__7 - 1))
      | (1ULL << (HTTPParser::T__8 - 1))
      | (1ULL << (HTTPParser::T__9 - 1))
      | (1ULL << (HTTPParser::T__10 - 1))
      | (1ULL << (HTTPParser::T__11 - 1))
      | (1ULL << (HTTPParser::T__12 - 1))
      | (1ULL << (HTTPParser::T__13 - 1))
      | (1ULL << (HTTPParser::T__14 - 1))
      | (1ULL << (HTTPParser::T__15 - 1))
      | (1ULL << (HTTPParser::T__16 - 1))
      | (1ULL << (HTTPParser::T__17 - 1))
      | (1ULL << (HTTPParser::T__18 - 1))
      | (1ULL << (HTTPParser::T__19 - 1))
      | (1ULL << (HTTPParser::T__20 - 1))
      | (1ULL << (HTTPParser::T__21 - 1))
      | (1ULL << (HTTPParser::T__22 - 1))
      | (1ULL << (HTTPParser::T__23 - 1))
      | (1ULL << (HTTPParser::T__24 - 1))
      | (1ULL << (HTTPParser::T__25 - 1))
      | (1ULL << (HTTPParser::T__26 - 1))
      | (1ULL << (HTTPParser::T__27 - 1))
      | (1ULL << (HTTPParser::T__28 - 1))
      | (1ULL << (HTTPParser::T__29 - 1))
      | (1ULL << (HTTPParser::T__30 - 1))
      | (1ULL << (HTTPParser::T__31 - 1))
      | (1ULL << (HTTPParser::T__32 - 1))
      | (1ULL << (HTTPParser::T__33 - 1))
      | (1ULL << (HTTPParser::T__34 - 1))
      | (1ULL << (HTTPParser::T__35 - 1))
      | (1ULL << (HTTPParser::T__36 - 1))
      | (1ULL << (HTTPParser::T__37 - 1))
      | (1ULL << (HTTPParser::T__38 - 1))
      | (1ULL << (HTTPParser::T__61 - 1))
      | (1ULL << (HTTPParser::T__63 - 1)))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (HTTPParser::T__71 - 72))
      | (1ULL << (HTTPParser::T__72 - 72))
      | (1ULL << (HTTPParser::ID - 72)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Status_lineContext ------------------------------------------------------------------

HTTPParser::Status_lineContext::Status_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Http_versionContext* HTTPParser::Status_lineContext::http_version() {
  return getRuleContext<HTTPParser::Http_versionContext>(0);
}

HTTPParser::Status_codeContext* HTTPParser::Status_lineContext::status_code() {
  return getRuleContext<HTTPParser::Status_codeContext>(0);
}

HTTPParser::Status_textContext* HTTPParser::Status_lineContext::status_text() {
  return getRuleContext<HTTPParser::Status_textContext>(0);
}


size_t HTTPParser::Status_lineContext::getRuleIndex() const {
  return HTTPParser::RuleStatus_line;
}

void HTTPParser::Status_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatus_line(this);
}

void HTTPParser::Status_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatus_line(this);
}

HTTPParser::Status_lineContext* HTTPParser::status_line() {
  Status_lineContext *_localctx = _tracker.createInstance<Status_lineContext>(_ctx, getState());
  enterRule(_localctx, 6, HTTPParser::RuleStatus_line);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    http_version();
    setState(318);
    status_code();
    setState(319);
    status_text();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Status_codeContext ------------------------------------------------------------------

HTTPParser::Status_codeContext::Status_codeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Status_codeContext::NUMBER() {
  return getToken(HTTPParser::NUMBER, 0);
}


size_t HTTPParser::Status_codeContext::getRuleIndex() const {
  return HTTPParser::RuleStatus_code;
}

void HTTPParser::Status_codeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatus_code(this);
}

void HTTPParser::Status_codeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatus_code(this);
}

HTTPParser::Status_codeContext* HTTPParser::status_code() {
  Status_codeContext *_localctx = _tracker.createInstance<Status_codeContext>(_ctx, getState());
  enterRule(_localctx, 8, HTTPParser::RuleStatus_code);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    match(HTTPParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Status_textContext ------------------------------------------------------------------

HTTPParser::Status_textContext::Status_textContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HTTPParser::Status_textContext::getRuleIndex() const {
  return HTTPParser::RuleStatus_text;
}

void HTTPParser::Status_textContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatus_text(this);
}

void HTTPParser::Status_textContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatus_text(this);
}

HTTPParser::Status_textContext* HTTPParser::status_text() {
  Status_textContext *_localctx = _tracker.createInstance<Status_textContext>(_ctx, getState());
  enterRule(_localctx, 10, HTTPParser::RuleStatus_text);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(326);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(323);
        _la = _input->LA(1);
        if (_la == 0 || _la == Token::EOF || (_la == HTTPParser::T__39)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(328);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RequestContext ------------------------------------------------------------------

HTTPParser::RequestContext::RequestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Request_lineContext* HTTPParser::RequestContext::request_line() {
  return getRuleContext<HTTPParser::Request_lineContext>(0);
}

std::vector<HTTPParser::New_lineContext *> HTTPParser::RequestContext::new_line() {
  return getRuleContexts<HTTPParser::New_lineContext>();
}

HTTPParser::New_lineContext* HTTPParser::RequestContext::new_line(size_t i) {
  return getRuleContext<HTTPParser::New_lineContext>(i);
}

std::vector<HTTPParser::Header_messageContext *> HTTPParser::RequestContext::header_message() {
  return getRuleContexts<HTTPParser::Header_messageContext>();
}

HTTPParser::Header_messageContext* HTTPParser::RequestContext::header_message(size_t i) {
  return getRuleContext<HTTPParser::Header_messageContext>(i);
}


size_t HTTPParser::RequestContext::getRuleIndex() const {
  return HTTPParser::RuleRequest;
}

void HTTPParser::RequestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequest(this);
}

void HTTPParser::RequestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequest(this);
}

HTTPParser::RequestContext* HTTPParser::request() {
  RequestContext *_localctx = _tracker.createInstance<RequestContext>(_ctx, getState());
  enterRule(_localctx, 12, HTTPParser::RuleRequest);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    request_line();
    setState(330);
    new_line();
    setState(334); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(331);
      header_message();
      setState(332);
      new_line();
      setState(336); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 1) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 1)) & ((1ULL << (HTTPParser::T__0 - 1))
      | (1ULL << (HTTPParser::T__1 - 1))
      | (1ULL << (HTTPParser::T__2 - 1))
      | (1ULL << (HTTPParser::T__3 - 1))
      | (1ULL << (HTTPParser::T__4 - 1))
      | (1ULL << (HTTPParser::T__5 - 1))
      | (1ULL << (HTTPParser::T__6 - 1))
      | (1ULL << (HTTPParser::T__7 - 1))
      | (1ULL << (HTTPParser::T__8 - 1))
      | (1ULL << (HTTPParser::T__9 - 1))
      | (1ULL << (HTTPParser::T__10 - 1))
      | (1ULL << (HTTPParser::T__11 - 1))
      | (1ULL << (HTTPParser::T__12 - 1))
      | (1ULL << (HTTPParser::T__13 - 1))
      | (1ULL << (HTTPParser::T__14 - 1))
      | (1ULL << (HTTPParser::T__15 - 1))
      | (1ULL << (HTTPParser::T__16 - 1))
      | (1ULL << (HTTPParser::T__17 - 1))
      | (1ULL << (HTTPParser::T__18 - 1))
      | (1ULL << (HTTPParser::T__19 - 1))
      | (1ULL << (HTTPParser::T__20 - 1))
      | (1ULL << (HTTPParser::T__21 - 1))
      | (1ULL << (HTTPParser::T__22 - 1))
      | (1ULL << (HTTPParser::T__23 - 1))
      | (1ULL << (HTTPParser::T__24 - 1))
      | (1ULL << (HTTPParser::T__25 - 1))
      | (1ULL << (HTTPParser::T__26 - 1))
      | (1ULL << (HTTPParser::T__27 - 1))
      | (1ULL << (HTTPParser::T__28 - 1))
      | (1ULL << (HTTPParser::T__29 - 1))
      | (1ULL << (HTTPParser::T__30 - 1))
      | (1ULL << (HTTPParser::T__31 - 1))
      | (1ULL << (HTTPParser::T__32 - 1))
      | (1ULL << (HTTPParser::T__33 - 1))
      | (1ULL << (HTTPParser::T__34 - 1))
      | (1ULL << (HTTPParser::T__35 - 1))
      | (1ULL << (HTTPParser::T__36 - 1))
      | (1ULL << (HTTPParser::T__37 - 1))
      | (1ULL << (HTTPParser::T__38 - 1))
      | (1ULL << (HTTPParser::T__61 - 1))
      | (1ULL << (HTTPParser::T__63 - 1)))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (HTTPParser::T__71 - 72))
      | (1ULL << (HTTPParser::T__72 - 72))
      | (1ULL << (HTTPParser::ID - 72)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Message_bodyContext ------------------------------------------------------------------

HTTPParser::Message_bodyContext::Message_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HTTPParser::Message_bodyContext::getRuleIndex() const {
  return HTTPParser::RuleMessage_body;
}

void HTTPParser::Message_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessage_body(this);
}

void HTTPParser::Message_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessage_body(this);
}

HTTPParser::Message_bodyContext* HTTPParser::message_body() {
  Message_bodyContext *_localctx = _tracker.createInstance<Message_bodyContext>(_ctx, getState());
  enterRule(_localctx, 14, HTTPParser::RuleMessage_body);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(338);
      matchWildcard();
      setState(341); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HTTPParser::T__0)
      | (1ULL << HTTPParser::T__1)
      | (1ULL << HTTPParser::T__2)
      | (1ULL << HTTPParser::T__3)
      | (1ULL << HTTPParser::T__4)
      | (1ULL << HTTPParser::T__5)
      | (1ULL << HTTPParser::T__6)
      | (1ULL << HTTPParser::T__7)
      | (1ULL << HTTPParser::T__8)
      | (1ULL << HTTPParser::T__9)
      | (1ULL << HTTPParser::T__10)
      | (1ULL << HTTPParser::T__11)
      | (1ULL << HTTPParser::T__12)
      | (1ULL << HTTPParser::T__13)
      | (1ULL << HTTPParser::T__14)
      | (1ULL << HTTPParser::T__15)
      | (1ULL << HTTPParser::T__16)
      | (1ULL << HTTPParser::T__17)
      | (1ULL << HTTPParser::T__18)
      | (1ULL << HTTPParser::T__19)
      | (1ULL << HTTPParser::T__20)
      | (1ULL << HTTPParser::T__21)
      | (1ULL << HTTPParser::T__22)
      | (1ULL << HTTPParser::T__23)
      | (1ULL << HTTPParser::T__24)
      | (1ULL << HTTPParser::T__25)
      | (1ULL << HTTPParser::T__26)
      | (1ULL << HTTPParser::T__27)
      | (1ULL << HTTPParser::T__28)
      | (1ULL << HTTPParser::T__29)
      | (1ULL << HTTPParser::T__30)
      | (1ULL << HTTPParser::T__31)
      | (1ULL << HTTPParser::T__32)
      | (1ULL << HTTPParser::T__33)
      | (1ULL << HTTPParser::T__34)
      | (1ULL << HTTPParser::T__35)
      | (1ULL << HTTPParser::T__36)
      | (1ULL << HTTPParser::T__37)
      | (1ULL << HTTPParser::T__38)
      | (1ULL << HTTPParser::T__39)
      | (1ULL << HTTPParser::T__40)
      | (1ULL << HTTPParser::T__41)
      | (1ULL << HTTPParser::T__42)
      | (1ULL << HTTPParser::T__43)
      | (1ULL << HTTPParser::T__44)
      | (1ULL << HTTPParser::T__45)
      | (1ULL << HTTPParser::T__46)
      | (1ULL << HTTPParser::T__47)
      | (1ULL << HTTPParser::T__48)
      | (1ULL << HTTPParser::T__49)
      | (1ULL << HTTPParser::T__50)
      | (1ULL << HTTPParser::T__51)
      | (1ULL << HTTPParser::T__52)
      | (1ULL << HTTPParser::T__53)
      | (1ULL << HTTPParser::T__54)
      | (1ULL << HTTPParser::T__55)
      | (1ULL << HTTPParser::T__56)
      | (1ULL << HTTPParser::T__57)
      | (1ULL << HTTPParser::T__58)
      | (1ULL << HTTPParser::T__59)
      | (1ULL << HTTPParser::T__60)
      | (1ULL << HTTPParser::T__61)
      | (1ULL << HTTPParser::T__62))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HTTPParser::T__63 - 64))
      | (1ULL << (HTTPParser::T__64 - 64))
      | (1ULL << (HTTPParser::T__65 - 64))
      | (1ULL << (HTTPParser::T__66 - 64))
      | (1ULL << (HTTPParser::T__67 - 64))
      | (1ULL << (HTTPParser::T__68 - 64))
      | (1ULL << (HTTPParser::T__69 - 64))
      | (1ULL << (HTTPParser::T__70 - 64))
      | (1ULL << (HTTPParser::T__71 - 64))
      | (1ULL << (HTTPParser::T__72 - 64))
      | (1ULL << (HTTPParser::T__73 - 64))
      | (1ULL << (HTTPParser::T__74 - 64))
      | (1ULL << (HTTPParser::T__75 - 64))
      | (1ULL << (HTTPParser::T__76 - 64))
      | (1ULL << (HTTPParser::T__77 - 64))
      | (1ULL << (HTTPParser::T__78 - 64))
      | (1ULL << (HTTPParser::T__79 - 64))
      | (1ULL << (HTTPParser::T__80 - 64))
      | (1ULL << (HTTPParser::T__81 - 64))
      | (1ULL << (HTTPParser::T__82 - 64))
      | (1ULL << (HTTPParser::T__83 - 64))
      | (1ULL << (HTTPParser::T__84 - 64))
      | (1ULL << (HTTPParser::T__85 - 64))
      | (1ULL << (HTTPParser::T__86 - 64))
      | (1ULL << (HTTPParser::T__87 - 64))
      | (1ULL << (HTTPParser::T__88 - 64))
      | (1ULL << (HTTPParser::T__89 - 64))
      | (1ULL << (HTTPParser::T__90 - 64))
      | (1ULL << (HTTPParser::T__91 - 64))
      | (1ULL << (HTTPParser::T__92 - 64))
      | (1ULL << (HTTPParser::T__93 - 64))
      | (1ULL << (HTTPParser::T__94 - 64))
      | (1ULL << (HTTPParser::T__95 - 64))
      | (1ULL << (HTTPParser::T__96 - 64))
      | (1ULL << (HTTPParser::T__97 - 64))
      | (1ULL << (HTTPParser::T__98 - 64))
      | (1ULL << (HTTPParser::T__99 - 64))
      | (1ULL << (HTTPParser::T__100 - 64))
      | (1ULL << (HTTPParser::T__101 - 64))
      | (1ULL << (HTTPParser::T__102 - 64))
      | (1ULL << (HTTPParser::T__103 - 64))
      | (1ULL << (HTTPParser::T__104 - 64))
      | (1ULL << (HTTPParser::T__105 - 64))
      | (1ULL << (HTTPParser::T__106 - 64))
      | (1ULL << (HTTPParser::T__107 - 64))
      | (1ULL << (HTTPParser::T__108 - 64))
      | (1ULL << (HTTPParser::T__109 - 64))
      | (1ULL << (HTTPParser::T__110 - 64))
      | (1ULL << (HTTPParser::T__111 - 64))
      | (1ULL << (HTTPParser::T__112 - 64))
      | (1ULL << (HTTPParser::T__113 - 64))
      | (1ULL << (HTTPParser::T__114 - 64))
      | (1ULL << (HTTPParser::T__115 - 64))
      | (1ULL << (HTTPParser::T__116 - 64))
      | (1ULL << (HTTPParser::T__117 - 64))
      | (1ULL << (HTTPParser::T__118 - 64))
      | (1ULL << (HTTPParser::T__119 - 64))
      | (1ULL << (HTTPParser::T__120 - 64))
      | (1ULL << (HTTPParser::T__121 - 64))
      | (1ULL << (HTTPParser::T__122 - 64))
      | (1ULL << (HTTPParser::T__123 - 64))
      | (1ULL << (HTTPParser::T__124 - 64))
      | (1ULL << (HTTPParser::T__125 - 64))
      | (1ULL << (HTTPParser::T__126 - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (HTTPParser::T__127 - 128))
      | (1ULL << (HTTPParser::T__128 - 128))
      | (1ULL << (HTTPParser::T__129 - 128))
      | (1ULL << (HTTPParser::T__130 - 128))
      | (1ULL << (HTTPParser::ID - 128))
      | (1ULL << (HTTPParser::STRING - 128))
      | (1ULL << (HTTPParser::NUMBER - 128))
      | (1ULL << (HTTPParser::WS - 128))
      | (1ULL << (HTTPParser::MESSAGEBODY - 128)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Request_lineContext ------------------------------------------------------------------

HTTPParser::Request_lineContext::Request_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::MethodContext* HTTPParser::Request_lineContext::method() {
  return getRuleContext<HTTPParser::MethodContext>(0);
}

HTTPParser::UriContext* HTTPParser::Request_lineContext::uri() {
  return getRuleContext<HTTPParser::UriContext>(0);
}

HTTPParser::Http_versionContext* HTTPParser::Request_lineContext::http_version() {
  return getRuleContext<HTTPParser::Http_versionContext>(0);
}


size_t HTTPParser::Request_lineContext::getRuleIndex() const {
  return HTTPParser::RuleRequest_line;
}

void HTTPParser::Request_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequest_line(this);
}

void HTTPParser::Request_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequest_line(this);
}

HTTPParser::Request_lineContext* HTTPParser::request_line() {
  Request_lineContext *_localctx = _tracker.createInstance<Request_lineContext>(_ctx, getState());
  enterRule(_localctx, 16, HTTPParser::RuleRequest_line);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    method();
    setState(344);
    uri();
    setState(345);
    http_version();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodContext ------------------------------------------------------------------

HTTPParser::MethodContext::MethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HTTPParser::MethodContext::getRuleIndex() const {
  return HTTPParser::RuleMethod;
}

void HTTPParser::MethodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod(this);
}

void HTTPParser::MethodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod(this);
}

HTTPParser::MethodContext* HTTPParser::method() {
  MethodContext *_localctx = _tracker.createInstance<MethodContext>(_ctx, getState());
  enterRule(_localctx, 18, HTTPParser::RuleMethod);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HTTPParser::T__40)
      | (1ULL << HTTPParser::T__41)
      | (1ULL << HTTPParser::T__42)
      | (1ULL << HTTPParser::T__43)
      | (1ULL << HTTPParser::T__44)
      | (1ULL << HTTPParser::T__45)
      | (1ULL << HTTPParser::T__46)
      | (1ULL << HTTPParser::T__47))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UriContext ------------------------------------------------------------------

HTTPParser::UriContext::UriContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Uri_textContext *> HTTPParser::UriContext::uri_text() {
  return getRuleContexts<HTTPParser::Uri_textContext>();
}

HTTPParser::Uri_textContext* HTTPParser::UriContext::uri_text(size_t i) {
  return getRuleContext<HTTPParser::Uri_textContext>(i);
}


size_t HTTPParser::UriContext::getRuleIndex() const {
  return HTTPParser::RuleUri;
}

void HTTPParser::UriContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUri(this);
}

void HTTPParser::UriContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUri(this);
}

HTTPParser::UriContext* HTTPParser::uri() {
  UriContext *_localctx = _tracker.createInstance<UriContext>(_ctx, getState());
  enterRule(_localctx, 20, HTTPParser::RuleUri);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349);
    match(HTTPParser::T__48);
    setState(356);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HTTPParser::T__49)
      | (1ULL << HTTPParser::T__50)
      | (1ULL << HTTPParser::T__51)
      | (1ULL << HTTPParser::T__52)
      | (1ULL << HTTPParser::T__53)
      | (1ULL << HTTPParser::T__54)
      | (1ULL << HTTPParser::T__55)
      | (1ULL << HTTPParser::T__56)
      | (1ULL << HTTPParser::T__57)
      | (1ULL << HTTPParser::T__58))) != 0) || _la == HTTPParser::ID

    || _la == HTTPParser::NUMBER) {
      setState(350);
      uri_text();
      setState(352);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HTTPParser::T__48) {
        setState(351);
        match(HTTPParser::T__48);
      }
      setState(358);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Uri_textContext ------------------------------------------------------------------

HTTPParser::Uri_textContext::Uri_textContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HTTPParser::Uri_textContext::ID() {
  return getTokens(HTTPParser::ID);
}

tree::TerminalNode* HTTPParser::Uri_textContext::ID(size_t i) {
  return getToken(HTTPParser::ID, i);
}

std::vector<tree::TerminalNode *> HTTPParser::Uri_textContext::NUMBER() {
  return getTokens(HTTPParser::NUMBER);
}

tree::TerminalNode* HTTPParser::Uri_textContext::NUMBER(size_t i) {
  return getToken(HTTPParser::NUMBER, i);
}


size_t HTTPParser::Uri_textContext::getRuleIndex() const {
  return HTTPParser::RuleUri_text;
}

void HTTPParser::Uri_textContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUri_text(this);
}

void HTTPParser::Uri_textContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUri_text(this);
}

HTTPParser::Uri_textContext* HTTPParser::uri_text() {
  Uri_textContext *_localctx = _tracker.createInstance<Uri_textContext>(_ctx, getState());
  enterRule(_localctx, 22, HTTPParser::RuleUri_text);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(360); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(359);
              _la = _input->LA(1);
              if (!((((_la & ~ 0x3fULL) == 0) &&
                ((1ULL << _la) & ((1ULL << HTTPParser::T__49)
                | (1ULL << HTTPParser::T__50)
                | (1ULL << HTTPParser::T__51)
                | (1ULL << HTTPParser::T__52)
                | (1ULL << HTTPParser::T__53)
                | (1ULL << HTTPParser::T__54)
                | (1ULL << HTTPParser::T__55)
                | (1ULL << HTTPParser::T__56)
                | (1ULL << HTTPParser::T__57)
                | (1ULL << HTTPParser::T__58))) != 0) || _la == HTTPParser::ID

              || _la == HTTPParser::NUMBER)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(362); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Http_versionContext ------------------------------------------------------------------

HTTPParser::Http_versionContext::Http_versionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HTTPParser::Http_versionContext::getRuleIndex() const {
  return HTTPParser::RuleHttp_version;
}

void HTTPParser::Http_versionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHttp_version(this);
}

void HTTPParser::Http_versionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHttp_version(this);
}

HTTPParser::Http_versionContext* HTTPParser::http_version() {
  Http_versionContext *_localctx = _tracker.createInstance<Http_versionContext>(_ctx, getState());
  enterRule(_localctx, 24, HTTPParser::RuleHttp_version);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(364);
    _la = _input->LA(1);
    if (!(_la == HTTPParser::T__59

    || _la == HTTPParser::T__60)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Header_messageContext ------------------------------------------------------------------

HTTPParser::Header_messageContext::Header_messageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::General_headerContext* HTTPParser::Header_messageContext::general_header() {
  return getRuleContext<HTTPParser::General_headerContext>(0);
}

HTTPParser::Request_headerContext* HTTPParser::Header_messageContext::request_header() {
  return getRuleContext<HTTPParser::Request_headerContext>(0);
}

HTTPParser::Entity_headerContext* HTTPParser::Header_messageContext::entity_header() {
  return getRuleContext<HTTPParser::Entity_headerContext>(0);
}


size_t HTTPParser::Header_messageContext::getRuleIndex() const {
  return HTTPParser::RuleHeader_message;
}

void HTTPParser::Header_messageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeader_message(this);
}

void HTTPParser::Header_messageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeader_message(this);
}

HTTPParser::Header_messageContext* HTTPParser::header_message() {
  Header_messageContext *_localctx = _tracker.createInstance<Header_messageContext>(_ctx, getState());
  enterRule(_localctx, 26, HTTPParser::RuleHeader_message);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(369);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(366);
      general_header();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(367);
      request_header();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(368);
      entity_header();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- General_headerContext ------------------------------------------------------------------

HTTPParser::General_headerContext::General_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Cache_controlContext* HTTPParser::General_headerContext::cache_control() {
  return getRuleContext<HTTPParser::Cache_controlContext>(0);
}

HTTPParser::ConnectionContext* HTTPParser::General_headerContext::connection() {
  return getRuleContext<HTTPParser::ConnectionContext>(0);
}

HTTPParser::DateContext* HTTPParser::General_headerContext::date() {
  return getRuleContext<HTTPParser::DateContext>(0);
}

HTTPParser::PragmaContext* HTTPParser::General_headerContext::pragma() {
  return getRuleContext<HTTPParser::PragmaContext>(0);
}

HTTPParser::TrailerContext* HTTPParser::General_headerContext::trailer() {
  return getRuleContext<HTTPParser::TrailerContext>(0);
}

HTTPParser::Transfer_encodingContext* HTTPParser::General_headerContext::transfer_encoding() {
  return getRuleContext<HTTPParser::Transfer_encodingContext>(0);
}

HTTPParser::UpgradeContext* HTTPParser::General_headerContext::upgrade() {
  return getRuleContext<HTTPParser::UpgradeContext>(0);
}

HTTPParser::ViaContext* HTTPParser::General_headerContext::via() {
  return getRuleContext<HTTPParser::ViaContext>(0);
}

HTTPParser::WarningContext* HTTPParser::General_headerContext::warning() {
  return getRuleContext<HTTPParser::WarningContext>(0);
}

HTTPParser::Set_cookieContext* HTTPParser::General_headerContext::set_cookie() {
  return getRuleContext<HTTPParser::Set_cookieContext>(0);
}

HTTPParser::Cookie_listContext* HTTPParser::General_headerContext::cookie_list() {
  return getRuleContext<HTTPParser::Cookie_listContext>(0);
}

HTTPParser::LocationContext* HTTPParser::General_headerContext::location() {
  return getRuleContext<HTTPParser::LocationContext>(0);
}


size_t HTTPParser::General_headerContext::getRuleIndex() const {
  return HTTPParser::RuleGeneral_header;
}

void HTTPParser::General_headerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeneral_header(this);
}

void HTTPParser::General_headerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeneral_header(this);
}

HTTPParser::General_headerContext* HTTPParser::general_header() {
  General_headerContext *_localctx = _tracker.createInstance<General_headerContext>(_ctx, getState());
  enterRule(_localctx, 28, HTTPParser::RuleGeneral_header);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(383);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HTTPParser::T__72: {
        enterOuterAlt(_localctx, 1);
        setState(371);
        cache_control();
        break;
      }

      case HTTPParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(372);
        connection();
        break;
      }

      case HTTPParser::T__1: {
        enterOuterAlt(_localctx, 3);
        setState(373);
        date();
        break;
      }

      case HTTPParser::T__2: {
        enterOuterAlt(_localctx, 4);
        setState(374);
        pragma();
        break;
      }

      case HTTPParser::T__3: {
        enterOuterAlt(_localctx, 5);
        setState(375);
        trailer();
        break;
      }

      case HTTPParser::T__4: {
        enterOuterAlt(_localctx, 6);
        setState(376);
        transfer_encoding();
        break;
      }

      case HTTPParser::T__5: {
        enterOuterAlt(_localctx, 7);
        setState(377);
        upgrade();
        break;
      }

      case HTTPParser::T__6: {
        enterOuterAlt(_localctx, 8);
        setState(378);
        via();
        break;
      }

      case HTTPParser::T__7: {
        enterOuterAlt(_localctx, 9);
        setState(379);
        warning();
        break;
      }

      case HTTPParser::T__63: {
        enterOuterAlt(_localctx, 10);
        setState(380);
        set_cookie();
        break;
      }

      case HTTPParser::T__71: {
        enterOuterAlt(_localctx, 11);
        setState(381);
        cookie_list();
        break;
      }

      case HTTPParser::T__61: {
        enterOuterAlt(_localctx, 12);
        setState(382);
        location();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocationContext ------------------------------------------------------------------

HTTPParser::LocationContext::LocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::UrlContext* HTTPParser::LocationContext::url() {
  return getRuleContext<HTTPParser::UrlContext>(0);
}


size_t HTTPParser::LocationContext::getRuleIndex() const {
  return HTTPParser::RuleLocation;
}

void HTTPParser::LocationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocation(this);
}

void HTTPParser::LocationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocation(this);
}

HTTPParser::LocationContext* HTTPParser::location() {
  LocationContext *_localctx = _tracker.createInstance<LocationContext>(_ctx, getState());
  enterRule(_localctx, 30, HTTPParser::RuleLocation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(385);
    match(HTTPParser::T__61);
    setState(386);
    match(HTTPParser::T__62);
    setState(387);
    url();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Set_cookieContext ------------------------------------------------------------------

HTTPParser::Set_cookieContext::Set_cookieContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Cookie_entryContext *> HTTPParser::Set_cookieContext::cookie_entry() {
  return getRuleContexts<HTTPParser::Cookie_entryContext>();
}

HTTPParser::Cookie_entryContext* HTTPParser::Set_cookieContext::cookie_entry(size_t i) {
  return getRuleContext<HTTPParser::Cookie_entryContext>(i);
}


size_t HTTPParser::Set_cookieContext::getRuleIndex() const {
  return HTTPParser::RuleSet_cookie;
}

void HTTPParser::Set_cookieContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet_cookie(this);
}

void HTTPParser::Set_cookieContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet_cookie(this);
}

HTTPParser::Set_cookieContext* HTTPParser::set_cookie() {
  Set_cookieContext *_localctx = _tracker.createInstance<Set_cookieContext>(_ctx, getState());
  enterRule(_localctx, 32, HTTPParser::RuleSet_cookie);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(389);
    match(HTTPParser::T__63);
    setState(390);
    match(HTTPParser::T__62);
    setState(391);
    cookie_entry();
    setState(396);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__64) {
      setState(392);
      match(HTTPParser::T__64);
      setState(393);
      cookie_entry();
      setState(398);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cookie_entryContext ------------------------------------------------------------------

HTTPParser::Cookie_entryContext::Cookie_entryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Cookie_definitionContext* HTTPParser::Cookie_entryContext::cookie_definition() {
  return getRuleContext<HTTPParser::Cookie_definitionContext>(0);
}

HTTPParser::Cookie_expirationContext* HTTPParser::Cookie_entryContext::cookie_expiration() {
  return getRuleContext<HTTPParser::Cookie_expirationContext>(0);
}

HTTPParser::Cookie_pathContext* HTTPParser::Cookie_entryContext::cookie_path() {
  return getRuleContext<HTTPParser::Cookie_pathContext>(0);
}

HTTPParser::Cookie_domainContext* HTTPParser::Cookie_entryContext::cookie_domain() {
  return getRuleContext<HTTPParser::Cookie_domainContext>(0);
}

HTTPParser::Cookie_secureContext* HTTPParser::Cookie_entryContext::cookie_secure() {
  return getRuleContext<HTTPParser::Cookie_secureContext>(0);
}

HTTPParser::Cookie_http_onlyContext* HTTPParser::Cookie_entryContext::cookie_http_only() {
  return getRuleContext<HTTPParser::Cookie_http_onlyContext>(0);
}


size_t HTTPParser::Cookie_entryContext::getRuleIndex() const {
  return HTTPParser::RuleCookie_entry;
}

void HTTPParser::Cookie_entryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCookie_entry(this);
}

void HTTPParser::Cookie_entryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCookie_entry(this);
}

HTTPParser::Cookie_entryContext* HTTPParser::cookie_entry() {
  Cookie_entryContext *_localctx = _tracker.createInstance<Cookie_entryContext>(_ctx, getState());
  enterRule(_localctx, 34, HTTPParser::RuleCookie_entry);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(405);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HTTPParser::T__54:
      case HTTPParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(399);
        cookie_definition();
        break;
      }

      case HTTPParser::T__66: {
        enterOuterAlt(_localctx, 2);
        setState(400);
        cookie_expiration();
        break;
      }

      case HTTPParser::T__67: {
        enterOuterAlt(_localctx, 3);
        setState(401);
        cookie_path();
        break;
      }

      case HTTPParser::T__68: {
        enterOuterAlt(_localctx, 4);
        setState(402);
        cookie_domain();
        break;
      }

      case HTTPParser::T__69: {
        enterOuterAlt(_localctx, 5);
        setState(403);
        cookie_secure();
        break;
      }

      case HTTPParser::T__70: {
        enterOuterAlt(_localctx, 6);
        setState(404);
        cookie_http_only();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cookie_definitionContext ------------------------------------------------------------------

HTTPParser::Cookie_definitionContext::Cookie_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Cookie_nameContext* HTTPParser::Cookie_definitionContext::cookie_name() {
  return getRuleContext<HTTPParser::Cookie_nameContext>(0);
}

HTTPParser::Cookie_valueContext* HTTPParser::Cookie_definitionContext::cookie_value() {
  return getRuleContext<HTTPParser::Cookie_valueContext>(0);
}


size_t HTTPParser::Cookie_definitionContext::getRuleIndex() const {
  return HTTPParser::RuleCookie_definition;
}

void HTTPParser::Cookie_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCookie_definition(this);
}

void HTTPParser::Cookie_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCookie_definition(this);
}

HTTPParser::Cookie_definitionContext* HTTPParser::cookie_definition() {
  Cookie_definitionContext *_localctx = _tracker.createInstance<Cookie_definitionContext>(_ctx, getState());
  enterRule(_localctx, 36, HTTPParser::RuleCookie_definition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(407);
    cookie_name();
    setState(408);
    match(HTTPParser::T__55);
    setState(409);
    cookie_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cookie_nameContext ------------------------------------------------------------------

HTTPParser::Cookie_nameContext::Cookie_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HTTPParser::Cookie_nameContext::ID() {
  return getTokens(HTTPParser::ID);
}

tree::TerminalNode* HTTPParser::Cookie_nameContext::ID(size_t i) {
  return getToken(HTTPParser::ID, i);
}


size_t HTTPParser::Cookie_nameContext::getRuleIndex() const {
  return HTTPParser::RuleCookie_name;
}

void HTTPParser::Cookie_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCookie_name(this);
}

void HTTPParser::Cookie_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCookie_name(this);
}

HTTPParser::Cookie_nameContext* HTTPParser::cookie_name() {
  Cookie_nameContext *_localctx = _tracker.createInstance<Cookie_nameContext>(_ctx, getState());
  enterRule(_localctx, 38, HTTPParser::RuleCookie_name);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(412); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(411);
      _la = _input->LA(1);
      if (!(_la == HTTPParser::T__54 || _la == HTTPParser::ID)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(414); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HTTPParser::T__54 || _la == HTTPParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cookie_valueContext ------------------------------------------------------------------

HTTPParser::Cookie_valueContext::Cookie_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HTTPParser::Cookie_valueContext::NUMBER() {
  return getTokens(HTTPParser::NUMBER);
}

tree::TerminalNode* HTTPParser::Cookie_valueContext::NUMBER(size_t i) {
  return getToken(HTTPParser::NUMBER, i);
}

std::vector<tree::TerminalNode *> HTTPParser::Cookie_valueContext::ID() {
  return getTokens(HTTPParser::ID);
}

tree::TerminalNode* HTTPParser::Cookie_valueContext::ID(size_t i) {
  return getToken(HTTPParser::ID, i);
}


size_t HTTPParser::Cookie_valueContext::getRuleIndex() const {
  return HTTPParser::RuleCookie_value;
}

void HTTPParser::Cookie_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCookie_value(this);
}

void HTTPParser::Cookie_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCookie_value(this);
}

HTTPParser::Cookie_valueContext* HTTPParser::cookie_value() {
  Cookie_valueContext *_localctx = _tracker.createInstance<Cookie_valueContext>(_ctx, getState());
  enterRule(_localctx, 40, HTTPParser::RuleCookie_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(417); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(416);
      _la = _input->LA(1);
      if (!(_la == HTTPParser::T__58

      || _la == HTTPParser::T__65 || _la == HTTPParser::ID

      || _la == HTTPParser::NUMBER)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(419); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HTTPParser::T__58

    || _la == HTTPParser::T__65 || _la == HTTPParser::ID

    || _la == HTTPParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cookie_expirationContext ------------------------------------------------------------------

HTTPParser::Cookie_expirationContext::Cookie_expirationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Http_dateContext* HTTPParser::Cookie_expirationContext::http_date() {
  return getRuleContext<HTTPParser::Http_dateContext>(0);
}


size_t HTTPParser::Cookie_expirationContext::getRuleIndex() const {
  return HTTPParser::RuleCookie_expiration;
}

void HTTPParser::Cookie_expirationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCookie_expiration(this);
}

void HTTPParser::Cookie_expirationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCookie_expiration(this);
}

HTTPParser::Cookie_expirationContext* HTTPParser::cookie_expiration() {
  Cookie_expirationContext *_localctx = _tracker.createInstance<Cookie_expirationContext>(_ctx, getState());
  enterRule(_localctx, 42, HTTPParser::RuleCookie_expiration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(421);
    match(HTTPParser::T__66);
    setState(422);
    match(HTTPParser::T__55);
    setState(423);
    http_date();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cookie_pathContext ------------------------------------------------------------------

HTTPParser::Cookie_pathContext::Cookie_pathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::UriContext* HTTPParser::Cookie_pathContext::uri() {
  return getRuleContext<HTTPParser::UriContext>(0);
}


size_t HTTPParser::Cookie_pathContext::getRuleIndex() const {
  return HTTPParser::RuleCookie_path;
}

void HTTPParser::Cookie_pathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCookie_path(this);
}

void HTTPParser::Cookie_pathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCookie_path(this);
}

HTTPParser::Cookie_pathContext* HTTPParser::cookie_path() {
  Cookie_pathContext *_localctx = _tracker.createInstance<Cookie_pathContext>(_ctx, getState());
  enterRule(_localctx, 44, HTTPParser::RuleCookie_path);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(425);
    match(HTTPParser::T__67);
    setState(426);
    match(HTTPParser::T__55);
    setState(427);
    uri();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cookie_domainContext ------------------------------------------------------------------

HTTPParser::Cookie_domainContext::Cookie_domainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HTTPParser::Cookie_domainContext::ID() {
  return getTokens(HTTPParser::ID);
}

tree::TerminalNode* HTTPParser::Cookie_domainContext::ID(size_t i) {
  return getToken(HTTPParser::ID, i);
}


size_t HTTPParser::Cookie_domainContext::getRuleIndex() const {
  return HTTPParser::RuleCookie_domain;
}

void HTTPParser::Cookie_domainContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCookie_domain(this);
}

void HTTPParser::Cookie_domainContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCookie_domain(this);
}

HTTPParser::Cookie_domainContext* HTTPParser::cookie_domain() {
  Cookie_domainContext *_localctx = _tracker.createInstance<Cookie_domainContext>(_ctx, getState());
  enterRule(_localctx, 46, HTTPParser::RuleCookie_domain);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(429);
    match(HTTPParser::T__68);
    setState(430);
    match(HTTPParser::T__55);
    setState(432);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HTTPParser::T__52) {
      setState(431);
      match(HTTPParser::T__52);
    }
    setState(434);
    match(HTTPParser::ID);
    setState(439);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__52) {
      setState(435);
      match(HTTPParser::T__52);
      setState(436);
      match(HTTPParser::ID);
      setState(441);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cookie_secureContext ------------------------------------------------------------------

HTTPParser::Cookie_secureContext::Cookie_secureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HTTPParser::Cookie_secureContext::getRuleIndex() const {
  return HTTPParser::RuleCookie_secure;
}

void HTTPParser::Cookie_secureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCookie_secure(this);
}

void HTTPParser::Cookie_secureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCookie_secure(this);
}

HTTPParser::Cookie_secureContext* HTTPParser::cookie_secure() {
  Cookie_secureContext *_localctx = _tracker.createInstance<Cookie_secureContext>(_ctx, getState());
  enterRule(_localctx, 48, HTTPParser::RuleCookie_secure);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(442);
    match(HTTPParser::T__69);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cookie_http_onlyContext ------------------------------------------------------------------

HTTPParser::Cookie_http_onlyContext::Cookie_http_onlyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HTTPParser::Cookie_http_onlyContext::getRuleIndex() const {
  return HTTPParser::RuleCookie_http_only;
}

void HTTPParser::Cookie_http_onlyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCookie_http_only(this);
}

void HTTPParser::Cookie_http_onlyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCookie_http_only(this);
}

HTTPParser::Cookie_http_onlyContext* HTTPParser::cookie_http_only() {
  Cookie_http_onlyContext *_localctx = _tracker.createInstance<Cookie_http_onlyContext>(_ctx, getState());
  enterRule(_localctx, 50, HTTPParser::RuleCookie_http_only);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(444);
    match(HTTPParser::T__70);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cookie_listContext ------------------------------------------------------------------

HTTPParser::Cookie_listContext::Cookie_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Cookie_definitionContext *> HTTPParser::Cookie_listContext::cookie_definition() {
  return getRuleContexts<HTTPParser::Cookie_definitionContext>();
}

HTTPParser::Cookie_definitionContext* HTTPParser::Cookie_listContext::cookie_definition(size_t i) {
  return getRuleContext<HTTPParser::Cookie_definitionContext>(i);
}


size_t HTTPParser::Cookie_listContext::getRuleIndex() const {
  return HTTPParser::RuleCookie_list;
}

void HTTPParser::Cookie_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCookie_list(this);
}

void HTTPParser::Cookie_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCookie_list(this);
}

HTTPParser::Cookie_listContext* HTTPParser::cookie_list() {
  Cookie_listContext *_localctx = _tracker.createInstance<Cookie_listContext>(_ctx, getState());
  enterRule(_localctx, 52, HTTPParser::RuleCookie_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(446);
    match(HTTPParser::T__71);
    setState(447);
    match(HTTPParser::T__62);
    setState(448);
    cookie_definition();
    setState(453);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__64) {
      setState(449);
      match(HTTPParser::T__64);
      setState(450);
      cookie_definition();
      setState(455);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cache_controlContext ------------------------------------------------------------------

HTTPParser::Cache_controlContext::Cache_controlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Cache_requestContext *> HTTPParser::Cache_controlContext::cache_request() {
  return getRuleContexts<HTTPParser::Cache_requestContext>();
}

HTTPParser::Cache_requestContext* HTTPParser::Cache_controlContext::cache_request(size_t i) {
  return getRuleContext<HTTPParser::Cache_requestContext>(i);
}


size_t HTTPParser::Cache_controlContext::getRuleIndex() const {
  return HTTPParser::RuleCache_control;
}

void HTTPParser::Cache_controlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCache_control(this);
}

void HTTPParser::Cache_controlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCache_control(this);
}

HTTPParser::Cache_controlContext* HTTPParser::cache_control() {
  Cache_controlContext *_localctx = _tracker.createInstance<Cache_controlContext>(_ctx, getState());
  enterRule(_localctx, 54, HTTPParser::RuleCache_control);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(456);
    match(HTTPParser::T__72);
    setState(457);
    match(HTTPParser::T__62);
    setState(458);
    cache_request();
    setState(463);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__73) {
      setState(459);
      match(HTTPParser::T__73);
      setState(460);
      cache_request();
      setState(465);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cache_requestContext ------------------------------------------------------------------

HTTPParser::Cache_requestContext::Cache_requestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Delta_secondsContext* HTTPParser::Cache_requestContext::delta_seconds() {
  return getRuleContext<HTTPParser::Delta_secondsContext>(0);
}

HTTPParser::Stale_timeContext* HTTPParser::Cache_requestContext::stale_time() {
  return getRuleContext<HTTPParser::Stale_timeContext>(0);
}

HTTPParser::Cache_extensionContext* HTTPParser::Cache_requestContext::cache_extension() {
  return getRuleContext<HTTPParser::Cache_extensionContext>(0);
}

tree::TerminalNode* HTTPParser::Cache_requestContext::NUMBER() {
  return getToken(HTTPParser::NUMBER, 0);
}


size_t HTTPParser::Cache_requestContext::getRuleIndex() const {
  return HTTPParser::RuleCache_request;
}

void HTTPParser::Cache_requestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCache_request(this);
}

void HTTPParser::Cache_requestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCache_request(this);
}

HTTPParser::Cache_requestContext* HTTPParser::cache_request() {
  Cache_requestContext *_localctx = _tracker.createInstance<Cache_requestContext>(_ctx, getState());
  enterRule(_localctx, 56, HTTPParser::RuleCache_request);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(491);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HTTPParser::T__74: {
        enterOuterAlt(_localctx, 1);
        setState(466);
        match(HTTPParser::T__74);
        setState(469);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HTTPParser::T__55) {
          setState(467);
          match(HTTPParser::T__55);
          setState(468);
          match(HTTPParser::T__63);
        }
        break;
      }

      case HTTPParser::T__75: {
        enterOuterAlt(_localctx, 2);
        setState(471);
        match(HTTPParser::T__75);
        break;
      }

      case HTTPParser::T__76: {
        enterOuterAlt(_localctx, 3);
        setState(472);
        match(HTTPParser::T__76);
        setState(473);
        match(HTTPParser::T__55);
        setState(474);
        delta_seconds();
        break;
      }

      case HTTPParser::T__77: {
        enterOuterAlt(_localctx, 4);
        setState(475);
        match(HTTPParser::T__77);
        setState(477);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HTTPParser::T__55) {
          setState(476);
          stale_time();
        }
        break;
      }

      case HTTPParser::T__78: {
        enterOuterAlt(_localctx, 5);
        setState(479);
        match(HTTPParser::T__78);
        setState(480);
        match(HTTPParser::T__55);
        setState(481);
        delta_seconds();
        break;
      }

      case HTTPParser::T__79: {
        enterOuterAlt(_localctx, 6);
        setState(482);
        match(HTTPParser::T__79);
        break;
      }

      case HTTPParser::T__80: {
        enterOuterAlt(_localctx, 7);
        setState(483);
        match(HTTPParser::T__80);
        break;
      }

      case HTTPParser::ID: {
        enterOuterAlt(_localctx, 8);
        setState(484);
        cache_extension();
        break;
      }

      case HTTPParser::T__81: {
        enterOuterAlt(_localctx, 9);
        setState(485);
        match(HTTPParser::T__81);
        setState(486);
        match(HTTPParser::T__55);
        setState(487);
        match(HTTPParser::NUMBER);
        break;
      }

      case HTTPParser::T__82: {
        enterOuterAlt(_localctx, 10);
        setState(488);
        match(HTTPParser::T__82);
        setState(489);
        match(HTTPParser::T__55);
        setState(490);
        match(HTTPParser::NUMBER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Delta_secondsContext ------------------------------------------------------------------

HTTPParser::Delta_secondsContext::Delta_secondsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Delta_secondsContext::NUMBER() {
  return getToken(HTTPParser::NUMBER, 0);
}


size_t HTTPParser::Delta_secondsContext::getRuleIndex() const {
  return HTTPParser::RuleDelta_seconds;
}

void HTTPParser::Delta_secondsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDelta_seconds(this);
}

void HTTPParser::Delta_secondsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDelta_seconds(this);
}

HTTPParser::Delta_secondsContext* HTTPParser::delta_seconds() {
  Delta_secondsContext *_localctx = _tracker.createInstance<Delta_secondsContext>(_ctx, getState());
  enterRule(_localctx, 58, HTTPParser::RuleDelta_seconds);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(493);
    match(HTTPParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Stale_timeContext ------------------------------------------------------------------

HTTPParser::Stale_timeContext::Stale_timeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Delta_secondsContext* HTTPParser::Stale_timeContext::delta_seconds() {
  return getRuleContext<HTTPParser::Delta_secondsContext>(0);
}


size_t HTTPParser::Stale_timeContext::getRuleIndex() const {
  return HTTPParser::RuleStale_time;
}

void HTTPParser::Stale_timeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStale_time(this);
}

void HTTPParser::Stale_timeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStale_time(this);
}

HTTPParser::Stale_timeContext* HTTPParser::stale_time() {
  Stale_timeContext *_localctx = _tracker.createInstance<Stale_timeContext>(_ctx, getState());
  enterRule(_localctx, 60, HTTPParser::RuleStale_time);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(495);
    match(HTTPParser::T__55);
    setState(496);
    delta_seconds();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cache_extensionContext ------------------------------------------------------------------

HTTPParser::Cache_extensionContext::Cache_extensionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Cache_extensionContext::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::Cache_extensionContext::getRuleIndex() const {
  return HTTPParser::RuleCache_extension;
}

void HTTPParser::Cache_extensionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCache_extension(this);
}

void HTTPParser::Cache_extensionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCache_extension(this);
}

HTTPParser::Cache_extensionContext* HTTPParser::cache_extension() {
  Cache_extensionContext *_localctx = _tracker.createInstance<Cache_extensionContext>(_ctx, getState());
  enterRule(_localctx, 62, HTTPParser::RuleCache_extension);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(498);
    match(HTTPParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConnectionContext ------------------------------------------------------------------

HTTPParser::ConnectionContext::ConnectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Connection_tokenContext *> HTTPParser::ConnectionContext::connection_token() {
  return getRuleContexts<HTTPParser::Connection_tokenContext>();
}

HTTPParser::Connection_tokenContext* HTTPParser::ConnectionContext::connection_token(size_t i) {
  return getRuleContext<HTTPParser::Connection_tokenContext>(i);
}


size_t HTTPParser::ConnectionContext::getRuleIndex() const {
  return HTTPParser::RuleConnection;
}

void HTTPParser::ConnectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConnection(this);
}

void HTTPParser::ConnectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConnection(this);
}

HTTPParser::ConnectionContext* HTTPParser::connection() {
  ConnectionContext *_localctx = _tracker.createInstance<ConnectionContext>(_ctx, getState());
  enterRule(_localctx, 64, HTTPParser::RuleConnection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(500);
    match(HTTPParser::T__0);
    setState(501);
    match(HTTPParser::T__62);
    setState(502);
    connection_token();
    setState(507);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__73) {
      setState(503);
      match(HTTPParser::T__73);
      setState(504);
      connection_token();
      setState(509);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Connection_tokenContext ------------------------------------------------------------------

HTTPParser::Connection_tokenContext::Connection_tokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Connection_tokenContext::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::Connection_tokenContext::getRuleIndex() const {
  return HTTPParser::RuleConnection_token;
}

void HTTPParser::Connection_tokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConnection_token(this);
}

void HTTPParser::Connection_tokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConnection_token(this);
}

HTTPParser::Connection_tokenContext* HTTPParser::connection_token() {
  Connection_tokenContext *_localctx = _tracker.createInstance<Connection_tokenContext>(_ctx, getState());
  enterRule(_localctx, 66, HTTPParser::RuleConnection_token);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(510);
    match(HTTPParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DateContext ------------------------------------------------------------------

HTTPParser::DateContext::DateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Http_dateContext* HTTPParser::DateContext::http_date() {
  return getRuleContext<HTTPParser::Http_dateContext>(0);
}


size_t HTTPParser::DateContext::getRuleIndex() const {
  return HTTPParser::RuleDate;
}

void HTTPParser::DateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDate(this);
}

void HTTPParser::DateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDate(this);
}

HTTPParser::DateContext* HTTPParser::date() {
  DateContext *_localctx = _tracker.createInstance<DateContext>(_ctx, getState());
  enterRule(_localctx, 68, HTTPParser::RuleDate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(512);
    match(HTTPParser::T__1);
    setState(513);
    match(HTTPParser::T__62);
    setState(514);
    http_date();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Http_dateContext ------------------------------------------------------------------

HTTPParser::Http_dateContext::Http_dateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Rfc1123_dateContext* HTTPParser::Http_dateContext::rfc1123_date() {
  return getRuleContext<HTTPParser::Rfc1123_dateContext>(0);
}

HTTPParser::Rfc850_dateContext* HTTPParser::Http_dateContext::rfc850_date() {
  return getRuleContext<HTTPParser::Rfc850_dateContext>(0);
}

HTTPParser::Asctime_dateContext* HTTPParser::Http_dateContext::asctime_date() {
  return getRuleContext<HTTPParser::Asctime_dateContext>(0);
}

HTTPParser::Cookie_dateContext* HTTPParser::Http_dateContext::cookie_date() {
  return getRuleContext<HTTPParser::Cookie_dateContext>(0);
}


size_t HTTPParser::Http_dateContext::getRuleIndex() const {
  return HTTPParser::RuleHttp_date;
}

void HTTPParser::Http_dateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHttp_date(this);
}

void HTTPParser::Http_dateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHttp_date(this);
}

HTTPParser::Http_dateContext* HTTPParser::http_date() {
  Http_dateContext *_localctx = _tracker.createInstance<Http_dateContext>(_ctx, getState());
  enterRule(_localctx, 70, HTTPParser::RuleHttp_date);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(520);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(516);
      rfc1123_date();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(517);
      rfc850_date();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(518);
      asctime_date();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(519);
      cookie_date();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rfc1123_dateContext ------------------------------------------------------------------

HTTPParser::Rfc1123_dateContext::Rfc1123_dateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Weekday1Context* HTTPParser::Rfc1123_dateContext::weekday1() {
  return getRuleContext<HTTPParser::Weekday1Context>(0);
}

HTTPParser::Date1Context* HTTPParser::Rfc1123_dateContext::date1() {
  return getRuleContext<HTTPParser::Date1Context>(0);
}

HTTPParser::TimeContext* HTTPParser::Rfc1123_dateContext::time() {
  return getRuleContext<HTTPParser::TimeContext>(0);
}


size_t HTTPParser::Rfc1123_dateContext::getRuleIndex() const {
  return HTTPParser::RuleRfc1123_date;
}

void HTTPParser::Rfc1123_dateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRfc1123_date(this);
}

void HTTPParser::Rfc1123_dateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRfc1123_date(this);
}

HTTPParser::Rfc1123_dateContext* HTTPParser::rfc1123_date() {
  Rfc1123_dateContext *_localctx = _tracker.createInstance<Rfc1123_dateContext>(_ctx, getState());
  enterRule(_localctx, 72, HTTPParser::RuleRfc1123_date);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(522);
    weekday1();
    setState(523);
    match(HTTPParser::T__73);
    setState(524);
    date1();
    setState(525);
    time();
    setState(526);
    match(HTTPParser::T__83);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rfc850_dateContext ------------------------------------------------------------------

HTTPParser::Rfc850_dateContext::Rfc850_dateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Weekday2Context* HTTPParser::Rfc850_dateContext::weekday2() {
  return getRuleContext<HTTPParser::Weekday2Context>(0);
}

HTTPParser::Date2Context* HTTPParser::Rfc850_dateContext::date2() {
  return getRuleContext<HTTPParser::Date2Context>(0);
}

HTTPParser::TimeContext* HTTPParser::Rfc850_dateContext::time() {
  return getRuleContext<HTTPParser::TimeContext>(0);
}


size_t HTTPParser::Rfc850_dateContext::getRuleIndex() const {
  return HTTPParser::RuleRfc850_date;
}

void HTTPParser::Rfc850_dateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRfc850_date(this);
}

void HTTPParser::Rfc850_dateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRfc850_date(this);
}

HTTPParser::Rfc850_dateContext* HTTPParser::rfc850_date() {
  Rfc850_dateContext *_localctx = _tracker.createInstance<Rfc850_dateContext>(_ctx, getState());
  enterRule(_localctx, 74, HTTPParser::RuleRfc850_date);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(528);
    weekday2();
    setState(529);
    match(HTTPParser::T__73);
    setState(530);
    date2();
    setState(531);
    time();
    setState(532);
    match(HTTPParser::T__83);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Asctime_dateContext ------------------------------------------------------------------

HTTPParser::Asctime_dateContext::Asctime_dateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Weekday1Context* HTTPParser::Asctime_dateContext::weekday1() {
  return getRuleContext<HTTPParser::Weekday1Context>(0);
}

HTTPParser::Date3Context* HTTPParser::Asctime_dateContext::date3() {
  return getRuleContext<HTTPParser::Date3Context>(0);
}

HTTPParser::TimeContext* HTTPParser::Asctime_dateContext::time() {
  return getRuleContext<HTTPParser::TimeContext>(0);
}

tree::TerminalNode* HTTPParser::Asctime_dateContext::NUMBER() {
  return getToken(HTTPParser::NUMBER, 0);
}


size_t HTTPParser::Asctime_dateContext::getRuleIndex() const {
  return HTTPParser::RuleAsctime_date;
}

void HTTPParser::Asctime_dateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsctime_date(this);
}

void HTTPParser::Asctime_dateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsctime_date(this);
}

HTTPParser::Asctime_dateContext* HTTPParser::asctime_date() {
  Asctime_dateContext *_localctx = _tracker.createInstance<Asctime_dateContext>(_ctx, getState());
  enterRule(_localctx, 76, HTTPParser::RuleAsctime_date);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(534);
    weekday1();
    setState(535);
    match(HTTPParser::T__73);
    setState(536);
    date3();
    setState(537);
    time();
    setState(538);
    match(HTTPParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cookie_dateContext ------------------------------------------------------------------

HTTPParser::Cookie_dateContext::Cookie_dateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Weekday1Context* HTTPParser::Cookie_dateContext::weekday1() {
  return getRuleContext<HTTPParser::Weekday1Context>(0);
}

HTTPParser::Date2Context* HTTPParser::Cookie_dateContext::date2() {
  return getRuleContext<HTTPParser::Date2Context>(0);
}

HTTPParser::TimeContext* HTTPParser::Cookie_dateContext::time() {
  return getRuleContext<HTTPParser::TimeContext>(0);
}


size_t HTTPParser::Cookie_dateContext::getRuleIndex() const {
  return HTTPParser::RuleCookie_date;
}

void HTTPParser::Cookie_dateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCookie_date(this);
}

void HTTPParser::Cookie_dateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCookie_date(this);
}

HTTPParser::Cookie_dateContext* HTTPParser::cookie_date() {
  Cookie_dateContext *_localctx = _tracker.createInstance<Cookie_dateContext>(_ctx, getState());
  enterRule(_localctx, 78, HTTPParser::RuleCookie_date);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(540);
    weekday1();
    setState(541);
    match(HTTPParser::T__73);
    setState(542);
    date2();
    setState(543);
    time();
    setState(544);
    match(HTTPParser::T__83);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TimeContext ------------------------------------------------------------------

HTTPParser::TimeContext::TimeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HTTPParser::TimeContext::NUMBER() {
  return getTokens(HTTPParser::NUMBER);
}

tree::TerminalNode* HTTPParser::TimeContext::NUMBER(size_t i) {
  return getToken(HTTPParser::NUMBER, i);
}


size_t HTTPParser::TimeContext::getRuleIndex() const {
  return HTTPParser::RuleTime;
}

void HTTPParser::TimeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTime(this);
}

void HTTPParser::TimeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTime(this);
}

HTTPParser::TimeContext* HTTPParser::time() {
  TimeContext *_localctx = _tracker.createInstance<TimeContext>(_ctx, getState());
  enterRule(_localctx, 80, HTTPParser::RuleTime);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(546);
    match(HTTPParser::NUMBER);
    setState(547);
    match(HTTPParser::T__62);
    setState(548);
    match(HTTPParser::NUMBER);
    setState(549);
    match(HTTPParser::T__62);
    setState(550);
    match(HTTPParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Date1Context ------------------------------------------------------------------

HTTPParser::Date1Context::Date1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::DayContext* HTTPParser::Date1Context::day() {
  return getRuleContext<HTTPParser::DayContext>(0);
}

HTTPParser::MonthContext* HTTPParser::Date1Context::month() {
  return getRuleContext<HTTPParser::MonthContext>(0);
}

HTTPParser::YearContext* HTTPParser::Date1Context::year() {
  return getRuleContext<HTTPParser::YearContext>(0);
}


size_t HTTPParser::Date1Context::getRuleIndex() const {
  return HTTPParser::RuleDate1;
}

void HTTPParser::Date1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDate1(this);
}

void HTTPParser::Date1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDate1(this);
}

HTTPParser::Date1Context* HTTPParser::date1() {
  Date1Context *_localctx = _tracker.createInstance<Date1Context>(_ctx, getState());
  enterRule(_localctx, 82, HTTPParser::RuleDate1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(552);
    day();
    setState(553);
    month();
    setState(554);
    year();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Date2Context ------------------------------------------------------------------

HTTPParser::Date2Context::Date2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::DayContext* HTTPParser::Date2Context::day() {
  return getRuleContext<HTTPParser::DayContext>(0);
}

HTTPParser::MonthContext* HTTPParser::Date2Context::month() {
  return getRuleContext<HTTPParser::MonthContext>(0);
}

HTTPParser::YearContext* HTTPParser::Date2Context::year() {
  return getRuleContext<HTTPParser::YearContext>(0);
}

tree::TerminalNode* HTTPParser::Date2Context::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::Date2Context::getRuleIndex() const {
  return HTTPParser::RuleDate2;
}

void HTTPParser::Date2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDate2(this);
}

void HTTPParser::Date2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDate2(this);
}

HTTPParser::Date2Context* HTTPParser::date2() {
  Date2Context *_localctx = _tracker.createInstance<Date2Context>(_ctx, getState());
  enterRule(_localctx, 84, HTTPParser::RuleDate2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(556);
    day();
    setState(557);
    match(HTTPParser::T__53);
    setState(563);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HTTPParser::T__98:
      case HTTPParser::T__99:
      case HTTPParser::T__100:
      case HTTPParser::T__101:
      case HTTPParser::T__102:
      case HTTPParser::T__103:
      case HTTPParser::T__104:
      case HTTPParser::T__105:
      case HTTPParser::T__106:
      case HTTPParser::T__107:
      case HTTPParser::T__108:
      case HTTPParser::T__109: {
        setState(558);
        month();
        setState(559);
        match(HTTPParser::T__53);
        setState(560);
        year();
        break;
      }

      case HTTPParser::ID: {
        setState(562);
        match(HTTPParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Date3Context ------------------------------------------------------------------

HTTPParser::Date3Context::Date3Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::MonthContext* HTTPParser::Date3Context::month() {
  return getRuleContext<HTTPParser::MonthContext>(0);
}

tree::TerminalNode* HTTPParser::Date3Context::NUMBER() {
  return getToken(HTTPParser::NUMBER, 0);
}


size_t HTTPParser::Date3Context::getRuleIndex() const {
  return HTTPParser::RuleDate3;
}

void HTTPParser::Date3Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDate3(this);
}

void HTTPParser::Date3Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDate3(this);
}

HTTPParser::Date3Context* HTTPParser::date3() {
  Date3Context *_localctx = _tracker.createInstance<Date3Context>(_ctx, getState());
  enterRule(_localctx, 86, HTTPParser::RuleDate3);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(565);
    month();
    setState(566);
    match(HTTPParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DayContext ------------------------------------------------------------------

HTTPParser::DayContext::DayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::DayContext::NUMBER() {
  return getToken(HTTPParser::NUMBER, 0);
}


size_t HTTPParser::DayContext::getRuleIndex() const {
  return HTTPParser::RuleDay;
}

void HTTPParser::DayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDay(this);
}

void HTTPParser::DayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDay(this);
}

HTTPParser::DayContext* HTTPParser::day() {
  DayContext *_localctx = _tracker.createInstance<DayContext>(_ctx, getState());
  enterRule(_localctx, 88, HTTPParser::RuleDay);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(568);
    match(HTTPParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- YearContext ------------------------------------------------------------------

HTTPParser::YearContext::YearContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::YearContext::NUMBER() {
  return getToken(HTTPParser::NUMBER, 0);
}


size_t HTTPParser::YearContext::getRuleIndex() const {
  return HTTPParser::RuleYear;
}

void HTTPParser::YearContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterYear(this);
}

void HTTPParser::YearContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitYear(this);
}

HTTPParser::YearContext* HTTPParser::year() {
  YearContext *_localctx = _tracker.createInstance<YearContext>(_ctx, getState());
  enterRule(_localctx, 90, HTTPParser::RuleYear);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(570);
    match(HTTPParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Weekday1Context ------------------------------------------------------------------

HTTPParser::Weekday1Context::Weekday1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HTTPParser::Weekday1Context::getRuleIndex() const {
  return HTTPParser::RuleWeekday1;
}

void HTTPParser::Weekday1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWeekday1(this);
}

void HTTPParser::Weekday1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWeekday1(this);
}

HTTPParser::Weekday1Context* HTTPParser::weekday1() {
  Weekday1Context *_localctx = _tracker.createInstance<Weekday1Context>(_ctx, getState());
  enterRule(_localctx, 92, HTTPParser::RuleWeekday1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(572);
    _la = _input->LA(1);
    if (!(((((_la - 85) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 85)) & ((1ULL << (HTTPParser::T__84 - 85))
      | (1ULL << (HTTPParser::T__85 - 85))
      | (1ULL << (HTTPParser::T__86 - 85))
      | (1ULL << (HTTPParser::T__87 - 85))
      | (1ULL << (HTTPParser::T__88 - 85))
      | (1ULL << (HTTPParser::T__89 - 85))
      | (1ULL << (HTTPParser::T__90 - 85)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Weekday2Context ------------------------------------------------------------------

HTTPParser::Weekday2Context::Weekday2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HTTPParser::Weekday2Context::getRuleIndex() const {
  return HTTPParser::RuleWeekday2;
}

void HTTPParser::Weekday2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWeekday2(this);
}

void HTTPParser::Weekday2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWeekday2(this);
}

HTTPParser::Weekday2Context* HTTPParser::weekday2() {
  Weekday2Context *_localctx = _tracker.createInstance<Weekday2Context>(_ctx, getState());
  enterRule(_localctx, 94, HTTPParser::RuleWeekday2);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(574);
    _la = _input->LA(1);
    if (!(((((_la - 92) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 92)) & ((1ULL << (HTTPParser::T__91 - 92))
      | (1ULL << (HTTPParser::T__92 - 92))
      | (1ULL << (HTTPParser::T__93 - 92))
      | (1ULL << (HTTPParser::T__94 - 92))
      | (1ULL << (HTTPParser::T__95 - 92))
      | (1ULL << (HTTPParser::T__96 - 92))
      | (1ULL << (HTTPParser::T__97 - 92)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MonthContext ------------------------------------------------------------------

HTTPParser::MonthContext::MonthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HTTPParser::MonthContext::getRuleIndex() const {
  return HTTPParser::RuleMonth;
}

void HTTPParser::MonthContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMonth(this);
}

void HTTPParser::MonthContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMonth(this);
}

HTTPParser::MonthContext* HTTPParser::month() {
  MonthContext *_localctx = _tracker.createInstance<MonthContext>(_ctx, getState());
  enterRule(_localctx, 96, HTTPParser::RuleMonth);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(576);
    _la = _input->LA(1);
    if (!(((((_la - 99) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 99)) & ((1ULL << (HTTPParser::T__98 - 99))
      | (1ULL << (HTTPParser::T__99 - 99))
      | (1ULL << (HTTPParser::T__100 - 99))
      | (1ULL << (HTTPParser::T__101 - 99))
      | (1ULL << (HTTPParser::T__102 - 99))
      | (1ULL << (HTTPParser::T__103 - 99))
      | (1ULL << (HTTPParser::T__104 - 99))
      | (1ULL << (HTTPParser::T__105 - 99))
      | (1ULL << (HTTPParser::T__106 - 99))
      | (1ULL << (HTTPParser::T__107 - 99))
      | (1ULL << (HTTPParser::T__108 - 99))
      | (1ULL << (HTTPParser::T__109 - 99)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PragmaContext ------------------------------------------------------------------

HTTPParser::PragmaContext::PragmaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Pragma_directiveContext *> HTTPParser::PragmaContext::pragma_directive() {
  return getRuleContexts<HTTPParser::Pragma_directiveContext>();
}

HTTPParser::Pragma_directiveContext* HTTPParser::PragmaContext::pragma_directive(size_t i) {
  return getRuleContext<HTTPParser::Pragma_directiveContext>(i);
}


size_t HTTPParser::PragmaContext::getRuleIndex() const {
  return HTTPParser::RulePragma;
}

void HTTPParser::PragmaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPragma(this);
}

void HTTPParser::PragmaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPragma(this);
}

HTTPParser::PragmaContext* HTTPParser::pragma() {
  PragmaContext *_localctx = _tracker.createInstance<PragmaContext>(_ctx, getState());
  enterRule(_localctx, 98, HTTPParser::RulePragma);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(578);
    match(HTTPParser::T__2);
    setState(579);
    match(HTTPParser::T__62);
    setState(580);
    pragma_directive();
    setState(585);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__73) {
      setState(581);
      match(HTTPParser::T__73);
      setState(582);
      pragma_directive();
      setState(587);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pragma_directiveContext ------------------------------------------------------------------

HTTPParser::Pragma_directiveContext::Pragma_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Extension_pragmaContext* HTTPParser::Pragma_directiveContext::extension_pragma() {
  return getRuleContext<HTTPParser::Extension_pragmaContext>(0);
}


size_t HTTPParser::Pragma_directiveContext::getRuleIndex() const {
  return HTTPParser::RulePragma_directive;
}

void HTTPParser::Pragma_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPragma_directive(this);
}

void HTTPParser::Pragma_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPragma_directive(this);
}

HTTPParser::Pragma_directiveContext* HTTPParser::pragma_directive() {
  Pragma_directiveContext *_localctx = _tracker.createInstance<Pragma_directiveContext>(_ctx, getState());
  enterRule(_localctx, 100, HTTPParser::RulePragma_directive);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(590);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HTTPParser::T__74: {
        enterOuterAlt(_localctx, 1);
        setState(588);
        match(HTTPParser::T__74);
        break;
      }

      case HTTPParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(589);
        extension_pragma();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Extension_pragmaContext ------------------------------------------------------------------

HTTPParser::Extension_pragmaContext::Extension_pragmaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HTTPParser::Extension_pragmaContext::ID() {
  return getTokens(HTTPParser::ID);
}

tree::TerminalNode* HTTPParser::Extension_pragmaContext::ID(size_t i) {
  return getToken(HTTPParser::ID, i);
}

HTTPParser::StringlitContext* HTTPParser::Extension_pragmaContext::stringlit() {
  return getRuleContext<HTTPParser::StringlitContext>(0);
}


size_t HTTPParser::Extension_pragmaContext::getRuleIndex() const {
  return HTTPParser::RuleExtension_pragma;
}

void HTTPParser::Extension_pragmaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtension_pragma(this);
}

void HTTPParser::Extension_pragmaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtension_pragma(this);
}

HTTPParser::Extension_pragmaContext* HTTPParser::extension_pragma() {
  Extension_pragmaContext *_localctx = _tracker.createInstance<Extension_pragmaContext>(_ctx, getState());
  enterRule(_localctx, 102, HTTPParser::RuleExtension_pragma);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(598);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(592);
      match(HTTPParser::ID);
      setState(593);
      match(HTTPParser::T__55);
      setState(594);
      match(HTTPParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(595);
      match(HTTPParser::ID);
      setState(596);
      match(HTTPParser::T__55);
      setState(597);
      stringlit();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringlitContext ------------------------------------------------------------------

HTTPParser::StringlitContext::StringlitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::StringlitContext::STRING() {
  return getToken(HTTPParser::STRING, 0);
}


size_t HTTPParser::StringlitContext::getRuleIndex() const {
  return HTTPParser::RuleStringlit;
}

void HTTPParser::StringlitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringlit(this);
}

void HTTPParser::StringlitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringlit(this);
}

HTTPParser::StringlitContext* HTTPParser::stringlit() {
  StringlitContext *_localctx = _tracker.createInstance<StringlitContext>(_ctx, getState());
  enterRule(_localctx, 104, HTTPParser::RuleStringlit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(600);
    match(HTTPParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailerContext ------------------------------------------------------------------

HTTPParser::TrailerContext::TrailerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Field_nameContext *> HTTPParser::TrailerContext::field_name() {
  return getRuleContexts<HTTPParser::Field_nameContext>();
}

HTTPParser::Field_nameContext* HTTPParser::TrailerContext::field_name(size_t i) {
  return getRuleContext<HTTPParser::Field_nameContext>(i);
}


size_t HTTPParser::TrailerContext::getRuleIndex() const {
  return HTTPParser::RuleTrailer;
}

void HTTPParser::TrailerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailer(this);
}

void HTTPParser::TrailerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailer(this);
}

HTTPParser::TrailerContext* HTTPParser::trailer() {
  TrailerContext *_localctx = _tracker.createInstance<TrailerContext>(_ctx, getState());
  enterRule(_localctx, 106, HTTPParser::RuleTrailer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(602);
    match(HTTPParser::T__3);
    setState(603);
    match(HTTPParser::T__62);
    setState(604);
    field_name();
    setState(609);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(605);
        match(HTTPParser::T__73);
        setState(606);
        field_name(); 
      }
      setState(611);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Field_nameContext ------------------------------------------------------------------

HTTPParser::Field_nameContext::Field_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Field_nameContext::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::Field_nameContext::getRuleIndex() const {
  return HTTPParser::RuleField_name;
}

void HTTPParser::Field_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField_name(this);
}

void HTTPParser::Field_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField_name(this);
}

HTTPParser::Field_nameContext* HTTPParser::field_name() {
  Field_nameContext *_localctx = _tracker.createInstance<Field_nameContext>(_ctx, getState());
  enterRule(_localctx, 108, HTTPParser::RuleField_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(612);
    match(HTTPParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Transfer_encodingContext ------------------------------------------------------------------

HTTPParser::Transfer_encodingContext::Transfer_encodingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Transfer_codingContext *> HTTPParser::Transfer_encodingContext::transfer_coding() {
  return getRuleContexts<HTTPParser::Transfer_codingContext>();
}

HTTPParser::Transfer_codingContext* HTTPParser::Transfer_encodingContext::transfer_coding(size_t i) {
  return getRuleContext<HTTPParser::Transfer_codingContext>(i);
}


size_t HTTPParser::Transfer_encodingContext::getRuleIndex() const {
  return HTTPParser::RuleTransfer_encoding;
}

void HTTPParser::Transfer_encodingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTransfer_encoding(this);
}

void HTTPParser::Transfer_encodingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTransfer_encoding(this);
}

HTTPParser::Transfer_encodingContext* HTTPParser::transfer_encoding() {
  Transfer_encodingContext *_localctx = _tracker.createInstance<Transfer_encodingContext>(_ctx, getState());
  enterRule(_localctx, 110, HTTPParser::RuleTransfer_encoding);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(614);
    match(HTTPParser::T__4);
    setState(615);
    match(HTTPParser::T__62);
    setState(616);
    transfer_coding();
    setState(620);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__110

    || _la == HTTPParser::ID) {
      setState(617);
      transfer_coding();
      setState(622);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Transfer_codingContext ------------------------------------------------------------------

HTTPParser::Transfer_codingContext::Transfer_codingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Transfer_extensionContext* HTTPParser::Transfer_codingContext::transfer_extension() {
  return getRuleContext<HTTPParser::Transfer_extensionContext>(0);
}


size_t HTTPParser::Transfer_codingContext::getRuleIndex() const {
  return HTTPParser::RuleTransfer_coding;
}

void HTTPParser::Transfer_codingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTransfer_coding(this);
}

void HTTPParser::Transfer_codingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTransfer_coding(this);
}

HTTPParser::Transfer_codingContext* HTTPParser::transfer_coding() {
  Transfer_codingContext *_localctx = _tracker.createInstance<Transfer_codingContext>(_ctx, getState());
  enterRule(_localctx, 112, HTTPParser::RuleTransfer_coding);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(625);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HTTPParser::T__110: {
        enterOuterAlt(_localctx, 1);
        setState(623);
        match(HTTPParser::T__110);
        break;
      }

      case HTTPParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(624);
        transfer_extension();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Transfer_extensionContext ------------------------------------------------------------------

HTTPParser::Transfer_extensionContext::Transfer_extensionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Transfer_extensionContext::ID() {
  return getToken(HTTPParser::ID, 0);
}

std::vector<HTTPParser::ParameterContext *> HTTPParser::Transfer_extensionContext::parameter() {
  return getRuleContexts<HTTPParser::ParameterContext>();
}

HTTPParser::ParameterContext* HTTPParser::Transfer_extensionContext::parameter(size_t i) {
  return getRuleContext<HTTPParser::ParameterContext>(i);
}


size_t HTTPParser::Transfer_extensionContext::getRuleIndex() const {
  return HTTPParser::RuleTransfer_extension;
}

void HTTPParser::Transfer_extensionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTransfer_extension(this);
}

void HTTPParser::Transfer_extensionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTransfer_extension(this);
}

HTTPParser::Transfer_extensionContext* HTTPParser::transfer_extension() {
  Transfer_extensionContext *_localctx = _tracker.createInstance<Transfer_extensionContext>(_ctx, getState());
  enterRule(_localctx, 114, HTTPParser::RuleTransfer_extension);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(627);
    match(HTTPParser::ID);
    setState(629); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(628);
              parameter();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(631); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

HTTPParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::AttributeContext* HTTPParser::ParameterContext::attribute() {
  return getRuleContext<HTTPParser::AttributeContext>(0);
}

HTTPParser::ValueContext* HTTPParser::ParameterContext::value() {
  return getRuleContext<HTTPParser::ValueContext>(0);
}


size_t HTTPParser::ParameterContext::getRuleIndex() const {
  return HTTPParser::RuleParameter;
}

void HTTPParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void HTTPParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}

HTTPParser::ParameterContext* HTTPParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 116, HTTPParser::RuleParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(633);
    attribute();
    setState(634);
    match(HTTPParser::T__55);
    setState(635);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

HTTPParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::AttributeContext::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::AttributeContext::getRuleIndex() const {
  return HTTPParser::RuleAttribute;
}

void HTTPParser::AttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute(this);
}

void HTTPParser::AttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute(this);
}

HTTPParser::AttributeContext* HTTPParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 118, HTTPParser::RuleAttribute);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(637);
    match(HTTPParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

HTTPParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::ValueContext::ID() {
  return getToken(HTTPParser::ID, 0);
}

HTTPParser::StringlitContext* HTTPParser::ValueContext::stringlit() {
  return getRuleContext<HTTPParser::StringlitContext>(0);
}


size_t HTTPParser::ValueContext::getRuleIndex() const {
  return HTTPParser::RuleValue;
}

void HTTPParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void HTTPParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

HTTPParser::ValueContext* HTTPParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 120, HTTPParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(641);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HTTPParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(639);
        match(HTTPParser::ID);
        break;
      }

      case HTTPParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(640);
        stringlit();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UpgradeContext ------------------------------------------------------------------

HTTPParser::UpgradeContext::UpgradeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::ProductContext *> HTTPParser::UpgradeContext::product() {
  return getRuleContexts<HTTPParser::ProductContext>();
}

HTTPParser::ProductContext* HTTPParser::UpgradeContext::product(size_t i) {
  return getRuleContext<HTTPParser::ProductContext>(i);
}


size_t HTTPParser::UpgradeContext::getRuleIndex() const {
  return HTTPParser::RuleUpgrade;
}

void HTTPParser::UpgradeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUpgrade(this);
}

void HTTPParser::UpgradeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUpgrade(this);
}

HTTPParser::UpgradeContext* HTTPParser::upgrade() {
  UpgradeContext *_localctx = _tracker.createInstance<UpgradeContext>(_ctx, getState());
  enterRule(_localctx, 122, HTTPParser::RuleUpgrade);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(643);
    match(HTTPParser::T__5);
    setState(644);
    match(HTTPParser::T__62);
    setState(645);
    product();
    setState(650);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__73) {
      setState(646);
      match(HTTPParser::T__73);
      setState(647);
      product();
      setState(652);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProductContext ------------------------------------------------------------------

HTTPParser::ProductContext::ProductContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::ProductContext::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::ProductContext::getRuleIndex() const {
  return HTTPParser::RuleProduct;
}

void HTTPParser::ProductContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProduct(this);
}

void HTTPParser::ProductContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProduct(this);
}

HTTPParser::ProductContext* HTTPParser::product() {
  ProductContext *_localctx = _tracker.createInstance<ProductContext>(_ctx, getState());
  enterRule(_localctx, 124, HTTPParser::RuleProduct);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(653);
    match(HTTPParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ViaContext ------------------------------------------------------------------

HTTPParser::ViaContext::ViaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Received_infoContext *> HTTPParser::ViaContext::received_info() {
  return getRuleContexts<HTTPParser::Received_infoContext>();
}

HTTPParser::Received_infoContext* HTTPParser::ViaContext::received_info(size_t i) {
  return getRuleContext<HTTPParser::Received_infoContext>(i);
}


size_t HTTPParser::ViaContext::getRuleIndex() const {
  return HTTPParser::RuleVia;
}

void HTTPParser::ViaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVia(this);
}

void HTTPParser::ViaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVia(this);
}

HTTPParser::ViaContext* HTTPParser::via() {
  ViaContext *_localctx = _tracker.createInstance<ViaContext>(_ctx, getState());
  enterRule(_localctx, 126, HTTPParser::RuleVia);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(655);
    match(HTTPParser::T__6);
    setState(656);
    received_info();
    setState(661);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__73) {
      setState(657);
      match(HTTPParser::T__73);
      setState(658);
      received_info();
      setState(663);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Received_infoContext ------------------------------------------------------------------

HTTPParser::Received_infoContext::Received_infoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Protocol_versionContext* HTTPParser::Received_infoContext::protocol_version() {
  return getRuleContext<HTTPParser::Protocol_versionContext>(0);
}

HTTPParser::Protocol_nameContext* HTTPParser::Received_infoContext::protocol_name() {
  return getRuleContext<HTTPParser::Protocol_nameContext>(0);
}


size_t HTTPParser::Received_infoContext::getRuleIndex() const {
  return HTTPParser::RuleReceived_info;
}

void HTTPParser::Received_infoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReceived_info(this);
}

void HTTPParser::Received_infoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReceived_info(this);
}

HTTPParser::Received_infoContext* HTTPParser::received_info() {
  Received_infoContext *_localctx = _tracker.createInstance<Received_infoContext>(_ctx, getState());
  enterRule(_localctx, 128, HTTPParser::RuleReceived_info);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(665);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      setState(664);
      protocol_name();
      break;
    }

    }
    setState(667);
    protocol_version();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Protocol_nameContext ------------------------------------------------------------------

HTTPParser::Protocol_nameContext::Protocol_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Protocol_nameContext::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::Protocol_nameContext::getRuleIndex() const {
  return HTTPParser::RuleProtocol_name;
}

void HTTPParser::Protocol_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProtocol_name(this);
}

void HTTPParser::Protocol_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProtocol_name(this);
}

HTTPParser::Protocol_nameContext* HTTPParser::protocol_name() {
  Protocol_nameContext *_localctx = _tracker.createInstance<Protocol_nameContext>(_ctx, getState());
  enterRule(_localctx, 130, HTTPParser::RuleProtocol_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(669);
    match(HTTPParser::ID);
    setState(670);
    match(HTTPParser::T__48);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Protocol_versionContext ------------------------------------------------------------------

HTTPParser::Protocol_versionContext::Protocol_versionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Protocol_versionContext::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::Protocol_versionContext::getRuleIndex() const {
  return HTTPParser::RuleProtocol_version;
}

void HTTPParser::Protocol_versionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProtocol_version(this);
}

void HTTPParser::Protocol_versionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProtocol_version(this);
}

HTTPParser::Protocol_versionContext* HTTPParser::protocol_version() {
  Protocol_versionContext *_localctx = _tracker.createInstance<Protocol_versionContext>(_ctx, getState());
  enterRule(_localctx, 132, HTTPParser::RuleProtocol_version);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(672);
    match(HTTPParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Received_byContext ------------------------------------------------------------------

HTTPParser::Received_byContext::Received_byContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::HostContext* HTTPParser::Received_byContext::host() {
  return getRuleContext<HTTPParser::HostContext>(0);
}

HTTPParser::PseudonymContext* HTTPParser::Received_byContext::pseudonym() {
  return getRuleContext<HTTPParser::PseudonymContext>(0);
}

HTTPParser::PortContext* HTTPParser::Received_byContext::port() {
  return getRuleContext<HTTPParser::PortContext>(0);
}


size_t HTTPParser::Received_byContext::getRuleIndex() const {
  return HTTPParser::RuleReceived_by;
}

void HTTPParser::Received_byContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReceived_by(this);
}

void HTTPParser::Received_byContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReceived_by(this);
}

HTTPParser::Received_byContext* HTTPParser::received_by() {
  Received_byContext *_localctx = _tracker.createInstance<Received_byContext>(_ctx, getState());
  enterRule(_localctx, 134, HTTPParser::RuleReceived_by);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(674);
    host();
    setState(675);
    match(HTTPParser::T__62);
    setState(680);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HTTPParser::EOF:
      case HTTPParser::NUMBER: {
        setState(677);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HTTPParser::NUMBER) {
          setState(676);
          port();
        }
        break;
      }

      case HTTPParser::ID: {
        setState(679);
        pseudonym();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HostContext ------------------------------------------------------------------

HTTPParser::HostContext::HostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HTTPParser::HostContext::ID() {
  return getTokens(HTTPParser::ID);
}

tree::TerminalNode* HTTPParser::HostContext::ID(size_t i) {
  return getToken(HTTPParser::ID, i);
}


size_t HTTPParser::HostContext::getRuleIndex() const {
  return HTTPParser::RuleHost;
}

void HTTPParser::HostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHost(this);
}

void HTTPParser::HostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHost(this);
}

HTTPParser::HostContext* HTTPParser::host() {
  HostContext *_localctx = _tracker.createInstance<HostContext>(_ctx, getState());
  enterRule(_localctx, 136, HTTPParser::RuleHost);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(682);
    match(HTTPParser::ID);
    setState(683);
    match(HTTPParser::T__52);
    setState(684);
    match(HTTPParser::ID);
    setState(689);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__52) {
      setState(685);
      match(HTTPParser::T__52);
      setState(686);
      match(HTTPParser::ID);
      setState(691);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PseudonymContext ------------------------------------------------------------------

HTTPParser::PseudonymContext::PseudonymContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::PseudonymContext::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::PseudonymContext::getRuleIndex() const {
  return HTTPParser::RulePseudonym;
}

void HTTPParser::PseudonymContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPseudonym(this);
}

void HTTPParser::PseudonymContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPseudonym(this);
}

HTTPParser::PseudonymContext* HTTPParser::pseudonym() {
  PseudonymContext *_localctx = _tracker.createInstance<PseudonymContext>(_ctx, getState());
  enterRule(_localctx, 138, HTTPParser::RulePseudonym);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(692);
    match(HTTPParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WarningContext ------------------------------------------------------------------

HTTPParser::WarningContext::WarningContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Warning_valueContext *> HTTPParser::WarningContext::warning_value() {
  return getRuleContexts<HTTPParser::Warning_valueContext>();
}

HTTPParser::Warning_valueContext* HTTPParser::WarningContext::warning_value(size_t i) {
  return getRuleContext<HTTPParser::Warning_valueContext>(i);
}


size_t HTTPParser::WarningContext::getRuleIndex() const {
  return HTTPParser::RuleWarning;
}

void HTTPParser::WarningContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWarning(this);
}

void HTTPParser::WarningContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWarning(this);
}

HTTPParser::WarningContext* HTTPParser::warning() {
  WarningContext *_localctx = _tracker.createInstance<WarningContext>(_ctx, getState());
  enterRule(_localctx, 140, HTTPParser::RuleWarning);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(694);
    match(HTTPParser::T__7);
    setState(695);
    match(HTTPParser::T__62);
    setState(696);
    warning_value();
    setState(701);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__73) {
      setState(697);
      match(HTTPParser::T__73);
      setState(698);
      warning_value();
      setState(703);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Warning_valueContext ------------------------------------------------------------------

HTTPParser::Warning_valueContext::Warning_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Warn_codeContext* HTTPParser::Warning_valueContext::warn_code() {
  return getRuleContext<HTTPParser::Warn_codeContext>(0);
}

HTTPParser::Warn_agentContext* HTTPParser::Warning_valueContext::warn_agent() {
  return getRuleContext<HTTPParser::Warn_agentContext>(0);
}

HTTPParser::Warn_textContext* HTTPParser::Warning_valueContext::warn_text() {
  return getRuleContext<HTTPParser::Warn_textContext>(0);
}

HTTPParser::Warn_dateContext* HTTPParser::Warning_valueContext::warn_date() {
  return getRuleContext<HTTPParser::Warn_dateContext>(0);
}


size_t HTTPParser::Warning_valueContext::getRuleIndex() const {
  return HTTPParser::RuleWarning_value;
}

void HTTPParser::Warning_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWarning_value(this);
}

void HTTPParser::Warning_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWarning_value(this);
}

HTTPParser::Warning_valueContext* HTTPParser::warning_value() {
  Warning_valueContext *_localctx = _tracker.createInstance<Warning_valueContext>(_ctx, getState());
  enterRule(_localctx, 142, HTTPParser::RuleWarning_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(704);
    warn_code();
    setState(705);
    warn_agent();
    setState(706);
    warn_text();
    setState(708);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 85) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 85)) & ((1ULL << (HTTPParser::T__84 - 85))
      | (1ULL << (HTTPParser::T__85 - 85))
      | (1ULL << (HTTPParser::T__86 - 85))
      | (1ULL << (HTTPParser::T__87 - 85))
      | (1ULL << (HTTPParser::T__88 - 85))
      | (1ULL << (HTTPParser::T__89 - 85))
      | (1ULL << (HTTPParser::T__90 - 85))
      | (1ULL << (HTTPParser::T__91 - 85))
      | (1ULL << (HTTPParser::T__92 - 85))
      | (1ULL << (HTTPParser::T__93 - 85))
      | (1ULL << (HTTPParser::T__94 - 85))
      | (1ULL << (HTTPParser::T__95 - 85))
      | (1ULL << (HTTPParser::T__96 - 85))
      | (1ULL << (HTTPParser::T__97 - 85)))) != 0)) {
      setState(707);
      warn_date();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Warn_codeContext ------------------------------------------------------------------

HTTPParser::Warn_codeContext::Warn_codeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Warn_codeContext::NUMBER() {
  return getToken(HTTPParser::NUMBER, 0);
}


size_t HTTPParser::Warn_codeContext::getRuleIndex() const {
  return HTTPParser::RuleWarn_code;
}

void HTTPParser::Warn_codeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWarn_code(this);
}

void HTTPParser::Warn_codeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWarn_code(this);
}

HTTPParser::Warn_codeContext* HTTPParser::warn_code() {
  Warn_codeContext *_localctx = _tracker.createInstance<Warn_codeContext>(_ctx, getState());
  enterRule(_localctx, 144, HTTPParser::RuleWarn_code);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(710);
    match(HTTPParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Warn_agentContext ------------------------------------------------------------------

HTTPParser::Warn_agentContext::Warn_agentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::HostContext* HTTPParser::Warn_agentContext::host() {
  return getRuleContext<HTTPParser::HostContext>(0);
}

HTTPParser::PseudonymContext* HTTPParser::Warn_agentContext::pseudonym() {
  return getRuleContext<HTTPParser::PseudonymContext>(0);
}

HTTPParser::PortContext* HTTPParser::Warn_agentContext::port() {
  return getRuleContext<HTTPParser::PortContext>(0);
}


size_t HTTPParser::Warn_agentContext::getRuleIndex() const {
  return HTTPParser::RuleWarn_agent;
}

void HTTPParser::Warn_agentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWarn_agent(this);
}

void HTTPParser::Warn_agentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWarn_agent(this);
}

HTTPParser::Warn_agentContext* HTTPParser::warn_agent() {
  Warn_agentContext *_localctx = _tracker.createInstance<Warn_agentContext>(_ctx, getState());
  enterRule(_localctx, 146, HTTPParser::RuleWarn_agent);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(712);
    host();
    setState(713);
    match(HTTPParser::T__62);
    setState(718);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HTTPParser::STRING:
      case HTTPParser::NUMBER: {
        setState(715);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HTTPParser::NUMBER) {
          setState(714);
          port();
        }
        break;
      }

      case HTTPParser::ID: {
        setState(717);
        pseudonym();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PortContext ------------------------------------------------------------------

HTTPParser::PortContext::PortContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::PortContext::NUMBER() {
  return getToken(HTTPParser::NUMBER, 0);
}


size_t HTTPParser::PortContext::getRuleIndex() const {
  return HTTPParser::RulePort;
}

void HTTPParser::PortContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPort(this);
}

void HTTPParser::PortContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPort(this);
}

HTTPParser::PortContext* HTTPParser::port() {
  PortContext *_localctx = _tracker.createInstance<PortContext>(_ctx, getState());
  enterRule(_localctx, 148, HTTPParser::RulePort);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(720);
    match(HTTPParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Warn_textContext ------------------------------------------------------------------

HTTPParser::Warn_textContext::Warn_textContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::StringlitContext* HTTPParser::Warn_textContext::stringlit() {
  return getRuleContext<HTTPParser::StringlitContext>(0);
}


size_t HTTPParser::Warn_textContext::getRuleIndex() const {
  return HTTPParser::RuleWarn_text;
}

void HTTPParser::Warn_textContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWarn_text(this);
}

void HTTPParser::Warn_textContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWarn_text(this);
}

HTTPParser::Warn_textContext* HTTPParser::warn_text() {
  Warn_textContext *_localctx = _tracker.createInstance<Warn_textContext>(_ctx, getState());
  enterRule(_localctx, 150, HTTPParser::RuleWarn_text);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(722);
    stringlit();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Warn_dateContext ------------------------------------------------------------------

HTTPParser::Warn_dateContext::Warn_dateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Http_dateContext* HTTPParser::Warn_dateContext::http_date() {
  return getRuleContext<HTTPParser::Http_dateContext>(0);
}


size_t HTTPParser::Warn_dateContext::getRuleIndex() const {
  return HTTPParser::RuleWarn_date;
}

void HTTPParser::Warn_dateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWarn_date(this);
}

void HTTPParser::Warn_dateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWarn_date(this);
}

HTTPParser::Warn_dateContext* HTTPParser::warn_date() {
  Warn_dateContext *_localctx = _tracker.createInstance<Warn_dateContext>(_ctx, getState());
  enterRule(_localctx, 152, HTTPParser::RuleWarn_date);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(724);
    http_date();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Request_headerContext ------------------------------------------------------------------

HTTPParser::Request_headerContext::Request_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::AcceptContext* HTTPParser::Request_headerContext::accept() {
  return getRuleContext<HTTPParser::AcceptContext>(0);
}

HTTPParser::Accept_charsetContext* HTTPParser::Request_headerContext::accept_charset() {
  return getRuleContext<HTTPParser::Accept_charsetContext>(0);
}

HTTPParser::Accept_encodingContext* HTTPParser::Request_headerContext::accept_encoding() {
  return getRuleContext<HTTPParser::Accept_encodingContext>(0);
}

HTTPParser::Accept_languageContext* HTTPParser::Request_headerContext::accept_language() {
  return getRuleContext<HTTPParser::Accept_languageContext>(0);
}

HTTPParser::AuthorizationContext* HTTPParser::Request_headerContext::authorization() {
  return getRuleContext<HTTPParser::AuthorizationContext>(0);
}

HTTPParser::ExpectContext* HTTPParser::Request_headerContext::expect() {
  return getRuleContext<HTTPParser::ExpectContext>(0);
}

HTTPParser::FromContext* HTTPParser::Request_headerContext::from() {
  return getRuleContext<HTTPParser::FromContext>(0);
}

HTTPParser::Host_Context* HTTPParser::Request_headerContext::host_() {
  return getRuleContext<HTTPParser::Host_Context>(0);
}

HTTPParser::If_matchContext* HTTPParser::Request_headerContext::if_match() {
  return getRuleContext<HTTPParser::If_matchContext>(0);
}

HTTPParser::If_modified_sinceContext* HTTPParser::Request_headerContext::if_modified_since() {
  return getRuleContext<HTTPParser::If_modified_sinceContext>(0);
}

HTTPParser::If_none_matchContext* HTTPParser::Request_headerContext::if_none_match() {
  return getRuleContext<HTTPParser::If_none_matchContext>(0);
}

HTTPParser::If_rangeContext* HTTPParser::Request_headerContext::if_range() {
  return getRuleContext<HTTPParser::If_rangeContext>(0);
}

HTTPParser::If_unmodified_sinceContext* HTTPParser::Request_headerContext::if_unmodified_since() {
  return getRuleContext<HTTPParser::If_unmodified_sinceContext>(0);
}

HTTPParser::Max_forwardsContext* HTTPParser::Request_headerContext::max_forwards() {
  return getRuleContext<HTTPParser::Max_forwardsContext>(0);
}

HTTPParser::Proxy_authorizationContext* HTTPParser::Request_headerContext::proxy_authorization() {
  return getRuleContext<HTTPParser::Proxy_authorizationContext>(0);
}

HTTPParser::RangeContext* HTTPParser::Request_headerContext::range() {
  return getRuleContext<HTTPParser::RangeContext>(0);
}

HTTPParser::RefererContext* HTTPParser::Request_headerContext::referer() {
  return getRuleContext<HTTPParser::RefererContext>(0);
}

HTTPParser::TeContext* HTTPParser::Request_headerContext::te() {
  return getRuleContext<HTTPParser::TeContext>(0);
}

HTTPParser::User_agentContext* HTTPParser::Request_headerContext::user_agent() {
  return getRuleContext<HTTPParser::User_agentContext>(0);
}


size_t HTTPParser::Request_headerContext::getRuleIndex() const {
  return HTTPParser::RuleRequest_header;
}

void HTTPParser::Request_headerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequest_header(this);
}

void HTTPParser::Request_headerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequest_header(this);
}

HTTPParser::Request_headerContext* HTTPParser::request_header() {
  Request_headerContext *_localctx = _tracker.createInstance<Request_headerContext>(_ctx, getState());
  enterRule(_localctx, 154, HTTPParser::RuleRequest_header);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(748);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(726);
      accept();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(727);
      accept_charset();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(728);
      accept_encoding();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(729);
      accept_language();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(730);
      authorization();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(731);
      expect();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(732);
      from();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(733);
      host_();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(734);
      if_match();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(735);
      if_modified_since();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(736);
      if_none_match();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(737);
      if_range();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(738);
      if_unmodified_since();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(739);
      if_none_match();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(740);
      if_range();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(741);
      if_unmodified_since();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(742);
      max_forwards();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(743);
      proxy_authorization();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(744);
      range();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(745);
      referer();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(746);
      te();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(747);
      user_agent();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AcceptContext ------------------------------------------------------------------

HTTPParser::AcceptContext::AcceptContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Accept_infoContext *> HTTPParser::AcceptContext::accept_info() {
  return getRuleContexts<HTTPParser::Accept_infoContext>();
}

HTTPParser::Accept_infoContext* HTTPParser::AcceptContext::accept_info(size_t i) {
  return getRuleContext<HTTPParser::Accept_infoContext>(i);
}


size_t HTTPParser::AcceptContext::getRuleIndex() const {
  return HTTPParser::RuleAccept;
}

void HTTPParser::AcceptContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccept(this);
}

void HTTPParser::AcceptContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccept(this);
}

HTTPParser::AcceptContext* HTTPParser::accept() {
  AcceptContext *_localctx = _tracker.createInstance<AcceptContext>(_ctx, getState());
  enterRule(_localctx, 156, HTTPParser::RuleAccept);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(750);
    match(HTTPParser::T__8);
    setState(751);
    match(HTTPParser::T__62);
    setState(752);
    accept_info();
    setState(757);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__73) {
      setState(753);
      match(HTTPParser::T__73);
      setState(754);
      accept_info();
      setState(759);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Accept_infoContext ------------------------------------------------------------------

HTTPParser::Accept_infoContext::Accept_infoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Media_rangeContext* HTTPParser::Accept_infoContext::media_range() {
  return getRuleContext<HTTPParser::Media_rangeContext>(0);
}

std::vector<HTTPParser::Accept_paramsContext *> HTTPParser::Accept_infoContext::accept_params() {
  return getRuleContexts<HTTPParser::Accept_paramsContext>();
}

HTTPParser::Accept_paramsContext* HTTPParser::Accept_infoContext::accept_params(size_t i) {
  return getRuleContext<HTTPParser::Accept_paramsContext>(i);
}


size_t HTTPParser::Accept_infoContext::getRuleIndex() const {
  return HTTPParser::RuleAccept_info;
}

void HTTPParser::Accept_infoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccept_info(this);
}

void HTTPParser::Accept_infoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccept_info(this);
}

HTTPParser::Accept_infoContext* HTTPParser::accept_info() {
  Accept_infoContext *_localctx = _tracker.createInstance<Accept_infoContext>(_ctx, getState());
  enterRule(_localctx, 158, HTTPParser::RuleAccept_info);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(760);
    media_range();
    setState(762);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HTTPParser::T__64) {
      setState(761);
      accept_params();
    }
    setState(768);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(764);
        match(HTTPParser::T__73);
        setState(765);
        accept_params(); 
      }
      setState(770);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Media_rangeContext ------------------------------------------------------------------

HTTPParser::Media_rangeContext::Media_rangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::TypeContext* HTTPParser::Media_rangeContext::type() {
  return getRuleContext<HTTPParser::TypeContext>(0);
}

HTTPParser::SubtypeContext* HTTPParser::Media_rangeContext::subtype() {
  return getRuleContext<HTTPParser::SubtypeContext>(0);
}


size_t HTTPParser::Media_rangeContext::getRuleIndex() const {
  return HTTPParser::RuleMedia_range;
}

void HTTPParser::Media_rangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMedia_range(this);
}

void HTTPParser::Media_rangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMedia_range(this);
}

HTTPParser::Media_rangeContext* HTTPParser::media_range() {
  Media_rangeContext *_localctx = _tracker.createInstance<Media_rangeContext>(_ctx, getState());
  enterRule(_localctx, 160, HTTPParser::RuleMedia_range);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(779);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(771);
      match(HTTPParser::T__111);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(772);
      type();
      setState(773);
      match(HTTPParser::T__112);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(775);
      type();
      setState(776);
      match(HTTPParser::T__48);
      setState(777);
      subtype();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

HTTPParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::TypeContext::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::TypeContext::getRuleIndex() const {
  return HTTPParser::RuleType;
}

void HTTPParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void HTTPParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

HTTPParser::TypeContext* HTTPParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 162, HTTPParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(781);
    match(HTTPParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtypeContext ------------------------------------------------------------------

HTTPParser::SubtypeContext::SubtypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::SubtypeContext::ID() {
  return getToken(HTTPParser::ID, 0);
}

std::vector<HTTPParser::Subtype_extensionContext *> HTTPParser::SubtypeContext::subtype_extension() {
  return getRuleContexts<HTTPParser::Subtype_extensionContext>();
}

HTTPParser::Subtype_extensionContext* HTTPParser::SubtypeContext::subtype_extension(size_t i) {
  return getRuleContext<HTTPParser::Subtype_extensionContext>(i);
}


size_t HTTPParser::SubtypeContext::getRuleIndex() const {
  return HTTPParser::RuleSubtype;
}

void HTTPParser::SubtypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtype(this);
}

void HTTPParser::SubtypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtype(this);
}

HTTPParser::SubtypeContext* HTTPParser::subtype() {
  SubtypeContext *_localctx = _tracker.createInstance<SubtypeContext>(_ctx, getState());
  enterRule(_localctx, 164, HTTPParser::RuleSubtype);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(783);
    match(HTTPParser::ID);
    setState(785); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(784);
      subtype_extension();
      setState(787); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HTTPParser::T__113);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Subtype_extensionContext ------------------------------------------------------------------

HTTPParser::Subtype_extensionContext::Subtype_extensionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Subtype_extensionContext::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::Subtype_extensionContext::getRuleIndex() const {
  return HTTPParser::RuleSubtype_extension;
}

void HTTPParser::Subtype_extensionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtype_extension(this);
}

void HTTPParser::Subtype_extensionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtype_extension(this);
}

HTTPParser::Subtype_extensionContext* HTTPParser::subtype_extension() {
  Subtype_extensionContext *_localctx = _tracker.createInstance<Subtype_extensionContext>(_ctx, getState());
  enterRule(_localctx, 166, HTTPParser::RuleSubtype_extension);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(789);
    match(HTTPParser::T__113);
    setState(790);
    match(HTTPParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Accept_paramsContext ------------------------------------------------------------------

HTTPParser::Accept_paramsContext::Accept_paramsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::QvalueContext* HTTPParser::Accept_paramsContext::qvalue() {
  return getRuleContext<HTTPParser::QvalueContext>(0);
}

HTTPParser::Accept_extensionContext* HTTPParser::Accept_paramsContext::accept_extension() {
  return getRuleContext<HTTPParser::Accept_extensionContext>(0);
}


size_t HTTPParser::Accept_paramsContext::getRuleIndex() const {
  return HTTPParser::RuleAccept_params;
}

void HTTPParser::Accept_paramsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccept_params(this);
}

void HTTPParser::Accept_paramsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccept_params(this);
}

HTTPParser::Accept_paramsContext* HTTPParser::accept_params() {
  Accept_paramsContext *_localctx = _tracker.createInstance<Accept_paramsContext>(_ctx, getState());
  enterRule(_localctx, 168, HTTPParser::RuleAccept_params);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(792);
    match(HTTPParser::T__64);
    setState(793);
    match(HTTPParser::T__114);
    setState(794);
    match(HTTPParser::T__55);
    setState(795);
    qvalue();
    setState(797);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HTTPParser::T__64) {
      setState(796);
      accept_extension();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QvalueContext ------------------------------------------------------------------

HTTPParser::QvalueContext::QvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HTTPParser::QvalueContext::getRuleIndex() const {
  return HTTPParser::RuleQvalue;
}

void HTTPParser::QvalueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQvalue(this);
}

void HTTPParser::QvalueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQvalue(this);
}

HTTPParser::QvalueContext* HTTPParser::qvalue() {
  QvalueContext *_localctx = _tracker.createInstance<QvalueContext>(_ctx, getState());
  enterRule(_localctx, 170, HTTPParser::RuleQvalue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(799);
    _la = _input->LA(1);
    if (!(_la == HTTPParser::T__58 || ((((_la - 116) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 116)) & ((1ULL << (HTTPParser::T__115 - 116))
      | (1ULL << (HTTPParser::T__116 - 116))
      | (1ULL << (HTTPParser::T__117 - 116))
      | (1ULL << (HTTPParser::T__118 - 116))
      | (1ULL << (HTTPParser::T__119 - 116))
      | (1ULL << (HTTPParser::T__120 - 116))
      | (1ULL << (HTTPParser::T__121 - 116))
      | (1ULL << (HTTPParser::T__122 - 116))
      | (1ULL << (HTTPParser::T__123 - 116))
      | (1ULL << (HTTPParser::T__124 - 116)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Accept_extensionContext ------------------------------------------------------------------

HTTPParser::Accept_extensionContext::Accept_extensionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HTTPParser::Accept_extensionContext::ID() {
  return getTokens(HTTPParser::ID);
}

tree::TerminalNode* HTTPParser::Accept_extensionContext::ID(size_t i) {
  return getToken(HTTPParser::ID, i);
}

HTTPParser::StringlitContext* HTTPParser::Accept_extensionContext::stringlit() {
  return getRuleContext<HTTPParser::StringlitContext>(0);
}


size_t HTTPParser::Accept_extensionContext::getRuleIndex() const {
  return HTTPParser::RuleAccept_extension;
}

void HTTPParser::Accept_extensionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccept_extension(this);
}

void HTTPParser::Accept_extensionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccept_extension(this);
}

HTTPParser::Accept_extensionContext* HTTPParser::accept_extension() {
  Accept_extensionContext *_localctx = _tracker.createInstance<Accept_extensionContext>(_ctx, getState());
  enterRule(_localctx, 172, HTTPParser::RuleAccept_extension);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(809);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(801);
      match(HTTPParser::T__64);
      setState(802);
      match(HTTPParser::ID);
      setState(803);
      match(HTTPParser::T__55);
      setState(804);
      match(HTTPParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(805);
      match(HTTPParser::T__64);
      setState(806);
      match(HTTPParser::ID);
      setState(807);
      match(HTTPParser::T__55);
      setState(808);
      stringlit();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Accept_charsetContext ------------------------------------------------------------------

HTTPParser::Accept_charsetContext::Accept_charsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Accept_charset_infoContext *> HTTPParser::Accept_charsetContext::accept_charset_info() {
  return getRuleContexts<HTTPParser::Accept_charset_infoContext>();
}

HTTPParser::Accept_charset_infoContext* HTTPParser::Accept_charsetContext::accept_charset_info(size_t i) {
  return getRuleContext<HTTPParser::Accept_charset_infoContext>(i);
}


size_t HTTPParser::Accept_charsetContext::getRuleIndex() const {
  return HTTPParser::RuleAccept_charset;
}

void HTTPParser::Accept_charsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccept_charset(this);
}

void HTTPParser::Accept_charsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccept_charset(this);
}

HTTPParser::Accept_charsetContext* HTTPParser::accept_charset() {
  Accept_charsetContext *_localctx = _tracker.createInstance<Accept_charsetContext>(_ctx, getState());
  enterRule(_localctx, 174, HTTPParser::RuleAccept_charset);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(811);
    match(HTTPParser::T__9);
    setState(812);
    match(HTTPParser::T__62);
    setState(813);
    accept_charset_info();
    setState(818);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__73) {
      setState(814);
      match(HTTPParser::T__73);
      setState(815);
      accept_charset_info();
      setState(820);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Accept_charset_infoContext ------------------------------------------------------------------

HTTPParser::Accept_charset_infoContext::Accept_charset_infoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::CharsetContext* HTTPParser::Accept_charset_infoContext::charset() {
  return getRuleContext<HTTPParser::CharsetContext>(0);
}

HTTPParser::Quality_valueContext* HTTPParser::Accept_charset_infoContext::quality_value() {
  return getRuleContext<HTTPParser::Quality_valueContext>(0);
}


size_t HTTPParser::Accept_charset_infoContext::getRuleIndex() const {
  return HTTPParser::RuleAccept_charset_info;
}

void HTTPParser::Accept_charset_infoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccept_charset_info(this);
}

void HTTPParser::Accept_charset_infoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccept_charset_info(this);
}

HTTPParser::Accept_charset_infoContext* HTTPParser::accept_charset_info() {
  Accept_charset_infoContext *_localctx = _tracker.createInstance<Accept_charset_infoContext>(_ctx, getState());
  enterRule(_localctx, 176, HTTPParser::RuleAccept_charset_info);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(821);
    charset();
    setState(823);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HTTPParser::T__64) {
      setState(822);
      quality_value();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharsetContext ------------------------------------------------------------------

HTTPParser::CharsetContext::CharsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::CharsetContext::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::CharsetContext::getRuleIndex() const {
  return HTTPParser::RuleCharset;
}

void HTTPParser::CharsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharset(this);
}

void HTTPParser::CharsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharset(this);
}

HTTPParser::CharsetContext* HTTPParser::charset() {
  CharsetContext *_localctx = _tracker.createInstance<CharsetContext>(_ctx, getState());
  enterRule(_localctx, 178, HTTPParser::RuleCharset);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(825);
    _la = _input->LA(1);
    if (!(_la == HTTPParser::T__125

    || _la == HTTPParser::ID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Quality_valueContext ------------------------------------------------------------------

HTTPParser::Quality_valueContext::Quality_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::QvalueContext* HTTPParser::Quality_valueContext::qvalue() {
  return getRuleContext<HTTPParser::QvalueContext>(0);
}


size_t HTTPParser::Quality_valueContext::getRuleIndex() const {
  return HTTPParser::RuleQuality_value;
}

void HTTPParser::Quality_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuality_value(this);
}

void HTTPParser::Quality_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuality_value(this);
}

HTTPParser::Quality_valueContext* HTTPParser::quality_value() {
  Quality_valueContext *_localctx = _tracker.createInstance<Quality_valueContext>(_ctx, getState());
  enterRule(_localctx, 180, HTTPParser::RuleQuality_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(827);
    match(HTTPParser::T__64);
    setState(828);
    match(HTTPParser::T__114);
    setState(829);
    match(HTTPParser::T__55);
    setState(830);
    qvalue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Accept_encodingContext ------------------------------------------------------------------

HTTPParser::Accept_encodingContext::Accept_encodingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Accept_encoding_infoContext *> HTTPParser::Accept_encodingContext::accept_encoding_info() {
  return getRuleContexts<HTTPParser::Accept_encoding_infoContext>();
}

HTTPParser::Accept_encoding_infoContext* HTTPParser::Accept_encodingContext::accept_encoding_info(size_t i) {
  return getRuleContext<HTTPParser::Accept_encoding_infoContext>(i);
}


size_t HTTPParser::Accept_encodingContext::getRuleIndex() const {
  return HTTPParser::RuleAccept_encoding;
}

void HTTPParser::Accept_encodingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccept_encoding(this);
}

void HTTPParser::Accept_encodingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccept_encoding(this);
}

HTTPParser::Accept_encodingContext* HTTPParser::accept_encoding() {
  Accept_encodingContext *_localctx = _tracker.createInstance<Accept_encodingContext>(_ctx, getState());
  enterRule(_localctx, 182, HTTPParser::RuleAccept_encoding);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(832);
    match(HTTPParser::T__10);
    setState(833);
    match(HTTPParser::T__62);
    setState(834);
    accept_encoding_info();
    setState(839);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__73) {
      setState(835);
      match(HTTPParser::T__73);
      setState(836);
      accept_encoding_info();
      setState(841);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Accept_encoding_infoContext ------------------------------------------------------------------

HTTPParser::Accept_encoding_infoContext::Accept_encoding_infoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::CodingContext* HTTPParser::Accept_encoding_infoContext::coding() {
  return getRuleContext<HTTPParser::CodingContext>(0);
}

HTTPParser::Quality_valueContext* HTTPParser::Accept_encoding_infoContext::quality_value() {
  return getRuleContext<HTTPParser::Quality_valueContext>(0);
}


size_t HTTPParser::Accept_encoding_infoContext::getRuleIndex() const {
  return HTTPParser::RuleAccept_encoding_info;
}

void HTTPParser::Accept_encoding_infoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccept_encoding_info(this);
}

void HTTPParser::Accept_encoding_infoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccept_encoding_info(this);
}

HTTPParser::Accept_encoding_infoContext* HTTPParser::accept_encoding_info() {
  Accept_encoding_infoContext *_localctx = _tracker.createInstance<Accept_encoding_infoContext>(_ctx, getState());
  enterRule(_localctx, 184, HTTPParser::RuleAccept_encoding_info);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(842);
    coding();
    setState(844);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HTTPParser::T__64) {
      setState(843);
      quality_value();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodingContext ------------------------------------------------------------------

HTTPParser::CodingContext::CodingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::CodingContext::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::CodingContext::getRuleIndex() const {
  return HTTPParser::RuleCoding;
}

void HTTPParser::CodingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCoding(this);
}

void HTTPParser::CodingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCoding(this);
}

HTTPParser::CodingContext* HTTPParser::coding() {
  CodingContext *_localctx = _tracker.createInstance<CodingContext>(_ctx, getState());
  enterRule(_localctx, 186, HTTPParser::RuleCoding);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(846);
    _la = _input->LA(1);
    if (!(_la == HTTPParser::T__125

    || _la == HTTPParser::ID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Accept_languageContext ------------------------------------------------------------------

HTTPParser::Accept_languageContext::Accept_languageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Accept_language_infoContext *> HTTPParser::Accept_languageContext::accept_language_info() {
  return getRuleContexts<HTTPParser::Accept_language_infoContext>();
}

HTTPParser::Accept_language_infoContext* HTTPParser::Accept_languageContext::accept_language_info(size_t i) {
  return getRuleContext<HTTPParser::Accept_language_infoContext>(i);
}


size_t HTTPParser::Accept_languageContext::getRuleIndex() const {
  return HTTPParser::RuleAccept_language;
}

void HTTPParser::Accept_languageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccept_language(this);
}

void HTTPParser::Accept_languageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccept_language(this);
}

HTTPParser::Accept_languageContext* HTTPParser::accept_language() {
  Accept_languageContext *_localctx = _tracker.createInstance<Accept_languageContext>(_ctx, getState());
  enterRule(_localctx, 188, HTTPParser::RuleAccept_language);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(848);
    match(HTTPParser::T__11);
    setState(849);
    match(HTTPParser::T__62);
    setState(850);
    accept_language_info();
    setState(855);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__73) {
      setState(851);
      match(HTTPParser::T__73);
      setState(852);
      accept_language_info();
      setState(857);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Accept_language_infoContext ------------------------------------------------------------------

HTTPParser::Accept_language_infoContext::Accept_language_infoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Language_rangeContext* HTTPParser::Accept_language_infoContext::language_range() {
  return getRuleContext<HTTPParser::Language_rangeContext>(0);
}

HTTPParser::Quality_valueContext* HTTPParser::Accept_language_infoContext::quality_value() {
  return getRuleContext<HTTPParser::Quality_valueContext>(0);
}


size_t HTTPParser::Accept_language_infoContext::getRuleIndex() const {
  return HTTPParser::RuleAccept_language_info;
}

void HTTPParser::Accept_language_infoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccept_language_info(this);
}

void HTTPParser::Accept_language_infoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccept_language_info(this);
}

HTTPParser::Accept_language_infoContext* HTTPParser::accept_language_info() {
  Accept_language_infoContext *_localctx = _tracker.createInstance<Accept_language_infoContext>(_ctx, getState());
  enterRule(_localctx, 190, HTTPParser::RuleAccept_language_info);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(858);
    language_range();
    setState(860);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HTTPParser::T__64) {
      setState(859);
      quality_value();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Language_rangeContext ------------------------------------------------------------------

HTTPParser::Language_rangeContext::Language_rangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HTTPParser::Language_rangeContext::ID() {
  return getTokens(HTTPParser::ID);
}

tree::TerminalNode* HTTPParser::Language_rangeContext::ID(size_t i) {
  return getToken(HTTPParser::ID, i);
}


size_t HTTPParser::Language_rangeContext::getRuleIndex() const {
  return HTTPParser::RuleLanguage_range;
}

void HTTPParser::Language_rangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLanguage_range(this);
}

void HTTPParser::Language_rangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLanguage_range(this);
}

HTTPParser::Language_rangeContext* HTTPParser::language_range() {
  Language_rangeContext *_localctx = _tracker.createInstance<Language_rangeContext>(_ctx, getState());
  enterRule(_localctx, 192, HTTPParser::RuleLanguage_range);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(867);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(862);
      match(HTTPParser::T__125);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(863);
      match(HTTPParser::ID);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(864);
      match(HTTPParser::ID);
      setState(865);
      match(HTTPParser::T__53);
      setState(866);
      match(HTTPParser::ID);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AuthorizationContext ------------------------------------------------------------------

HTTPParser::AuthorizationContext::AuthorizationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::CredentialsContext* HTTPParser::AuthorizationContext::credentials() {
  return getRuleContext<HTTPParser::CredentialsContext>(0);
}


size_t HTTPParser::AuthorizationContext::getRuleIndex() const {
  return HTTPParser::RuleAuthorization;
}

void HTTPParser::AuthorizationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAuthorization(this);
}

void HTTPParser::AuthorizationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAuthorization(this);
}

HTTPParser::AuthorizationContext* HTTPParser::authorization() {
  AuthorizationContext *_localctx = _tracker.createInstance<AuthorizationContext>(_ctx, getState());
  enterRule(_localctx, 194, HTTPParser::RuleAuthorization);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(869);
    match(HTTPParser::T__12);
    setState(870);
    match(HTTPParser::T__62);
    setState(871);
    credentials();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CredentialsContext ------------------------------------------------------------------

HTTPParser::CredentialsContext::CredentialsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::CredentialsContext::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::CredentialsContext::getRuleIndex() const {
  return HTTPParser::RuleCredentials;
}

void HTTPParser::CredentialsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCredentials(this);
}

void HTTPParser::CredentialsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCredentials(this);
}

HTTPParser::CredentialsContext* HTTPParser::credentials() {
  CredentialsContext *_localctx = _tracker.createInstance<CredentialsContext>(_ctx, getState());
  enterRule(_localctx, 196, HTTPParser::RuleCredentials);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(873);
    match(HTTPParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpectContext ------------------------------------------------------------------

HTTPParser::ExpectContext::ExpectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Expect_infoContext *> HTTPParser::ExpectContext::expect_info() {
  return getRuleContexts<HTTPParser::Expect_infoContext>();
}

HTTPParser::Expect_infoContext* HTTPParser::ExpectContext::expect_info(size_t i) {
  return getRuleContext<HTTPParser::Expect_infoContext>(i);
}


size_t HTTPParser::ExpectContext::getRuleIndex() const {
  return HTTPParser::RuleExpect;
}

void HTTPParser::ExpectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpect(this);
}

void HTTPParser::ExpectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpect(this);
}

HTTPParser::ExpectContext* HTTPParser::expect() {
  ExpectContext *_localctx = _tracker.createInstance<ExpectContext>(_ctx, getState());
  enterRule(_localctx, 198, HTTPParser::RuleExpect);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(875);
    match(HTTPParser::T__13);
    setState(876);
    match(HTTPParser::T__62);
    setState(877);
    expect_info();
    setState(882);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__73) {
      setState(878);
      match(HTTPParser::T__73);
      setState(879);
      expect_info();
      setState(884);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expect_infoContext ------------------------------------------------------------------

HTTPParser::Expect_infoContext::Expect_infoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Expectation_extensionContext* HTTPParser::Expect_infoContext::expectation_extension() {
  return getRuleContext<HTTPParser::Expectation_extensionContext>(0);
}


size_t HTTPParser::Expect_infoContext::getRuleIndex() const {
  return HTTPParser::RuleExpect_info;
}

void HTTPParser::Expect_infoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpect_info(this);
}

void HTTPParser::Expect_infoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpect_info(this);
}

HTTPParser::Expect_infoContext* HTTPParser::expect_info() {
  Expect_infoContext *_localctx = _tracker.createInstance<Expect_infoContext>(_ctx, getState());
  enterRule(_localctx, 200, HTTPParser::RuleExpect_info);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(887);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HTTPParser::T__126: {
        enterOuterAlt(_localctx, 1);
        setState(885);
        match(HTTPParser::T__126);
        break;
      }

      case HTTPParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(886);
        expectation_extension();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expectation_extensionContext ------------------------------------------------------------------

HTTPParser::Expectation_extensionContext::Expectation_extensionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HTTPParser::Expectation_extensionContext::ID() {
  return getTokens(HTTPParser::ID);
}

tree::TerminalNode* HTTPParser::Expectation_extensionContext::ID(size_t i) {
  return getToken(HTTPParser::ID, i);
}

HTTPParser::Expect_paramsContext* HTTPParser::Expectation_extensionContext::expect_params() {
  return getRuleContext<HTTPParser::Expect_paramsContext>(0);
}

HTTPParser::StringlitContext* HTTPParser::Expectation_extensionContext::stringlit() {
  return getRuleContext<HTTPParser::StringlitContext>(0);
}


size_t HTTPParser::Expectation_extensionContext::getRuleIndex() const {
  return HTTPParser::RuleExpectation_extension;
}

void HTTPParser::Expectation_extensionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpectation_extension(this);
}

void HTTPParser::Expectation_extensionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpectation_extension(this);
}

HTTPParser::Expectation_extensionContext* HTTPParser::expectation_extension() {
  Expectation_extensionContext *_localctx = _tracker.createInstance<Expectation_extensionContext>(_ctx, getState());
  enterRule(_localctx, 202, HTTPParser::RuleExpectation_extension);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(902);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(889);
      match(HTTPParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(890);
      match(HTTPParser::ID);
      setState(891);
      match(HTTPParser::T__55);
      setState(892);
      match(HTTPParser::ID);
      setState(894);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HTTPParser::T__64) {
        setState(893);
        expect_params();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(896);
      match(HTTPParser::ID);
      setState(897);
      match(HTTPParser::T__55);
      setState(898);
      stringlit();
      setState(900);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HTTPParser::T__64) {
        setState(899);
        expect_params();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expect_paramsContext ------------------------------------------------------------------

HTTPParser::Expect_paramsContext::Expect_paramsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HTTPParser::Expect_paramsContext::ID() {
  return getTokens(HTTPParser::ID);
}

tree::TerminalNode* HTTPParser::Expect_paramsContext::ID(size_t i) {
  return getToken(HTTPParser::ID, i);
}

HTTPParser::StringlitContext* HTTPParser::Expect_paramsContext::stringlit() {
  return getRuleContext<HTTPParser::StringlitContext>(0);
}


size_t HTTPParser::Expect_paramsContext::getRuleIndex() const {
  return HTTPParser::RuleExpect_params;
}

void HTTPParser::Expect_paramsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpect_params(this);
}

void HTTPParser::Expect_paramsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpect_params(this);
}

HTTPParser::Expect_paramsContext* HTTPParser::expect_params() {
  Expect_paramsContext *_localctx = _tracker.createInstance<Expect_paramsContext>(_ctx, getState());
  enterRule(_localctx, 204, HTTPParser::RuleExpect_params);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(914);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(904);
      match(HTTPParser::T__64);
      setState(905);
      match(HTTPParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(906);
      match(HTTPParser::T__64);
      setState(907);
      match(HTTPParser::ID);
      setState(908);
      match(HTTPParser::T__55);
      setState(909);
      match(HTTPParser::ID);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(910);
      match(HTTPParser::T__64);
      setState(911);
      match(HTTPParser::ID);
      setState(912);
      match(HTTPParser::T__55);
      setState(913);
      stringlit();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FromContext ------------------------------------------------------------------

HTTPParser::FromContext::FromContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::FromContext::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::FromContext::getRuleIndex() const {
  return HTTPParser::RuleFrom;
}

void HTTPParser::FromContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFrom(this);
}

void HTTPParser::FromContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFrom(this);
}

HTTPParser::FromContext* HTTPParser::from() {
  FromContext *_localctx = _tracker.createInstance<FromContext>(_ctx, getState());
  enterRule(_localctx, 206, HTTPParser::RuleFrom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(916);
    match(HTTPParser::T__14);
    setState(917);
    match(HTTPParser::T__62);
    setState(918);
    match(HTTPParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Host_Context ------------------------------------------------------------------

HTTPParser::Host_Context::Host_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::HostContext* HTTPParser::Host_Context::host() {
  return getRuleContext<HTTPParser::HostContext>(0);
}


size_t HTTPParser::Host_Context::getRuleIndex() const {
  return HTTPParser::RuleHost_;
}

void HTTPParser::Host_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHost_(this);
}

void HTTPParser::Host_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHost_(this);
}

HTTPParser::Host_Context* HTTPParser::host_() {
  Host_Context *_localctx = _tracker.createInstance<Host_Context>(_ctx, getState());
  enterRule(_localctx, 208, HTTPParser::RuleHost_);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(920);
    match(HTTPParser::T__15);
    setState(921);
    match(HTTPParser::T__62);
    setState(922);
    host();
    setState(924);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HTTPParser::T__62) {
      setState(923);
      match(HTTPParser::T__62);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_matchContext ------------------------------------------------------------------

HTTPParser::If_matchContext::If_matchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::If_match_infoContext* HTTPParser::If_matchContext::if_match_info() {
  return getRuleContext<HTTPParser::If_match_infoContext>(0);
}


size_t HTTPParser::If_matchContext::getRuleIndex() const {
  return HTTPParser::RuleIf_match;
}

void HTTPParser::If_matchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_match(this);
}

void HTTPParser::If_matchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_match(this);
}

HTTPParser::If_matchContext* HTTPParser::if_match() {
  If_matchContext *_localctx = _tracker.createInstance<If_matchContext>(_ctx, getState());
  enterRule(_localctx, 210, HTTPParser::RuleIf_match);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(926);
    match(HTTPParser::T__16);
    setState(927);
    match(HTTPParser::T__62);
    setState(928);
    if_match_info();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_match_infoContext ------------------------------------------------------------------

HTTPParser::If_match_infoContext::If_match_infoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Entity_tagContext *> HTTPParser::If_match_infoContext::entity_tag() {
  return getRuleContexts<HTTPParser::Entity_tagContext>();
}

HTTPParser::Entity_tagContext* HTTPParser::If_match_infoContext::entity_tag(size_t i) {
  return getRuleContext<HTTPParser::Entity_tagContext>(i);
}


size_t HTTPParser::If_match_infoContext::getRuleIndex() const {
  return HTTPParser::RuleIf_match_info;
}

void HTTPParser::If_match_infoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_match_info(this);
}

void HTTPParser::If_match_infoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_match_info(this);
}

HTTPParser::If_match_infoContext* HTTPParser::if_match_info() {
  If_match_infoContext *_localctx = _tracker.createInstance<If_match_infoContext>(_ctx, getState());
  enterRule(_localctx, 212, HTTPParser::RuleIf_match_info);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(935);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HTTPParser::T__125: {
        enterOuterAlt(_localctx, 1);
        setState(930);
        match(HTTPParser::T__125);
        break;
      }

      case HTTPParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(931);
        entity_tag();

        setState(932);
        match(HTTPParser::T__73);
        setState(933);
        entity_tag();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Entity_tagContext ------------------------------------------------------------------

HTTPParser::Entity_tagContext::Entity_tagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Entity_tagContext::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::Entity_tagContext::getRuleIndex() const {
  return HTTPParser::RuleEntity_tag;
}

void HTTPParser::Entity_tagContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEntity_tag(this);
}

void HTTPParser::Entity_tagContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEntity_tag(this);
}

HTTPParser::Entity_tagContext* HTTPParser::entity_tag() {
  Entity_tagContext *_localctx = _tracker.createInstance<Entity_tagContext>(_ctx, getState());
  enterRule(_localctx, 214, HTTPParser::RuleEntity_tag);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(937);
    match(HTTPParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_modified_sinceContext ------------------------------------------------------------------

HTTPParser::If_modified_sinceContext::If_modified_sinceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Http_dateContext* HTTPParser::If_modified_sinceContext::http_date() {
  return getRuleContext<HTTPParser::Http_dateContext>(0);
}


size_t HTTPParser::If_modified_sinceContext::getRuleIndex() const {
  return HTTPParser::RuleIf_modified_since;
}

void HTTPParser::If_modified_sinceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_modified_since(this);
}

void HTTPParser::If_modified_sinceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_modified_since(this);
}

HTTPParser::If_modified_sinceContext* HTTPParser::if_modified_since() {
  If_modified_sinceContext *_localctx = _tracker.createInstance<If_modified_sinceContext>(_ctx, getState());
  enterRule(_localctx, 216, HTTPParser::RuleIf_modified_since);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(939);
    match(HTTPParser::T__17);
    setState(940);
    match(HTTPParser::T__62);
    setState(941);
    http_date();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_none_matchContext ------------------------------------------------------------------

HTTPParser::If_none_matchContext::If_none_matchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::If_none_match_infoContext* HTTPParser::If_none_matchContext::if_none_match_info() {
  return getRuleContext<HTTPParser::If_none_match_infoContext>(0);
}


size_t HTTPParser::If_none_matchContext::getRuleIndex() const {
  return HTTPParser::RuleIf_none_match;
}

void HTTPParser::If_none_matchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_none_match(this);
}

void HTTPParser::If_none_matchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_none_match(this);
}

HTTPParser::If_none_matchContext* HTTPParser::if_none_match() {
  If_none_matchContext *_localctx = _tracker.createInstance<If_none_matchContext>(_ctx, getState());
  enterRule(_localctx, 218, HTTPParser::RuleIf_none_match);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(943);
    match(HTTPParser::T__18);
    setState(944);
    match(HTTPParser::T__62);
    setState(945);
    if_none_match_info();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_none_match_infoContext ------------------------------------------------------------------

HTTPParser::If_none_match_infoContext::If_none_match_infoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Entity_tagContext *> HTTPParser::If_none_match_infoContext::entity_tag() {
  return getRuleContexts<HTTPParser::Entity_tagContext>();
}

HTTPParser::Entity_tagContext* HTTPParser::If_none_match_infoContext::entity_tag(size_t i) {
  return getRuleContext<HTTPParser::Entity_tagContext>(i);
}


size_t HTTPParser::If_none_match_infoContext::getRuleIndex() const {
  return HTTPParser::RuleIf_none_match_info;
}

void HTTPParser::If_none_match_infoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_none_match_info(this);
}

void HTTPParser::If_none_match_infoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_none_match_info(this);
}

HTTPParser::If_none_match_infoContext* HTTPParser::if_none_match_info() {
  If_none_match_infoContext *_localctx = _tracker.createInstance<If_none_match_infoContext>(_ctx, getState());
  enterRule(_localctx, 220, HTTPParser::RuleIf_none_match_info);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(952);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HTTPParser::T__125: {
        enterOuterAlt(_localctx, 1);
        setState(947);
        match(HTTPParser::T__125);
        break;
      }

      case HTTPParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(948);
        entity_tag();

        setState(949);
        match(HTTPParser::T__73);
        setState(950);
        entity_tag();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_rangeContext ------------------------------------------------------------------

HTTPParser::If_rangeContext::If_rangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Entity_tagContext* HTTPParser::If_rangeContext::entity_tag() {
  return getRuleContext<HTTPParser::Entity_tagContext>(0);
}

HTTPParser::Http_dateContext* HTTPParser::If_rangeContext::http_date() {
  return getRuleContext<HTTPParser::Http_dateContext>(0);
}


size_t HTTPParser::If_rangeContext::getRuleIndex() const {
  return HTTPParser::RuleIf_range;
}

void HTTPParser::If_rangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_range(this);
}

void HTTPParser::If_rangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_range(this);
}

HTTPParser::If_rangeContext* HTTPParser::if_range() {
  If_rangeContext *_localctx = _tracker.createInstance<If_rangeContext>(_ctx, getState());
  enterRule(_localctx, 222, HTTPParser::RuleIf_range);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(960);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(954);
      match(HTTPParser::T__19);
      setState(955);
      match(HTTPParser::T__62);
      setState(956);
      entity_tag();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(957);
      match(HTTPParser::T__19);
      setState(958);
      match(HTTPParser::T__62);
      setState(959);
      http_date();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_unmodified_sinceContext ------------------------------------------------------------------

HTTPParser::If_unmodified_sinceContext::If_unmodified_sinceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Http_dateContext* HTTPParser::If_unmodified_sinceContext::http_date() {
  return getRuleContext<HTTPParser::Http_dateContext>(0);
}


size_t HTTPParser::If_unmodified_sinceContext::getRuleIndex() const {
  return HTTPParser::RuleIf_unmodified_since;
}

void HTTPParser::If_unmodified_sinceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_unmodified_since(this);
}

void HTTPParser::If_unmodified_sinceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_unmodified_since(this);
}

HTTPParser::If_unmodified_sinceContext* HTTPParser::if_unmodified_since() {
  If_unmodified_sinceContext *_localctx = _tracker.createInstance<If_unmodified_sinceContext>(_ctx, getState());
  enterRule(_localctx, 224, HTTPParser::RuleIf_unmodified_since);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(962);
    match(HTTPParser::T__20);
    setState(963);
    match(HTTPParser::T__62);
    setState(964);
    http_date();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Max_forwardsContext ------------------------------------------------------------------

HTTPParser::Max_forwardsContext::Max_forwardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Max_forwardsContext::NUMBER() {
  return getToken(HTTPParser::NUMBER, 0);
}


size_t HTTPParser::Max_forwardsContext::getRuleIndex() const {
  return HTTPParser::RuleMax_forwards;
}

void HTTPParser::Max_forwardsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMax_forwards(this);
}

void HTTPParser::Max_forwardsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMax_forwards(this);
}

HTTPParser::Max_forwardsContext* HTTPParser::max_forwards() {
  Max_forwardsContext *_localctx = _tracker.createInstance<Max_forwardsContext>(_ctx, getState());
  enterRule(_localctx, 226, HTTPParser::RuleMax_forwards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(966);
    match(HTTPParser::T__21);
    setState(967);
    match(HTTPParser::T__62);
    setState(968);
    match(HTTPParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Proxy_authorizationContext ------------------------------------------------------------------

HTTPParser::Proxy_authorizationContext::Proxy_authorizationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::CredentialsContext* HTTPParser::Proxy_authorizationContext::credentials() {
  return getRuleContext<HTTPParser::CredentialsContext>(0);
}


size_t HTTPParser::Proxy_authorizationContext::getRuleIndex() const {
  return HTTPParser::RuleProxy_authorization;
}

void HTTPParser::Proxy_authorizationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProxy_authorization(this);
}

void HTTPParser::Proxy_authorizationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProxy_authorization(this);
}

HTTPParser::Proxy_authorizationContext* HTTPParser::proxy_authorization() {
  Proxy_authorizationContext *_localctx = _tracker.createInstance<Proxy_authorizationContext>(_ctx, getState());
  enterRule(_localctx, 228, HTTPParser::RuleProxy_authorization);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(970);
    match(HTTPParser::T__22);
    setState(971);
    match(HTTPParser::T__62);
    setState(972);
    credentials();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeContext ------------------------------------------------------------------

HTTPParser::RangeContext::RangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Ranges_specifierContext* HTTPParser::RangeContext::ranges_specifier() {
  return getRuleContext<HTTPParser::Ranges_specifierContext>(0);
}


size_t HTTPParser::RangeContext::getRuleIndex() const {
  return HTTPParser::RuleRange;
}

void HTTPParser::RangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRange(this);
}

void HTTPParser::RangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRange(this);
}

HTTPParser::RangeContext* HTTPParser::range() {
  RangeContext *_localctx = _tracker.createInstance<RangeContext>(_ctx, getState());
  enterRule(_localctx, 230, HTTPParser::RuleRange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(974);
    match(HTTPParser::T__23);
    setState(975);
    match(HTTPParser::T__62);
    setState(976);
    ranges_specifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ranges_specifierContext ------------------------------------------------------------------

HTTPParser::Ranges_specifierContext::Ranges_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Byte_ranges_specifierContext* HTTPParser::Ranges_specifierContext::byte_ranges_specifier() {
  return getRuleContext<HTTPParser::Byte_ranges_specifierContext>(0);
}


size_t HTTPParser::Ranges_specifierContext::getRuleIndex() const {
  return HTTPParser::RuleRanges_specifier;
}

void HTTPParser::Ranges_specifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRanges_specifier(this);
}

void HTTPParser::Ranges_specifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRanges_specifier(this);
}

HTTPParser::Ranges_specifierContext* HTTPParser::ranges_specifier() {
  Ranges_specifierContext *_localctx = _tracker.createInstance<Ranges_specifierContext>(_ctx, getState());
  enterRule(_localctx, 232, HTTPParser::RuleRanges_specifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(978);
    byte_ranges_specifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Byte_ranges_specifierContext ------------------------------------------------------------------

HTTPParser::Byte_ranges_specifierContext::Byte_ranges_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Byte_range_setContext* HTTPParser::Byte_ranges_specifierContext::byte_range_set() {
  return getRuleContext<HTTPParser::Byte_range_setContext>(0);
}


size_t HTTPParser::Byte_ranges_specifierContext::getRuleIndex() const {
  return HTTPParser::RuleByte_ranges_specifier;
}

void HTTPParser::Byte_ranges_specifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterByte_ranges_specifier(this);
}

void HTTPParser::Byte_ranges_specifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitByte_ranges_specifier(this);
}

HTTPParser::Byte_ranges_specifierContext* HTTPParser::byte_ranges_specifier() {
  Byte_ranges_specifierContext *_localctx = _tracker.createInstance<Byte_ranges_specifierContext>(_ctx, getState());
  enterRule(_localctx, 234, HTTPParser::RuleByte_ranges_specifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(980);
    match(HTTPParser::T__127);
    setState(981);
    match(HTTPParser::T__55);
    setState(982);
    byte_range_set();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Byte_range_setContext ------------------------------------------------------------------

HTTPParser::Byte_range_setContext::Byte_range_setContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Byte_range_specContext *> HTTPParser::Byte_range_setContext::byte_range_spec() {
  return getRuleContexts<HTTPParser::Byte_range_specContext>();
}

HTTPParser::Byte_range_specContext* HTTPParser::Byte_range_setContext::byte_range_spec(size_t i) {
  return getRuleContext<HTTPParser::Byte_range_specContext>(i);
}

std::vector<HTTPParser::Suffix_byte_range_specContext *> HTTPParser::Byte_range_setContext::suffix_byte_range_spec() {
  return getRuleContexts<HTTPParser::Suffix_byte_range_specContext>();
}

HTTPParser::Suffix_byte_range_specContext* HTTPParser::Byte_range_setContext::suffix_byte_range_spec(size_t i) {
  return getRuleContext<HTTPParser::Suffix_byte_range_specContext>(i);
}


size_t HTTPParser::Byte_range_setContext::getRuleIndex() const {
  return HTTPParser::RuleByte_range_set;
}

void HTTPParser::Byte_range_setContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterByte_range_set(this);
}

void HTTPParser::Byte_range_setContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitByte_range_set(this);
}

HTTPParser::Byte_range_setContext* HTTPParser::byte_range_set() {
  Byte_range_setContext *_localctx = _tracker.createInstance<Byte_range_setContext>(_ctx, getState());
  enterRule(_localctx, 236, HTTPParser::RuleByte_range_set);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1000);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HTTPParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(984);
        byte_range_spec();
        setState(989);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == HTTPParser::T__73) {
          setState(985);
          match(HTTPParser::T__73);
          setState(986);
          byte_range_spec();
          setState(991);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case HTTPParser::T__53: {
        enterOuterAlt(_localctx, 2);
        setState(992);
        suffix_byte_range_spec();
        setState(997);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == HTTPParser::T__73) {
          setState(993);
          match(HTTPParser::T__73);
          setState(994);
          suffix_byte_range_spec();
          setState(999);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Byte_range_specContext ------------------------------------------------------------------

HTTPParser::Byte_range_specContext::Byte_range_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::First_byte_posContext* HTTPParser::Byte_range_specContext::first_byte_pos() {
  return getRuleContext<HTTPParser::First_byte_posContext>(0);
}

HTTPParser::Last_byte_posContext* HTTPParser::Byte_range_specContext::last_byte_pos() {
  return getRuleContext<HTTPParser::Last_byte_posContext>(0);
}


size_t HTTPParser::Byte_range_specContext::getRuleIndex() const {
  return HTTPParser::RuleByte_range_spec;
}

void HTTPParser::Byte_range_specContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterByte_range_spec(this);
}

void HTTPParser::Byte_range_specContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitByte_range_spec(this);
}

HTTPParser::Byte_range_specContext* HTTPParser::byte_range_spec() {
  Byte_range_specContext *_localctx = _tracker.createInstance<Byte_range_specContext>(_ctx, getState());
  enterRule(_localctx, 238, HTTPParser::RuleByte_range_spec);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1002);
    first_byte_pos();
    setState(1003);
    match(HTTPParser::T__53);
    setState(1005);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HTTPParser::NUMBER) {
      setState(1004);
      last_byte_pos();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- First_byte_posContext ------------------------------------------------------------------

HTTPParser::First_byte_posContext::First_byte_posContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::First_byte_posContext::NUMBER() {
  return getToken(HTTPParser::NUMBER, 0);
}


size_t HTTPParser::First_byte_posContext::getRuleIndex() const {
  return HTTPParser::RuleFirst_byte_pos;
}

void HTTPParser::First_byte_posContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFirst_byte_pos(this);
}

void HTTPParser::First_byte_posContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFirst_byte_pos(this);
}

HTTPParser::First_byte_posContext* HTTPParser::first_byte_pos() {
  First_byte_posContext *_localctx = _tracker.createInstance<First_byte_posContext>(_ctx, getState());
  enterRule(_localctx, 240, HTTPParser::RuleFirst_byte_pos);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1007);
    match(HTTPParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Last_byte_posContext ------------------------------------------------------------------

HTTPParser::Last_byte_posContext::Last_byte_posContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Last_byte_posContext::NUMBER() {
  return getToken(HTTPParser::NUMBER, 0);
}


size_t HTTPParser::Last_byte_posContext::getRuleIndex() const {
  return HTTPParser::RuleLast_byte_pos;
}

void HTTPParser::Last_byte_posContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLast_byte_pos(this);
}

void HTTPParser::Last_byte_posContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLast_byte_pos(this);
}

HTTPParser::Last_byte_posContext* HTTPParser::last_byte_pos() {
  Last_byte_posContext *_localctx = _tracker.createInstance<Last_byte_posContext>(_ctx, getState());
  enterRule(_localctx, 242, HTTPParser::RuleLast_byte_pos);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1009);
    match(HTTPParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Suffix_byte_range_specContext ------------------------------------------------------------------

HTTPParser::Suffix_byte_range_specContext::Suffix_byte_range_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Suffix_lengthContext* HTTPParser::Suffix_byte_range_specContext::suffix_length() {
  return getRuleContext<HTTPParser::Suffix_lengthContext>(0);
}


size_t HTTPParser::Suffix_byte_range_specContext::getRuleIndex() const {
  return HTTPParser::RuleSuffix_byte_range_spec;
}

void HTTPParser::Suffix_byte_range_specContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuffix_byte_range_spec(this);
}

void HTTPParser::Suffix_byte_range_specContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuffix_byte_range_spec(this);
}

HTTPParser::Suffix_byte_range_specContext* HTTPParser::suffix_byte_range_spec() {
  Suffix_byte_range_specContext *_localctx = _tracker.createInstance<Suffix_byte_range_specContext>(_ctx, getState());
  enterRule(_localctx, 244, HTTPParser::RuleSuffix_byte_range_spec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1011);
    match(HTTPParser::T__53);
    setState(1012);
    suffix_length();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Suffix_lengthContext ------------------------------------------------------------------

HTTPParser::Suffix_lengthContext::Suffix_lengthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Suffix_lengthContext::NUMBER() {
  return getToken(HTTPParser::NUMBER, 0);
}


size_t HTTPParser::Suffix_lengthContext::getRuleIndex() const {
  return HTTPParser::RuleSuffix_length;
}

void HTTPParser::Suffix_lengthContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuffix_length(this);
}

void HTTPParser::Suffix_lengthContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuffix_length(this);
}

HTTPParser::Suffix_lengthContext* HTTPParser::suffix_length() {
  Suffix_lengthContext *_localctx = _tracker.createInstance<Suffix_lengthContext>(_ctx, getState());
  enterRule(_localctx, 246, HTTPParser::RuleSuffix_length);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1014);
    match(HTTPParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RefererContext ------------------------------------------------------------------

HTTPParser::RefererContext::RefererContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::UrlContext* HTTPParser::RefererContext::url() {
  return getRuleContext<HTTPParser::UrlContext>(0);
}


size_t HTTPParser::RefererContext::getRuleIndex() const {
  return HTTPParser::RuleReferer;
}

void HTTPParser::RefererContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReferer(this);
}

void HTTPParser::RefererContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReferer(this);
}

HTTPParser::RefererContext* HTTPParser::referer() {
  RefererContext *_localctx = _tracker.createInstance<RefererContext>(_ctx, getState());
  enterRule(_localctx, 248, HTTPParser::RuleReferer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1016);
    match(HTTPParser::T__24);
    setState(1017);
    match(HTTPParser::T__62);
    setState(1018);
    url();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UrlContext ------------------------------------------------------------------

HTTPParser::UrlContext::UrlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Uri_textContext *> HTTPParser::UrlContext::uri_text() {
  return getRuleContexts<HTTPParser::Uri_textContext>();
}

HTTPParser::Uri_textContext* HTTPParser::UrlContext::uri_text(size_t i) {
  return getRuleContext<HTTPParser::Uri_textContext>(i);
}


size_t HTTPParser::UrlContext::getRuleIndex() const {
  return HTTPParser::RuleUrl;
}

void HTTPParser::UrlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUrl(this);
}

void HTTPParser::UrlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUrl(this);
}

HTTPParser::UrlContext* HTTPParser::url() {
  UrlContext *_localctx = _tracker.createInstance<UrlContext>(_ctx, getState());
  enterRule(_localctx, 250, HTTPParser::RuleUrl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1020);
    _la = _input->LA(1);
    if (!(_la == HTTPParser::T__49

    || _la == HTTPParser::T__50)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1021);
    match(HTTPParser::T__62);
    setState(1022);
    match(HTTPParser::T__128);
    setState(1027); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1023);
      uri_text();
      setState(1025);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HTTPParser::T__48) {
        setState(1024);
        match(HTTPParser::T__48);
      }
      setState(1029); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HTTPParser::T__49)
      | (1ULL << HTTPParser::T__50)
      | (1ULL << HTTPParser::T__51)
      | (1ULL << HTTPParser::T__52)
      | (1ULL << HTTPParser::T__53)
      | (1ULL << HTTPParser::T__54)
      | (1ULL << HTTPParser::T__55)
      | (1ULL << HTTPParser::T__56)
      | (1ULL << HTTPParser::T__57)
      | (1ULL << HTTPParser::T__58))) != 0) || _la == HTTPParser::ID

    || _la == HTTPParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TeContext ------------------------------------------------------------------

HTTPParser::TeContext::TeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::T_codingContext *> HTTPParser::TeContext::t_coding() {
  return getRuleContexts<HTTPParser::T_codingContext>();
}

HTTPParser::T_codingContext* HTTPParser::TeContext::t_coding(size_t i) {
  return getRuleContext<HTTPParser::T_codingContext>(i);
}


size_t HTTPParser::TeContext::getRuleIndex() const {
  return HTTPParser::RuleTe;
}

void HTTPParser::TeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTe(this);
}

void HTTPParser::TeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTe(this);
}

HTTPParser::TeContext* HTTPParser::te() {
  TeContext *_localctx = _tracker.createInstance<TeContext>(_ctx, getState());
  enterRule(_localctx, 252, HTTPParser::RuleTe);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1031);
    match(HTTPParser::T__25);
    setState(1032);
    match(HTTPParser::T__62);
    setState(1033);
    t_coding();
    setState(1038);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__73) {
      setState(1034);
      match(HTTPParser::T__73);
      setState(1035);
      t_coding();
      setState(1040);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- T_codingContext ------------------------------------------------------------------

HTTPParser::T_codingContext::T_codingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::TrailerContext* HTTPParser::T_codingContext::trailer() {
  return getRuleContext<HTTPParser::TrailerContext>(0);
}

HTTPParser::Transfer_extensionContext* HTTPParser::T_codingContext::transfer_extension() {
  return getRuleContext<HTTPParser::Transfer_extensionContext>(0);
}

HTTPParser::Accept_paramsContext* HTTPParser::T_codingContext::accept_params() {
  return getRuleContext<HTTPParser::Accept_paramsContext>(0);
}


size_t HTTPParser::T_codingContext::getRuleIndex() const {
  return HTTPParser::RuleT_coding;
}

void HTTPParser::T_codingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterT_coding(this);
}

void HTTPParser::T_codingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitT_coding(this);
}

HTTPParser::T_codingContext* HTTPParser::t_coding() {
  T_codingContext *_localctx = _tracker.createInstance<T_codingContext>(_ctx, getState());
  enterRule(_localctx, 254, HTTPParser::RuleT_coding);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1046);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HTTPParser::T__3: {
        enterOuterAlt(_localctx, 1);
        setState(1041);
        trailer();
        break;
      }

      case HTTPParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(1042);
        transfer_extension();
        setState(1044);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == HTTPParser::T__64) {
          setState(1043);
          accept_params();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- User_agentContext ------------------------------------------------------------------

HTTPParser::User_agentContext::User_agentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::ProductContext* HTTPParser::User_agentContext::product() {
  return getRuleContext<HTTPParser::ProductContext>(0);
}

HTTPParser::Product_versionContext* HTTPParser::User_agentContext::product_version() {
  return getRuleContext<HTTPParser::Product_versionContext>(0);
}

HTTPParser::CommentContext* HTTPParser::User_agentContext::comment() {
  return getRuleContext<HTTPParser::CommentContext>(0);
}


size_t HTTPParser::User_agentContext::getRuleIndex() const {
  return HTTPParser::RuleUser_agent;
}

void HTTPParser::User_agentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUser_agent(this);
}

void HTTPParser::User_agentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUser_agent(this);
}

HTTPParser::User_agentContext* HTTPParser::user_agent() {
  User_agentContext *_localctx = _tracker.createInstance<User_agentContext>(_ctx, getState());
  enterRule(_localctx, 256, HTTPParser::RuleUser_agent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1048);
    match(HTTPParser::T__26);
    setState(1049);
    match(HTTPParser::T__62);
    setState(1050);
    product();
    setState(1051);
    match(HTTPParser::T__48);
    setState(1052);
    product_version();
    setState(1053);
    comment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommentContext ------------------------------------------------------------------

HTTPParser::CommentContext::CommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HTTPParser::CommentContext::getRuleIndex() const {
  return HTTPParser::RuleComment;
}

void HTTPParser::CommentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComment(this);
}

void HTTPParser::CommentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComment(this);
}

HTTPParser::CommentContext* HTTPParser::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 258, HTTPParser::RuleComment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1060);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(1058);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
        case 1: {
          setState(1055);
          _la = _input->LA(1);
          if (_la == 0 || _la == Token::EOF || (_la == HTTPParser::T__39)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        case 2: {
          setState(1056);
          match(HTTPParser::T__129);
          break;
        }

        case 3: {
          setState(1057);
          match(HTTPParser::T__130);
          break;
        }

        } 
      }
      setState(1062);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Product_versionContext ------------------------------------------------------------------

HTTPParser::Product_versionContext::Product_versionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HTTPParser::Product_versionContext::NUMBER() {
  return getTokens(HTTPParser::NUMBER);
}

tree::TerminalNode* HTTPParser::Product_versionContext::NUMBER(size_t i) {
  return getToken(HTTPParser::NUMBER, i);
}


size_t HTTPParser::Product_versionContext::getRuleIndex() const {
  return HTTPParser::RuleProduct_version;
}

void HTTPParser::Product_versionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProduct_version(this);
}

void HTTPParser::Product_versionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProduct_version(this);
}

HTTPParser::Product_versionContext* HTTPParser::product_version() {
  Product_versionContext *_localctx = _tracker.createInstance<Product_versionContext>(_ctx, getState());
  enterRule(_localctx, 260, HTTPParser::RuleProduct_version);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1063);
    match(HTTPParser::NUMBER);
    setState(1068);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1064);
        match(HTTPParser::T__52);
        setState(1065);
        _la = _input->LA(1);
        if (!(_la == HTTPParser::T__58 || _la == HTTPParser::T__115

        || _la == HTTPParser::NUMBER)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(1070);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Entity_headerContext ------------------------------------------------------------------

HTTPParser::Entity_headerContext::Entity_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::AllowContext* HTTPParser::Entity_headerContext::allow() {
  return getRuleContext<HTTPParser::AllowContext>(0);
}

HTTPParser::Content_encodingContext* HTTPParser::Entity_headerContext::content_encoding() {
  return getRuleContext<HTTPParser::Content_encodingContext>(0);
}

HTTPParser::Content_languageContext* HTTPParser::Entity_headerContext::content_language() {
  return getRuleContext<HTTPParser::Content_languageContext>(0);
}

HTTPParser::Content_lengthContext* HTTPParser::Entity_headerContext::content_length() {
  return getRuleContext<HTTPParser::Content_lengthContext>(0);
}

HTTPParser::Content_locationContext* HTTPParser::Entity_headerContext::content_location() {
  return getRuleContext<HTTPParser::Content_locationContext>(0);
}

HTTPParser::Content_md5Context* HTTPParser::Entity_headerContext::content_md5() {
  return getRuleContext<HTTPParser::Content_md5Context>(0);
}

HTTPParser::Content_typeContext* HTTPParser::Entity_headerContext::content_type() {
  return getRuleContext<HTTPParser::Content_typeContext>(0);
}

HTTPParser::ExpiresContext* HTTPParser::Entity_headerContext::expires() {
  return getRuleContext<HTTPParser::ExpiresContext>(0);
}

HTTPParser::Last_modifiedContext* HTTPParser::Entity_headerContext::last_modified() {
  return getRuleContext<HTTPParser::Last_modifiedContext>(0);
}

HTTPParser::Extension_headerContext* HTTPParser::Entity_headerContext::extension_header() {
  return getRuleContext<HTTPParser::Extension_headerContext>(0);
}


size_t HTTPParser::Entity_headerContext::getRuleIndex() const {
  return HTTPParser::RuleEntity_header;
}

void HTTPParser::Entity_headerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEntity_header(this);
}

void HTTPParser::Entity_headerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEntity_header(this);
}

HTTPParser::Entity_headerContext* HTTPParser::entity_header() {
  Entity_headerContext *_localctx = _tracker.createInstance<Entity_headerContext>(_ctx, getState());
  enterRule(_localctx, 262, HTTPParser::RuleEntity_header);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1081);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1071);
      allow();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1072);
      content_encoding();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1073);
      content_language();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1074);
      content_length();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1075);
      content_location();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1076);
      content_md5();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1077);
      content_type();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1078);
      expires();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1079);
      last_modified();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1080);
      extension_header();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AllowContext ------------------------------------------------------------------

HTTPParser::AllowContext::AllowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::MethodContext *> HTTPParser::AllowContext::method() {
  return getRuleContexts<HTTPParser::MethodContext>();
}

HTTPParser::MethodContext* HTTPParser::AllowContext::method(size_t i) {
  return getRuleContext<HTTPParser::MethodContext>(i);
}


size_t HTTPParser::AllowContext::getRuleIndex() const {
  return HTTPParser::RuleAllow;
}

void HTTPParser::AllowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAllow(this);
}

void HTTPParser::AllowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAllow(this);
}

HTTPParser::AllowContext* HTTPParser::allow() {
  AllowContext *_localctx = _tracker.createInstance<AllowContext>(_ctx, getState());
  enterRule(_localctx, 264, HTTPParser::RuleAllow);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1083);
    match(HTTPParser::T__27);
    setState(1084);
    match(HTTPParser::T__62);
    setState(1085);
    method();
    setState(1090);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::T__73) {
      setState(1086);
      match(HTTPParser::T__73);
      setState(1087);
      method();
      setState(1092);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Content_encodingContext ------------------------------------------------------------------

HTTPParser::Content_encodingContext::Content_encodingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HTTPParser::Content_encodingContext::ID() {
  return getTokens(HTTPParser::ID);
}

tree::TerminalNode* HTTPParser::Content_encodingContext::ID(size_t i) {
  return getToken(HTTPParser::ID, i);
}


size_t HTTPParser::Content_encodingContext::getRuleIndex() const {
  return HTTPParser::RuleContent_encoding;
}

void HTTPParser::Content_encodingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContent_encoding(this);
}

void HTTPParser::Content_encodingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContent_encoding(this);
}

HTTPParser::Content_encodingContext* HTTPParser::content_encoding() {
  Content_encodingContext *_localctx = _tracker.createInstance<Content_encodingContext>(_ctx, getState());
  enterRule(_localctx, 266, HTTPParser::RuleContent_encoding);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1093);
    match(HTTPParser::T__28);
    setState(1094);
    match(HTTPParser::T__62);
    setState(1095);
    match(HTTPParser::ID);

    setState(1096);
    match(HTTPParser::T__73);
    setState(1097);
    match(HTTPParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Content_languageContext ------------------------------------------------------------------

HTTPParser::Content_languageContext::Content_languageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HTTPParser::Content_languageContext::ID() {
  return getTokens(HTTPParser::ID);
}

tree::TerminalNode* HTTPParser::Content_languageContext::ID(size_t i) {
  return getToken(HTTPParser::ID, i);
}


size_t HTTPParser::Content_languageContext::getRuleIndex() const {
  return HTTPParser::RuleContent_language;
}

void HTTPParser::Content_languageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContent_language(this);
}

void HTTPParser::Content_languageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContent_language(this);
}

HTTPParser::Content_languageContext* HTTPParser::content_language() {
  Content_languageContext *_localctx = _tracker.createInstance<Content_languageContext>(_ctx, getState());
  enterRule(_localctx, 268, HTTPParser::RuleContent_language);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1099);
    match(HTTPParser::T__29);
    setState(1100);
    match(HTTPParser::T__62);
    setState(1101);
    match(HTTPParser::ID);

    setState(1102);
    match(HTTPParser::T__73);
    setState(1103);
    match(HTTPParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Content_lengthContext ------------------------------------------------------------------

HTTPParser::Content_lengthContext::Content_lengthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Content_length_numberContext* HTTPParser::Content_lengthContext::content_length_number() {
  return getRuleContext<HTTPParser::Content_length_numberContext>(0);
}


size_t HTTPParser::Content_lengthContext::getRuleIndex() const {
  return HTTPParser::RuleContent_length;
}

void HTTPParser::Content_lengthContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContent_length(this);
}

void HTTPParser::Content_lengthContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContent_length(this);
}

HTTPParser::Content_lengthContext* HTTPParser::content_length() {
  Content_lengthContext *_localctx = _tracker.createInstance<Content_lengthContext>(_ctx, getState());
  enterRule(_localctx, 270, HTTPParser::RuleContent_length);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1105);
    match(HTTPParser::T__30);
    setState(1106);
    match(HTTPParser::T__62);
    setState(1107);
    content_length_number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Content_length_numberContext ------------------------------------------------------------------

HTTPParser::Content_length_numberContext::Content_length_numberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Content_length_numberContext::NUMBER() {
  return getToken(HTTPParser::NUMBER, 0);
}


size_t HTTPParser::Content_length_numberContext::getRuleIndex() const {
  return HTTPParser::RuleContent_length_number;
}

void HTTPParser::Content_length_numberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContent_length_number(this);
}

void HTTPParser::Content_length_numberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContent_length_number(this);
}

HTTPParser::Content_length_numberContext* HTTPParser::content_length_number() {
  Content_length_numberContext *_localctx = _tracker.createInstance<Content_length_numberContext>(_ctx, getState());
  enterRule(_localctx, 272, HTTPParser::RuleContent_length_number);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1109);
    match(HTTPParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Content_locationContext ------------------------------------------------------------------

HTTPParser::Content_locationContext::Content_locationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HTTPParser::Content_locationContext::ID() {
  return getTokens(HTTPParser::ID);
}

tree::TerminalNode* HTTPParser::Content_locationContext::ID(size_t i) {
  return getToken(HTTPParser::ID, i);
}


size_t HTTPParser::Content_locationContext::getRuleIndex() const {
  return HTTPParser::RuleContent_location;
}

void HTTPParser::Content_locationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContent_location(this);
}

void HTTPParser::Content_locationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContent_location(this);
}

HTTPParser::Content_locationContext* HTTPParser::content_location() {
  Content_locationContext *_localctx = _tracker.createInstance<Content_locationContext>(_ctx, getState());
  enterRule(_localctx, 274, HTTPParser::RuleContent_location);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1111);
    match(HTTPParser::T__31);
    setState(1112);
    match(HTTPParser::T__62);
    setState(1113);
    match(HTTPParser::ID);
    setState(1114);
    match(HTTPParser::T__52);
    setState(1115);
    match(HTTPParser::ID);
    setState(1116);
    match(HTTPParser::T__52);
    setState(1117);
    match(HTTPParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Content_md5Context ------------------------------------------------------------------

HTTPParser::Content_md5Context::Content_md5Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Content_md5Context::ID() {
  return getToken(HTTPParser::ID, 0);
}


size_t HTTPParser::Content_md5Context::getRuleIndex() const {
  return HTTPParser::RuleContent_md5;
}

void HTTPParser::Content_md5Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContent_md5(this);
}

void HTTPParser::Content_md5Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContent_md5(this);
}

HTTPParser::Content_md5Context* HTTPParser::content_md5() {
  Content_md5Context *_localctx = _tracker.createInstance<Content_md5Context>(_ctx, getState());
  enterRule(_localctx, 276, HTTPParser::RuleContent_md5);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1119);
    match(HTTPParser::T__32);
    setState(1120);
    match(HTTPParser::T__62);
    setState(1121);
    match(HTTPParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Content_rangeContext ------------------------------------------------------------------

HTTPParser::Content_rangeContext::Content_rangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Content_rangeContext::ID() {
  return getToken(HTTPParser::ID, 0);
}

std::vector<tree::TerminalNode *> HTTPParser::Content_rangeContext::NUMBER() {
  return getTokens(HTTPParser::NUMBER);
}

tree::TerminalNode* HTTPParser::Content_rangeContext::NUMBER(size_t i) {
  return getToken(HTTPParser::NUMBER, i);
}


size_t HTTPParser::Content_rangeContext::getRuleIndex() const {
  return HTTPParser::RuleContent_range;
}

void HTTPParser::Content_rangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContent_range(this);
}

void HTTPParser::Content_rangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContent_range(this);
}

HTTPParser::Content_rangeContext* HTTPParser::content_range() {
  Content_rangeContext *_localctx = _tracker.createInstance<Content_rangeContext>(_ctx, getState());
  enterRule(_localctx, 278, HTTPParser::RuleContent_range);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1123);
    match(HTTPParser::T__33);
    setState(1124);
    match(HTTPParser::T__62);
    setState(1125);
    match(HTTPParser::ID);
    setState(1126);
    match(HTTPParser::NUMBER);
    setState(1127);
    match(HTTPParser::T__53);
    setState(1128);
    match(HTTPParser::NUMBER);
    setState(1129);
    match(HTTPParser::T__48);
    setState(1130);
    match(HTTPParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Content_typeContext ------------------------------------------------------------------

HTTPParser::Content_typeContext::Content_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Mime_valueContext* HTTPParser::Content_typeContext::mime_value() {
  return getRuleContext<HTTPParser::Mime_valueContext>(0);
}


size_t HTTPParser::Content_typeContext::getRuleIndex() const {
  return HTTPParser::RuleContent_type;
}

void HTTPParser::Content_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContent_type(this);
}

void HTTPParser::Content_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContent_type(this);
}

HTTPParser::Content_typeContext* HTTPParser::content_type() {
  Content_typeContext *_localctx = _tracker.createInstance<Content_typeContext>(_ctx, getState());
  enterRule(_localctx, 280, HTTPParser::RuleContent_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1132);
    match(HTTPParser::T__34);
    setState(1133);
    match(HTTPParser::T__62);
    setState(1134);
    mime_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mime_valueContext ------------------------------------------------------------------

HTTPParser::Mime_valueContext::Mime_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Not_eolContext *> HTTPParser::Mime_valueContext::not_eol() {
  return getRuleContexts<HTTPParser::Not_eolContext>();
}

HTTPParser::Not_eolContext* HTTPParser::Mime_valueContext::not_eol(size_t i) {
  return getRuleContext<HTTPParser::Not_eolContext>(i);
}


size_t HTTPParser::Mime_valueContext::getRuleIndex() const {
  return HTTPParser::RuleMime_value;
}

void HTTPParser::Mime_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMime_value(this);
}

void HTTPParser::Mime_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMime_value(this);
}

HTTPParser::Mime_valueContext* HTTPParser::mime_value() {
  Mime_valueContext *_localctx = _tracker.createInstance<Mime_valueContext>(_ctx, getState());
  enterRule(_localctx, 282, HTTPParser::RuleMime_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1137); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1136);
      not_eol();
      setState(1139); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HTTPParser::T__0)
      | (1ULL << HTTPParser::T__1)
      | (1ULL << HTTPParser::T__2)
      | (1ULL << HTTPParser::T__3)
      | (1ULL << HTTPParser::T__4)
      | (1ULL << HTTPParser::T__5)
      | (1ULL << HTTPParser::T__6)
      | (1ULL << HTTPParser::T__7)
      | (1ULL << HTTPParser::T__8)
      | (1ULL << HTTPParser::T__9)
      | (1ULL << HTTPParser::T__10)
      | (1ULL << HTTPParser::T__11)
      | (1ULL << HTTPParser::T__12)
      | (1ULL << HTTPParser::T__13)
      | (1ULL << HTTPParser::T__14)
      | (1ULL << HTTPParser::T__15)
      | (1ULL << HTTPParser::T__16)
      | (1ULL << HTTPParser::T__17)
      | (1ULL << HTTPParser::T__18)
      | (1ULL << HTTPParser::T__19)
      | (1ULL << HTTPParser::T__20)
      | (1ULL << HTTPParser::T__21)
      | (1ULL << HTTPParser::T__22)
      | (1ULL << HTTPParser::T__23)
      | (1ULL << HTTPParser::T__24)
      | (1ULL << HTTPParser::T__25)
      | (1ULL << HTTPParser::T__26)
      | (1ULL << HTTPParser::T__27)
      | (1ULL << HTTPParser::T__28)
      | (1ULL << HTTPParser::T__29)
      | (1ULL << HTTPParser::T__30)
      | (1ULL << HTTPParser::T__31)
      | (1ULL << HTTPParser::T__32)
      | (1ULL << HTTPParser::T__33)
      | (1ULL << HTTPParser::T__34)
      | (1ULL << HTTPParser::T__35)
      | (1ULL << HTTPParser::T__36)
      | (1ULL << HTTPParser::T__37)
      | (1ULL << HTTPParser::T__38)
      | (1ULL << HTTPParser::T__40)
      | (1ULL << HTTPParser::T__41)
      | (1ULL << HTTPParser::T__42)
      | (1ULL << HTTPParser::T__43)
      | (1ULL << HTTPParser::T__44)
      | (1ULL << HTTPParser::T__45)
      | (1ULL << HTTPParser::T__46)
      | (1ULL << HTTPParser::T__47)
      | (1ULL << HTTPParser::T__48)
      | (1ULL << HTTPParser::T__49)
      | (1ULL << HTTPParser::T__50)
      | (1ULL << HTTPParser::T__51)
      | (1ULL << HTTPParser::T__52)
      | (1ULL << HTTPParser::T__53)
      | (1ULL << HTTPParser::T__54)
      | (1ULL << HTTPParser::T__55)
      | (1ULL << HTTPParser::T__56)
      | (1ULL << HTTPParser::T__57)
      | (1ULL << HTTPParser::T__58)
      | (1ULL << HTTPParser::T__59)
      | (1ULL << HTTPParser::T__60)
      | (1ULL << HTTPParser::T__61)
      | (1ULL << HTTPParser::T__62))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HTTPParser::T__63 - 64))
      | (1ULL << (HTTPParser::T__64 - 64))
      | (1ULL << (HTTPParser::T__65 - 64))
      | (1ULL << (HTTPParser::T__66 - 64))
      | (1ULL << (HTTPParser::T__67 - 64))
      | (1ULL << (HTTPParser::T__68 - 64))
      | (1ULL << (HTTPParser::T__69 - 64))
      | (1ULL << (HTTPParser::T__70 - 64))
      | (1ULL << (HTTPParser::T__71 - 64))
      | (1ULL << (HTTPParser::T__72 - 64))
      | (1ULL << (HTTPParser::T__73 - 64))
      | (1ULL << (HTTPParser::T__74 - 64))
      | (1ULL << (HTTPParser::T__75 - 64))
      | (1ULL << (HTTPParser::T__76 - 64))
      | (1ULL << (HTTPParser::T__77 - 64))
      | (1ULL << (HTTPParser::T__78 - 64))
      | (1ULL << (HTTPParser::T__79 - 64))
      | (1ULL << (HTTPParser::T__80 - 64))
      | (1ULL << (HTTPParser::T__81 - 64))
      | (1ULL << (HTTPParser::T__82 - 64))
      | (1ULL << (HTTPParser::T__83 - 64))
      | (1ULL << (HTTPParser::T__84 - 64))
      | (1ULL << (HTTPParser::T__85 - 64))
      | (1ULL << (HTTPParser::T__86 - 64))
      | (1ULL << (HTTPParser::T__87 - 64))
      | (1ULL << (HTTPParser::T__88 - 64))
      | (1ULL << (HTTPParser::T__89 - 64))
      | (1ULL << (HTTPParser::T__90 - 64))
      | (1ULL << (HTTPParser::T__91 - 64))
      | (1ULL << (HTTPParser::T__92 - 64))
      | (1ULL << (HTTPParser::T__93 - 64))
      | (1ULL << (HTTPParser::T__94 - 64))
      | (1ULL << (HTTPParser::T__95 - 64))
      | (1ULL << (HTTPParser::T__96 - 64))
      | (1ULL << (HTTPParser::T__97 - 64))
      | (1ULL << (HTTPParser::T__98 - 64))
      | (1ULL << (HTTPParser::T__99 - 64))
      | (1ULL << (HTTPParser::T__100 - 64))
      | (1ULL << (HTTPParser::T__101 - 64))
      | (1ULL << (HTTPParser::T__102 - 64))
      | (1ULL << (HTTPParser::T__103 - 64))
      | (1ULL << (HTTPParser::T__104 - 64))
      | (1ULL << (HTTPParser::T__105 - 64))
      | (1ULL << (HTTPParser::T__106 - 64))
      | (1ULL << (HTTPParser::T__107 - 64))
      | (1ULL << (HTTPParser::T__108 - 64))
      | (1ULL << (HTTPParser::T__109 - 64))
      | (1ULL << (HTTPParser::T__110 - 64))
      | (1ULL << (HTTPParser::T__111 - 64))
      | (1ULL << (HTTPParser::T__112 - 64))
      | (1ULL << (HTTPParser::T__113 - 64))
      | (1ULL << (HTTPParser::T__114 - 64))
      | (1ULL << (HTTPParser::T__115 - 64))
      | (1ULL << (HTTPParser::T__116 - 64))
      | (1ULL << (HTTPParser::T__117 - 64))
      | (1ULL << (HTTPParser::T__118 - 64))
      | (1ULL << (HTTPParser::T__119 - 64))
      | (1ULL << (HTTPParser::T__120 - 64))
      | (1ULL << (HTTPParser::T__121 - 64))
      | (1ULL << (HTTPParser::T__122 - 64))
      | (1ULL << (HTTPParser::T__123 - 64))
      | (1ULL << (HTTPParser::T__124 - 64))
      | (1ULL << (HTTPParser::T__125 - 64))
      | (1ULL << (HTTPParser::T__126 - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (HTTPParser::T__127 - 128))
      | (1ULL << (HTTPParser::T__128 - 128))
      | (1ULL << (HTTPParser::T__129 - 128))
      | (1ULL << (HTTPParser::T__130 - 128))
      | (1ULL << (HTTPParser::ID - 128))
      | (1ULL << (HTTPParser::STRING - 128))
      | (1ULL << (HTTPParser::NUMBER - 128))
      | (1ULL << (HTTPParser::WS - 128))
      | (1ULL << (HTTPParser::MESSAGEBODY - 128)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Not_eolContext ------------------------------------------------------------------

HTTPParser::Not_eolContext::Not_eolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HTTPParser::Not_eolContext::getRuleIndex() const {
  return HTTPParser::RuleNot_eol;
}

void HTTPParser::Not_eolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNot_eol(this);
}

void HTTPParser::Not_eolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNot_eol(this);
}

HTTPParser::Not_eolContext* HTTPParser::not_eol() {
  Not_eolContext *_localctx = _tracker.createInstance<Not_eolContext>(_ctx, getState());
  enterRule(_localctx, 284, HTTPParser::RuleNot_eol);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1141);
    _la = _input->LA(1);
    if (_la == 0 || _la == Token::EOF || (_la == HTTPParser::T__39)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Token_or_keyContext ------------------------------------------------------------------

HTTPParser::Token_or_keyContext::Token_or_keyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::TokenContext* HTTPParser::Token_or_keyContext::token() {
  return getRuleContext<HTTPParser::TokenContext>(0);
}

HTTPParser::KeyContext* HTTPParser::Token_or_keyContext::key() {
  return getRuleContext<HTTPParser::KeyContext>(0);
}


size_t HTTPParser::Token_or_keyContext::getRuleIndex() const {
  return HTTPParser::RuleToken_or_key;
}

void HTTPParser::Token_or_keyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToken_or_key(this);
}

void HTTPParser::Token_or_keyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToken_or_key(this);
}

HTTPParser::Token_or_keyContext* HTTPParser::token_or_key() {
  Token_or_keyContext *_localctx = _tracker.createInstance<Token_or_keyContext>(_ctx, getState());
  enterRule(_localctx, 286, HTTPParser::RuleToken_or_key);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1145);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1143);
      token();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1144);
      key();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TokenContext ------------------------------------------------------------------

HTTPParser::TokenContext::TokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::KeyContext* HTTPParser::TokenContext::key() {
  return getRuleContext<HTTPParser::KeyContext>(0);
}


size_t HTTPParser::TokenContext::getRuleIndex() const {
  return HTTPParser::RuleToken;
}

void HTTPParser::TokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToken(this);
}

void HTTPParser::TokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToken(this);
}

HTTPParser::TokenContext* HTTPParser::token() {
  TokenContext *_localctx = _tracker.createInstance<TokenContext>(_ctx, getState());
  enterRule(_localctx, 288, HTTPParser::RuleToken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1147);
    key();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpiresContext ------------------------------------------------------------------

HTTPParser::ExpiresContext::ExpiresContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Http_dateContext* HTTPParser::ExpiresContext::http_date() {
  return getRuleContext<HTTPParser::Http_dateContext>(0);
}


size_t HTTPParser::ExpiresContext::getRuleIndex() const {
  return HTTPParser::RuleExpires;
}

void HTTPParser::ExpiresContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpires(this);
}

void HTTPParser::ExpiresContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpires(this);
}

HTTPParser::ExpiresContext* HTTPParser::expires() {
  ExpiresContext *_localctx = _tracker.createInstance<ExpiresContext>(_ctx, getState());
  enterRule(_localctx, 290, HTTPParser::RuleExpires);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1149);
    match(HTTPParser::T__35);
    setState(1150);
    match(HTTPParser::T__62);
    setState(1151);
    http_date();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Last_modifiedContext ------------------------------------------------------------------

HTTPParser::Last_modifiedContext::Last_modifiedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Http_dateContext* HTTPParser::Last_modifiedContext::http_date() {
  return getRuleContext<HTTPParser::Http_dateContext>(0);
}


size_t HTTPParser::Last_modifiedContext::getRuleIndex() const {
  return HTTPParser::RuleLast_modified;
}

void HTTPParser::Last_modifiedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLast_modified(this);
}

void HTTPParser::Last_modifiedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLast_modified(this);
}

HTTPParser::Last_modifiedContext* HTTPParser::last_modified() {
  Last_modifiedContext *_localctx = _tracker.createInstance<Last_modifiedContext>(_ctx, getState());
  enterRule(_localctx, 292, HTTPParser::RuleLast_modified);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1153);
    match(HTTPParser::T__36);
    setState(1154);
    match(HTTPParser::T__62);
    setState(1155);
    http_date();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Extension_headerContext ------------------------------------------------------------------

HTTPParser::Extension_headerContext::Extension_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::KeyContext* HTTPParser::Extension_headerContext::key() {
  return getRuleContext<HTTPParser::KeyContext>(0);
}

HTTPParser::Mime_valueContext* HTTPParser::Extension_headerContext::mime_value() {
  return getRuleContext<HTTPParser::Mime_valueContext>(0);
}


size_t HTTPParser::Extension_headerContext::getRuleIndex() const {
  return HTTPParser::RuleExtension_header;
}

void HTTPParser::Extension_headerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtension_header(this);
}

void HTTPParser::Extension_headerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtension_header(this);
}

HTTPParser::Extension_headerContext* HTTPParser::extension_header() {
  Extension_headerContext *_localctx = _tracker.createInstance<Extension_headerContext>(_ctx, getState());
  enterRule(_localctx, 294, HTTPParser::RuleExtension_header);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1157);
    key();
    setState(1158);
    match(HTTPParser::T__62);
    setState(1160);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HTTPParser::T__0)
      | (1ULL << HTTPParser::T__1)
      | (1ULL << HTTPParser::T__2)
      | (1ULL << HTTPParser::T__3)
      | (1ULL << HTTPParser::T__4)
      | (1ULL << HTTPParser::T__5)
      | (1ULL << HTTPParser::T__6)
      | (1ULL << HTTPParser::T__7)
      | (1ULL << HTTPParser::T__8)
      | (1ULL << HTTPParser::T__9)
      | (1ULL << HTTPParser::T__10)
      | (1ULL << HTTPParser::T__11)
      | (1ULL << HTTPParser::T__12)
      | (1ULL << HTTPParser::T__13)
      | (1ULL << HTTPParser::T__14)
      | (1ULL << HTTPParser::T__15)
      | (1ULL << HTTPParser::T__16)
      | (1ULL << HTTPParser::T__17)
      | (1ULL << HTTPParser::T__18)
      | (1ULL << HTTPParser::T__19)
      | (1ULL << HTTPParser::T__20)
      | (1ULL << HTTPParser::T__21)
      | (1ULL << HTTPParser::T__22)
      | (1ULL << HTTPParser::T__23)
      | (1ULL << HTTPParser::T__24)
      | (1ULL << HTTPParser::T__25)
      | (1ULL << HTTPParser::T__26)
      | (1ULL << HTTPParser::T__27)
      | (1ULL << HTTPParser::T__28)
      | (1ULL << HTTPParser::T__29)
      | (1ULL << HTTPParser::T__30)
      | (1ULL << HTTPParser::T__31)
      | (1ULL << HTTPParser::T__32)
      | (1ULL << HTTPParser::T__33)
      | (1ULL << HTTPParser::T__34)
      | (1ULL << HTTPParser::T__35)
      | (1ULL << HTTPParser::T__36)
      | (1ULL << HTTPParser::T__37)
      | (1ULL << HTTPParser::T__38)
      | (1ULL << HTTPParser::T__40)
      | (1ULL << HTTPParser::T__41)
      | (1ULL << HTTPParser::T__42)
      | (1ULL << HTTPParser::T__43)
      | (1ULL << HTTPParser::T__44)
      | (1ULL << HTTPParser::T__45)
      | (1ULL << HTTPParser::T__46)
      | (1ULL << HTTPParser::T__47)
      | (1ULL << HTTPParser::T__48)
      | (1ULL << HTTPParser::T__49)
      | (1ULL << HTTPParser::T__50)
      | (1ULL << HTTPParser::T__51)
      | (1ULL << HTTPParser::T__52)
      | (1ULL << HTTPParser::T__53)
      | (1ULL << HTTPParser::T__54)
      | (1ULL << HTTPParser::T__55)
      | (1ULL << HTTPParser::T__56)
      | (1ULL << HTTPParser::T__57)
      | (1ULL << HTTPParser::T__58)
      | (1ULL << HTTPParser::T__59)
      | (1ULL << HTTPParser::T__60)
      | (1ULL << HTTPParser::T__61)
      | (1ULL << HTTPParser::T__62))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (HTTPParser::T__63 - 64))
      | (1ULL << (HTTPParser::T__64 - 64))
      | (1ULL << (HTTPParser::T__65 - 64))
      | (1ULL << (HTTPParser::T__66 - 64))
      | (1ULL << (HTTPParser::T__67 - 64))
      | (1ULL << (HTTPParser::T__68 - 64))
      | (1ULL << (HTTPParser::T__69 - 64))
      | (1ULL << (HTTPParser::T__70 - 64))
      | (1ULL << (HTTPParser::T__71 - 64))
      | (1ULL << (HTTPParser::T__72 - 64))
      | (1ULL << (HTTPParser::T__73 - 64))
      | (1ULL << (HTTPParser::T__74 - 64))
      | (1ULL << (HTTPParser::T__75 - 64))
      | (1ULL << (HTTPParser::T__76 - 64))
      | (1ULL << (HTTPParser::T__77 - 64))
      | (1ULL << (HTTPParser::T__78 - 64))
      | (1ULL << (HTTPParser::T__79 - 64))
      | (1ULL << (HTTPParser::T__80 - 64))
      | (1ULL << (HTTPParser::T__81 - 64))
      | (1ULL << (HTTPParser::T__82 - 64))
      | (1ULL << (HTTPParser::T__83 - 64))
      | (1ULL << (HTTPParser::T__84 - 64))
      | (1ULL << (HTTPParser::T__85 - 64))
      | (1ULL << (HTTPParser::T__86 - 64))
      | (1ULL << (HTTPParser::T__87 - 64))
      | (1ULL << (HTTPParser::T__88 - 64))
      | (1ULL << (HTTPParser::T__89 - 64))
      | (1ULL << (HTTPParser::T__90 - 64))
      | (1ULL << (HTTPParser::T__91 - 64))
      | (1ULL << (HTTPParser::T__92 - 64))
      | (1ULL << (HTTPParser::T__93 - 64))
      | (1ULL << (HTTPParser::T__94 - 64))
      | (1ULL << (HTTPParser::T__95 - 64))
      | (1ULL << (HTTPParser::T__96 - 64))
      | (1ULL << (HTTPParser::T__97 - 64))
      | (1ULL << (HTTPParser::T__98 - 64))
      | (1ULL << (HTTPParser::T__99 - 64))
      | (1ULL << (HTTPParser::T__100 - 64))
      | (1ULL << (HTTPParser::T__101 - 64))
      | (1ULL << (HTTPParser::T__102 - 64))
      | (1ULL << (HTTPParser::T__103 - 64))
      | (1ULL << (HTTPParser::T__104 - 64))
      | (1ULL << (HTTPParser::T__105 - 64))
      | (1ULL << (HTTPParser::T__106 - 64))
      | (1ULL << (HTTPParser::T__107 - 64))
      | (1ULL << (HTTPParser::T__108 - 64))
      | (1ULL << (HTTPParser::T__109 - 64))
      | (1ULL << (HTTPParser::T__110 - 64))
      | (1ULL << (HTTPParser::T__111 - 64))
      | (1ULL << (HTTPParser::T__112 - 64))
      | (1ULL << (HTTPParser::T__113 - 64))
      | (1ULL << (HTTPParser::T__114 - 64))
      | (1ULL << (HTTPParser::T__115 - 64))
      | (1ULL << (HTTPParser::T__116 - 64))
      | (1ULL << (HTTPParser::T__117 - 64))
      | (1ULL << (HTTPParser::T__118 - 64))
      | (1ULL << (HTTPParser::T__119 - 64))
      | (1ULL << (HTTPParser::T__120 - 64))
      | (1ULL << (HTTPParser::T__121 - 64))
      | (1ULL << (HTTPParser::T__122 - 64))
      | (1ULL << (HTTPParser::T__123 - 64))
      | (1ULL << (HTTPParser::T__124 - 64))
      | (1ULL << (HTTPParser::T__125 - 64))
      | (1ULL << (HTTPParser::T__126 - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (HTTPParser::T__127 - 128))
      | (1ULL << (HTTPParser::T__128 - 128))
      | (1ULL << (HTTPParser::T__129 - 128))
      | (1ULL << (HTTPParser::T__130 - 128))
      | (1ULL << (HTTPParser::ID - 128))
      | (1ULL << (HTTPParser::STRING - 128))
      | (1ULL << (HTTPParser::NUMBER - 128))
      | (1ULL << (HTTPParser::WS - 128))
      | (1ULL << (HTTPParser::MESSAGEBODY - 128)))) != 0)) {
      setState(1159);
      mime_value();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- New_lineContext ------------------------------------------------------------------

HTTPParser::New_lineContext::New_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HTTPParser::New_lineContext::getRuleIndex() const {
  return HTTPParser::RuleNew_line;
}

void HTTPParser::New_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNew_line(this);
}

void HTTPParser::New_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNew_line(this);
}

HTTPParser::New_lineContext* HTTPParser::new_line() {
  New_lineContext *_localctx = _tracker.createInstance<New_lineContext>(_ctx, getState());
  enterRule(_localctx, 296, HTTPParser::RuleNew_line);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1162);
    match(HTTPParser::T__39);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> HTTPParser::_decisionToDFA;
atn::PredictionContextCache HTTPParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN HTTPParser::_atn;
std::vector<uint16_t> HTTPParser::_serializedATN;

std::vector<std::string> HTTPParser::_ruleNames = {
  "key", "http", "response", "status_line", "status_code", "status_text", 
  "request", "message_body", "request_line", "method", "uri", "uri_text", 
  "http_version", "header_message", "general_header", "location", "set_cookie", 
  "cookie_entry", "cookie_definition", "cookie_name", "cookie_value", "cookie_expiration", 
  "cookie_path", "cookie_domain", "cookie_secure", "cookie_http_only", "cookie_list", 
  "cache_control", "cache_request", "delta_seconds", "stale_time", "cache_extension", 
  "connection", "connection_token", "date", "http_date", "rfc1123_date", 
  "rfc850_date", "asctime_date", "cookie_date", "time", "date1", "date2", 
  "date3", "day", "year", "weekday1", "weekday2", "month", "pragma", "pragma_directive", 
  "extension_pragma", "stringlit", "trailer", "field_name", "transfer_encoding", 
  "transfer_coding", "transfer_extension", "parameter", "attribute", "value", 
  "upgrade", "product", "via", "received_info", "protocol_name", "protocol_version", 
  "received_by", "host", "pseudonym", "warning", "warning_value", "warn_code", 
  "warn_agent", "port", "warn_text", "warn_date", "request_header", "accept", 
  "accept_info", "media_range", "type", "subtype", "subtype_extension", 
  "accept_params", "qvalue", "accept_extension", "accept_charset", "accept_charset_info", 
  "charset", "quality_value", "accept_encoding", "accept_encoding_info", 
  "coding", "accept_language", "accept_language_info", "language_range", 
  "authorization", "credentials", "expect", "expect_info", "expectation_extension", 
  "expect_params", "from", "host_", "if_match", "if_match_info", "entity_tag", 
  "if_modified_since", "if_none_match", "if_none_match_info", "if_range", 
  "if_unmodified_since", "max_forwards", "proxy_authorization", "range", 
  "ranges_specifier", "byte_ranges_specifier", "byte_range_set", "byte_range_spec", 
  "first_byte_pos", "last_byte_pos", "suffix_byte_range_spec", "suffix_length", 
  "referer", "url", "te", "t_coding", "user_agent", "comment", "product_version", 
  "entity_header", "allow", "content_encoding", "content_language", "content_length", 
  "content_length_number", "content_location", "content_md5", "content_range", 
  "content_type", "mime_value", "not_eol", "token_or_key", "token", "expires", 
  "last_modified", "extension_header", "new_line"
};

std::vector<std::string> HTTPParser::_literalNames = {
  "", "'Connection'", "'Date'", "'Pragma'", "'Trailer'", "'Transfer-Encoding'", 
  "'Upgrade'", "'Via'", "'Warning'", "'Accept'", "'Accept-Charset'", "'Accept-Encoding'", 
  "'Accept-Language'", "'Authorization'", "'Expect'", "'From'", "'Host'", 
  "'If-Match'", "'If-Modified-Since'", "'If-None-Match'", "'If-Range'", 
  "'If-Unmodified-Since'", "'Max-Forwards'", "'Proxy-Authorization'", "'Range'", 
  "'Referer'", "'TE'", "'User-Agent'", "'Allow'", "'Content-Encoding'", 
  "'Content-Language'", "'Content-Length'", "'Content-Location'", "'Content-MD5'", 
  "'Content-Range'", "'Content-Type'", "'Expires'", "'Last-Modified'", "'Server'", 
  "'X-Powered-By'", "'\n'", "'OPTIONS'", "'GET'", "'POST'", "'HEAD'", "'PUT'", 
  "'DELETE'", "'TRACE'", "'CONNECT'", "'/'", "'http'", "'https'", "'%'", 
  "'.'", "'-'", "'_'", "'='", "'&'", "'?'", "'1'", "'HTTP/1.0'", "'HTTP/1.1'", 
  "'Location'", "':'", "'Set-Cookie'", "';'", "'~'", "'expires'", "'path'", 
  "'domain'", "'Secure'", "'HttpOnly'", "'Cookie'", "'Cache-Control'", "','", 
  "'no-cache'", "'no-store'", "'max-age'", "'max-stale'", "'min-fresh'", 
  "'no-transform'", "'only-if-cached'", "'post-check'", "'pre-check'", "'GMT'", 
  "'Mon'", "'Tue'", "'Wed'", "'Thu'", "'Fri'", "'Sat'", "'Sun'", "'Monday'", 
  "'Tuesday'", "'Wednesday'", "'Thursday'", "'Friday'", "'Saturday'", "'Sunday'", 
  "'Jan'", "'Feb'", "'Mar'", "'Apr'", "'May'", "'Jun'", "'Jul'", "'Aug'", 
  "'Sep'", "'Oct'", "'Nov'", "'Dec'", "'chunked'", "'*/*'", "'/*'", "'+'", 
  "'q'", "'0'", "'0.1'", "'0.2'", "'0.3'", "'0.4'", "'0.5'", "'0.6'", "'0.7'", 
  "'0.8'", "'0.9'", "'*'", "'100-continue'", "'bytes'", "'//'", "'('", "')'"
};

std::vector<std::string> HTTPParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "ID", "STRING", "NUMBER", "WS", "MESSAGEBODY"
};

dfa::Vocabulary HTTPParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> HTTPParser::_tokenNames;

HTTPParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x8a, 0x48f, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 
    0x9, 0x70, 0x4, 0x71, 0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 
    0x73, 0x4, 0x74, 0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 
    0x4, 0x77, 0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 
    0x7a, 0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
    0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 0x9, 
    0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 0x9, 0x83, 
    0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 0x9, 0x86, 0x4, 
    0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 0x9, 0x89, 0x4, 0x8a, 
    0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 0x9, 0x8c, 0x4, 0x8d, 0x9, 
    0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 
    0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 
    0x94, 0x9, 0x94, 0x4, 0x95, 0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x132, 0xa, 0x3, 0xc, 
    0x3, 0xe, 0x3, 0x135, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x6, 0x4, 0x13c, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x13d, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x7, 
    0x7, 0x147, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x14a, 0xb, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x6, 0x8, 0x151, 0xa, 0x8, 0xd, 
    0x8, 0xe, 0x8, 0x152, 0x3, 0x9, 0x6, 0x9, 0x156, 0xa, 0x9, 0xd, 0x9, 
    0xe, 0x9, 0x157, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x163, 0xa, 0xc, 0x7, 0xc, 
    0x165, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x168, 0xb, 0xc, 0x3, 0xd, 0x6, 
    0xd, 0x16b, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0x16c, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x174, 0xa, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x182, 
    0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x18d, 0xa, 0x12, 
    0xc, 0x12, 0xe, 0x12, 0x190, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x198, 0xa, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x6, 0x15, 0x19f, 0xa, 0x15, 
    0xd, 0x15, 0xe, 0x15, 0x1a0, 0x3, 0x16, 0x6, 0x16, 0x1a4, 0xa, 0x16, 
    0xd, 0x16, 0xe, 0x16, 0x1a5, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x5, 0x19, 0x1b3, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x7, 0x19, 0x1b8, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x1bb, 0xb, 0x19, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x1c6, 0xa, 0x1c, 0xc, 0x1c, 
    0xe, 0x1c, 0x1c9, 0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x7, 0x1d, 0x1d0, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x1d3, 
    0xb, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x1d8, 0xa, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 
    0x1e, 0x1e0, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x1ee, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x1fc, 0xa, 0x22, 
    0xc, 0x22, 0xe, 0x22, 0x1ff, 0xb, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x25, 0x5, 0x25, 0x20b, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 
    0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 
    0x236, 0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x7, 0x33, 0x24a, 0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 0x24d, 0xb, 0x33, 
    0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x251, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x259, 0xa, 0x35, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
    0x37, 0x7, 0x37, 0x262, 0xa, 0x37, 0xc, 0x37, 0xe, 0x37, 0x265, 0xb, 
    0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x7, 0x39, 0x26d, 0xa, 0x39, 0xc, 0x39, 0xe, 0x39, 0x270, 0xb, 0x39, 
    0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x274, 0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 
    0x6, 0x3b, 0x278, 0xa, 0x3b, 0xd, 0x3b, 0xe, 0x3b, 0x279, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 
    0x3e, 0x5, 0x3e, 0x284, 0xa, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x7, 0x3f, 0x28b, 0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 
    0x28e, 0xb, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x7, 0x41, 0x296, 0xa, 0x41, 0xc, 0x41, 0xe, 0x41, 0x299, 
    0xb, 0x41, 0x3, 0x42, 0x5, 0x42, 0x29c, 0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 
    0x45, 0x3, 0x45, 0x5, 0x45, 0x2a8, 0xa, 0x45, 0x3, 0x45, 0x5, 0x45, 
    0x2ab, 0xa, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x7, 0x46, 0x2b2, 0xa, 0x46, 0xc, 0x46, 0xe, 0x46, 0x2b5, 0xb, 0x46, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
    0x48, 0x7, 0x48, 0x2be, 0xa, 0x48, 0xc, 0x48, 0xe, 0x48, 0x2c1, 0xb, 
    0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x2c7, 
    0xa, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x5, 
    0x4b, 0x2ce, 0xa, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x2d1, 0xa, 0x4b, 0x3, 
    0x4c, 0x3, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
    0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
    0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x2ef, 0xa, 0x4f, 0x3, 0x50, 0x3, 0x50, 
    0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x7, 0x50, 0x2f6, 0xa, 0x50, 0xc, 0x50, 
    0xe, 0x50, 0x2f9, 0xb, 0x50, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x2fd, 
    0xa, 0x51, 0x3, 0x51, 0x3, 0x51, 0x7, 0x51, 0x301, 0xa, 0x51, 0xc, 0x51, 
    0xe, 0x51, 0x304, 0xb, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 
    0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x30e, 0xa, 0x52, 
    0x3, 0x53, 0x3, 0x53, 0x3, 0x54, 0x3, 0x54, 0x6, 0x54, 0x314, 0xa, 0x54, 
    0xd, 0x54, 0xe, 0x54, 0x315, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x56, 
    0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x320, 0xa, 0x56, 
    0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 
    0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x32c, 0xa, 0x58, 
    0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x7, 0x59, 0x333, 
    0xa, 0x59, 0xc, 0x59, 0xe, 0x59, 0x336, 0xb, 0x59, 0x3, 0x5a, 0x3, 0x5a, 
    0x5, 0x5a, 0x33a, 0xa, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 
    0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 
    0x5d, 0x3, 0x5d, 0x7, 0x5d, 0x348, 0xa, 0x5d, 0xc, 0x5d, 0xe, 0x5d, 
    0x34b, 0xb, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x34f, 0xa, 0x5e, 
    0x3, 0x5f, 0x3, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 
    0x60, 0x7, 0x60, 0x358, 0xa, 0x60, 0xc, 0x60, 0xe, 0x60, 0x35b, 0xb, 
    0x60, 0x3, 0x61, 0x3, 0x61, 0x5, 0x61, 0x35f, 0xa, 0x61, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x5, 0x62, 0x366, 0xa, 0x62, 
    0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 
    0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x7, 0x65, 0x373, 
    0xa, 0x65, 0xc, 0x65, 0xe, 0x65, 0x376, 0xb, 0x65, 0x3, 0x66, 0x3, 0x66, 
    0x5, 0x66, 0x37a, 0xa, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
    0x3, 0x67, 0x5, 0x67, 0x381, 0xa, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
    0x3, 0x67, 0x5, 0x67, 0x387, 0xa, 0x67, 0x5, 0x67, 0x389, 0xa, 0x67, 
    0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
    0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x5, 0x68, 0x395, 0xa, 0x68, 
    0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x39f, 0xa, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 
    0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 
    0x6c, 0x5, 0x6c, 0x3aa, 0xa, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6e, 
    0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 
    0x6f, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x5, 0x70, 
    0x3bb, 0xa, 0x70, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 
    0x3, 0x71, 0x5, 0x71, 0x3c3, 0xa, 0x71, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 
    0x3, 0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x74, 0x3, 
    0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 
    0x3, 0x76, 0x3, 0x76, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 
    0x78, 0x3, 0x78, 0x3, 0x78, 0x7, 0x78, 0x3de, 0xa, 0x78, 0xc, 0x78, 
    0xe, 0x78, 0x3e1, 0xb, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x7, 0x78, 
    0x3e6, 0xa, 0x78, 0xc, 0x78, 0xe, 0x78, 0x3e9, 0xb, 0x78, 0x5, 0x78, 
    0x3eb, 0xa, 0x78, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x5, 0x79, 0x3f0, 
    0xa, 0x79, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7c, 0x3, 
    0x7c, 0x3, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 
    0x3, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x5, 
    0x7f, 0x404, 0xa, 0x7f, 0x6, 0x7f, 0x406, 0xa, 0x7f, 0xd, 0x7f, 0xe, 
    0x7f, 0x407, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 
    0x7, 0x80, 0x40f, 0xa, 0x80, 0xc, 0x80, 0xe, 0x80, 0x412, 0xb, 0x80, 
    0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x5, 0x81, 0x417, 0xa, 0x81, 0x5, 0x81, 
    0x419, 0xa, 0x81, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 
    0x3, 0x82, 0x3, 0x82, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x7, 0x83, 0x425, 
    0xa, 0x83, 0xc, 0x83, 0xe, 0x83, 0x428, 0xb, 0x83, 0x3, 0x84, 0x3, 0x84, 
    0x3, 0x84, 0x7, 0x84, 0x42d, 0xa, 0x84, 0xc, 0x84, 0xe, 0x84, 0x430, 
    0xb, 0x84, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 
    0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x43c, 
    0xa, 0x85, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x7, 
    0x86, 0x443, 0xa, 0x86, 0xc, 0x86, 0xe, 0x86, 0x446, 0xb, 0x86, 0x3, 
    0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x88, 
    0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x89, 0x3, 
    0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 
    0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 
    0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 
    0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 
    0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8f, 0x6, 0x8f, 0x474, 
    0xa, 0x8f, 0xd, 0x8f, 0xe, 0x8f, 0x475, 0x3, 0x90, 0x3, 0x90, 0x3, 0x91, 
    0x3, 0x91, 0x5, 0x91, 0x47c, 0xa, 0x91, 0x3, 0x92, 0x3, 0x92, 0x3, 0x93, 
    0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 
    0x94, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x5, 0x95, 0x48b, 0xa, 0x95, 
    0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x4, 0x148, 0x426, 0x2, 0x97, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 
    0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 
    0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 
    0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 
    0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 
    0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 
    0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 
    0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 
    0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 0xf2, 0xf4, 
    0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 0x108, 0x10a, 
    0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 0x118, 0x11a, 0x11c, 0x11e, 
    0x120, 0x122, 0x124, 0x126, 0x128, 0x12a, 0x2, 0x10, 0x4, 0x2, 0x3, 
    0x29, 0x86, 0x86, 0x3, 0x2, 0x2a, 0x2a, 0x3, 0x2, 0x2b, 0x32, 0x5, 0x2, 
    0x34, 0x3d, 0x86, 0x86, 0x88, 0x88, 0x3, 0x2, 0x3e, 0x3f, 0x4, 0x2, 
    0x39, 0x39, 0x86, 0x86, 0x6, 0x2, 0x3d, 0x3d, 0x44, 0x44, 0x86, 0x86, 
    0x88, 0x88, 0x3, 0x2, 0x57, 0x5d, 0x3, 0x2, 0x5e, 0x64, 0x3, 0x2, 0x65, 
    0x70, 0x4, 0x2, 0x3d, 0x3d, 0x76, 0x7f, 0x4, 0x2, 0x80, 0x80, 0x86, 
    0x86, 0x3, 0x2, 0x34, 0x35, 0x5, 0x2, 0x3d, 0x3d, 0x76, 0x76, 0x88, 
    0x88, 0x2, 0x489, 0x2, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x4, 0x133, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x136, 0x3, 0x2, 0x2, 0x2, 0x8, 0x13f, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x143, 0x3, 0x2, 0x2, 0x2, 0xc, 0x148, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x10, 0x155, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x159, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x16, 0x15f, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x16e, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0x173, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x181, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x183, 0x3, 0x2, 0x2, 0x2, 0x22, 0x187, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x197, 0x3, 0x2, 0x2, 0x2, 0x26, 0x199, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0x1a7, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x30, 0x1af, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x34, 0x1be, 0x3, 
    0x2, 0x2, 0x2, 0x36, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x38, 0x1ca, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x1ef, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x40, 0x1f4, 0x3, 0x2, 0x2, 0x2, 
    0x42, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x44, 0x200, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x202, 0x3, 0x2, 0x2, 0x2, 0x48, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x20c, 
    0x3, 0x2, 0x2, 0x2, 0x4c, 0x212, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x218, 0x3, 
    0x2, 0x2, 0x2, 0x50, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x52, 0x224, 0x3, 0x2, 
    0x2, 0x2, 0x54, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x56, 0x22e, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x237, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x23a, 0x3, 0x2, 0x2, 0x2, 
    0x5c, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x60, 
    0x240, 0x3, 0x2, 0x2, 0x2, 0x62, 0x242, 0x3, 0x2, 0x2, 0x2, 0x64, 0x244, 
    0x3, 0x2, 0x2, 0x2, 0x66, 0x250, 0x3, 0x2, 0x2, 0x2, 0x68, 0x258, 0x3, 
    0x2, 0x2, 0x2, 0x6a, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x25c, 0x3, 0x2, 
    0x2, 0x2, 0x6e, 0x266, 0x3, 0x2, 0x2, 0x2, 0x70, 0x268, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x273, 0x3, 0x2, 0x2, 0x2, 0x74, 0x275, 0x3, 0x2, 0x2, 0x2, 
    0x76, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x78, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x7a, 
    0x283, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x285, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x28f, 
    0x3, 0x2, 0x2, 0x2, 0x80, 0x291, 0x3, 0x2, 0x2, 0x2, 0x82, 0x29b, 0x3, 
    0x2, 0x2, 0x2, 0x84, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x86, 0x2a2, 0x3, 0x2, 
    0x2, 0x2, 0x88, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x2ac, 0x3, 0x2, 0x2, 
    0x2, 0x8c, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x2b8, 0x3, 0x2, 0x2, 0x2, 
    0x90, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x92, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x94, 
    0x2ca, 0x3, 0x2, 0x2, 0x2, 0x96, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x98, 0x2d4, 
    0x3, 0x2, 0x2, 0x2, 0x9a, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x2ee, 0x3, 
    0x2, 0x2, 0x2, 0x9e, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x2fa, 0x3, 0x2, 
    0x2, 0x2, 0xa2, 0x30d, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x30f, 0x3, 0x2, 0x2, 
    0x2, 0xa6, 0x311, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x317, 0x3, 0x2, 0x2, 0x2, 
    0xaa, 0x31a, 0x3, 0x2, 0x2, 0x2, 0xac, 0x321, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0x32b, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x32d, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x337, 
    0x3, 0x2, 0x2, 0x2, 0xb4, 0x33b, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x33d, 0x3, 
    0x2, 0x2, 0x2, 0xb8, 0x342, 0x3, 0x2, 0x2, 0x2, 0xba, 0x34c, 0x3, 0x2, 
    0x2, 0x2, 0xbc, 0x350, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x352, 0x3, 0x2, 0x2, 
    0x2, 0xc0, 0x35c, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x365, 0x3, 0x2, 0x2, 0x2, 
    0xc4, 0x367, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x36b, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0x36d, 0x3, 0x2, 0x2, 0x2, 0xca, 0x379, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x388, 
    0x3, 0x2, 0x2, 0x2, 0xce, 0x394, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x396, 0x3, 
    0x2, 0x2, 0x2, 0xd2, 0x39a, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x3a0, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x3ab, 0x3, 0x2, 0x2, 
    0x2, 0xda, 0x3ad, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x3b1, 0x3, 0x2, 0x2, 0x2, 
    0xde, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0xe0, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0xe2, 
    0x3c4, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x3cc, 
    0x3, 0x2, 0x2, 0x2, 0xe8, 0x3d0, 0x3, 0x2, 0x2, 0x2, 0xea, 0x3d4, 0x3, 
    0x2, 0x2, 0x2, 0xec, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0xee, 0x3ea, 0x3, 0x2, 
    0x2, 0x2, 0xf0, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x3f1, 0x3, 0x2, 0x2, 
    0x2, 0xf4, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x3f5, 0x3, 0x2, 0x2, 0x2, 
    0xf8, 0x3f8, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0xfc, 
    0x3fe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x409, 0x3, 0x2, 0x2, 0x2, 0x100, 0x418, 
    0x3, 0x2, 0x2, 0x2, 0x102, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x104, 0x426, 
    0x3, 0x2, 0x2, 0x2, 0x106, 0x429, 0x3, 0x2, 0x2, 0x2, 0x108, 0x43b, 
    0x3, 0x2, 0x2, 0x2, 0x10a, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x447, 
    0x3, 0x2, 0x2, 0x2, 0x10e, 0x44d, 0x3, 0x2, 0x2, 0x2, 0x110, 0x453, 
    0x3, 0x2, 0x2, 0x2, 0x112, 0x457, 0x3, 0x2, 0x2, 0x2, 0x114, 0x459, 
    0x3, 0x2, 0x2, 0x2, 0x116, 0x461, 0x3, 0x2, 0x2, 0x2, 0x118, 0x465, 
    0x3, 0x2, 0x2, 0x2, 0x11a, 0x46e, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x473, 
    0x3, 0x2, 0x2, 0x2, 0x11e, 0x477, 0x3, 0x2, 0x2, 0x2, 0x120, 0x47b, 
    0x3, 0x2, 0x2, 0x2, 0x122, 0x47d, 0x3, 0x2, 0x2, 0x2, 0x124, 0x47f, 
    0x3, 0x2, 0x2, 0x2, 0x126, 0x483, 0x3, 0x2, 0x2, 0x2, 0x128, 0x487, 
    0x3, 0x2, 0x2, 0x2, 0x12a, 0x48c, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 
    0x9, 0x2, 0x2, 0x2, 0x12d, 0x3, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x132, 0x5, 
    0xe, 0x8, 0x2, 0x12f, 0x132, 0x5, 0x6, 0x4, 0x2, 0x130, 0x132, 0x5, 
    0x12a, 0x96, 0x2, 0x131, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x131, 0x12f, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x130, 0x3, 0x2, 0x2, 0x2, 0x132, 0x135, 0x3, 
    0x2, 0x2, 0x2, 0x133, 0x131, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x3, 
    0x2, 0x2, 0x2, 0x134, 0x5, 0x3, 0x2, 0x2, 0x2, 0x135, 0x133, 0x3, 0x2, 
    0x2, 0x2, 0x136, 0x137, 0x5, 0x8, 0x5, 0x2, 0x137, 0x13b, 0x5, 0x12a, 
    0x96, 0x2, 0x138, 0x139, 0x5, 0x1c, 0xf, 0x2, 0x139, 0x13a, 0x5, 0x12a, 
    0x96, 0x2, 0x13a, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x138, 0x3, 0x2, 
    0x2, 0x2, 0x13c, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13b, 0x3, 0x2, 
    0x2, 0x2, 0x13d, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x13f, 0x140, 0x5, 0x1a, 0xe, 0x2, 0x140, 0x141, 0x5, 0xa, 0x6, 
    0x2, 0x141, 0x142, 0x5, 0xc, 0x7, 0x2, 0x142, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x143, 0x144, 0x7, 0x88, 0x2, 0x2, 0x144, 0xb, 0x3, 0x2, 0x2, 0x2, 0x145, 
    0x147, 0xa, 0x3, 0x2, 0x2, 0x146, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 
    0x14a, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x3, 0x2, 0x2, 0x2, 0x148, 
    0x146, 0x3, 0x2, 0x2, 0x2, 0x149, 0xd, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x148, 
    0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x5, 0x12, 0xa, 0x2, 0x14c, 0x150, 
    0x5, 0x12a, 0x96, 0x2, 0x14d, 0x14e, 0x5, 0x1c, 0xf, 0x2, 0x14e, 0x14f, 
    0x5, 0x12a, 0x96, 0x2, 0x14f, 0x151, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14d, 
    0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x3, 0x2, 0x2, 0x2, 0x152, 0x150, 
    0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x3, 0x2, 0x2, 0x2, 0x153, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x154, 0x156, 0xb, 0x2, 0x2, 0x2, 0x155, 0x154, 0x3, 
    0x2, 0x2, 0x2, 0x156, 0x157, 0x3, 0x2, 0x2, 0x2, 0x157, 0x155, 0x3, 
    0x2, 0x2, 0x2, 0x157, 0x158, 0x3, 0x2, 0x2, 0x2, 0x158, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x159, 0x15a, 0x5, 0x14, 0xb, 0x2, 0x15a, 0x15b, 0x5, 0x16, 
    0xc, 0x2, 0x15b, 0x15c, 0x5, 0x1a, 0xe, 0x2, 0x15c, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x15d, 0x15e, 0x9, 0x4, 0x2, 0x2, 0x15e, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x15f, 0x166, 0x7, 0x33, 0x2, 0x2, 0x160, 0x162, 0x5, 0x18, 0xd, 
    0x2, 0x161, 0x163, 0x7, 0x33, 0x2, 0x2, 0x162, 0x161, 0x3, 0x2, 0x2, 
    0x2, 0x162, 0x163, 0x3, 0x2, 0x2, 0x2, 0x163, 0x165, 0x3, 0x2, 0x2, 
    0x2, 0x164, 0x160, 0x3, 0x2, 0x2, 0x2, 0x165, 0x168, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x164, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x3, 0x2, 0x2, 
    0x2, 0x167, 0x17, 0x3, 0x2, 0x2, 0x2, 0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 
    0x169, 0x16b, 0x9, 0x5, 0x2, 0x2, 0x16a, 0x169, 0x3, 0x2, 0x2, 0x2, 
    0x16b, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16a, 0x3, 0x2, 0x2, 0x2, 
    0x16c, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x19, 0x3, 0x2, 0x2, 0x2, 0x16e, 
    0x16f, 0x9, 0x6, 0x2, 0x2, 0x16f, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x170, 0x174, 
    0x5, 0x1e, 0x10, 0x2, 0x171, 0x174, 0x5, 0x9c, 0x4f, 0x2, 0x172, 0x174, 
    0x5, 0x108, 0x85, 0x2, 0x173, 0x170, 0x3, 0x2, 0x2, 0x2, 0x173, 0x171, 
    0x3, 0x2, 0x2, 0x2, 0x173, 0x172, 0x3, 0x2, 0x2, 0x2, 0x174, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x175, 0x182, 0x5, 0x38, 0x1d, 0x2, 0x176, 0x182, 0x5, 
    0x42, 0x22, 0x2, 0x177, 0x182, 0x5, 0x46, 0x24, 0x2, 0x178, 0x182, 0x5, 
    0x64, 0x33, 0x2, 0x179, 0x182, 0x5, 0x6c, 0x37, 0x2, 0x17a, 0x182, 0x5, 
    0x70, 0x39, 0x2, 0x17b, 0x182, 0x5, 0x7c, 0x3f, 0x2, 0x17c, 0x182, 0x5, 
    0x80, 0x41, 0x2, 0x17d, 0x182, 0x5, 0x8e, 0x48, 0x2, 0x17e, 0x182, 0x5, 
    0x22, 0x12, 0x2, 0x17f, 0x182, 0x5, 0x36, 0x1c, 0x2, 0x180, 0x182, 0x5, 
    0x20, 0x11, 0x2, 0x181, 0x175, 0x3, 0x2, 0x2, 0x2, 0x181, 0x176, 0x3, 
    0x2, 0x2, 0x2, 0x181, 0x177, 0x3, 0x2, 0x2, 0x2, 0x181, 0x178, 0x3, 
    0x2, 0x2, 0x2, 0x181, 0x179, 0x3, 0x2, 0x2, 0x2, 0x181, 0x17a, 0x3, 
    0x2, 0x2, 0x2, 0x181, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x181, 0x17c, 0x3, 
    0x2, 0x2, 0x2, 0x181, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x181, 0x17e, 0x3, 
    0x2, 0x2, 0x2, 0x181, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x181, 0x180, 0x3, 
    0x2, 0x2, 0x2, 0x182, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 0x7, 0x40, 
    0x2, 0x2, 0x184, 0x185, 0x7, 0x41, 0x2, 0x2, 0x185, 0x186, 0x5, 0xfc, 
    0x7f, 0x2, 0x186, 0x21, 0x3, 0x2, 0x2, 0x2, 0x187, 0x188, 0x7, 0x42, 
    0x2, 0x2, 0x188, 0x189, 0x7, 0x41, 0x2, 0x2, 0x189, 0x18e, 0x5, 0x24, 
    0x13, 0x2, 0x18a, 0x18b, 0x7, 0x43, 0x2, 0x2, 0x18b, 0x18d, 0x5, 0x24, 
    0x13, 0x2, 0x18c, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x190, 0x3, 0x2, 
    0x2, 0x2, 0x18e, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 0x3, 0x2, 
    0x2, 0x2, 0x18f, 0x23, 0x3, 0x2, 0x2, 0x2, 0x190, 0x18e, 0x3, 0x2, 0x2, 
    0x2, 0x191, 0x198, 0x5, 0x26, 0x14, 0x2, 0x192, 0x198, 0x5, 0x2c, 0x17, 
    0x2, 0x193, 0x198, 0x5, 0x2e, 0x18, 0x2, 0x194, 0x198, 0x5, 0x30, 0x19, 
    0x2, 0x195, 0x198, 0x5, 0x32, 0x1a, 0x2, 0x196, 0x198, 0x5, 0x34, 0x1b, 
    0x2, 0x197, 0x191, 0x3, 0x2, 0x2, 0x2, 0x197, 0x192, 0x3, 0x2, 0x2, 
    0x2, 0x197, 0x193, 0x3, 0x2, 0x2, 0x2, 0x197, 0x194, 0x3, 0x2, 0x2, 
    0x2, 0x197, 0x195, 0x3, 0x2, 0x2, 0x2, 0x197, 0x196, 0x3, 0x2, 0x2, 
    0x2, 0x198, 0x25, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 0x5, 0x28, 0x15, 
    0x2, 0x19a, 0x19b, 0x7, 0x3a, 0x2, 0x2, 0x19b, 0x19c, 0x5, 0x2a, 0x16, 
    0x2, 0x19c, 0x27, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19f, 0x9, 0x7, 0x2, 0x2, 
    0x19e, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a0, 0x3, 0x2, 0x2, 0x2, 
    0x1a0, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x3, 0x2, 0x2, 0x2, 
    0x1a1, 0x29, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a4, 0x9, 0x8, 0x2, 0x2, 0x1a3, 
    0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a5, 
    0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a6, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x7, 0x45, 0x2, 0x2, 0x1a8, 
    0x1a9, 0x7, 0x3a, 0x2, 0x2, 0x1a9, 0x1aa, 0x5, 0x48, 0x25, 0x2, 0x1aa, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x7, 0x46, 0x2, 0x2, 0x1ac, 
    0x1ad, 0x7, 0x3a, 0x2, 0x2, 0x1ad, 0x1ae, 0x5, 0x16, 0xc, 0x2, 0x1ae, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x7, 0x47, 0x2, 0x2, 0x1b0, 
    0x1b2, 0x7, 0x3a, 0x2, 0x2, 0x1b1, 0x1b3, 0x7, 0x37, 0x2, 0x2, 0x1b2, 
    0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b3, 
    0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b9, 0x7, 0x86, 0x2, 0x2, 0x1b5, 
    0x1b6, 0x7, 0x37, 0x2, 0x2, 0x1b6, 0x1b8, 0x7, 0x86, 0x2, 0x2, 0x1b7, 
    0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1b9, 
    0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1ba, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 
    0x7, 0x48, 0x2, 0x2, 0x1bd, 0x33, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 
    0x7, 0x49, 0x2, 0x2, 0x1bf, 0x35, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 
    0x7, 0x4a, 0x2, 0x2, 0x1c1, 0x1c2, 0x7, 0x41, 0x2, 0x2, 0x1c2, 0x1c7, 
    0x5, 0x26, 0x14, 0x2, 0x1c3, 0x1c4, 0x7, 0x43, 0x2, 0x2, 0x1c4, 0x1c6, 
    0x5, 0x26, 0x14, 0x2, 0x1c5, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c9, 
    0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c8, 
    0x3, 0x2, 0x2, 0x2, 0x1c8, 0x37, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1c7, 0x3, 
    0x2, 0x2, 0x2, 0x1ca, 0x1cb, 0x7, 0x4b, 0x2, 0x2, 0x1cb, 0x1cc, 0x7, 
    0x41, 0x2, 0x2, 0x1cc, 0x1d1, 0x5, 0x3a, 0x1e, 0x2, 0x1cd, 0x1ce, 0x7, 
    0x4c, 0x2, 0x2, 0x1ce, 0x1d0, 0x5, 0x3a, 0x1e, 0x2, 0x1cf, 0x1cd, 0x3, 
    0x2, 0x2, 0x2, 0x1d0, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1cf, 0x3, 
    0x2, 0x2, 0x2, 0x1d1, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x1d3, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d7, 0x7, 0x4d, 
    0x2, 0x2, 0x1d5, 0x1d6, 0x7, 0x3a, 0x2, 0x2, 0x1d6, 0x1d8, 0x7, 0x42, 
    0x2, 0x2, 0x1d7, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x3, 0x2, 
    0x2, 0x2, 0x1d8, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1ee, 0x7, 0x4e, 
    0x2, 0x2, 0x1da, 0x1db, 0x7, 0x4f, 0x2, 0x2, 0x1db, 0x1dc, 0x7, 0x3a, 
    0x2, 0x2, 0x1dc, 0x1ee, 0x5, 0x3c, 0x1f, 0x2, 0x1dd, 0x1df, 0x7, 0x50, 
    0x2, 0x2, 0x1de, 0x1e0, 0x5, 0x3e, 0x20, 0x2, 0x1df, 0x1de, 0x3, 0x2, 
    0x2, 0x2, 0x1df, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1ee, 0x3, 0x2, 
    0x2, 0x2, 0x1e1, 0x1e2, 0x7, 0x51, 0x2, 0x2, 0x1e2, 0x1e3, 0x7, 0x3a, 
    0x2, 0x2, 0x1e3, 0x1ee, 0x5, 0x3c, 0x1f, 0x2, 0x1e4, 0x1ee, 0x7, 0x52, 
    0x2, 0x2, 0x1e5, 0x1ee, 0x7, 0x53, 0x2, 0x2, 0x1e6, 0x1ee, 0x5, 0x40, 
    0x21, 0x2, 0x1e7, 0x1e8, 0x7, 0x54, 0x2, 0x2, 0x1e8, 0x1e9, 0x7, 0x3a, 
    0x2, 0x2, 0x1e9, 0x1ee, 0x7, 0x88, 0x2, 0x2, 0x1ea, 0x1eb, 0x7, 0x55, 
    0x2, 0x2, 0x1eb, 0x1ec, 0x7, 0x3a, 0x2, 0x2, 0x1ec, 0x1ee, 0x7, 0x88, 
    0x2, 0x2, 0x1ed, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1d9, 0x3, 0x2, 
    0x2, 0x2, 0x1ed, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1dd, 0x3, 0x2, 
    0x2, 0x2, 0x1ed, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1e4, 0x3, 0x2, 
    0x2, 0x2, 0x1ed, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1e6, 0x3, 0x2, 
    0x2, 0x2, 0x1ed, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ea, 0x3, 0x2, 
    0x2, 0x2, 0x1ee, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x7, 0x88, 
    0x2, 0x2, 0x1f0, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x7, 0x3a, 
    0x2, 0x2, 0x1f2, 0x1f3, 0x5, 0x3c, 0x1f, 0x2, 0x1f3, 0x3f, 0x3, 0x2, 
    0x2, 0x2, 0x1f4, 0x1f5, 0x7, 0x86, 0x2, 0x2, 0x1f5, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x1f6, 0x1f7, 0x7, 0x3, 0x2, 0x2, 0x1f7, 0x1f8, 0x7, 0x41, 
    0x2, 0x2, 0x1f8, 0x1fd, 0x5, 0x44, 0x23, 0x2, 0x1f9, 0x1fa, 0x7, 0x4c, 
    0x2, 0x2, 0x1fa, 0x1fc, 0x5, 0x44, 0x23, 0x2, 0x1fb, 0x1f9, 0x3, 0x2, 
    0x2, 0x2, 0x1fc, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fb, 0x3, 0x2, 
    0x2, 0x2, 0x1fd, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x1ff, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 0x7, 0x86, 0x2, 
    0x2, 0x201, 0x45, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x7, 0x4, 0x2, 0x2, 
    0x203, 0x204, 0x7, 0x41, 0x2, 0x2, 0x204, 0x205, 0x5, 0x48, 0x25, 0x2, 
    0x205, 0x47, 0x3, 0x2, 0x2, 0x2, 0x206, 0x20b, 0x5, 0x4a, 0x26, 0x2, 
    0x207, 0x20b, 0x5, 0x4c, 0x27, 0x2, 0x208, 0x20b, 0x5, 0x4e, 0x28, 0x2, 
    0x209, 0x20b, 0x5, 0x50, 0x29, 0x2, 0x20a, 0x206, 0x3, 0x2, 0x2, 0x2, 
    0x20a, 0x207, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x208, 0x3, 0x2, 0x2, 0x2, 
    0x20a, 0x209, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x20c, 
    0x20d, 0x5, 0x5e, 0x30, 0x2, 0x20d, 0x20e, 0x7, 0x4c, 0x2, 0x2, 0x20e, 
    0x20f, 0x5, 0x54, 0x2b, 0x2, 0x20f, 0x210, 0x5, 0x52, 0x2a, 0x2, 0x210, 
    0x211, 0x7, 0x56, 0x2, 0x2, 0x211, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x212, 
    0x213, 0x5, 0x60, 0x31, 0x2, 0x213, 0x214, 0x7, 0x4c, 0x2, 0x2, 0x214, 
    0x215, 0x5, 0x56, 0x2c, 0x2, 0x215, 0x216, 0x5, 0x52, 0x2a, 0x2, 0x216, 
    0x217, 0x7, 0x56, 0x2, 0x2, 0x217, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x218, 
    0x219, 0x5, 0x5e, 0x30, 0x2, 0x219, 0x21a, 0x7, 0x4c, 0x2, 0x2, 0x21a, 
    0x21b, 0x5, 0x58, 0x2d, 0x2, 0x21b, 0x21c, 0x5, 0x52, 0x2a, 0x2, 0x21c, 
    0x21d, 0x7, 0x88, 0x2, 0x2, 0x21d, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x21e, 
    0x21f, 0x5, 0x5e, 0x30, 0x2, 0x21f, 0x220, 0x7, 0x4c, 0x2, 0x2, 0x220, 
    0x221, 0x5, 0x56, 0x2c, 0x2, 0x221, 0x222, 0x5, 0x52, 0x2a, 0x2, 0x222, 
    0x223, 0x7, 0x56, 0x2, 0x2, 0x223, 0x51, 0x3, 0x2, 0x2, 0x2, 0x224, 
    0x225, 0x7, 0x88, 0x2, 0x2, 0x225, 0x226, 0x7, 0x41, 0x2, 0x2, 0x226, 
    0x227, 0x7, 0x88, 0x2, 0x2, 0x227, 0x228, 0x7, 0x41, 0x2, 0x2, 0x228, 
    0x229, 0x7, 0x88, 0x2, 0x2, 0x229, 0x53, 0x3, 0x2, 0x2, 0x2, 0x22a, 
    0x22b, 0x5, 0x5a, 0x2e, 0x2, 0x22b, 0x22c, 0x5, 0x62, 0x32, 0x2, 0x22c, 
    0x22d, 0x5, 0x5c, 0x2f, 0x2, 0x22d, 0x55, 0x3, 0x2, 0x2, 0x2, 0x22e, 
    0x22f, 0x5, 0x5a, 0x2e, 0x2, 0x22f, 0x235, 0x7, 0x38, 0x2, 0x2, 0x230, 
    0x231, 0x5, 0x62, 0x32, 0x2, 0x231, 0x232, 0x7, 0x38, 0x2, 0x2, 0x232, 
    0x233, 0x5, 0x5c, 0x2f, 0x2, 0x233, 0x236, 0x3, 0x2, 0x2, 0x2, 0x234, 
    0x236, 0x7, 0x86, 0x2, 0x2, 0x235, 0x230, 0x3, 0x2, 0x2, 0x2, 0x235, 
    0x234, 0x3, 0x2, 0x2, 0x2, 0x236, 0x57, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 
    0x5, 0x62, 0x32, 0x2, 0x238, 0x239, 0x7, 0x88, 0x2, 0x2, 0x239, 0x59, 
    0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 0x7, 0x88, 0x2, 0x2, 0x23b, 0x5b, 
    0x3, 0x2, 0x2, 0x2, 0x23c, 0x23d, 0x7, 0x88, 0x2, 0x2, 0x23d, 0x5d, 
    0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 0x9, 0x9, 0x2, 0x2, 0x23f, 0x5f, 0x3, 
    0x2, 0x2, 0x2, 0x240, 0x241, 0x9, 0xa, 0x2, 0x2, 0x241, 0x61, 0x3, 0x2, 
    0x2, 0x2, 0x242, 0x243, 0x9, 0xb, 0x2, 0x2, 0x243, 0x63, 0x3, 0x2, 0x2, 
    0x2, 0x244, 0x245, 0x7, 0x5, 0x2, 0x2, 0x245, 0x246, 0x7, 0x41, 0x2, 
    0x2, 0x246, 0x24b, 0x5, 0x66, 0x34, 0x2, 0x247, 0x248, 0x7, 0x4c, 0x2, 
    0x2, 0x248, 0x24a, 0x5, 0x66, 0x34, 0x2, 0x249, 0x247, 0x3, 0x2, 0x2, 
    0x2, 0x24a, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x249, 0x3, 0x2, 0x2, 
    0x2, 0x24b, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x24d, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x251, 0x7, 0x4d, 0x2, 0x2, 
    0x24f, 0x251, 0x5, 0x68, 0x35, 0x2, 0x250, 0x24e, 0x3, 0x2, 0x2, 0x2, 
    0x250, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x251, 0x67, 0x3, 0x2, 0x2, 0x2, 0x252, 
    0x253, 0x7, 0x86, 0x2, 0x2, 0x253, 0x254, 0x7, 0x3a, 0x2, 0x2, 0x254, 
    0x259, 0x7, 0x86, 0x2, 0x2, 0x255, 0x256, 0x7, 0x86, 0x2, 0x2, 0x256, 
    0x257, 0x7, 0x3a, 0x2, 0x2, 0x257, 0x259, 0x5, 0x6a, 0x36, 0x2, 0x258, 
    0x252, 0x3, 0x2, 0x2, 0x2, 0x258, 0x255, 0x3, 0x2, 0x2, 0x2, 0x259, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 0x7, 0x87, 0x2, 0x2, 0x25b, 
    0x6b, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 0x7, 0x6, 0x2, 0x2, 0x25d, 0x25e, 
    0x7, 0x41, 0x2, 0x2, 0x25e, 0x263, 0x5, 0x6e, 0x38, 0x2, 0x25f, 0x260, 
    0x7, 0x4c, 0x2, 0x2, 0x260, 0x262, 0x5, 0x6e, 0x38, 0x2, 0x261, 0x25f, 
    0x3, 0x2, 0x2, 0x2, 0x262, 0x265, 0x3, 0x2, 0x2, 0x2, 0x263, 0x261, 
    0x3, 0x2, 0x2, 0x2, 0x263, 0x264, 0x3, 0x2, 0x2, 0x2, 0x264, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x265, 0x263, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 0x7, 
    0x86, 0x2, 0x2, 0x267, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 0x7, 
    0x7, 0x2, 0x2, 0x269, 0x26a, 0x7, 0x41, 0x2, 0x2, 0x26a, 0x26e, 0x5, 
    0x72, 0x3a, 0x2, 0x26b, 0x26d, 0x5, 0x72, 0x3a, 0x2, 0x26c, 0x26b, 0x3, 
    0x2, 0x2, 0x2, 0x26d, 0x270, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26c, 0x3, 
    0x2, 0x2, 0x2, 0x26e, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x270, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x271, 0x274, 0x7, 0x71, 
    0x2, 0x2, 0x272, 0x274, 0x5, 0x74, 0x3b, 0x2, 0x273, 0x271, 0x3, 0x2, 
    0x2, 0x2, 0x273, 0x272, 0x3, 0x2, 0x2, 0x2, 0x274, 0x73, 0x3, 0x2, 0x2, 
    0x2, 0x275, 0x277, 0x7, 0x86, 0x2, 0x2, 0x276, 0x278, 0x5, 0x76, 0x3c, 
    0x2, 0x277, 0x276, 0x3, 0x2, 0x2, 0x2, 0x278, 0x279, 0x3, 0x2, 0x2, 
    0x2, 0x279, 0x277, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27a, 0x3, 0x2, 0x2, 
    0x2, 0x27a, 0x75, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27c, 0x5, 0x78, 0x3d, 
    0x2, 0x27c, 0x27d, 0x7, 0x3a, 0x2, 0x2, 0x27d, 0x27e, 0x5, 0x7a, 0x3e, 
    0x2, 0x27e, 0x77, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 0x7, 0x86, 0x2, 
    0x2, 0x280, 0x79, 0x3, 0x2, 0x2, 0x2, 0x281, 0x284, 0x7, 0x86, 0x2, 
    0x2, 0x282, 0x284, 0x5, 0x6a, 0x36, 0x2, 0x283, 0x281, 0x3, 0x2, 0x2, 
    0x2, 0x283, 0x282, 0x3, 0x2, 0x2, 0x2, 0x284, 0x7b, 0x3, 0x2, 0x2, 0x2, 
    0x285, 0x286, 0x7, 0x8, 0x2, 0x2, 0x286, 0x287, 0x7, 0x41, 0x2, 0x2, 
    0x287, 0x28c, 0x5, 0x7e, 0x40, 0x2, 0x288, 0x289, 0x7, 0x4c, 0x2, 0x2, 
    0x289, 0x28b, 0x5, 0x7e, 0x40, 0x2, 0x28a, 0x288, 0x3, 0x2, 0x2, 0x2, 
    0x28b, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28a, 0x3, 0x2, 0x2, 0x2, 
    0x28c, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x28e, 
    0x28c, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x290, 0x7, 0x86, 0x2, 0x2, 0x290, 
    0x7f, 0x3, 0x2, 0x2, 0x2, 0x291, 0x292, 0x7, 0x9, 0x2, 0x2, 0x292, 0x297, 
    0x5, 0x82, 0x42, 0x2, 0x293, 0x294, 0x7, 0x4c, 0x2, 0x2, 0x294, 0x296, 
    0x5, 0x82, 0x42, 0x2, 0x295, 0x293, 0x3, 0x2, 0x2, 0x2, 0x296, 0x299, 
    0x3, 0x2, 0x2, 0x2, 0x297, 0x295, 0x3, 0x2, 0x2, 0x2, 0x297, 0x298, 
    0x3, 0x2, 0x2, 0x2, 0x298, 0x81, 0x3, 0x2, 0x2, 0x2, 0x299, 0x297, 0x3, 
    0x2, 0x2, 0x2, 0x29a, 0x29c, 0x5, 0x84, 0x43, 0x2, 0x29b, 0x29a, 0x3, 
    0x2, 0x2, 0x2, 0x29b, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 0x3, 
    0x2, 0x2, 0x2, 0x29d, 0x29e, 0x5, 0x86, 0x44, 0x2, 0x29e, 0x83, 0x3, 
    0x2, 0x2, 0x2, 0x29f, 0x2a0, 0x7, 0x86, 0x2, 0x2, 0x2a0, 0x2a1, 0x7, 
    0x33, 0x2, 0x2, 0x2a1, 0x85, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a3, 0x7, 
    0x86, 0x2, 0x2, 0x2a3, 0x87, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a5, 0x5, 
    0x8a, 0x46, 0x2, 0x2a5, 0x2aa, 0x7, 0x41, 0x2, 0x2, 0x2a6, 0x2a8, 0x5, 
    0x96, 0x4c, 0x2, 0x2a7, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2a8, 0x3, 
    0x2, 0x2, 0x2, 0x2a8, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2ab, 0x5, 
    0x8c, 0x47, 0x2, 0x2aa, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2a9, 0x3, 
    0x2, 0x2, 0x2, 0x2ab, 0x89, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 0x7, 0x86, 
    0x2, 0x2, 0x2ad, 0x2ae, 0x7, 0x37, 0x2, 0x2, 0x2ae, 0x2b3, 0x7, 0x86, 
    0x2, 0x2, 0x2af, 0x2b0, 0x7, 0x37, 0x2, 0x2, 0x2b0, 0x2b2, 0x7, 0x86, 
    0x2, 0x2, 0x2b1, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b5, 0x3, 0x2, 
    0x2, 0x2, 0x2b3, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 0x3, 0x2, 
    0x2, 0x2, 0x2b4, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b3, 0x3, 0x2, 0x2, 
    0x2, 0x2b6, 0x2b7, 0x7, 0x86, 0x2, 0x2, 0x2b7, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x2b8, 0x2b9, 0x7, 0xa, 0x2, 0x2, 0x2b9, 0x2ba, 0x7, 0x41, 0x2, 
    0x2, 0x2ba, 0x2bf, 0x5, 0x90, 0x49, 0x2, 0x2bb, 0x2bc, 0x7, 0x4c, 0x2, 
    0x2, 0x2bc, 0x2be, 0x5, 0x90, 0x49, 0x2, 0x2bd, 0x2bb, 0x3, 0x2, 0x2, 
    0x2, 0x2be, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2bd, 0x3, 0x2, 0x2, 
    0x2, 0x2bf, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x8f, 0x3, 0x2, 0x2, 0x2, 
    0x2c1, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c3, 0x5, 0x92, 0x4a, 0x2, 
    0x2c3, 0x2c4, 0x5, 0x94, 0x4b, 0x2, 0x2c4, 0x2c6, 0x5, 0x98, 0x4d, 0x2, 
    0x2c5, 0x2c7, 0x5, 0x9a, 0x4e, 0x2, 0x2c6, 0x2c5, 0x3, 0x2, 0x2, 0x2, 
    0x2c6, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x91, 0x3, 0x2, 0x2, 0x2, 0x2c8, 
    0x2c9, 0x7, 0x88, 0x2, 0x2, 0x2c9, 0x93, 0x3, 0x2, 0x2, 0x2, 0x2ca, 
    0x2cb, 0x5, 0x8a, 0x46, 0x2, 0x2cb, 0x2d0, 0x7, 0x41, 0x2, 0x2, 0x2cc, 
    0x2ce, 0x5, 0x96, 0x4c, 0x2, 0x2cd, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2cd, 
    0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
    0x2d1, 0x5, 0x8c, 0x47, 0x2, 0x2d0, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2d0, 
    0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x95, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d3, 
    0x7, 0x88, 0x2, 0x2, 0x2d3, 0x97, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d5, 
    0x5, 0x6a, 0x36, 0x2, 0x2d5, 0x99, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d7, 
    0x5, 0x48, 0x25, 0x2, 0x2d7, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2ef, 
    0x5, 0x9e, 0x50, 0x2, 0x2d9, 0x2ef, 0x5, 0xb0, 0x59, 0x2, 0x2da, 0x2ef, 
    0x5, 0xb8, 0x5d, 0x2, 0x2db, 0x2ef, 0x5, 0xbe, 0x60, 0x2, 0x2dc, 0x2ef, 
    0x5, 0xc4, 0x63, 0x2, 0x2dd, 0x2ef, 0x5, 0xc8, 0x65, 0x2, 0x2de, 0x2ef, 
    0x5, 0xd0, 0x69, 0x2, 0x2df, 0x2ef, 0x5, 0xd2, 0x6a, 0x2, 0x2e0, 0x2ef, 
    0x5, 0xd4, 0x6b, 0x2, 0x2e1, 0x2ef, 0x5, 0xda, 0x6e, 0x2, 0x2e2, 0x2ef, 
    0x5, 0xdc, 0x6f, 0x2, 0x2e3, 0x2ef, 0x5, 0xe0, 0x71, 0x2, 0x2e4, 0x2ef, 
    0x5, 0xe2, 0x72, 0x2, 0x2e5, 0x2ef, 0x5, 0xdc, 0x6f, 0x2, 0x2e6, 0x2ef, 
    0x5, 0xe0, 0x71, 0x2, 0x2e7, 0x2ef, 0x5, 0xe2, 0x72, 0x2, 0x2e8, 0x2ef, 
    0x5, 0xe4, 0x73, 0x2, 0x2e9, 0x2ef, 0x5, 0xe6, 0x74, 0x2, 0x2ea, 0x2ef, 
    0x5, 0xe8, 0x75, 0x2, 0x2eb, 0x2ef, 0x5, 0xfa, 0x7e, 0x2, 0x2ec, 0x2ef, 
    0x5, 0xfe, 0x80, 0x2, 0x2ed, 0x2ef, 0x5, 0x102, 0x82, 0x2, 0x2ee, 0x2d8, 
    0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2da, 
    0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2dc, 
    0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2de, 
    0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2e0, 
    0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2e2, 
    0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2e4, 
    0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2e6, 
    0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2e8, 
    0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ea, 
    0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ec, 
    0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x9d, 0x3, 
    0x2, 0x2, 0x2, 0x2f0, 0x2f1, 0x7, 0xb, 0x2, 0x2, 0x2f1, 0x2f2, 0x7, 
    0x41, 0x2, 0x2, 0x2f2, 0x2f7, 0x5, 0xa0, 0x51, 0x2, 0x2f3, 0x2f4, 0x7, 
    0x4c, 0x2, 0x2, 0x2f4, 0x2f6, 0x5, 0xa0, 0x51, 0x2, 0x2f5, 0x2f3, 0x3, 
    0x2, 0x2, 0x2, 0x2f6, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f5, 0x3, 
    0x2, 0x2, 0x2, 0x2f7, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x9f, 0x3, 0x2, 
    0x2, 0x2, 0x2f9, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2fc, 0x5, 0xa2, 
    0x52, 0x2, 0x2fb, 0x2fd, 0x5, 0xaa, 0x56, 0x2, 0x2fc, 0x2fb, 0x3, 0x2, 
    0x2, 0x2, 0x2fc, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x302, 0x3, 0x2, 
    0x2, 0x2, 0x2fe, 0x2ff, 0x7, 0x4c, 0x2, 0x2, 0x2ff, 0x301, 0x5, 0xaa, 
    0x56, 0x2, 0x300, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x301, 0x304, 0x3, 0x2, 
    0x2, 0x2, 0x302, 0x300, 0x3, 0x2, 0x2, 0x2, 0x302, 0x303, 0x3, 0x2, 
    0x2, 0x2, 0x303, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x304, 0x302, 0x3, 0x2, 0x2, 
    0x2, 0x305, 0x30e, 0x7, 0x72, 0x2, 0x2, 0x306, 0x307, 0x5, 0xa4, 0x53, 
    0x2, 0x307, 0x308, 0x7, 0x73, 0x2, 0x2, 0x308, 0x30e, 0x3, 0x2, 0x2, 
    0x2, 0x309, 0x30a, 0x5, 0xa4, 0x53, 0x2, 0x30a, 0x30b, 0x7, 0x33, 0x2, 
    0x2, 0x30b, 0x30c, 0x5, 0xa6, 0x54, 0x2, 0x30c, 0x30e, 0x3, 0x2, 0x2, 
    0x2, 0x30d, 0x305, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x306, 0x3, 0x2, 0x2, 
    0x2, 0x30d, 0x309, 0x3, 0x2, 0x2, 0x2, 0x30e, 0xa3, 0x3, 0x2, 0x2, 0x2, 
    0x30f, 0x310, 0x7, 0x86, 0x2, 0x2, 0x310, 0xa5, 0x3, 0x2, 0x2, 0x2, 
    0x311, 0x313, 0x7, 0x86, 0x2, 0x2, 0x312, 0x314, 0x5, 0xa8, 0x55, 0x2, 
    0x313, 0x312, 0x3, 0x2, 0x2, 0x2, 0x314, 0x315, 0x3, 0x2, 0x2, 0x2, 
    0x315, 0x313, 0x3, 0x2, 0x2, 0x2, 0x315, 0x316, 0x3, 0x2, 0x2, 0x2, 
    0x316, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 0x7, 0x74, 0x2, 0x2, 
    0x318, 0x319, 0x7, 0x86, 0x2, 0x2, 0x319, 0xa9, 0x3, 0x2, 0x2, 0x2, 
    0x31a, 0x31b, 0x7, 0x43, 0x2, 0x2, 0x31b, 0x31c, 0x7, 0x75, 0x2, 0x2, 
    0x31c, 0x31d, 0x7, 0x3a, 0x2, 0x2, 0x31d, 0x31f, 0x5, 0xac, 0x57, 0x2, 
    0x31e, 0x320, 0x5, 0xae, 0x58, 0x2, 0x31f, 0x31e, 0x3, 0x2, 0x2, 0x2, 
    0x31f, 0x320, 0x3, 0x2, 0x2, 0x2, 0x320, 0xab, 0x3, 0x2, 0x2, 0x2, 0x321, 
    0x322, 0x9, 0xc, 0x2, 0x2, 0x322, 0xad, 0x3, 0x2, 0x2, 0x2, 0x323, 0x324, 
    0x7, 0x43, 0x2, 0x2, 0x324, 0x325, 0x7, 0x86, 0x2, 0x2, 0x325, 0x326, 
    0x7, 0x3a, 0x2, 0x2, 0x326, 0x32c, 0x7, 0x86, 0x2, 0x2, 0x327, 0x328, 
    0x7, 0x43, 0x2, 0x2, 0x328, 0x329, 0x7, 0x86, 0x2, 0x2, 0x329, 0x32a, 
    0x7, 0x3a, 0x2, 0x2, 0x32a, 0x32c, 0x5, 0x6a, 0x36, 0x2, 0x32b, 0x323, 
    0x3, 0x2, 0x2, 0x2, 0x32b, 0x327, 0x3, 0x2, 0x2, 0x2, 0x32c, 0xaf, 0x3, 
    0x2, 0x2, 0x2, 0x32d, 0x32e, 0x7, 0xc, 0x2, 0x2, 0x32e, 0x32f, 0x7, 
    0x41, 0x2, 0x2, 0x32f, 0x334, 0x5, 0xb2, 0x5a, 0x2, 0x330, 0x331, 0x7, 
    0x4c, 0x2, 0x2, 0x331, 0x333, 0x5, 0xb2, 0x5a, 0x2, 0x332, 0x330, 0x3, 
    0x2, 0x2, 0x2, 0x333, 0x336, 0x3, 0x2, 0x2, 0x2, 0x334, 0x332, 0x3, 
    0x2, 0x2, 0x2, 0x334, 0x335, 0x3, 0x2, 0x2, 0x2, 0x335, 0xb1, 0x3, 0x2, 
    0x2, 0x2, 0x336, 0x334, 0x3, 0x2, 0x2, 0x2, 0x337, 0x339, 0x5, 0xb4, 
    0x5b, 0x2, 0x338, 0x33a, 0x5, 0xb6, 0x5c, 0x2, 0x339, 0x338, 0x3, 0x2, 
    0x2, 0x2, 0x339, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x33a, 0xb3, 0x3, 0x2, 0x2, 
    0x2, 0x33b, 0x33c, 0x9, 0xd, 0x2, 0x2, 0x33c, 0xb5, 0x3, 0x2, 0x2, 0x2, 
    0x33d, 0x33e, 0x7, 0x43, 0x2, 0x2, 0x33e, 0x33f, 0x7, 0x75, 0x2, 0x2, 
    0x33f, 0x340, 0x7, 0x3a, 0x2, 0x2, 0x340, 0x341, 0x5, 0xac, 0x57, 0x2, 
    0x341, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x342, 0x343, 0x7, 0xd, 0x2, 0x2, 0x343, 
    0x344, 0x7, 0x41, 0x2, 0x2, 0x344, 0x349, 0x5, 0xba, 0x5e, 0x2, 0x345, 
    0x346, 0x7, 0x4c, 0x2, 0x2, 0x346, 0x348, 0x5, 0xba, 0x5e, 0x2, 0x347, 
    0x345, 0x3, 0x2, 0x2, 0x2, 0x348, 0x34b, 0x3, 0x2, 0x2, 0x2, 0x349, 
    0x347, 0x3, 0x2, 0x2, 0x2, 0x349, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x34a, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x349, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x34e, 
    0x5, 0xbc, 0x5f, 0x2, 0x34d, 0x34f, 0x5, 0xb6, 0x5c, 0x2, 0x34e, 0x34d, 
    0x3, 0x2, 0x2, 0x2, 0x34e, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x34f, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0x350, 0x351, 0x9, 0xd, 0x2, 0x2, 0x351, 0xbd, 0x3, 0x2, 
    0x2, 0x2, 0x352, 0x353, 0x7, 0xe, 0x2, 0x2, 0x353, 0x354, 0x7, 0x41, 
    0x2, 0x2, 0x354, 0x359, 0x5, 0xc0, 0x61, 0x2, 0x355, 0x356, 0x7, 0x4c, 
    0x2, 0x2, 0x356, 0x358, 0x5, 0xc0, 0x61, 0x2, 0x357, 0x355, 0x3, 0x2, 
    0x2, 0x2, 0x358, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x359, 0x357, 0x3, 0x2, 
    0x2, 0x2, 0x359, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x35a, 0xbf, 0x3, 0x2, 0x2, 
    0x2, 0x35b, 0x359, 0x3, 0x2, 0x2, 0x2, 0x35c, 0x35e, 0x5, 0xc2, 0x62, 
    0x2, 0x35d, 0x35f, 0x5, 0xb6, 0x5c, 0x2, 0x35e, 0x35d, 0x3, 0x2, 0x2, 
    0x2, 0x35e, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x35f, 0xc1, 0x3, 0x2, 0x2, 0x2, 
    0x360, 0x366, 0x7, 0x80, 0x2, 0x2, 0x361, 0x366, 0x7, 0x86, 0x2, 0x2, 
    0x362, 0x363, 0x7, 0x86, 0x2, 0x2, 0x363, 0x364, 0x7, 0x38, 0x2, 0x2, 
    0x364, 0x366, 0x7, 0x86, 0x2, 0x2, 0x365, 0x360, 0x3, 0x2, 0x2, 0x2, 
    0x365, 0x361, 0x3, 0x2, 0x2, 0x2, 0x365, 0x362, 0x3, 0x2, 0x2, 0x2, 
    0x366, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x367, 0x368, 0x7, 0xf, 0x2, 0x2, 0x368, 
    0x369, 0x7, 0x41, 0x2, 0x2, 0x369, 0x36a, 0x5, 0xc6, 0x64, 0x2, 0x36a, 
    0xc5, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x36c, 0x7, 0x86, 0x2, 0x2, 0x36c, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x36e, 0x7, 0x10, 0x2, 0x2, 0x36e, 
    0x36f, 0x7, 0x41, 0x2, 0x2, 0x36f, 0x374, 0x5, 0xca, 0x66, 0x2, 0x370, 
    0x371, 0x7, 0x4c, 0x2, 0x2, 0x371, 0x373, 0x5, 0xca, 0x66, 0x2, 0x372, 
    0x370, 0x3, 0x2, 0x2, 0x2, 0x373, 0x376, 0x3, 0x2, 0x2, 0x2, 0x374, 
    0x372, 0x3, 0x2, 0x2, 0x2, 0x374, 0x375, 0x3, 0x2, 0x2, 0x2, 0x375, 
    0xc9, 0x3, 0x2, 0x2, 0x2, 0x376, 0x374, 0x3, 0x2, 0x2, 0x2, 0x377, 0x37a, 
    0x7, 0x81, 0x2, 0x2, 0x378, 0x37a, 0x5, 0xcc, 0x67, 0x2, 0x379, 0x377, 
    0x3, 0x2, 0x2, 0x2, 0x379, 0x378, 0x3, 0x2, 0x2, 0x2, 0x37a, 0xcb, 0x3, 
    0x2, 0x2, 0x2, 0x37b, 0x389, 0x7, 0x86, 0x2, 0x2, 0x37c, 0x37d, 0x7, 
    0x86, 0x2, 0x2, 0x37d, 0x37e, 0x7, 0x3a, 0x2, 0x2, 0x37e, 0x380, 0x7, 
    0x86, 0x2, 0x2, 0x37f, 0x381, 0x5, 0xce, 0x68, 0x2, 0x380, 0x37f, 0x3, 
    0x2, 0x2, 0x2, 0x380, 0x381, 0x3, 0x2, 0x2, 0x2, 0x381, 0x389, 0x3, 
    0x2, 0x2, 0x2, 0x382, 0x383, 0x7, 0x86, 0x2, 0x2, 0x383, 0x384, 0x7, 
    0x3a, 0x2, 0x2, 0x384, 0x386, 0x5, 0x6a, 0x36, 0x2, 0x385, 0x387, 0x5, 
    0xce, 0x68, 0x2, 0x386, 0x385, 0x3, 0x2, 0x2, 0x2, 0x386, 0x387, 0x3, 
    0x2, 0x2, 0x2, 0x387, 0x389, 0x3, 0x2, 0x2, 0x2, 0x388, 0x37b, 0x3, 
    0x2, 0x2, 0x2, 0x388, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x388, 0x382, 0x3, 
    0x2, 0x2, 0x2, 0x389, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x38a, 0x38b, 0x7, 0x43, 
    0x2, 0x2, 0x38b, 0x395, 0x7, 0x86, 0x2, 0x2, 0x38c, 0x38d, 0x7, 0x43, 
    0x2, 0x2, 0x38d, 0x38e, 0x7, 0x86, 0x2, 0x2, 0x38e, 0x38f, 0x7, 0x3a, 
    0x2, 0x2, 0x38f, 0x395, 0x7, 0x86, 0x2, 0x2, 0x390, 0x391, 0x7, 0x43, 
    0x2, 0x2, 0x391, 0x392, 0x7, 0x86, 0x2, 0x2, 0x392, 0x393, 0x7, 0x3a, 
    0x2, 0x2, 0x393, 0x395, 0x5, 0x6a, 0x36, 0x2, 0x394, 0x38a, 0x3, 0x2, 
    0x2, 0x2, 0x394, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x394, 0x390, 0x3, 0x2, 
    0x2, 0x2, 0x395, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x396, 0x397, 0x7, 0x11, 
    0x2, 0x2, 0x397, 0x398, 0x7, 0x41, 0x2, 0x2, 0x398, 0x399, 0x7, 0x86, 
    0x2, 0x2, 0x399, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39b, 0x7, 0x12, 
    0x2, 0x2, 0x39b, 0x39c, 0x7, 0x41, 0x2, 0x2, 0x39c, 0x39e, 0x5, 0x8a, 
    0x46, 0x2, 0x39d, 0x39f, 0x7, 0x41, 0x2, 0x2, 0x39e, 0x39d, 0x3, 0x2, 
    0x2, 0x2, 0x39e, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x39f, 0xd3, 0x3, 0x2, 0x2, 
    0x2, 0x3a0, 0x3a1, 0x7, 0x13, 0x2, 0x2, 0x3a1, 0x3a2, 0x7, 0x41, 0x2, 
    0x2, 0x3a2, 0x3a3, 0x5, 0xd6, 0x6c, 0x2, 0x3a3, 0xd5, 0x3, 0x2, 0x2, 
    0x2, 0x3a4, 0x3aa, 0x7, 0x80, 0x2, 0x2, 0x3a5, 0x3a6, 0x5, 0xd8, 0x6d, 
    0x2, 0x3a6, 0x3a7, 0x7, 0x4c, 0x2, 0x2, 0x3a7, 0x3a8, 0x5, 0xd8, 0x6d, 
    0x2, 0x3a8, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3a4, 0x3, 0x2, 0x2, 
    0x2, 0x3a9, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0xd7, 0x3, 0x2, 0x2, 0x2, 
    0x3ab, 0x3ac, 0x7, 0x86, 0x2, 0x2, 0x3ac, 0xd9, 0x3, 0x2, 0x2, 0x2, 
    0x3ad, 0x3ae, 0x7, 0x14, 0x2, 0x2, 0x3ae, 0x3af, 0x7, 0x41, 0x2, 0x2, 
    0x3af, 0x3b0, 0x5, 0x48, 0x25, 0x2, 0x3b0, 0xdb, 0x3, 0x2, 0x2, 0x2, 
    0x3b1, 0x3b2, 0x7, 0x15, 0x2, 0x2, 0x3b2, 0x3b3, 0x7, 0x41, 0x2, 0x2, 
    0x3b3, 0x3b4, 0x5, 0xde, 0x70, 0x2, 0x3b4, 0xdd, 0x3, 0x2, 0x2, 0x2, 
    0x3b5, 0x3bb, 0x7, 0x80, 0x2, 0x2, 0x3b6, 0x3b7, 0x5, 0xd8, 0x6d, 0x2, 
    0x3b7, 0x3b8, 0x7, 0x4c, 0x2, 0x2, 0x3b8, 0x3b9, 0x5, 0xd8, 0x6d, 0x2, 
    0x3b9, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3b5, 0x3, 0x2, 0x2, 0x2, 
    0x3ba, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x3bc, 
    0x3bd, 0x7, 0x16, 0x2, 0x2, 0x3bd, 0x3be, 0x7, 0x41, 0x2, 0x2, 0x3be, 
    0x3c3, 0x5, 0xd8, 0x6d, 0x2, 0x3bf, 0x3c0, 0x7, 0x16, 0x2, 0x2, 0x3c0, 
    0x3c1, 0x7, 0x41, 0x2, 0x2, 0x3c1, 0x3c3, 0x5, 0x48, 0x25, 0x2, 0x3c2, 
    0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3c3, 
    0xe1, 0x3, 0x2, 0x2, 0x2, 0x3c4, 0x3c5, 0x7, 0x17, 0x2, 0x2, 0x3c5, 
    0x3c6, 0x7, 0x41, 0x2, 0x2, 0x3c6, 0x3c7, 0x5, 0x48, 0x25, 0x2, 0x3c7, 
    0xe3, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3c9, 0x7, 0x18, 0x2, 0x2, 0x3c9, 
    0x3ca, 0x7, 0x41, 0x2, 0x2, 0x3ca, 0x3cb, 0x7, 0x88, 0x2, 0x2, 0x3cb, 
    0xe5, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3cd, 0x7, 0x19, 0x2, 0x2, 0x3cd, 
    0x3ce, 0x7, 0x41, 0x2, 0x2, 0x3ce, 0x3cf, 0x5, 0xc6, 0x64, 0x2, 0x3cf, 
    0xe7, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3d1, 0x7, 0x1a, 0x2, 0x2, 0x3d1, 
    0x3d2, 0x7, 0x41, 0x2, 0x2, 0x3d2, 0x3d3, 0x5, 0xea, 0x76, 0x2, 0x3d3, 
    0xe9, 0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3d5, 0x5, 0xec, 0x77, 0x2, 0x3d5, 
    0xeb, 0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d7, 0x7, 0x82, 0x2, 0x2, 0x3d7, 
    0x3d8, 0x7, 0x3a, 0x2, 0x2, 0x3d8, 0x3d9, 0x5, 0xee, 0x78, 0x2, 0x3d9, 
    0xed, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3df, 0x5, 0xf0, 0x79, 0x2, 0x3db, 
    0x3dc, 0x7, 0x4c, 0x2, 0x2, 0x3dc, 0x3de, 0x5, 0xf0, 0x79, 0x2, 0x3dd, 
    0x3db, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3df, 
    0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3e0, 
    0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3e2, 
    0x3e7, 0x5, 0xf6, 0x7c, 0x2, 0x3e3, 0x3e4, 0x7, 0x4c, 0x2, 0x2, 0x3e4, 
    0x3e6, 0x5, 0xf6, 0x7c, 0x2, 0x3e5, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e6, 
    0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e7, 
    0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3e9, 
    0x3e7, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x3ea, 
    0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0xef, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3ed, 
    0x5, 0xf2, 0x7a, 0x2, 0x3ed, 0x3ef, 0x7, 0x38, 0x2, 0x2, 0x3ee, 0x3f0, 
    0x5, 0xf4, 0x7b, 0x2, 0x3ef, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3f0, 
    0x3, 0x2, 0x2, 0x2, 0x3f0, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3f2, 0x7, 
    0x88, 0x2, 0x2, 0x3f2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f4, 0x7, 
    0x88, 0x2, 0x2, 0x3f4, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f6, 0x7, 
    0x38, 0x2, 0x2, 0x3f6, 0x3f7, 0x5, 0xf8, 0x7d, 0x2, 0x3f7, 0xf7, 0x3, 
    0x2, 0x2, 0x2, 0x3f8, 0x3f9, 0x7, 0x88, 0x2, 0x2, 0x3f9, 0xf9, 0x3, 
    0x2, 0x2, 0x2, 0x3fa, 0x3fb, 0x7, 0x1b, 0x2, 0x2, 0x3fb, 0x3fc, 0x7, 
    0x41, 0x2, 0x2, 0x3fc, 0x3fd, 0x5, 0xfc, 0x7f, 0x2, 0x3fd, 0xfb, 0x3, 
    0x2, 0x2, 0x2, 0x3fe, 0x3ff, 0x9, 0xe, 0x2, 0x2, 0x3ff, 0x400, 0x7, 
    0x41, 0x2, 0x2, 0x400, 0x405, 0x7, 0x83, 0x2, 0x2, 0x401, 0x403, 0x5, 
    0x18, 0xd, 0x2, 0x402, 0x404, 0x7, 0x33, 0x2, 0x2, 0x403, 0x402, 0x3, 
    0x2, 0x2, 0x2, 0x403, 0x404, 0x3, 0x2, 0x2, 0x2, 0x404, 0x406, 0x3, 
    0x2, 0x2, 0x2, 0x405, 0x401, 0x3, 0x2, 0x2, 0x2, 0x406, 0x407, 0x3, 
    0x2, 0x2, 0x2, 0x407, 0x405, 0x3, 0x2, 0x2, 0x2, 0x407, 0x408, 0x3, 
    0x2, 0x2, 0x2, 0x408, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x409, 0x40a, 0x7, 0x1c, 
    0x2, 0x2, 0x40a, 0x40b, 0x7, 0x41, 0x2, 0x2, 0x40b, 0x410, 0x5, 0x100, 
    0x81, 0x2, 0x40c, 0x40d, 0x7, 0x4c, 0x2, 0x2, 0x40d, 0x40f, 0x5, 0x100, 
    0x81, 0x2, 0x40e, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x412, 0x3, 0x2, 
    0x2, 0x2, 0x410, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x410, 0x411, 0x3, 0x2, 
    0x2, 0x2, 0x411, 0xff, 0x3, 0x2, 0x2, 0x2, 0x412, 0x410, 0x3, 0x2, 0x2, 
    0x2, 0x413, 0x419, 0x5, 0x6c, 0x37, 0x2, 0x414, 0x416, 0x5, 0x74, 0x3b, 
    0x2, 0x415, 0x417, 0x5, 0xaa, 0x56, 0x2, 0x416, 0x415, 0x3, 0x2, 0x2, 
    0x2, 0x416, 0x417, 0x3, 0x2, 0x2, 0x2, 0x417, 0x419, 0x3, 0x2, 0x2, 
    0x2, 0x418, 0x413, 0x3, 0x2, 0x2, 0x2, 0x418, 0x414, 0x3, 0x2, 0x2, 
    0x2, 0x419, 0x101, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x41b, 0x7, 0x1d, 0x2, 
    0x2, 0x41b, 0x41c, 0x7, 0x41, 0x2, 0x2, 0x41c, 0x41d, 0x5, 0x7e, 0x40, 
    0x2, 0x41d, 0x41e, 0x7, 0x33, 0x2, 0x2, 0x41e, 0x41f, 0x5, 0x106, 0x84, 
    0x2, 0x41f, 0x420, 0x5, 0x104, 0x83, 0x2, 0x420, 0x103, 0x3, 0x2, 0x2, 
    0x2, 0x421, 0x425, 0xa, 0x3, 0x2, 0x2, 0x422, 0x425, 0x7, 0x84, 0x2, 
    0x2, 0x423, 0x425, 0x7, 0x85, 0x2, 0x2, 0x424, 0x421, 0x3, 0x2, 0x2, 
    0x2, 0x424, 0x422, 0x3, 0x2, 0x2, 0x2, 0x424, 0x423, 0x3, 0x2, 0x2, 
    0x2, 0x425, 0x428, 0x3, 0x2, 0x2, 0x2, 0x426, 0x427, 0x3, 0x2, 0x2, 
    0x2, 0x426, 0x424, 0x3, 0x2, 0x2, 0x2, 0x427, 0x105, 0x3, 0x2, 0x2, 
    0x2, 0x428, 0x426, 0x3, 0x2, 0x2, 0x2, 0x429, 0x42e, 0x7, 0x88, 0x2, 
    0x2, 0x42a, 0x42b, 0x7, 0x37, 0x2, 0x2, 0x42b, 0x42d, 0x9, 0xf, 0x2, 
    0x2, 0x42c, 0x42a, 0x3, 0x2, 0x2, 0x2, 0x42d, 0x430, 0x3, 0x2, 0x2, 
    0x2, 0x42e, 0x42c, 0x3, 0x2, 0x2, 0x2, 0x42e, 0x42f, 0x3, 0x2, 0x2, 
    0x2, 0x42f, 0x107, 0x3, 0x2, 0x2, 0x2, 0x430, 0x42e, 0x3, 0x2, 0x2, 
    0x2, 0x431, 0x43c, 0x5, 0x10a, 0x86, 0x2, 0x432, 0x43c, 0x5, 0x10c, 
    0x87, 0x2, 0x433, 0x43c, 0x5, 0x10e, 0x88, 0x2, 0x434, 0x43c, 0x5, 0x110, 
    0x89, 0x2, 0x435, 0x43c, 0x5, 0x114, 0x8b, 0x2, 0x436, 0x43c, 0x5, 0x116, 
    0x8c, 0x2, 0x437, 0x43c, 0x5, 0x11a, 0x8e, 0x2, 0x438, 0x43c, 0x5, 0x124, 
    0x93, 0x2, 0x439, 0x43c, 0x5, 0x126, 0x94, 0x2, 0x43a, 0x43c, 0x5, 0x128, 
    0x95, 0x2, 0x43b, 0x431, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x432, 0x3, 0x2, 
    0x2, 0x2, 0x43b, 0x433, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x434, 0x3, 0x2, 
    0x2, 0x2, 0x43b, 0x435, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x436, 0x3, 0x2, 
    0x2, 0x2, 0x43b, 0x437, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x438, 0x3, 0x2, 
    0x2, 0x2, 0x43b, 0x439, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x43a, 0x3, 0x2, 
    0x2, 0x2, 0x43c, 0x109, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43e, 0x7, 0x1e, 
    0x2, 0x2, 0x43e, 0x43f, 0x7, 0x41, 0x2, 0x2, 0x43f, 0x444, 0x5, 0x14, 
    0xb, 0x2, 0x440, 0x441, 0x7, 0x4c, 0x2, 0x2, 0x441, 0x443, 0x5, 0x14, 
    0xb, 0x2, 0x442, 0x440, 0x3, 0x2, 0x2, 0x2, 0x443, 0x446, 0x3, 0x2, 
    0x2, 0x2, 0x444, 0x442, 0x3, 0x2, 0x2, 0x2, 0x444, 0x445, 0x3, 0x2, 
    0x2, 0x2, 0x445, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x446, 0x444, 0x3, 0x2, 
    0x2, 0x2, 0x447, 0x448, 0x7, 0x1f, 0x2, 0x2, 0x448, 0x449, 0x7, 0x41, 
    0x2, 0x2, 0x449, 0x44a, 0x7, 0x86, 0x2, 0x2, 0x44a, 0x44b, 0x7, 0x4c, 
    0x2, 0x2, 0x44b, 0x44c, 0x7, 0x86, 0x2, 0x2, 0x44c, 0x10d, 0x3, 0x2, 
    0x2, 0x2, 0x44d, 0x44e, 0x7, 0x20, 0x2, 0x2, 0x44e, 0x44f, 0x7, 0x41, 
    0x2, 0x2, 0x44f, 0x450, 0x7, 0x86, 0x2, 0x2, 0x450, 0x451, 0x7, 0x4c, 
    0x2, 0x2, 0x451, 0x452, 0x7, 0x86, 0x2, 0x2, 0x452, 0x10f, 0x3, 0x2, 
    0x2, 0x2, 0x453, 0x454, 0x7, 0x21, 0x2, 0x2, 0x454, 0x455, 0x7, 0x41, 
    0x2, 0x2, 0x455, 0x456, 0x5, 0x112, 0x8a, 0x2, 0x456, 0x111, 0x3, 0x2, 
    0x2, 0x2, 0x457, 0x458, 0x7, 0x88, 0x2, 0x2, 0x458, 0x113, 0x3, 0x2, 
    0x2, 0x2, 0x459, 0x45a, 0x7, 0x22, 0x2, 0x2, 0x45a, 0x45b, 0x7, 0x41, 
    0x2, 0x2, 0x45b, 0x45c, 0x7, 0x86, 0x2, 0x2, 0x45c, 0x45d, 0x7, 0x37, 
    0x2, 0x2, 0x45d, 0x45e, 0x7, 0x86, 0x2, 0x2, 0x45e, 0x45f, 0x7, 0x37, 
    0x2, 0x2, 0x45f, 0x460, 0x7, 0x86, 0x2, 0x2, 0x460, 0x115, 0x3, 0x2, 
    0x2, 0x2, 0x461, 0x462, 0x7, 0x23, 0x2, 0x2, 0x462, 0x463, 0x7, 0x41, 
    0x2, 0x2, 0x463, 0x464, 0x7, 0x86, 0x2, 0x2, 0x464, 0x117, 0x3, 0x2, 
    0x2, 0x2, 0x465, 0x466, 0x7, 0x24, 0x2, 0x2, 0x466, 0x467, 0x7, 0x41, 
    0x2, 0x2, 0x467, 0x468, 0x7, 0x86, 0x2, 0x2, 0x468, 0x469, 0x7, 0x88, 
    0x2, 0x2, 0x469, 0x46a, 0x7, 0x38, 0x2, 0x2, 0x46a, 0x46b, 0x7, 0x88, 
    0x2, 0x2, 0x46b, 0x46c, 0x7, 0x33, 0x2, 0x2, 0x46c, 0x46d, 0x7, 0x88, 
    0x2, 0x2, 0x46d, 0x119, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x46f, 0x7, 0x25, 
    0x2, 0x2, 0x46f, 0x470, 0x7, 0x41, 0x2, 0x2, 0x470, 0x471, 0x5, 0x11c, 
    0x8f, 0x2, 0x471, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x472, 0x474, 0x5, 0x11e, 
    0x90, 0x2, 0x473, 0x472, 0x3, 0x2, 0x2, 0x2, 0x474, 0x475, 0x3, 0x2, 
    0x2, 0x2, 0x475, 0x473, 0x3, 0x2, 0x2, 0x2, 0x475, 0x476, 0x3, 0x2, 
    0x2, 0x2, 0x476, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x477, 0x478, 0xa, 0x3, 
    0x2, 0x2, 0x478, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x479, 0x47c, 0x5, 0x122, 
    0x92, 0x2, 0x47a, 0x47c, 0x5, 0x2, 0x2, 0x2, 0x47b, 0x479, 0x3, 0x2, 
    0x2, 0x2, 0x47b, 0x47a, 0x3, 0x2, 0x2, 0x2, 0x47c, 0x121, 0x3, 0x2, 
    0x2, 0x2, 0x47d, 0x47e, 0x5, 0x2, 0x2, 0x2, 0x47e, 0x123, 0x3, 0x2, 
    0x2, 0x2, 0x47f, 0x480, 0x7, 0x26, 0x2, 0x2, 0x480, 0x481, 0x7, 0x41, 
    0x2, 0x2, 0x481, 0x482, 0x5, 0x48, 0x25, 0x2, 0x482, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x483, 0x484, 0x7, 0x27, 0x2, 0x2, 0x484, 0x485, 0x7, 0x41, 
    0x2, 0x2, 0x485, 0x486, 0x5, 0x48, 0x25, 0x2, 0x486, 0x127, 0x3, 0x2, 
    0x2, 0x2, 0x487, 0x488, 0x5, 0x2, 0x2, 0x2, 0x488, 0x48a, 0x7, 0x41, 
    0x2, 0x2, 0x489, 0x48b, 0x5, 0x11c, 0x8f, 0x2, 0x48a, 0x489, 0x3, 0x2, 
    0x2, 0x2, 0x48a, 0x48b, 0x3, 0x2, 0x2, 0x2, 0x48b, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x48c, 0x48d, 0x7, 0x2a, 0x2, 0x2, 0x48d, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x57, 0x131, 0x133, 0x13d, 0x148, 0x152, 0x157, 0x162, 0x166, 
    0x16c, 0x173, 0x181, 0x18e, 0x197, 0x1a0, 0x1a5, 0x1b2, 0x1b9, 0x1c7, 
    0x1d1, 0x1d7, 0x1df, 0x1ed, 0x1fd, 0x20a, 0x235, 0x24b, 0x250, 0x258, 
    0x263, 0x26e, 0x273, 0x279, 0x283, 0x28c, 0x297, 0x29b, 0x2a7, 0x2aa, 
    0x2b3, 0x2bf, 0x2c6, 0x2cd, 0x2d0, 0x2ee, 0x2f7, 0x2fc, 0x302, 0x30d, 
    0x315, 0x31f, 0x32b, 0x334, 0x339, 0x349, 0x34e, 0x359, 0x35e, 0x365, 
    0x374, 0x379, 0x380, 0x386, 0x388, 0x394, 0x39e, 0x3a9, 0x3ba, 0x3c2, 
    0x3df, 0x3e7, 0x3ea, 0x3ef, 0x403, 0x407, 0x410, 0x416, 0x418, 0x424, 
    0x426, 0x42e, 0x43b, 0x444, 0x475, 0x47b, 0x48a, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

HTTPParser::Initializer HTTPParser::_init;
