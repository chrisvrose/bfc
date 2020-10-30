#include <iostream>
#include <vector>
#include <string>
#include <cxxopts.hpp>
#include "antlr4-common.h"
#include "cxxopts.hpp"
#include "bfeLexer.h"
#include "bfeParser.h"
#include "toBFListener.hpp"
#include "toCPPListener.hpp"
#include "executeBFE.hpp"

using namespace antlr4;

int main(int argc, char **argv)
{
    cxxopts::Options options(argv[0], "An interpreter/translator for bfe");

    options.add_options()
    ("a,action", "Action (exec,cpp,bf)", cxxopts::value<std::string>()->default_value("exec"))
    ("i,input", "Input (First argument)", cxxopts::value<std::string>())
    ("h,help", "Print usage");
    options.parse_positional({"input"});
    // try
    {
        auto results = options.parse(argc, argv);
        std::string action = results["action"].as<std::string>();
        if (action.compare("exec") && action.compare("bf") && action.compare("cpp"))
        {
            action = std::string( "exec");
        }
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
            if (action.compare("bf")==0)
            {
                toBFListener listener;
                tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
            }
            else if (action.compare( "exec")==0)
            {
                executeBGE *visitor = new executeBGE();
                try
                {
                    visitor->visit(tree);
                    std::cout << std::endl;
                }
                catch (std::string e)
                {
                    std::cout << "\nIllegal:" << e << std::endl;
                }
            }
            else
            {
                //else cpp
                toCPPListener listener;
                tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
            }
        }
        else
        {
            std::cout << "?:Expected file" << std::endl;
            return 1;
        }
    }
    // catch (std::exception e)
    // {
    //     std::cout << "E:" << e.what() << "\n";
    //     return 1;
    // }

    // if(argc>2 && )
    return 0;
}