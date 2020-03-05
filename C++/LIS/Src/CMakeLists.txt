include(${Algorithms_SOURCE_DIR}/includes.cmake)

set(EXEC_NAME LongestIncreasingSubsequence)

set(LIS_SRCS
    main.cpp
    LIS.cpp
)

add_executable(${EXEC_NAME}
                ${LIS_SRCS})

#add_dependencies(${EXEC_NAME}
#                ${LIS_SRCS})

install (TARGETS ${EXEC_NAME} DESTINATION ${CMAKE_INSTALL_PREFIX})
