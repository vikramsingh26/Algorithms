include(${Algorithms_SOURCE_DIR}/includes.cmake)

set(EXEC_NAME LCS)

set(LCS_SRCS
    main.cpp
    LCS.cpp
)

add_executable(${EXEC_NAME}
                ${LCS_SRCS})


install (TARGETS ${EXEC_NAME} DESTINATION ${CMAKE_INSTALL_PREFIX})
