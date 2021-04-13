
// Generated from /home/atreya/Documents/Projects/Miscellaneous/bfc/grammar/bfe.g4 by ANTLR 4.8


#include "bfeListener.h"
#include "bfeVisitor.h"

#include "bfeParser.h"


using namespace antlrcpp;
using namespace antlr4;

bfeParser::bfeParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

bfeParser::~bfeParser() {
  delete _interpreter;
}

std::string bfeParser::getGrammarFileName() const {
  return "bfe.g4";
}

const std::vector<std::string>& bfeParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& bfeParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

bfeParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bfeParser::ProgramContext::EOF() {
  return getToken(bfeParser::EOF, 0);
}

bfeParser::StatementsContext* bfeParser::ProgramContext::statements() {
  return getRuleContext<bfeParser::StatementsContext>(0);
}


size_t bfeParser::ProgramContext::getRuleIndex() const {
  return bfeParser::RuleProgram;
}

void bfeParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void bfeParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any bfeParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfeVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

bfeParser::ProgramContext* bfeParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, bfeParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << bfeParser::LOOPSTART)
      | (1ULL << bfeParser::GRPSTART)
      | (1ULL << bfeParser::INPUT)
      | (1ULL << bfeParser::OUTPUT)
      | (1ULL << bfeParser::DEC)
      | (1ULL << bfeParser::INC)
      | (1ULL << bfeParser::LEFT)
      | (1ULL << bfeParser::RIGHT))) != 0)) {
      setState(28);
      statements();
    }
    setState(31);
    match(bfeParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

bfeParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<bfeParser::EligibleStmtContext *> bfeParser::StatementsContext::eligibleStmt() {
  return getRuleContexts<bfeParser::EligibleStmtContext>();
}

bfeParser::EligibleStmtContext* bfeParser::StatementsContext::eligibleStmt(size_t i) {
  return getRuleContext<bfeParser::EligibleStmtContext>(i);
}


size_t bfeParser::StatementsContext::getRuleIndex() const {
  return bfeParser::RuleStatements;
}

void bfeParser::StatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatements(this);
}

void bfeParser::StatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatements(this);
}


antlrcpp::Any bfeParser::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfeVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

bfeParser::StatementsContext* bfeParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 2, bfeParser::RuleStatements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(33);
      eligibleStmt();
      setState(36); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << bfeParser::LOOPSTART)
      | (1ULL << bfeParser::GRPSTART)
      | (1ULL << bfeParser::INPUT)
      | (1ULL << bfeParser::OUTPUT)
      | (1ULL << bfeParser::DEC)
      | (1ULL << bfeParser::INC)
      | (1ULL << bfeParser::LEFT)
      | (1ULL << bfeParser::RIGHT))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EligibleStmtContext ------------------------------------------------------------------

bfeParser::EligibleStmtContext::EligibleStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bfeParser::StmtContext* bfeParser::EligibleStmtContext::stmt() {
  return getRuleContext<bfeParser::StmtContext>(0);
}

bfeParser::NumberedStmtContext* bfeParser::EligibleStmtContext::numberedStmt() {
  return getRuleContext<bfeParser::NumberedStmtContext>(0);
}


size_t bfeParser::EligibleStmtContext::getRuleIndex() const {
  return bfeParser::RuleEligibleStmt;
}

void bfeParser::EligibleStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEligibleStmt(this);
}

void bfeParser::EligibleStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEligibleStmt(this);
}


antlrcpp::Any bfeParser::EligibleStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfeVisitor*>(visitor))
    return parserVisitor->visitEligibleStmt(this);
  else
    return visitor->visitChildren(this);
}

bfeParser::EligibleStmtContext* bfeParser::eligibleStmt() {
  EligibleStmtContext *_localctx = _tracker.createInstance<EligibleStmtContext>(_ctx, getState());
  enterRule(_localctx, 4, bfeParser::RuleEligibleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(40);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(38);
      stmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(39);
      numberedStmt();
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

//----------------- NumberedStmtContext ------------------------------------------------------------------

bfeParser::NumberedStmtContext::NumberedStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bfeParser::StmtContext* bfeParser::NumberedStmtContext::stmt() {
  return getRuleContext<bfeParser::StmtContext>(0);
}

tree::TerminalNode* bfeParser::NumberedStmtContext::NUMBER() {
  return getToken(bfeParser::NUMBER, 0);
}


size_t bfeParser::NumberedStmtContext::getRuleIndex() const {
  return bfeParser::RuleNumberedStmt;
}

void bfeParser::NumberedStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberedStmt(this);
}

void bfeParser::NumberedStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberedStmt(this);
}


