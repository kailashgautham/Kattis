cmake_minimum_required(VERSION 3.25)
project(Kattis)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Kattis
        humancannonball2.cpp
        numberfun.cpp
        symmetricorder.cpp
        thelastproblem.cpp
        tornbygge.cpp)
