cmake_minimum_required(VERSION 2.6)



add_executable(Fibonacci 
                Fibonacci.cpp
                Fibonacci_main.cpp)
                

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CXX_EXTENSIONS NO)
target_compile_features(Fibonacci PUBLIC cxx_std_11)

# include directories
include_directories(${Algorithms_SOURCE_DIR}/Fibonacci/Include)