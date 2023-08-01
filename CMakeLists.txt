cmake_minimum_required(VERSION 3.25)
project(Kattis)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Kattis
        bits/stdc++.h
        completed/main.cpp
        completed/functions.h
        completed/warehouse.cpp completed/addition.cpp completed/variablearithmetic.cpp completed/trollhunt.cpp completed/tictactoe.cpp completed/tictacstate.cpp completed/password.cpp completed/attendance.cpp completed/parentgap.cpp completed/notamused.cpp completed/sticky.cpp completed/dog&gopher.cpp completed/cursethedarkness.cpp completed/schedule.cpp completed/bits.cpp completed/peasoupandpancakes.cpp completed/avergaes.cpp completed/primereduction.cpp completed/soundex.cpp completed/smartphone.cpp completed/treasure.cpp completed/powersof2.cpp completed/vaccination.cpp completed/hextodecimal.cpp completed/buses.cpp completed/calculator.cpp completed/whichbase.cpp completed/fahrenheit.cpp completed/chemistry.cpp completed/mastermind.cpp completed/keyboard.cpp completed/hailstones.cpp textureanalysis.cpp thetrip2007.cpp recenice.cpp carryoperation.cpp morsepalindrome.cpp massivecardgame.cpp cardsim.cpp jollyjumpers.cpp guessthedatastructure.cpp cocktail.cpp scalingrecipe.cpp trees.cpp pingpong.cpp)
