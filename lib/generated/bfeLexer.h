
// Generated from /home/atreya/Documents/Projects/Miscellaneous/bfc/grammar/bfe.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  bfeLexer : public antlr4::Lexer {
public:
  enum {
    NEWLINE = 1, COMMENT = 2, ML_COMMENT = 3, WS = 4, DEF = 5, LOOPSTART = 6, 
    LOOPEND = 7, GRPSTART = 8, GRPEND = 9, NUMBER = 10, INPUT = 11, OUTPUT = 12, 
    DEC = 13, INC = 14, LEFT = 15, RIGHT = 16
  };

  bfeLexer(antlr4::CharStream *input);
  ~bfeLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