antlrcpp::Any bfeParser::NumberedStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfeVisitor*>(visitor))
    return parserVisitor->visitNumberedStmt(this);
  else
    return visitor->visitChildren(this);
}

bfeParser::NumberedStmtContext* bfeParser::numberedStmt() {
  NumberedStmtContext *_localctx = _tracker.createInstance<NumberedStmtContext>(_ctx, getState());
  enterRule(_localctx, 6, bfeParser::RuleNumberedStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    stmt();
    setState(43);
    match(bfeParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

bfeParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bfeParser::BasicStmtContext* bfeParser::StmtContext::basicStmt() {
  return getRuleContext<bfeParser::BasicStmtContext>(0);
}

bfeParser::GroupedStmtContext* bfeParser::StmtContext::groupedStmt() {
  return getRuleContext<bfeParser::GroupedStmtContext>(0);
}

bfeParser::LoopStmtContext* bfeParser::StmtContext::loopStmt() {
  return getRuleContext<bfeParser::LoopStmtContext>(0);
}


size_t bfeParser::StmtContext::getRuleIndex() const {
  return bfeParser::RuleStmt;
}

void bfeParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void bfeParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


antlrcpp::Any bfeParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfeVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

bfeParser::StmtContext* bfeParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 8, bfeParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(48);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case bfeParser::INPUT:
      case bfeParser::OUTPUT:
      case bfeParser::DEC:
      case bfeParser::INC:
      case bfeParser::LEFT:
      case bfeParser::RIGHT: {
        enterOuterAlt(_localctx, 1);
        setState(45);
        basicStmt();
        break;
      }

      case bfeParser::GRPSTART: {
        enterOuterAlt(_localctx, 2);
        setState(46);
        groupedStmt();
        break;
      }

      case bfeParser::LOOPSTART: {
        enterOuterAlt(_localctx, 3);
        setState(47);
        loopStmt();
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

//----------------- GroupedStmtContext ------------------------------------------------------------------

bfeParser::GroupedStmtContext::GroupedStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bfeParser::GroupedStmtContext::GRPSTART() {
  return getToken(bfeParser::GRPSTART, 0);
}

bfeParser::StatementsContext* bfeParser::GroupedStmtContext::statements() {
  return getRuleContext<bfeParser::StatementsContext>(0);
}

tree::TerminalNode* bfeParser::GroupedStmtContext::GRPEND() {
  return getToken(bfeParser::GRPEND, 0);
}


size_t bfeParser::GroupedStmtContext::getRuleIndex() const {
  return bfeParser::RuleGroupedStmt;
}

void bfeParser::GroupedStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroupedStmt(this);
}

void bfeParser::GroupedStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroupedStmt(this);
}


antlrcpp::Any bfeParser::GroupedStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfeVisitor*>(visitor))
    return parserVisitor->visitGroupedStmt(this);
  else
    return visitor->visitChildren(this);
}

bfeParser::GroupedStmtContext* bfeParser::groupedStmt() {
  GroupedStmtContext *_localctx = _tracker.createInstance<GroupedStmtContext>(_ctx, getState());
  enterRule(_localctx, 10, bfeParser::RuleGroupedStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(bfeParser::GRPSTART);
    setState(51);
    statements();
    setState(52);
    match(bfeParser::GRPEND);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopStmtContext ------------------------------------------------------------------

bfeParser::LoopStmtContext::LoopStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bfeParser::LoopStmtContext::LOOPSTART() {
  return getToken(bfeParser::LOOPSTART, 0);
}

bfeParser::StatementsContext* bfeParser::LoopStmtContext::statements() {
  return getRuleContext<bfeParser::StatementsContext>(0);
}

tree::TerminalNode* bfeParser::LoopStmtContext::LOOPEND() {
  return getToken(bfeParser::LOOPEND, 0);
}


size_t bfeParser::LoopStmtContext::getRuleIndex() const {
  return bfeParser::RuleLoopStmt;
}

void bfeParser::LoopStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopStmt(this);
}

void bfeParser::LoopStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopStmt(this);
}


antlrcpp::Any bfeParser::LoopStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfeVisitor*>(visitor))
    return parserVisitor->visitLoopStmt(this);
  else
    return visitor->visitChildren(this);
}

