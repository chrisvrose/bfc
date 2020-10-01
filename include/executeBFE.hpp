#include<string>
#include<vector>
#include<antlr4-common.h>
#include "bfeParser.h"
#include "bfeBaseVisitor.h"


using namespace antlr4;
using namespace antlrcpp;
// using namespace std;
class executeBGE: public bfeBaseVisitor{
    private:
        std::vector<char> memory;
        int pointer=0;
    public:
        executeBGE() : bfeBaseVisitor(),memory(100) {
        }
        // Any visitProgram(bfeParser::ProgramContext*) override;
        Any visitNumberedStmt(bfeParser::NumberedStmtContext*) override;
        Any visitPtrIncr(bfeParser::PtrIncrContext *ctx) override;
        Any visitPtrDecr(bfeParser::PtrDecrContext *ctx) override;
        Any visitPtrRight(bfeParser::PtrRightContext *ctx) override;
        Any visitPtrLeft(bfeParser::PtrLeftContext *ctx) override;
        Any visitInputStmt(bfeParser::InputStmtContext *ctx) override;
        Any visitOutputStmt(bfeParser::OutputStmtContext *ctx) override;
        Any visitLoopStmt(bfeParser::LoopStmtContext *ctx) override;
};