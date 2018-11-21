cmake_minimum_required(VERSION 3.5)

project (cmake_example_4_static)


set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall")

#-------------------- Create a library -----------------------------------------
#Generate the shared library from the library sources
#-------------------------------------------------------------------------------

include_directories("${PROJECT_SOURCE_DIR}/include")

add_library(${PROJECT_NAME}_lib 
            STATIC 
              src/sLibrary.cpp
            )

