
// Generated from /home/atreya/Documents/Projects/Miscellaneous/bfc/grammar/bf.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "bfParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by bfParser.
 */
class  bfVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by bfParser.
   */
    virtual antlrcpp::Any visitProgram(bfParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitStatements(bfParser::StatementsContext *context) = 0;

    virtual antlrcpp::Any visitLoopStmt(bfParser::LoopStmtContext *context) = 0;

    virtual antlrcpp::Any visitNumberedStatement(bfParser::NumberedStatementContext *context) = 0;

    virtual antlrcpp::Any visitStatement(bfParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitInputStmt(bfParser::InputStmtContext *context) = 0;

    virtual antlrcpp::Any visitOutputStmt(bfParser::OutputStmtContext *context) = 0;


};

