#pragma once

#include<string>
#include "bfBaseListener.h"


class expressionPrintingListener : public bfBaseListener {
    protected:
        std::vector<std::string> printStack;
    public:
        void enterProgram(bfParser::ProgramContext *ctx) override;
        void exitProgram(bfParser::ProgramContext *ctx) override ;
        void enterPtrIncr(bfParser::PtrIncrContext *ctx) override;
        void enterPtrDecr(bfParser::PtrDecrContext *ctx) override;
        void enterPtrLeft(bfParser::PtrLeftContext *ctx) override;
        void enterPtrRight(bfParser::PtrRightContext *ctx) override;
        void enterNumberedStmt(bfParser::NumberedStmtContext *ctx) override;
        void exitNumberedStmt(bfParser::NumberedStmtContext *ctx) override;
        void enterLoopStmt(bfParser::LoopStmtContext *ctx) override;
        void exitLoopStmt(bfParser::LoopStmtContext *ctx) override;
        void enterGroupedStmt(bfParser::GroupedStmtContext *ctx) override;
        void exitGroupedStmt(bfParser::GroupedStmtContext *ctx) override;
};