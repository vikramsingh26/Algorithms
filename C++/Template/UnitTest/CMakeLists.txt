
set(EXEC_NAME TemplateTest)

include(${Algorithms_SOURCE_DIR}/includes.cmake)
                
add_executable(${EXEC_NAME} TemplateTest.cpp)

include_directories(${Algorithms_SOURCE_DIR}/LC1295/Include)

target_link_libraries(${EXEC_NAME}
                      gtest
                      gmock
                      gtest_main )


install (TARGETS ${EXEC_NAME} DESTINATION ${CMAKE_INSTALL_PREFIX})
