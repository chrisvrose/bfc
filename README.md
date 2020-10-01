# bfc (*.bfe)

An extension of a language that shall not be named

Requires:
1. cxxopts -> v2.2.1
2. antlr4


*HelloWorld.bfe*
```
-[-7>+<]>-.-[->+5<]>++.+7..+3.[-3>+<]>-5.--[->+4<]>-.-8.+3.-6.-8.
```


## Setup oddities

1. Copy antlr4's cpp libs to `./libs/antlr4`. (Please take care that the include folder points straight to the files not to `antlr-runtime`)
2. Copy `antlr-4.8-complete.jar` to `./thirdparty/antlr`.
3. Generate parsers to `./libs/generated` or use VSCode with the ANTLR extension.


## Todo (Tentative)

- [ ] Grammar
    - [X] Number shorthand
    - [X] Loop statements
    - [ ] Shorthand segments
- [X] Processing
    - [X] Translate to bf
    - [X] Execute results

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