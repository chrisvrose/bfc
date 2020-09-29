grammar bf;

program:
    statements* EOF;

statements:
    statement+;
    
statement:
      INC
    | DEC
    | INPUT
    | OUTPUT
    ;

NEWLINE: '\n' -> skip;
COMMENT: '\\\\.*?\\\\' -> skip;
INPUT: '?';
OUTPUT: '.';
DEC: '-';
INC: '+';
LEFT: '>';
RIGHT: '<';
