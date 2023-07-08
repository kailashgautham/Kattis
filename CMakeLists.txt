cmake_minimum_required(VERSION 3.25)
project(Kattis)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Kattis
        humancannonball2.cpp
        numberfun.cpp
        symmetricorder.cpp
        thelastproblem.cpp
        tornbygge.cpp bits/stdc++.h main.cpp functions.h easiest.cpp fiftyshades.cpp jobexpenses.cpp nodup.cpp grading.cpp logicfunctions.cpp ladder.cpp vectorfunctions.cpp vectorfunctions.h starbattles1.cpp simplicity.cpp simon.cpp triangle.cpp santaklas.cpp sanic.cpp rhyming.cpp different.cpp goodmorning.cpp sretan.cpp thanos.cpp variablenames.cpp ninetynine.cpp communication.cpp skocimis.cpp skener.cpp sevenwonders.cpp server.cpp)