bfeParser::LoopStmtContext* bfeParser::loopStmt() {
  LoopStmtContext *_localctx = _tracker.createInstance<LoopStmtContext>(_ctx, getState());
  enterRule(_localctx, 12, bfeParser::RuleLoopStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    match(bfeParser::LOOPSTART);
    setState(55);
    statements();
    setState(56);
    match(bfeParser::LOOPEND);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicStmtContext ------------------------------------------------------------------

bfeParser::BasicStmtContext::BasicStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bfeParser::PtrIncrContext* bfeParser::BasicStmtContext::ptrIncr() {
  return getRuleContext<bfeParser::PtrIncrContext>(0);
}

bfeParser::PtrDecrContext* bfeParser::BasicStmtContext::ptrDecr() {
  return getRuleContext<bfeParser::PtrDecrContext>(0);
}

bfeParser::PtrLeftContext* bfeParser::BasicStmtContext::ptrLeft() {
  return getRuleContext<bfeParser::PtrLeftContext>(0);
}

bfeParser::PtrRightContext* bfeParser::BasicStmtContext::ptrRight() {
  return getRuleContext<bfeParser::PtrRightContext>(0);
}

bfeParser::InputStmtContext* bfeParser::BasicStmtContext::inputStmt() {
  return getRuleContext<bfeParser::InputStmtContext>(0);
}

bfeParser::OutputStmtContext* bfeParser::BasicStmtContext::outputStmt() {
  return getRuleContext<bfeParser::OutputStmtContext>(0);
}


size_t bfeParser::BasicStmtContext::getRuleIndex() const {
  return bfeParser::RuleBasicStmt;
}

void bfeParser::BasicStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicStmt(this);
}

void bfeParser::BasicStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicStmt(this);
}


antlrcpp::Any bfeParser::BasicStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfeVisitor*>(visitor))
    return parserVisitor->visitBasicStmt(this);
  else
    return visitor->visitChildren(this);
}

bfeParser::BasicStmtContext* bfeParser::basicStmt() {
  BasicStmtContext *_localctx = _tracker.createInstance<BasicStmtContext>(_ctx, getState());
  enterRule(_localctx, 14, bfeParser::RuleBasicStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(64);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case bfeParser::INC: {
        enterOuterAlt(_localctx, 1);
        setState(58);
        ptrIncr();
        break;
      }

      case bfeParser::DEC: {
        enterOuterAlt(_localctx, 2);
        setState(59);
        ptrDecr();
        break;
      }

      case bfeParser::LEFT: {
        enterOuterAlt(_localctx, 3);
        setState(60);
        ptrLeft();
        break;
      }

      case bfeParser::RIGHT: {
        enterOuterAlt(_localctx, 4);
        setState(61);
        ptrRight();
        break;
      }

      case bfeParser::INPUT: {
        enterOuterAlt(_localctx, 5);
        setState(62);
        inputStmt();
        break;
      }

      case bfeParser::OUTPUT: {
        enterOuterAlt(_localctx, 6);
        setState(63);
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

//----------------- PtrIncrContext ------------------------------------------------------------------

bfeParser::PtrIncrContext::PtrIncrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bfeParser::PtrIncrContext::INC() {
  return getToken(bfeParser::INC, 0);
}


size_t bfeParser::PtrIncrContext::getRuleIndex() const {
  return bfeParser::RulePtrIncr;
}

void bfeParser::PtrIncrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPtrIncr(this);
}

void bfeParser::PtrIncrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPtrIncr(this);
}


antlrcpp::Any bfeParser::PtrIncrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfeVisitor*>(visitor))
    return parserVisitor->visitPtrIncr(this);
  else
    return visitor->visitChildren(this);
}

bfeParser::PtrIncrContext* bfeParser::ptrIncr() {
  PtrIncrContext *_localctx = _tracker.createInstance<PtrIncrContext>(_ctx, getState());
  enterRule(_localctx, 16, bfeParser::RulePtrIncr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(bfeParser::INC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtrDecrContext ------------------------------------------------------------------

bfeParser::PtrDecrContext::PtrDecrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bfeParser::PtrDecrContext::DEC() {
  return getToken(bfeParser::DEC, 0);
}


size_t bfeParser::PtrDecrContext::getRuleIndex() const {
  return bfeParser::RulePtrDecr;
}

void bfeParser::PtrDecrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPtrDecr(this);
}

void bfeParser::PtrDecrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPtrDecr(this);
}


antlrcpp::Any bfeParser::PtrDecrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfeVisitor*>(visitor))
    return parserVisitor->visitPtrDecr(this);
  else
    return visitor->visitChildren(this);
}

