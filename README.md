# bfc

An extension of a language that shall not be named

*Hello world*
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
- [ ] Processing
    - [X] Translate to bf
    - [ ] Execute result