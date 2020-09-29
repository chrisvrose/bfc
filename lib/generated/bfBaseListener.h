
// Generated from /home/atreya/Documents/Projects/Miscellaneous/bfc/grammar/bf.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "bfListener.h"


/**
 * This class provides an empty implementation of bfListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  bfBaseListener : public bfListener {
public:

  virtual void enterProgram(bfParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(bfParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatements(bfParser::StatementsContext * /*ctx*/) override { }
  virtual void exitStatements(bfParser::StatementsContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

