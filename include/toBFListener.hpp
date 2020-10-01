#pragma once

#include<string>
#include "bfeLexer.h"
#include "bfeParser.h"
#include "bfeBaseListener.h"


class toBFListener : public bfeBaseListener {
    protected:
        std::vector<std::string> printStack;
    public:
        void enterProgram(bfeParser::ProgramContext *ctx) override;
        void exitProgram(bfeParser::ProgramContext *ctx) override ;
        void enterPtrIncr(bfeParser::PtrIncrContext *ctx) override;
        void enterPtrDecr(bfeParser::PtrDecrContext *ctx) override;
        void enterPtrLeft(bfeParser::PtrLeftContext *ctx) override;
        void enterPtrRight(bfeParser::PtrRightContext *ctx) override;
        void enterNumberedStmt(bfeParser::NumberedStmtContext *ctx) override;
        void exitNumberedStmt(bfeParser::NumberedStmtContext *ctx) override;
        void enterLoopStmt(bfeParser::LoopStmtContext *ctx) override;
        void exitLoopStmt(bfeParser::LoopStmtContext *ctx) override;
        void enterGroupedStmt(bfeParser::GroupedStmtContext *ctx) override;
        void exitGroupedStmt(bfeParser::GroupedStmtContext *ctx) override;
};