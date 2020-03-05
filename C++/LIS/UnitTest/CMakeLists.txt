
set(EXEC_NAME LISTest)

include(${Algorithms_SOURCE_DIR}/includes.cmake)
include_directories(${Algorithms_SOURCE_DIR}/LIS/Src/)

                
add_executable(${EXEC_NAME} 
                LISTest.cpp
                ${Algorithms_SOURCE_DIR}/LIS/Src/LIS.cpp)

target_link_libraries(${EXEC_NAME}
		      Threads::Threads
                      gtest
                      gmock
                      gtest_main )


install (TARGETS ${EXEC_NAME} DESTINATION ${CMAKE_TEST_INSTALL_PREFIX})
