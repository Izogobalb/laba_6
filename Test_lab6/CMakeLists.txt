cmake_minimum_required(VERSION 3.23)
project(Tests)

set(CMAKE_CXX_STANDARD 20)

add_executable(Tests Functions_Tests.cpp
        ../Console_Calculator ../Console_Calculator/Functions.h ../Console_Calculator/Functions.cpp)
