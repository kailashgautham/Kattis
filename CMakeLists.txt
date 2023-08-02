cmake_minimum_required(VERSION 3.25)
project(Kattis)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Kattis
        bits/stdc++.h
        completed/main.cpp
        completed/functions.h
        completed/warehouse.cpp completed/addition.cpp completed/variablearithmetic.cpp completed/trollhunt.cpp completed/tictactoe.cpp completed/tictacstate.cpp completed/password.cpp completed/attendance.cpp completed/parentgap.cpp completed/notamused.cpp completed/sticky.cpp completed/dog&gopher.cpp completed/cursethedarkness.cpp completed/schedule.cpp completed/bits.cpp completed/peasoupandpancakes.cpp completed/avergaes.cpp completed/primereduction.cpp completed/soundex.cpp completed/smartphone.cpp completed/treasure.cpp completed/powersof2.cpp completed/vaccination.cpp completed/hextodecimal.cpp completed/buses.cpp completed/calculator.cpp completed/whichbase.cpp completed/fahrenheit.cpp completed/chemistry.cpp completed/mastermind.cpp completed/keyboard.cpp completed/hailstones.cpp completed/textureanalysis.cpp completed/thetrip2007.cpp completed/recenice.cpp completed/carryoperation.cpp completed/morsepalindrome.cpp completed/massivecardgame.cpp completed/cardsim.cpp completed/jollyjumpers.cpp completed/guessthedatastructure.cpp completed/cocktail.cpp completed/scalingrecipe.cpp completed/trees.cpp completed/pingpong.cpp completed/outofsort.cpp completed/99problems.cpp completed/accounting.cpp completed/addwords.cpp completed/perfectnumber.cpp completed/alphabet.cpp completed/alphabetanimals.cpp completed/anagram.cpp completed/armystrengtheasy.cpp completed/armystrengthhard.cpp completed/zodiac.cpp completed/babelfish.cpp completed/babybites.cpp completed/food.cpp)
