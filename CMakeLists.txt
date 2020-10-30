cmake_minimum_required(VERSION 3.17)

project(bfc)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(SOURCES
    src/main.cpp
    src/toBFListener.cpp
    src/toCPPListener.cpp
    src/executeBFE.cpp
    lib/generated/bfeLexer.cpp
    lib/generated/bfeParser.cpp
    lib/generated/bfeBaseVisitor.cpp
    lib/generated/bfeVisitor.cpp
    lib/generated/bfeBaseListener.cpp
    lib/generated/bfeListener.cpp
)
add_executable(main.out ${SOURCES})

target_link_libraries(main.out ${PROJECT_SOURCE_DIR}/lib/antlr4/lib/libantlr4-runtime.a)

target_include_directories(main.out
    PUBLIC
        ${PROJECT_SOURCE_DIR}/lib/generated
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/lib/antlr4/include
        ${PROJECT_SOURCE_DIR}/lib/cxxopts/include

)
