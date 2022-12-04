cmake_minimum_required(VERSION 3.23)
project(Tests)

set(CMAKE_CXX_STANDARD 20)

add_executable(Test_lab6 Functions_Tests.cpp
        ../lab6 ../lab6/Functions.h ../lab6/Functions.cpp)
