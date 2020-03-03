
include(${Algorithms_SOURCE_DIR}/includes.cmake)
                
add_executable(FibTest FibTest.cpp)


target_link_libraries(FibTest
		      Threads::Threads
                      gtest
                      gmock
                      gtest_main )


install (TARGETS FibTest DESTINATION ${CMAKE_INSTALL_PREFIX})
