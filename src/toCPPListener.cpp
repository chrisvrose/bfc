#include "bfeParser.h"
#include "bfeBaseListener.h"
#include "toCPPListener.hpp"
// #include "bfBaseVisitor.h"

using namespace antlr4;

void toCPPListener::enterProgram(bfeParser::ProgramContext *ctx)
{
    printStack.push_back("#include<iostream>\n#include<vector>\nusing namespace std;\nint main(){\nvector<char> vec(1000,0);int ptr = 0;\n");
}
void toCPPListener::exitProgram(bfeParser::ProgramContext *ctx)
{
    std::cout << printStack.front() << "}\n"<< std::endl;
}
void toCPPListener::enterPtrIncr(bfeParser::PtrIncrContext *ctx)
{
    // printStack.back() += "+";
    printStack.back()+= "vec[ptr]++;\n";
}
void toCPPListener::enterPtrDecr(bfeParser::PtrDecrContext *ctx)
{
    // printStack.back() += ("-");
    printStack.back()+= "vec[ptr]--;\n";
}
void toCPPListener::enterPtrLeft(bfeParser::PtrLeftContext *ctx)
{
    // printStack.back() += ("<");
    printStack.back() += ("ptr--;\n");
}
void toCPPListener::enterPtrRight(bfeParser::PtrRightContext *ctx)
{

    printStack.back() += ("ptr++;\n");
}

void toCPPListener::enterNumberedStmt(bfeParser::NumberedStmtContext *ctx)
{
    printStack.push_back("");
}
void toCPPListener::exitNumberedStmt(bfeParser::NumberedStmtContext *ctx)
{
    std::string s = printStack.back();
    printStack.pop_back();
    int n = stoi(ctx->NUMBER()->getText());
    for (int i = 0; i < n; i++)
    {
        printStack.back() += s;
    }
}
void toCPPListener::enterLoopStmt(bfeParser::LoopStmtContext *ctx){
    printStack.push_back("");
}
void toCPPListener::exitLoopStmt(bfeParser::LoopStmtContext *ctx){
    std::string s = printStack.back();
    printStack.pop_back();
    printStack.back()+= "while(vec[ptr]){\n"+s+"}\n";
}

void toCPPListener::enterOutputStmt(bfeParser::OutputStmtContext *ctx){
    std::string s = printStack.back();
    // printStack.pop_back();
    printStack.back()+= "cout<<vec[ptr];\n";
}

void toCPPListener::enterInputStmt(bfeParser::InputStmtContext *ctx){
    // std::string s = printStack.back();
    // printStack.pop_back();
    printStack.back()+= "cin>>vec[ptr];\n";
}

void toCPPListener::enterGroupedStmt(bfeParser::GroupedStmtContext *ctx){
    printStack.push_back("");
}
void toCPPListener::exitGroupedStmt(bfeParser::GroupedStmtContext *ctx){
    std::string s = printStack.back();
    printStack.pop_back();
    printStack.back()+=(s);
}