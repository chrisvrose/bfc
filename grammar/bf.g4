grammar bf;

program
    : statements* EOF;

statements
    : (statement|numberedStatement|loopStmt)+;

loopStmt
    : LOOPSTART statements LOOPEND
    ;

numberedStatement
    : statement NUMBER
    ;

statement
    : INC
    | DEC 
    | LEFT 
    | RIGHT
    | inputStmt
    | outputStmt
    ;

inputStmt
    : INPUT
    ;

outputStmt
    : OUTPUT
    ;

NEWLINE: '\n' -> skip;
COMMENT: '//' ~[\r\n]* '\r'? '\n'? -> channel(HIDDEN);
WS: [ \r\n] -> skip;
LOOPSTART: '[';
LOOPEND:']';
NUMBER: [0-9]+;
INPUT: '?';
OUTPUT: '.';
DEC: '-';
INC: '+';
LEFT: '>';
RIGHT: '<';
