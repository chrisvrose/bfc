grammar bf;

program: statements;

statements: INC | DEC | INPUT|OUTPUT;

COMMENT: '\\\\.*?\\\\' -> skip;
INPUT: '?';
OUTPUT: '.';
DEC: '-';
INC: '+';
LEFT: '>';
RIGHT: '<';
