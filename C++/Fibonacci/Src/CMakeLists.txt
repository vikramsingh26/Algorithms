include(${Algorithms_SOURCE_DIR}/includes.cmake)


add_executable(Fibonacci 
                Fibonacci.cpp
                main.cpp)

install (TARGETS Fibonacci DESTINATION ${CMAKE_INSTALL_PREFIX})