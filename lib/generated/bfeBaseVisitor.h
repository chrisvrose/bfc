
// Generated from /home/atreya/Documents/Projects/Miscellaneous/bfc/grammar/bfe.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "bfeVisitor.h"


/**
 * This class provides an empty implementation of bfeVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  bfeBaseVisitor : public bfeVisitor {
public:

  virtual antlrcpp::Any visitProgram(bfeParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatements(bfeParser::StatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEligibleStmt(bfeParser::EligibleStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberedStmt(bfeParser::NumberedStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(bfeParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupedStmt(bfeParser::GroupedStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoopStmt(bfeParser::LoopStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasicStmt(bfeParser::BasicStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPtrIncr(bfeParser::PtrIncrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPtrDecr(bfeParser::PtrDecrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPtrLeft(bfeParser::PtrLeftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPtrRight(bfeParser::PtrRightContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInputStmt(bfeParser::InputStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOutputStmt(bfeParser::OutputStmtContext *ctx) override {
    return visitChildren(ctx);
  }


};