bfeParser::PtrDecrContext* bfeParser::ptrDecr() {
  PtrDecrContext *_localctx = _tracker.createInstance<PtrDecrContext>(_ctx, getState());
  enterRule(_localctx, 18, bfeParser::RulePtrDecr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(bfeParser::DEC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtrLeftContext ------------------------------------------------------------------

bfeParser::PtrLeftContext::PtrLeftContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bfeParser::PtrLeftContext::LEFT() {
  return getToken(bfeParser::LEFT, 0);
}


size_t bfeParser::PtrLeftContext::getRuleIndex() const {
  return bfeParser::RulePtrLeft;
}

void bfeParser::PtrLeftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPtrLeft(this);
}

void bfeParser::PtrLeftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPtrLeft(this);
}


antlrcpp::Any bfeParser::PtrLeftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfeVisitor*>(visitor))
    return parserVisitor->visitPtrLeft(this);
  else
    return visitor->visitChildren(this);
}

bfeParser::PtrLeftContext* bfeParser::ptrLeft() {
  PtrLeftContext *_localctx = _tracker.createInstance<PtrLeftContext>(_ctx, getState());
  enterRule(_localctx, 20, bfeParser::RulePtrLeft);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(bfeParser::LEFT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtrRightContext ------------------------------------------------------------------

bfeParser::PtrRightContext::PtrRightContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bfeParser::PtrRightContext::RIGHT() {
  return getToken(bfeParser::RIGHT, 0);
}


size_t bfeParser::PtrRightContext::getRuleIndex() const {
  return bfeParser::RulePtrRight;
}

void bfeParser::PtrRightContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPtrRight(this);
}

void bfeParser::PtrRightContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPtrRight(this);
}


antlrcpp::Any bfeParser::PtrRightContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfeVisitor*>(visitor))
    return parserVisitor->visitPtrRight(this);
  else
    return visitor->visitChildren(this);
}

bfeParser::PtrRightContext* bfeParser::ptrRight() {
  PtrRightContext *_localctx = _tracker.createInstance<PtrRightContext>(_ctx, getState());
  enterRule(_localctx, 22, bfeParser::RulePtrRight);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    match(bfeParser::RIGHT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputStmtContext ------------------------------------------------------------------

bfeParser::InputStmtContext::InputStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bfeParser::InputStmtContext::INPUT() {
  return getToken(bfeParser::INPUT, 0);
}


size_t bfeParser::InputStmtContext::getRuleIndex() const {
  return bfeParser::RuleInputStmt;
}

void bfeParser::InputStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInputStmt(this);
}

void bfeParser::InputStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInputStmt(this);
}


antlrcpp::Any bfeParser::InputStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfeVisitor*>(visitor))
    return parserVisitor->visitInputStmt(this);
  else
    return visitor->visitChildren(this);
}

bfeParser::InputStmtContext* bfeParser::inputStmt() {
  InputStmtContext *_localctx = _tracker.createInstance<InputStmtContext>(_ctx, getState());
  enterRule(_localctx, 24, bfeParser::RuleInputStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(bfeParser::INPUT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutputStmtContext ------------------------------------------------------------------

bfeParser::OutputStmtContext::OutputStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bfeParser::OutputStmtContext::OUTPUT() {
  return getToken(bfeParser::OUTPUT, 0);
}


size_t bfeParser::OutputStmtContext::getRuleIndex() const {
  return bfeParser::RuleOutputStmt;
}

void bfeParser::OutputStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOutputStmt(this);
}

void bfeParser::OutputStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bfeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOutputStmt(this);
}


antlrcpp::Any bfeParser::OutputStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<bfeVisitor*>(visitor))
    return parserVisitor->visitOutputStmt(this);
  else
    return visitor->visitChildren(this);
}

