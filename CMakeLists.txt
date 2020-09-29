cmake_minimum_required(VERSION 3.17)

project(bfc)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(SOURCES
    src/main.cpp
)

add_executable(main.out ${SOURCES})

target_include_directories(main.out
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)
