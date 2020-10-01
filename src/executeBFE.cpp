#include<iostream>
#include<vector>
#include<string>
#include <antlr4-common.h>
#include "bfeParser.h"
#include "bfeBaseVisitor.h"
#include "executeBFE.hpp"


using namespace antlr4;
using namespace antlrcpp;
using namespace std::__cxx11;

Any executeBGE::visitNumberedStmt(bfeParser::NumberedStmtContext *ctx){
    int num = stoi(ctx->NUMBER()->getText());
    for(int i=0;i<num;i++){
        ctx->stmt()->accept(this);
    }
    return Any();
}

Any executeBGE::visitPtrIncr(bfeParser::PtrIncrContext *ctx){
    memory[pointer]++;
    return Any();
}

Any executeBGE::visitPtrDecr(bfeParser::PtrDecrContext *ctx){
    memory[pointer]--;
    return Any();
}

Any executeBGE::visitPtrRight(bfeParser::PtrRightContext *ctx){
    // too much -> throw this program out
    if(memory.max_size()==memory.size()){
        throw (std::string("Max Size Reached ")+to_string(memory.capacity()));
    }
    // its about to be incremented -> need to increase
    if(memory.size()==pointer+1){
        memory.push_back(0);
    }
    pointer++;
    return Any();
}

Any executeBGE::visitPtrLeft(bfeParser::PtrLeftContext *ctx){
    
    if(pointer==0){
        throw std::string("Decrement below zero");
    }
    pointer--;
    return Any();
}

Any executeBGE::visitInputStmt(bfeParser::InputStmtContext *ctx){
    std::cin>>memory[pointer];
    return Any();
}

Any executeBGE::visitOutputStmt(bfeParser::OutputStmtContext *ctx){
    std::cout<<memory[pointer];
    return Any();
}

Any executeBGE::visitLoopStmt(bfeParser::LoopStmtContext *ctx){
    while(memory[pointer]){
        ctx->statements()->accept(this);
    }
    return Any();
}