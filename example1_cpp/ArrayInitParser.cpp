
// Generated from ArrayInit.g4 by ANTLR 4.7.1


#include "ArrayInitListener.h"

#include "ArrayInitParser.h"


using namespace antlrcpp;
using namespace antlr4;

ArrayInitParser::ArrayInitParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ArrayInitParser::~ArrayInitParser() {
  delete _interpreter;
}

std::string ArrayInitParser::getGrammarFileName() const {
  return "ArrayInit.g4";
}

const std::vector<std::string>& ArrayInitParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ArrayInitParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- InitContext ------------------------------------------------------------------

ArrayInitParser::InitContext::InitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ArrayInitParser::ValueContext *> ArrayInitParser::InitContext::value() {
  return getRuleContexts<ArrayInitParser::ValueContext>();
}

ArrayInitParser::ValueContext* ArrayInitParser::InitContext::value(size_t i) {
  return getRuleContext<ArrayInitParser::ValueContext>(i);
}


size_t ArrayInitParser::InitContext::getRuleIndex() const {
  return ArrayInitParser::RuleInit;
}

void ArrayInitParser::InitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArrayInitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInit(this);
}

void ArrayInitParser::InitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArrayInitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInit(this);
}

ArrayInitParser::InitContext* ArrayInitParser::init() {
  InitContext *_localctx = _tracker.createInstance<InitContext>(_ctx, getState());
  enterRule(_localctx, 0, ArrayInitParser::RuleInit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(4);
    match(ArrayInitParser::T__0);
    setState(5);
    value();
    setState(10);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ArrayInitParser::T__1) {
      setState(6);
      match(ArrayInitParser::T__1);
      setState(7);
      value();
      setState(12);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(13);
    match(ArrayInitParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

ArrayInitParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ArrayInitParser::InitContext* ArrayInitParser::ValueContext::init() {
  return getRuleContext<ArrayInitParser::InitContext>(0);
}

tree::TerminalNode* ArrayInitParser::ValueContext::INT() {
  return getToken(ArrayInitParser::INT, 0);
}


size_t ArrayInitParser::ValueContext::getRuleIndex() const {
  return ArrayInitParser::RuleValue;
}

void ArrayInitParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArrayInitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void ArrayInitParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArrayInitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

ArrayInitParser::ValueContext* ArrayInitParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 2, ArrayInitParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(17);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ArrayInitParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(15);
        init();
        break;
      }

      case ArrayInitParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(16);
        match(ArrayInitParser::INT);
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

// Static vars and initialization.
std::vector<dfa::DFA> ArrayInitParser::_decisionToDFA;
atn::PredictionContextCache ArrayInitParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ArrayInitParser::_atn;
std::vector<uint16_t> ArrayInitParser::_serializedATN;

std::vector<std::string> ArrayInitParser::_ruleNames = {
  "init", "value"
};

std::vector<std::string> ArrayInitParser::_literalNames = {
  "", "'{'", "','", "'}'"
};

std::vector<std::string> ArrayInitParser::_symbolicNames = {
  "", "", "", "", "INT", "WS"
};

dfa::Vocabulary ArrayInitParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ArrayInitParser::_tokenNames;

ArrayInitParser::Initializer::Initializer() {
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
    0x3, 0x7, 0x16, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0xb, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0xe, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x14, 
    0xa, 0x3, 0x3, 0x3, 0x2, 0x2, 0x4, 0x2, 0x4, 0x2, 0x2, 0x2, 0x15, 0x2, 
    0x6, 0x3, 0x2, 0x2, 0x2, 0x4, 0x13, 0x3, 0x2, 0x2, 0x2, 0x6, 0x7, 0x7, 
    0x3, 0x2, 0x2, 0x7, 0xc, 0x5, 0x4, 0x3, 0x2, 0x8, 0x9, 0x7, 0x4, 0x2, 
    0x2, 0x9, 0xb, 0x5, 0x4, 0x3, 0x2, 0xa, 0x8, 0x3, 0x2, 0x2, 0x2, 0xb, 
    0xe, 0x3, 0x2, 0x2, 0x2, 0xc, 0xa, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0xd, 0xf, 0x3, 0x2, 0x2, 0x2, 0xe, 0xc, 0x3, 0x2, 0x2, 
    0x2, 0xf, 0x10, 0x7, 0x5, 0x2, 0x2, 0x10, 0x3, 0x3, 0x2, 0x2, 0x2, 0x11, 
    0x14, 0x5, 0x2, 0x2, 0x2, 0x12, 0x14, 0x7, 0x6, 0x2, 0x2, 0x13, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x13, 0x12, 0x3, 0x2, 0x2, 0x2, 0x14, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0xc, 0x13, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ArrayInitParser::Initializer ArrayInitParser::_init;
