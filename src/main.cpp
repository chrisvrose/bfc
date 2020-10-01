#include <iostream>
#include <vector>
#include <string>
#include <cxxopts.hpp>
#include "antlr4-common.h"
#include "cxxopts.hpp"
#include "bfeLexer.h"
#include "bfeParser.h"
#include "toBFListener.hpp"
#include "executeBFE.hpp"

using namespace antlr4;

int main(int argc, char **argv)
{
    cxxopts::Options options(argv[0], "An interpreter/translator for bfe");

    options.add_options()
        ("t,translate", "Translate to bf", cxxopts::value<bool>()->default_value("false"))
        ("i,input", "Input(First argument)", cxxopts::value<std::string>())
        ("h,help", "Print usage");
    options.parse_positional({"input"});
    auto results = options.parse(argc, argv);
    if (results.count("help"))
    {
        std::cout << options.help() << std::endl;
        return 0;
    }
    if (results.count("input"))
    {
        // std::cout << results["input"].as<std::string>()<<std::endl;
        std::ifstream stream;
        bool outFile = false;
        stream.open(results["input"].as<std::string>());
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
        if(results["translate"].as<bool>()){
            toBFListener listener;
            tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
        }else{
            executeBGE *visitor = new executeBGE();
            try
            {
                visitor->visit(tree);
                std::cout << std::endl;
            }
            catch (std::string e)
            {
                std::cout << "\nIllegal:" << e<<std::endl;
            }
        }
    }else{
        std::cout<<"?:Expected file"<<std::endl;
        return 1;
    }
    
    

    // if(argc>2 && )
    return 0;
}