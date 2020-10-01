#include <iostream>
#include <vector>
#include <string>
#include <antlr4-common.h>
#include "bfeLexer.h"
#include "bfeParser.h"
#include "toBFListener.hpp"
#include "executeBFE.hpp"


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
    bfeLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    bfeParser parser(&tokens);

    tree::ParseTree *tree = parser.program();
    // toBFListener listener;
    // tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

    executeBGE* visitor = new executeBGE();
    auto resultAny = visitor->visit(tree);
    return 0;
}