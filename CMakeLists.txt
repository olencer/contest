cmake_minimum_required(VERSION 3.24)
project(contest)

# Debug
# GNU C++ 7.3.0
set(CMAKE_CXX_STANDARD 17)

# test
add_executable(_contest main.cpp)

add_subdirectory(_todo)
add_subdirectory(_realContest)
