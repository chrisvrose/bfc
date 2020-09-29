#include <iostream>
#include <antlr4-common.h>
#include "main.hpp"
#include "bfLexer.h"
#include "bfParser.h"
#include "bfBaseListener.h"
// #include "bfBaseVisitor.h"

using namespace antlr4;

class expressionListener : public bfBaseListener{
    public:
       void enterProgram(bfParser::ProgramContext *ctx) override{
           std::cout<<ctx->getText();
       }
};

int main(int argc, const char* argv[])
{
    // std::cout<<"Hello World "<<FIVE<<std::endl;
    std::ifstream stream;
    stream.open(argv[1]);
    ANTLRInputStream input(stream);
    bfLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    bfParser parser(&tokens);

    tree::ParseTree *tree = parser.program();
    expressionListener listener;
    tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

    return 0;
}