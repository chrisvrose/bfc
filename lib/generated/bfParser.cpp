
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
    setState(17);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << bfParser::LOOPSTART)
      | (1ULL << bfParser::INPUT)
      | (1ULL << bfParser::OUTPUT)
      | (1ULL << bfParser::DEC)
      | (1ULL << bfParser::INC)
      | (1ULL << bfParser::LEFT)
      | (1ULL << bfParser::RIGHT))) != 0)) {
      setState(14);
      statements();
      setState(19);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(20);
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

std::vector<bfParser::NumberedStatementContext *> bfParser::StatementsContext::numberedStatement() {
  return getRuleContexts<bfParser::NumberedStatementContext>();
}

bfParser::NumberedStatementContext* bfParser::StatementsContext::numberedStatement(size_t i) {
  return getRuleContext<bfParser::NumberedStatementContext>(i);
}

std::vector<bfParser::LoopStmtContext *> bfParser::StatementsContext::loopStmt() {
  return getRuleContexts<bfParser::LoopStmtContext>();
}

bfParser::LoopStmtContext* bfParser::StatementsContext::loopStmt(size_t i) {
  return getRuleContext<bfParser::LoopStmtContext>(i);
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
    setState(25); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(25);
              _errHandler->sync(this);
              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
              case 1: {
                setState(22);
                statement();
                break;
              }

              case 2: {
                setState(23);
                numberedStatement();
                break;
              }

              case 3: {
                setState(24);
                loopStmt();
                break;
              }

              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(27); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopStmtContext ------------------------------------------------------------------

bfParser::LoopStmtContext::LoopStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bfParser::LoopStmtContext::LOOPSTART() {
  return getToken(bfParser::LOOPSTART, 0);
}

bfParser::StatementsContext* bfParser::LoopStmtContext::statements() {
  return getRuleContext<bfParser::StatementsContext>(0);
}

tree::TerminalNode* bfParser::LoopStmtContext::LOOPEND() {
  return getToken(bfParser::LOOPEND, 0);
}


size_t bfParser::LoopStmtContext::getRuleIndex() const {
  return bfParser::RuleLoopStmt;
}

void bfParser::LoopStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopStmt(this);
}

void bfParser::LoopStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopStmt(this);
}


antlrcpp::Any bfParser::LoopStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfVisitor*>(visitor))
    return parserVisitor->visitLoopStmt(this);
  else
    return visitor->visitChildren(this);
}

bfParser::LoopStmtContext* bfParser::loopStmt() {
  LoopStmtContext *_localctx = _tracker.createInstance<LoopStmtContext>(_ctx, getState());
  enterRule(_localctx, 4, bfParser::RuleLoopStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    match(bfParser::LOOPSTART);
    setState(30);
    statements();
    setState(31);
    match(bfParser::LOOPEND);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberedStatementContext ------------------------------------------------------------------

bfParser::NumberedStatementContext::NumberedStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bfParser::StatementContext* bfParser::NumberedStatementContext::statement() {
  return getRuleContext<bfParser::StatementContext>(0);
}

tree::TerminalNode* bfParser::NumberedStatementContext::NUMBER() {
  return getToken(bfParser::NUMBER, 0);
}


size_t bfParser::NumberedStatementContext::getRuleIndex() const {
  return bfParser::RuleNumberedStatement;
}

void bfParser::NumberedStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberedStatement(this);
}

void bfParser::NumberedStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberedStatement(this);
}


antlrcpp::Any bfParser::NumberedStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfVisitor*>(visitor))
    return parserVisitor->visitNumberedStatement(this);
  else
    return visitor->visitChildren(this);
}

bfParser::NumberedStatementContext* bfParser::numberedStatement() {
  NumberedStatementContext *_localctx = _tracker.createInstance<NumberedStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, bfParser::RuleNumberedStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
    statement();
    setState(34);
    match(bfParser::NUMBER);
   
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

tree::TerminalNode* bfParser::StatementContext::LEFT() {
  return getToken(bfParser::LEFT, 0);
}

tree::TerminalNode* bfParser::StatementContext::RIGHT() {
  return getToken(bfParser::RIGHT, 0);
}

bfParser::InputStmtContext* bfParser::StatementContext::inputStmt() {
  return getRuleContext<bfParser::InputStmtContext>(0);
}

bfParser::OutputStmtContext* bfParser::StatementContext::outputStmt() {
  return getRuleContext<bfParser::OutputStmtContext>(0);
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
  enterRule(_localctx, 8, bfParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(42);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case bfParser::INC: {
        enterOuterAlt(_localctx, 1);
        setState(36);
        match(bfParser::INC);
        break;
      }

      case bfParser::DEC: {
        enterOuterAlt(_localctx, 2);
        setState(37);
        match(bfParser::DEC);
        break;
      }

      case bfParser::LEFT: {
        enterOuterAlt(_localctx, 3);
        setState(38);
        match(bfParser::LEFT);
        break;
      }

      case bfParser::RIGHT: {
        enterOuterAlt(_localctx, 4);
        setState(39);
        match(bfParser::RIGHT);
        break;
      }

      case bfParser::INPUT: {
        enterOuterAlt(_localctx, 5);
        setState(40);
        inputStmt();
        break;
      }

      case bfParser::OUTPUT: {
        enterOuterAlt(_localctx, 6);
        setState(41);
        outputStmt();
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

//----------------- InputStmtContext ------------------------------------------------------------------

bfParser::InputStmtContext::InputStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bfParser::InputStmtContext::INPUT() {
  return getToken(bfParser::INPUT, 0);
}


size_t bfParser::InputStmtContext::getRuleIndex() const {
  return bfParser::RuleInputStmt;
}

void bfParser::InputStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInputStmt(this);
}

void bfParser::InputStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInputStmt(this);
}


antlrcpp::Any bfParser::InputStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfVisitor*>(visitor))
    return parserVisitor->visitInputStmt(this);
  else
    return visitor->visitChildren(this);
}

