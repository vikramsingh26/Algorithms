cmake_minimum_required(VERSION 2.6)

project(Algorithm)

add_executable(Fibonacci 
                Fibonacci.cpp
                Fibonacci_main.cpp)
                
add_executable(FibTest FibTest.cpp)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CXX_EXTENSIONS NO)
target_compile_features(Fibonacci PUBLIC cxx_std_11)

# FibTest

target_compile_features(FibTest PUBLIC cxx_std_11)
target_include_directories(FibTest PUBLIC "/usr/local/include")
target_link_directories(FibTest PUBLIC "/usr/local/lib")


target_link_libraries(FibTest
                      gtest
                      gmock
                      gtest_main )
