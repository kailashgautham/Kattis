cmake_minimum_required(VERSION 3.25)
project(Kattis)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Kattis
        bits/stdc++.h
        completed/main.cpp
        completed/functions.h
        completed/warehouse.cpp completed/addition.cpp completed/variablearithmetic.cpp completed/trollhunt.cpp completed/tictactoe.cpp completed/tictacstate.cpp completed/password.cpp completed/attendance.cpp completed/parentgap.cpp completed/notamused.cpp completed/sticky.cpp completed/dog&gopher.cpp)