bfeParser::OutputStmtContext* bfeParser::outputStmt() {
  OutputStmtContext *_localctx = _tracker.createInstance<OutputStmtContext>(_ctx, getState());
  enterRule(_localctx, 26, bfeParser::RuleOutputStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(bfeParser::OUTPUT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> bfeParser::_decisionToDFA;
atn::PredictionContextCache bfeParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN bfeParser::_atn;
std::vector<uint16_t> bfeParser::_serializedATN;

std::vector<std::string> bfeParser::_ruleNames = {
  "program", "statements", "eligibleStmt", "numberedStmt", "stmt", "groupedStmt", 
  "loopStmt", "basicStmt", "ptrIncr", "ptrDecr", "ptrLeft", "ptrRight", 
  "inputStmt", "outputStmt"
};

std::vector<std::string> bfeParser::_literalNames = {
  "", "'\n'", "", "", "'#'", "'['", "']'", "'('", "')'", "", "','", "'.'", 
  "'-'", "'+'", "'<'", "'>'"
};

std::vector<std::string> bfeParser::_symbolicNames = {
  "", "NEWLINE", "COMMENT", "ML_COMMENT", "DEF", "LOOPSTART", "LOOPEND", 
  "GRPSTART", "GRPEND", "NUMBER", "INPUT", "OUTPUT", "DEC", "INC", "LEFT", 
  "RIGHT", "EVERYTHING_ELSE", "WS"
};

dfa::Vocabulary bfeParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> bfeParser::_tokenNames;

bfeParser::Initializer::Initializer() {
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
    0x3, 0x13, 0x51, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x3, 0x2, 0x5, 0x2, 0x20, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x3, 0x6, 0x3, 0x25, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x26, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x2b, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x33, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x43, 0xa, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x2, 
    0x2, 0x10, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x2, 0x2, 0x2, 0x4c, 0x2, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x24, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2c, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x32, 0x3, 0x2, 0x2, 0x2, 0xc, 0x34, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x38, 0x3, 0x2, 0x2, 0x2, 0x10, 0x42, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x44, 0x3, 0x2, 0x2, 0x2, 0x14, 0x46, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x48, 0x3, 0x2, 0x2, 0x2, 0x18, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x4c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x20, 
    0x5, 0x4, 0x3, 0x2, 0x1f, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x3, 
    0x2, 0x2, 0x2, 0x20, 0x21, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x7, 0x2, 
    0x2, 0x3, 0x22, 0x3, 0x3, 0x2, 0x2, 0x2, 0x23, 0x25, 0x5, 0x6, 0x4, 
    0x2, 0x24, 0x23, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x3, 0x2, 0x2, 0x2, 0x27, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2b, 0x5, 0xa, 0x6, 0x2, 0x29, 0x2b, 
    0x5, 0x8, 0x5, 0x2, 0x2a, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x2b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x5, 0xa, 
    0x6, 0x2, 0x2d, 0x2e, 0x7, 0xb, 0x2, 0x2, 0x2e, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x2f, 0x33, 0x5, 0x10, 0x9, 0x2, 0x30, 0x33, 0x5, 0xc, 0x7, 0x2, 
    0x31, 0x33, 0x5, 0xe, 0x8, 0x2, 0x32, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x32, 
    0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x7, 0x9, 0x2, 0x2, 0x35, 0x36, 0x5, 
    0x4, 0x3, 0x2, 0x36, 0x37, 0x7, 0xa, 0x2, 0x2, 0x37, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x38, 0x39, 0x7, 0x7, 0x2, 0x2, 0x39, 0x3a, 0x5, 0x4, 0x3, 
    0x2, 0x3a, 0x3b, 0x7, 0x8, 0x2, 0x2, 0x3b, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x3c, 0x43, 0x5, 0x12, 0xa, 0x2, 0x3d, 0x43, 0x5, 0x14, 0xb, 0x2, 0x3e, 
    0x43, 0x5, 0x16, 0xc, 0x2, 0x3f, 0x43, 0x5, 0x18, 0xd, 0x2, 0x40, 0x43, 
    0x5, 0x1a, 0xe, 0x2, 0x41, 0x43, 0x5, 0x1c, 0xf, 0x2, 0x42, 0x3c, 0x3, 
    0x2, 0x2, 0x2, 0x42, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x42, 0x3e, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 
    0x2, 0x42, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x45, 0x7, 0xf, 0x2, 0x2, 0x45, 0x13, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x47, 0x7, 0xe, 0x2, 0x2, 0x47, 0x15, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 
    0x7, 0x10, 0x2, 0x2, 0x49, 0x17, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x7, 
    0x11, 0x2, 0x2, 0x4b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0xc, 
    0x2, 0x2, 0x4d, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0xd, 0x2, 
    0x2, 0x4f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x7, 0x1f, 0x26, 0x2a, 0x32, 0x42, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

bfeParser::Initializer bfeParser::_init;
