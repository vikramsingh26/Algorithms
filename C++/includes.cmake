cmake_minimum_required(VERSION 2.6)

# specify the C++ standard

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CXX_EXTENSIONS NO)

add_compile_options(-pthread)
find_package(Threads REQUIRED)

# include directories.


include_directories("/usr/local/include")

#Link directories list.

link_directories("/usr/local/lib")

#install directories

set(CMAKE_INSTALL_PREFIX ${Algorithms_SOURCE_DIR}/build/bin)
set(CMAKE_TEST_INSTALL_PREFIX ${Algorithms_SOURCE_DIR}/build/test)
