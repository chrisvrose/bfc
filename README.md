# (+97>)3<3+>+5>+2<2(.>)3 (*.bfe)

A slight syntactic superset of BF.

Development requirements:
1. cxxopts -> v2.2.1
2. antlr4 -> v4


*HelloWorld.bfe*
```
-[-7>+<]>-.-[->+5<]>++.+7..+3.[-3>+<]>-5.--[->+4<]>-.-8.+3.-6.-8.
```

## Functions

1. Interpret bfe(and bf) files
2. Convert bf/bfe to bf
3. Convert bf/bfe to C++ (not optimized)


## Usage

```sh
./bfc -h #Help
./bfc prog.bfe #Execute
./bfc prog.bfe -a bf #Translate file to bf
./bfc prog.bfe -a cpp # Translate file to cpp
```

## Syntax

**Basic**

```bf
,. IO
<> Address manipulation
+- Value manipulation
[] Looping construct
```
**Comments**

`//` - Single Line

`/* */` - Multi Line

**Repeats**

```
<symbol><number>
(<symbols>)<number>
```
Eg.
```
+65. //prints A
>
(+65>)3 //stores AAA
(<.)3   //prints AAA
```


## Setup oddities (dev)

1. Copy `antlr-4.8-complete.jar` to `./thirdparty/antlr`. (Required only if grammar has to be updated)
2. Generate parsers to `./libs/generated` or use VSCode with the ANTLR extension.

## Todo (Tentative)

- [ ] Grammar
    - [X] Number shorthand
    - [X] Loop statements
    - [ ] Shorthand segments
- [X] Processing
    - [X] Translate to bf
    - [X] Execute results
