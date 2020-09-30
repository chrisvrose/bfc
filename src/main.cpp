#include <iostream>
#include <vector>
#include <string>
#include <antlr4-common.h>
#include "bfLexer.h"
#include "bfParser.h"
#include "toBFListener.hpp"

// #include "bfBaseVisitor.h"

using namespace antlr4;

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
    toBFListener listener;
    tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

    return 0;
}