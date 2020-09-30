#include <iostream>
#include <vector>
#include <string>
#include <antlr4-common.h>
#include "main.hpp"
#include "bfLexer.h"
#include "bfParser.h"
#include "bfBaseListener.h"
// #include "bfBaseVisitor.h"

using namespace antlr4;

void expressionPrintingListener::enterProgram(bfParser::ProgramContext *ctx)
{
    printStack.push_back("");
}
void expressionPrintingListener::exitProgram(bfParser::ProgramContext *ctx)
{
    std::cout << printStack.front() << std::endl;
}
void expressionPrintingListener::enterPtrIncr(bfParser::PtrIncrContext *ctx)
{
    printStack.back() += "+";
}
void expressionPrintingListener::enterPtrDecr(bfParser::PtrDecrContext *ctx)
{
    printStack.back() += ("-");
}
void expressionPrintingListener::enterPtrLeft(bfParser::PtrLeftContext *ctx)
{
    printStack.back() += ("<");
}
void expressionPrintingListener::enterPtrRight(bfParser::PtrRightContext *ctx)
{
    printStack.back() += (">");
}

void expressionPrintingListener::enterNumberedStmt(bfParser::NumberedStmtContext *ctx)
{
    printStack.push_back("");
}
void expressionPrintingListener::exitNumberedStmt(bfParser::NumberedStmtContext *ctx)
{
    std::string s = printStack.back();
    printStack.pop_back();
    int n = stoi(ctx->NUMBER()->getText());
    for (int i = 0; i < n; i++)
    {
        printStack.back() += s;
    }
}
void expressionPrintingListener::enterLoopStmt(bfParser::LoopStmtContext *ctx){
    printStack.push_back("");
}
void expressionPrintingListener::exitLoopStmt(bfParser::LoopStmtContext *ctx){
    std::string s = printStack.back();
    printStack.pop_back();
    printStack.back()+= "["+s+"]";
}
void expressionPrintingListener::enterGroupedStmt(bfParser::GroupedStmtContext *ctx){
    printStack.push_back("");
}
void expressionPrintingListener::exitGroupedStmt(bfParser::GroupedStmtContext *ctx){
    std::string s = printStack.back();
    printStack.pop_back();
    printStack.back()+=(s);
}

int main(int argc, const char *argv[])
{
    std::ifstream stream;
    bool outFile = false;
    stream.open(argv[1]);
    if (stream.fail())
    {
        std::cout << "Could not open" << std::endl;
        return 1;
    }
    ANTLRInputStream input(stream);
    bfLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    bfParser parser(&tokens);

    tree::ParseTree *tree = parser.program();
    expressionPrintingListener listener;
    tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

    return 0;
}