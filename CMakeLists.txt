cmake_minimum_required(VERSION 4.0)
project(OSRS_XP_Calc)

set(CMAKE_CXX_STANDARD 20)

add_executable(OSRS_XP_Calc src/main.cpp
        include/skills/woodcutting.hpp
        src/skills/woodcutting.cpp
        include/skills/firemaking.hpp
        src/skills/firemaking.cpp
        src/skills/mining.cpp
        include/skills/mining.hpp)
