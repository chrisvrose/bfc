
// Generated from /home/atreya/Documents/Projects/Miscellaneous/bfc/grammar/bf.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "bfParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by bfParser.
 */
class  bfListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(bfParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(bfParser::ProgramContext *ctx) = 0;

  virtual void enterStatements(bfParser::StatementsContext *ctx) = 0;
  virtual void exitStatements(bfParser::StatementsContext *ctx) = 0;

  virtual void enterLoopStmt(bfParser::LoopStmtContext *ctx) = 0;
  virtual void exitLoopStmt(bfParser::LoopStmtContext *ctx) = 0;

  virtual void enterNumberedStatement(bfParser::NumberedStatementContext *ctx) = 0;
  virtual void exitNumberedStatement(bfParser::NumberedStatementContext *ctx) = 0;

  virtual void enterStatement(bfParser::StatementContext *ctx) = 0;
  virtual void exitStatement(bfParser::StatementContext *ctx) = 0;

  virtual void enterInputStmt(bfParser::InputStmtContext *ctx) = 0;
  virtual void exitInputStmt(bfParser::InputStmtContext *ctx) = 0;

  virtual void enterOutputStmt(bfParser::OutputStmtContext *ctx) = 0;
  virtual void exitOutputStmt(bfParser::OutputStmtContext *ctx) = 0;


};

