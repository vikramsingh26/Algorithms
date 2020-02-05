cmake_minimum_required(VERSION 2.6)

project(Algorithm)

add_executable(Fibonnaci Fibonnaci.cpp)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CXX_EXTENSIONS NO)