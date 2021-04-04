
// Generated from /home/atreya/Documents/Projects/Miscellaneous/bfc/grammar/bfe.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "bfeListener.h"


/**
 * This class provides an empty implementation of bfeListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  bfeBaseListener : public bfeListener {
public:

  virtual void enterProgram(bfeParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(bfeParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatements(bfeParser::StatementsContext * /*ctx*/) override { }
  virtual void exitStatements(bfeParser::StatementsContext * /*ctx*/) override { }

  virtual void enterEligibleStmt(bfeParser::EligibleStmtContext * /*ctx*/) override { }
  virtual void exitEligibleStmt(bfeParser::EligibleStmtContext * /*ctx*/) override { }

  virtual void enterNumberedStmt(bfeParser::NumberedStmtContext * /*ctx*/) override { }
  virtual void exitNumberedStmt(bfeParser::NumberedStmtContext * /*ctx*/) override { }

  virtual void enterStmt(bfeParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(bfeParser::StmtContext * /*ctx*/) override { }

  virtual void enterGroupedStmt(bfeParser::GroupedStmtContext * /*ctx*/) override { }
  virtual void exitGroupedStmt(bfeParser::GroupedStmtContext * /*ctx*/) override { }

  virtual void enterLoopStmt(bfeParser::LoopStmtContext * /*ctx*/) override { }
  virtual void exitLoopStmt(bfeParser::LoopStmtContext * /*ctx*/) override { }

  virtual void enterBasicStmt(bfeParser::BasicStmtContext * /*ctx*/) override { }
  virtual void exitBasicStmt(bfeParser::BasicStmtContext * /*ctx*/) override { }

  virtual void enterPtrIncr(bfeParser::PtrIncrContext * /*ctx*/) override { }
  virtual void exitPtrIncr(bfeParser::PtrIncrContext * /*ctx*/) override { }

  virtual void enterPtrDecr(bfeParser::PtrDecrContext * /*ctx*/) override { }
  virtual void exitPtrDecr(bfeParser::PtrDecrContext * /*ctx*/) override { }

  virtual void enterPtrLeft(bfeParser::PtrLeftContext * /*ctx*/) override { }
  virtual void exitPtrLeft(bfeParser::PtrLeftContext * /*ctx*/) override { }

  virtual void enterPtrRight(bfeParser::PtrRightContext * /*ctx*/) override { }
  virtual void exitPtrRight(bfeParser::PtrRightContext * /*ctx*/) override { }

  virtual void enterInputStmt(bfeParser::InputStmtContext * /*ctx*/) override { }
  virtual void exitInputStmt(bfeParser::InputStmtContext * /*ctx*/) override { }

  virtual void enterOutputStmt(bfeParser::OutputStmtContext * /*ctx*/) override { }
  virtual void exitOutputStmt(bfeParser::OutputStmtContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

