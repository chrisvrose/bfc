
// Generated from /home/atreya/Documents/Projects/Miscellaneous/bfc/grammar/bf.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "bfVisitor.h"


/**
 * This class provides an empty implementation of bfVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  bfBaseVisitor : public bfVisitor {
public:

  virtual antlrcpp::Any visitProgram(bfParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatements(bfParser::StatementsContext *ctx) override {
    return visitChildren(ctx);
  }


};

