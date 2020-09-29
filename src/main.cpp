#include <iostream>
#include <antlr4-common.h>
#include "main.hpp"
#include "bfLexer.h"
#include "bfParser.h"
#include "bfBaseListener.h"
// #include "bfBaseVisitor.h"

using namespace antlr4;

class expressionPrintingListener : public bfBaseListener
{
public:
    void enterStatement(bfParser::StatementContext *ctx) override
    {
        std::cout << ctx->getText();
    }
    void enterNumberedStatement(bfParser::NumberedStatementContext *ctx) override
    {
        int num = 0;
        try{
            num = stoi(ctx->NUMBER()->getText());
        }catch(std::exception e){
            num = 1;
        }
        for (int i = 0; i < num - 1; i++)
        {
            std::cout << ctx->statement()->getText();
        }
    }
    void exitProgram(bfParser::ProgramContext *ctx) override{
        std::cout<<std::endl;
    }
    void enterLoopStmt(bfParser::LoopStmtContext *ctx) override{
        std::cout<<'[';
    }
    void exitLoopStmt(bfParser::LoopStmtContext *ctx) override{
        std::cout<<']';
    }
};

int main(int argc, const char *argv[])
{
    std::ifstream stream;
    
    stream.open(argv[1]);
    if(stream.fail()){
        std::cout<<"Could not open"<<std::endl;
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