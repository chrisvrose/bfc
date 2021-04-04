
// Generated from /home/atreya/Documents/Projects/Miscellaneous/bfc/grammar/bfe.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  bfeParser : public antlr4::Parser {
public:
  enum {
    NEWLINE = 1, COMMENT = 2, ML_COMMENT = 3, WS = 4, DEF = 5, LOOPSTART = 6, 
    LOOPEND = 7, GRPSTART = 8, GRPEND = 9, NUMBER = 10, INPUT = 11, OUTPUT = 12, 
    DEC = 13, INC = 14, LEFT = 15, RIGHT = 16
  };

  enum {
    RuleProgram = 0, RuleStatements = 1, RuleEligibleStmt = 2, RuleNumberedStmt = 3, 
    RuleStmt = 4, RuleGroupedStmt = 5, RuleLoopStmt = 6, RuleBasicStmt = 7, 
    RulePtrIncr = 8, RulePtrDecr = 9, RulePtrLeft = 10, RulePtrRight = 11, 
    RuleInputStmt = 12, RuleOutputStmt = 13
  };

  bfeParser(antlr4::TokenStream *input);
  ~bfeParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class StatementsContext;
  class EligibleStmtContext;
  class NumberedStmtContext;
  class StmtContext;
  class GroupedStmtContext;
  class LoopStmtContext;
  class BasicStmtContext;
  class PtrIncrContext;
  class PtrDecrContext;
  class PtrLeftContext;
  class PtrRightContext;
  class InputStmtContext;
  class OutputStmtContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    StatementsContext *statements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EligibleStmtContext *> eligibleStmt();
    EligibleStmtContext* eligibleStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementsContext* statements();

  class  EligibleStmtContext : public antlr4::ParserRuleContext {
  public:
    EligibleStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StmtContext *stmt();
    NumberedStmtContext *numberedStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EligibleStmtContext* eligibleStmt();

  class  NumberedStmtContext : public antlr4::ParserRuleContext {
  public:
    NumberedStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StmtContext *stmt();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberedStmtContext* numberedStmt();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasicStmtContext *basicStmt();
    GroupedStmtContext *groupedStmt();
    LoopStmtContext *loopStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  GroupedStmtContext : public antlr4::ParserRuleContext {
  public:
    GroupedStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRPSTART();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *GRPEND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupedStmtContext* groupedStmt();

  class  LoopStmtContext : public antlr4::ParserRuleContext {
  public:
    LoopStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOOPSTART();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *LOOPEND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoopStmtContext* loopStmt();

  class  BasicStmtContext : public antlr4::ParserRuleContext {
  public:
    BasicStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PtrIncrContext *ptrIncr();
    PtrDecrContext *ptrDecr();
    PtrLeftContext *ptrLeft();
    PtrRightContext *ptrRight();
    InputStmtContext *inputStmt();
    OutputStmtContext *outputStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasicStmtContext* basicStmt();

  class  PtrIncrContext : public antlr4::ParserRuleContext {
  public:
    PtrIncrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PtrIncrContext* ptrIncr();

  class  PtrDecrContext : public antlr4::ParserRuleContext {
  public:
    PtrDecrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PtrDecrContext* ptrDecr();

  class  PtrLeftContext : public antlr4::ParserRuleContext {
  public:
    PtrLeftContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PtrLeftContext* ptrLeft();

  class  PtrRightContext : public antlr4::ParserRuleContext {
  public:
    PtrRightContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RIGHT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PtrRightContext* ptrRight();

  class  InputStmtContext : public antlr4::ParserRuleContext {
  public:
    InputStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputStmtContext* inputStmt();

  class  OutputStmtContext : public antlr4::ParserRuleContext {
  public:
    OutputStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OutputStmtContext* outputStmt();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

