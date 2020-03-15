include(${Algorithms_SOURCE_DIR}/includes.cmake)

set(EXEC_NAME MultiThreading)

set(MultiThreading_SRCS
    main.cpp
    MultiThreading.cpp
)

add_executable(${EXEC_NAME}
                ${MultiThreading_SRCS})

target_link_libraries(${EXEC_NAME}
		      Threads::Threads
             )


install (TARGETS ${EXEC_NAME} DESTINATION ${CMAKE_INSTALL_PREFIX})
