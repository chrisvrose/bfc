
// Generated from /home/atreya/Documents/Projects/Miscellaneous/bfc/grammar/bfe.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "bfeParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by bfeParser.
 */
class  bfeListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(bfeParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(bfeParser::ProgramContext *ctx) = 0;

  virtual void enterStatements(bfeParser::StatementsContext *ctx) = 0;
  virtual void exitStatements(bfeParser::StatementsContext *ctx) = 0;

  virtual void enterEligibleStmt(bfeParser::EligibleStmtContext *ctx) = 0;
  virtual void exitEligibleStmt(bfeParser::EligibleStmtContext *ctx) = 0;

  virtual void enterNumberedStmt(bfeParser::NumberedStmtContext *ctx) = 0;
  virtual void exitNumberedStmt(bfeParser::NumberedStmtContext *ctx) = 0;

  virtual void enterStmt(bfeParser::StmtContext *ctx) = 0;
  virtual void exitStmt(bfeParser::StmtContext *ctx) = 0;

  virtual void enterGroupedStmt(bfeParser::GroupedStmtContext *ctx) = 0;
  virtual void exitGroupedStmt(bfeParser::GroupedStmtContext *ctx) = 0;

  virtual void enterLoopStmt(bfeParser::LoopStmtContext *ctx) = 0;
  virtual void exitLoopStmt(bfeParser::LoopStmtContext *ctx) = 0;

  virtual void enterBasicStmt(bfeParser::BasicStmtContext *ctx) = 0;
  virtual void exitBasicStmt(bfeParser::BasicStmtContext *ctx) = 0;

  virtual void enterPtrIncr(bfeParser::PtrIncrContext *ctx) = 0;
  virtual void exitPtrIncr(bfeParser::PtrIncrContext *ctx) = 0;

  virtual void enterPtrDecr(bfeParser::PtrDecrContext *ctx) = 0;
  virtual void exitPtrDecr(bfeParser::PtrDecrContext *ctx) = 0;

  virtual void enterPtrLeft(bfeParser::PtrLeftContext *ctx) = 0;
  virtual void exitPtrLeft(bfeParser::PtrLeftContext *ctx) = 0;

  virtual void enterPtrRight(bfeParser::PtrRightContext *ctx) = 0;
  virtual void exitPtrRight(bfeParser::PtrRightContext *ctx) = 0;

  virtual void enterInputStmt(bfeParser::InputStmtContext *ctx) = 0;
  virtual void exitInputStmt(bfeParser::InputStmtContext *ctx) = 0;

  virtual void enterOutputStmt(bfeParser::OutputStmtContext *ctx) = 0;
  virtual void exitOutputStmt(bfeParser::OutputStmtContext *ctx) = 0;


};

