include(${Algorithms_SOURCE_DIR}/includes.cmake)

set(EXEC_NAME SharedPtr)

include_directories(${Algorithms_SOURCE_DIR}/CPP11/Include)
add_executable(${EXEC_NAME}
                main.cpp)

install (TARGETS ${EXEC_NAME} DESTINATION ${CMAKE_INSTALL_PREFIX})
