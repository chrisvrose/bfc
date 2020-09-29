
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

tree::TerminalNode* bfParser::ProgramContext::EOF() {
  return getToken(bfParser::EOF, 0);
}

std::vector<bfParser::StatementsContext *> bfParser::ProgramContext::statements() {
  return getRuleContexts<bfParser::StatementsContext>();
}

bfParser::StatementsContext* bfParser::ProgramContext::statements(size_t i) {
  return getRuleContext<bfParser::StatementsContext>(i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(9);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << bfParser::INPUT)
      | (1ULL << bfParser::OUTPUT)
      | (1ULL << bfParser::DEC)
      | (1ULL << bfParser::INC))) != 0)) {
      setState(6);
      statements();
      setState(11);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(12);
    match(bfParser::EOF);
   
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

std::vector<bfParser::StatementContext *> bfParser::StatementsContext::statement() {
  return getRuleContexts<bfParser::StatementContext>();
}

bfParser::StatementContext* bfParser::StatementsContext::statement(size_t i) {
  return getRuleContext<bfParser::StatementContext>(i);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(15); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(14);
              statement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(17); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

bfParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bfParser::StatementContext::INC() {
  return getToken(bfParser::INC, 0);
}

tree::TerminalNode* bfParser::StatementContext::DEC() {
  return getToken(bfParser::DEC, 0);
}

tree::TerminalNode* bfParser::StatementContext::INPUT() {
  return getToken(bfParser::INPUT, 0);
}

tree::TerminalNode* bfParser::StatementContext::OUTPUT() {
  return getToken(bfParser::OUTPUT, 0);
}


size_t bfParser::StatementContext::getRuleIndex() const {
  return bfParser::RuleStatement;
}

void bfParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void bfParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any bfParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

bfParser::StatementContext* bfParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, bfParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(19);
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
  "program", "statements", "statement"
};

std::vector<std::string> bfParser::_literalNames = {
  "", "'\n'", "'\\\\.*?\\\\'", "'?'", "'.'", "'-'", "'+'", "'>'", "'<'"
};

std::vector<std::string> bfParser::_symbolicNames = {
  "", "NEWLINE", "COMMENT", "INPUT", "OUTPUT", "DEC", "INC", "LEFT", "RIGHT"
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
    0x3, 0xa, 0x18, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x3, 0x2, 0x7, 0x2, 0xa, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0xd, 0xb, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x6, 0x3, 0x12, 0xa, 0x3, 0xd, 0x3, 
    0xe, 0x3, 0x13, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x2, 0x2, 0x5, 0x2, 0x4, 
    0x6, 0x2, 0x3, 0x3, 0x2, 0x5, 0x8, 0x2, 0x16, 0x2, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6, 0x15, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0xa, 0x5, 0x4, 0x3, 0x2, 0x9, 0x8, 0x3, 0x2, 0x2, 0x2, 0xa, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0xb, 0x9, 0x3, 0x2, 0x2, 0x2, 0xb, 0xc, 0x3, 0x2, 0x2, 
    0x2, 0xc, 0xe, 0x3, 0x2, 0x2, 0x2, 0xd, 0xb, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0xf, 0x7, 0x2, 0x2, 0x3, 0xf, 0x3, 0x3, 0x2, 0x2, 0x2, 0x10, 0x12, 0x5, 
    0x6, 0x4, 0x2, 0x11, 0x10, 0x3, 0x2, 0x2, 0x2, 0x12, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x13, 0x11, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x5, 0x3, 0x2, 0x2, 0x2, 0x15, 0x16, 0x9, 0x2, 0x2, 0x2, 
    0x16, 0x7, 0x3, 0x2, 0x2, 0x2, 0x4, 0xb, 0x13, 
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
