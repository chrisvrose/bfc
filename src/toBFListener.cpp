#include "bfeParser.h"
#include "bfeBaseListener.h"
#include "toBFListener.hpp"
// #include "bfBaseVisitor.h"

using namespace antlr4;

void toBFListener::enterProgram(bfeParser::ProgramContext *ctx)
{
    printStack.push_back("");
}
void toBFListener::exitProgram(bfeParser::ProgramContext *ctx)
{
    std::cout << printStack.front() << std::endl;
}
void toBFListener::enterPtrIncr(bfeParser::PtrIncrContext *ctx)
{
    printStack.back() += "+";
}
void toBFListener::enterPtrDecr(bfeParser::PtrDecrContext *ctx)
{
    printStack.back() += ("-");
}
void toBFListener::enterPtrLeft(bfeParser::PtrLeftContext *ctx)
{
    printStack.back() += ("<");
}
void toBFListener::enterPtrRight(bfeParser::PtrRightContext *ctx)
{
    printStack.back() += (">");
}
void toBFListener::enterOutputStmt(bfeParser::OutputStmtContext *ctx) {
    printStack.back() += (".");
}
void toBFListener::enterInputStmt(bfeParser::InputStmtContext *ctx) {
    printStack.back() += (",");
}

void toBFListener::enterNumberedStmt(bfeParser::NumberedStmtContext *ctx)
{
    printStack.push_back("");
}
void toBFListener::exitNumberedStmt(bfeParser::NumberedStmtContext *ctx)
{
    std::string s = printStack.back();
    printStack.pop_back();
    int n = stoi(ctx->NUMBER()->getText());
    for (int i = 0; i < n; i++)
    {
        printStack.back() += s;
    }
}



void toBFListener::enterLoopStmt(bfeParser::LoopStmtContext *ctx){
    printStack.push_back("");
}


void toBFListener::exitLoopStmt(bfeParser::LoopStmtContext *ctx){
    std::string s = printStack.back();
    printStack.pop_back();
    printStack.back()+= "["+s+"]";
}
void toBFListener::enterGroupedStmt(bfeParser::GroupedStmtContext *ctx){
    printStack.push_back("");
}
void toBFListener::exitGroupedStmt(bfeParser::GroupedStmtContext *ctx){
    std::string s = printStack.back();
    printStack.pop_back();
    printStack.back()+=(s);
}