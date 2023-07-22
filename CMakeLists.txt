cmake_minimum_required(VERSION 3.25)
project(Kattis)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Kattis
        bits/stdc++.h
        main.cpp
        functions.h
        q1.cpp q2.cpp q3.cpp q4.cpp q5.cpp q6.cpp q7.cpp q8.cpp egypt.cpp countdoubles.cpp square.cpp boolean.cpp ascii.cpp messy.cpp)
