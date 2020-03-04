include(${Algorithms_SOURCE_DIR}/includes.cmake)

set(EXEC_NAME Fibonacci)

include_directories(${Algorithms_SOURCE_DIR}/Fibonacci/Include)
add_executable(${EXEC_NAME}
                Fibonacci.cpp
                main.cpp)

install (TARGETS ${EXEC_NAME} DESTINATION ${CMAKE_INSTALL_PREFIX})