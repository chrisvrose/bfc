#pragma once
#include "bfParser.h"
#include "bfBaseListener.h"
#include "toBFListener.hpp"
// #include "bfBaseVisitor.h"

using namespace antlr4;

void toBFListener::enterProgram(bfParser::ProgramContext *ctx)
{
    printStack.push_back("");
}
void toBFListener::exitProgram(bfParser::ProgramContext *ctx)
{
    std::cout << printStack.front() << std::endl;
}
void toBFListener::enterPtrIncr(bfParser::PtrIncrContext *ctx)
{
    printStack.back() += "+";
}
void toBFListener::enterPtrDecr(bfParser::PtrDecrContext *ctx)
{
    printStack.back() += ("-");
}
void toBFListener::enterPtrLeft(bfParser::PtrLeftContext *ctx)
{
    printStack.back() += ("<");
}
void toBFListener::enterPtrRight(bfParser::PtrRightContext *ctx)
{
    printStack.back() += (">");
}

void toBFListener::enterNumberedStmt(bfParser::NumberedStmtContext *ctx)
{
    printStack.push_back("");
}
void toBFListener::exitNumberedStmt(bfParser::NumberedStmtContext *ctx)
{
    std::string s = printStack.back();
    printStack.pop_back();
    int n = stoi(ctx->NUMBER()->getText());
    for (int i = 0; i < n; i++)
    {
        printStack.back() += s;
    }
}
void toBFListener::enterLoopStmt(bfParser::LoopStmtContext *ctx){
    printStack.push_back("");
}
void toBFListener::exitLoopStmt(bfParser::LoopStmtContext *ctx){
    std::string s = printStack.back();
    printStack.pop_back();
    printStack.back()+= "["+s+"]";
}
void toBFListener::enterGroupedStmt(bfParser::GroupedStmtContext *ctx){
    printStack.push_back("");
}
void toBFListener::exitGroupedStmt(bfParser::GroupedStmtContext *ctx){
    std::string s = printStack.back();
    printStack.pop_back();
    printStack.back()+=(s);
}