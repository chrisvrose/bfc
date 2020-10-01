grammar bfe;

program
    : statements? EOF;

statements
    : eligibleStmt+;

eligibleStmt
    : stmt
    | numberedStmt
    ;

numberedStmt
    : stmt NUMBER
    ;


stmt
    : basicStmt
    | groupedStmt
    | loopStmt
    ;


groupedStmt
    : GRPSTART statements GRPEND
    ;

loopStmt
    : LOOPSTART statements LOOPEND 
    ;

basicStmt 
    : ptrIncr
    | ptrDecr
    | ptrLeft
    | ptrRight
    | inputStmt
    | outputStmt
    ;


ptrIncr
    : INC
    ;

ptrDecr
    : DEC
    ;

ptrLeft
    : LEFT
    ;

ptrRight
    : RIGHT
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
DEF: '#';
LOOPSTART: '[';
LOOPEND:']';
GRPSTART:'(';
GRPEND:')';
NUMBER: [0-9]+;
INPUT: '?';
OUTPUT: '.';
DEC: '-';
INC: '+';
LEFT: '>';
RIGHT: '<';
