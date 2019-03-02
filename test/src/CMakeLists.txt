cmake_minimum_required(VERSION 3.6)

project(linkedlist_test)
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_EXTENSIONS OFF)

find_package(Catch2 REQUIRED)

# The test program
file(GLOB_RECURSE TEST_SOURCES *.cpp *.h)
add_executable(${PROJECT_NAME} ${TEST_SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE linkedlist_lib Catch2::Catch2)