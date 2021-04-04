
// Generated from /home/atreya/Documents/Projects/Miscellaneous/bfc/grammar/bfe.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "bfeParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by bfeParser.
 */
class  bfeVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by bfeParser.
   */
    virtual antlrcpp::Any visitProgram(bfeParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitStatements(bfeParser::StatementsContext *context) = 0;

    virtual antlrcpp::Any visitEligibleStmt(bfeParser::EligibleStmtContext *context) = 0;

    virtual antlrcpp::Any visitNumberedStmt(bfeParser::NumberedStmtContext *context) = 0;

    virtual antlrcpp::Any visitStmt(bfeParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitGroupedStmt(bfeParser::GroupedStmtContext *context) = 0;

    virtual antlrcpp::Any visitLoopStmt(bfeParser::LoopStmtContext *context) = 0;

    virtual antlrcpp::Any visitBasicStmt(bfeParser::BasicStmtContext *context) = 0;

    virtual antlrcpp::Any visitPtrIncr(bfeParser::PtrIncrContext *context) = 0;

    virtual antlrcpp::Any visitPtrDecr(bfeParser::PtrDecrContext *context) = 0;

    virtual antlrcpp::Any visitPtrLeft(bfeParser::PtrLeftContext *context) = 0;

    virtual antlrcpp::Any visitPtrRight(bfeParser::PtrRightContext *context) = 0;

    virtual antlrcpp::Any visitInputStmt(bfeParser::InputStmtContext *context) = 0;

    virtual antlrcpp::Any visitOutputStmt(bfeParser::OutputStmtContext *context) = 0;


};

