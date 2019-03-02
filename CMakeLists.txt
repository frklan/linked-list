cmake_minimum_required(VERSION 3.6)

project(linked-list)
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})

add_compile_options(
  -Weverything 
  -Wno-c++98-compat 
  -Wno-c++98-compat-pedantic
  -Wno-padded

#  -Wno-weak-vtables 
#  -Wno-padded 
#  -Wno-conversion 
#  -Wno-zero-as-null-pointer-constant
#  -Wno-old-style-cast 
#  -Wno-double-promotion 
#  -Wno-global-constructors 
#  -Wno-switch-enum 
#  -Wno-cast-qual 
#  -Wno-shadow
#  -Wno-cast-qual
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory(src list)

if(${BUILD_TEST})
  add_subdirectory(test)
endif()