bfParser::InputStmtContext* bfParser::inputStmt() {
  InputStmtContext *_localctx = _tracker.createInstance<InputStmtContext>(_ctx, getState());
  enterRule(_localctx, 10, bfParser::RuleInputStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(bfParser::INPUT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutputStmtContext ------------------------------------------------------------------

bfParser::OutputStmtContext::OutputStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bfParser::OutputStmtContext::OUTPUT() {
  return getToken(bfParser::OUTPUT, 0);
}


size_t bfParser::OutputStmtContext::getRuleIndex() const {
  return bfParser::RuleOutputStmt;
}

void bfParser::OutputStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOutputStmt(this);
}

void bfParser::OutputStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOutputStmt(this);
}


antlrcpp::Any bfParser::OutputStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfVisitor*>(visitor))
    return parserVisitor->visitOutputStmt(this);
  else
    return visitor->visitChildren(this);
}

bfParser::OutputStmtContext* bfParser::outputStmt() {
  OutputStmtContext *_localctx = _tracker.createInstance<OutputStmtContext>(_ctx, getState());
  enterRule(_localctx, 12, bfParser::RuleOutputStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(bfParser::OUTPUT);
   
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
  "program", "statements", "loopStmt", "numberedStatement", "statement", 
  "inputStmt", "outputStmt"
};

std::vector<std::string> bfParser::_literalNames = {
  "", "'\n'", "", "", "'['", "']'", "", "'?'", "'.'", "'-'", "'+'", "'>'", 
  "'<'"
};

std::vector<std::string> bfParser::_symbolicNames = {
  "", "NEWLINE", "COMMENT", "WS", "LOOPSTART", "LOOPEND", "NUMBER", "INPUT", 
  "OUTPUT", "DEC", "INC", "LEFT", "RIGHT"
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
    0x3, 0xe, 0x33, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x3, 0x2, 0x7, 0x2, 0x12, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x15, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x6, 
    0x3, 0x1c, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x1d, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x2d, 0xa, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x2, 0x2, 0x9, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x2, 0x2, 0x2, 0x34, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x8, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x2c, 0x3, 0x2, 0x2, 0x2, 0xc, 0x2e, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x30, 0x3, 0x2, 0x2, 0x2, 0x10, 0x12, 0x5, 0x4, 0x3, 
    0x2, 0x11, 0x10, 0x3, 0x2, 0x2, 0x2, 0x12, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x13, 0x11, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x16, 0x3, 0x2, 0x2, 0x2, 0x15, 0x13, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 
    0x7, 0x2, 0x2, 0x3, 0x17, 0x3, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1c, 0x5, 
    0xa, 0x6, 0x2, 0x19, 0x1c, 0x5, 0x8, 0x5, 0x2, 0x1a, 0x1c, 0x5, 0x6, 
    0x4, 0x2, 0x1b, 0x18, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x1b, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x1d, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1e, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x6, 0x2, 0x2, 0x20, 0x21, 
    0x5, 0x4, 0x3, 0x2, 0x21, 0x22, 0x7, 0x7, 0x2, 0x2, 0x22, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x23, 0x24, 0x5, 0xa, 0x6, 0x2, 0x24, 0x25, 0x7, 0x8, 
    0x2, 0x2, 0x25, 0x9, 0x3, 0x2, 0x2, 0x2, 0x26, 0x2d, 0x7, 0xc, 0x2, 
    0x2, 0x27, 0x2d, 0x7, 0xb, 0x2, 0x2, 0x28, 0x2d, 0x7, 0xd, 0x2, 0x2, 
    0x29, 0x2d, 0x7, 0xe, 0x2, 0x2, 0x2a, 0x2d, 0x5, 0xc, 0x7, 0x2, 0x2b, 
    0x2d, 0x5, 0xe, 0x8, 0x2, 0x2c, 0x26, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x2d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x9, 0x2, 
    0x2, 0x2f, 0xd, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x7, 0xa, 0x2, 0x2, 
    0x31, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6, 0x13, 0x1b, 0x1d, 0x2c, 
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
