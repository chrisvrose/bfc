cmake_minimum_required(VERSION 3.17)

project(bfc)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(SOURCES
    src/main.cpp
    src/toBFListener.cpp
    lib/generated/bfLexer.cpp
    lib/generated/bfParser.cpp
    lib/generated/bfBaseVisitor.cpp
    lib/generated/bfVisitor.cpp
    lib/generated/bfBaseListener.cpp
    lib/generated/bfListener.cpp
)
add_executable(main.out ${SOURCES})

target_link_libraries(main.out ${PROJECT_SOURCE_DIR}/lib/antlr4/lib/libantlr4-runtime.a)

target_include_directories(main.out
    PUBLIC
        ${PROJECT_SOURCE_DIR}/lib/generated
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/lib/antlr4/include

)
