
// Generated from /home/atreya/Documents/Projects/Miscellaneous/bfc/grammar/bf.g4 by ANTLR 4.8


#include "bfListener.h"
#include "bfVisitor.h"

#include "bfParser.h"


using namespace antlrcpp;
using namespace antlr4;

bfParser::bfParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

bfParser::~bfParser() {
  delete _interpreter;
}

std::string bfParser::getGrammarFileName() const {
  return "bf.g4";
}

const std::vector<std::string>& bfParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& bfParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

bfParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bfParser::StatementsContext* bfParser::ProgramContext::statements() {
  return getRuleContext<bfParser::StatementsContext>(0);
}


size_t bfParser::ProgramContext::getRuleIndex() const {
  return bfParser::RuleProgram;
}

void bfParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void bfParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any bfParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

bfParser::ProgramContext* bfParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, bfParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(4);
    statements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

bfParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bfParser::StatementsContext::INC() {
  return getToken(bfParser::INC, 0);
}

tree::TerminalNode* bfParser::StatementsContext::DEC() {
  return getToken(bfParser::DEC, 0);
}

tree::TerminalNode* bfParser::StatementsContext::INPUT() {
  return getToken(bfParser::INPUT, 0);
}

tree::TerminalNode* bfParser::StatementsContext::OUTPUT() {
  return getToken(bfParser::OUTPUT, 0);
}


size_t bfParser::StatementsContext::getRuleIndex() const {
  return bfParser::RuleStatements;
}

void bfParser::StatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatements(this);
}

void bfParser::StatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatements(this);
}


antlrcpp::Any bfParser::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

bfParser::StatementsContext* bfParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 2, bfParser::RuleStatements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(6);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << bfParser::INPUT)
      | (1ULL << bfParser::OUTPUT)
      | (1ULL << bfParser::DEC)
      | (1ULL << bfParser::INC))) != 0))) {
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

// Static vars and initialization.
std::vector<dfa::DFA> bfParser::_decisionToDFA;
atn::PredictionContextCache bfParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN bfParser::_atn;
std::vector<uint16_t> bfParser::_serializedATN;

std::vector<std::string> bfParser::_ruleNames = {
  "program", "statements"
};

std::vector<std::string> bfParser::_literalNames = {
  "", "'\\\\.*?\\\\'", "'?'", "'.'", "'-'", "'+'", "'>'", "'<'"
};

std::vector<std::string> bfParser::_symbolicNames = {
  "", "COMMENT", "INPUT", "OUTPUT", "DEC", "INC", "LEFT", "RIGHT"
};

dfa::Vocabulary bfParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> bfParser::_tokenNames;

bfParser::Initializer::Initializer() {
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
    0x3, 0x9, 0xb, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x2, 0x2, 0x4, 0x2, 0x4, 0x2, 0x3, 
    0x3, 0x2, 0x4, 0x7, 0x2, 0x8, 0x2, 0x6, 0x3, 0x2, 0x2, 0x2, 0x4, 0x8, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x7, 0x5, 0x4, 0x3, 0x2, 0x7, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x9, 0x9, 0x2, 0x2, 0x2, 0x9, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

bfParser::Initializer bfParser::_init;
