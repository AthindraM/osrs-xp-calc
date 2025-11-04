cmake_minimum_required(VERSION 4.0)
project(OSRS_XP_Calc)

set(CMAKE_CXX_STANDARD 20)

add_executable(OSRS_XP_Calc main.cpp
        woodcutting.hpp
        woodcutting.cpp)
