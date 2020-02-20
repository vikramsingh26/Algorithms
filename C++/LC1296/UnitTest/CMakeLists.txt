
set(EXEC_NAME LC1296SolutionTest)

include(${Algorithms_SOURCE_DIR}/includes.cmake)
                
add_executable(${EXEC_NAME} LC1296SolutionTest.cpp)

include_directories(${Algorithms_SOURCE_DIR}/LC1296/Include)

target_link_libraries(${EXEC_NAME}
		      Threads::Threads
                      gtest
                      gmock
                      gtest_main )


install (TARGETS ${EXEC_NAME} DESTINATION ${CMAKE_INSTALL_PREFIX})
