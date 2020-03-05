
set(EXEC_NAME test_LCS)

include(${Algorithms_SOURCE_DIR}/includes.cmake)

                
add_executable(${EXEC_NAME} 
                LCSTest.cpp
                ${Algorithms_SOURCE_DIR}/LCS/Src/LCS.cpp)

target_link_libraries(${EXEC_NAME}
		      Threads::Threads
                      gtest
                      gmock
                      gtest_main )


install (TARGETS ${EXEC_NAME} DESTINATION ${CMAKE_TEST_INSTALL_PREFIX})
