cmake_minimum_required(VERSION 3.5)

project (cmake_example_3)

# The version number.
set (${PROJECT_NAME}_VERSION_MAJOR 1)
set (${PROJECT_NAME}_VERSION_MINOR 2)
set (${PROJECT_NAME}_VERSION_PATCH 3)
set (${PROJECT_NAME}_VERSION_TWEAK 4)
set (${PROJECT_NAME}_VERSION "${${PROJECT_NAME}_VERSION_MAJOR}.${${PROJECT_NAME}_VERSION_MINOR}.${${PROJECT_NAME}_VERSION_PATCH}.${${PROJECT_NAME}_VERSION_TWEAK}")

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall")

# Call configure files on ver.h.in to set the version.
configure_file(
               "${PROJECT_SOURCE_DIR}/include/ver.h.in"
               "${PROJECT_BINARY_DIR}/version.h"
              )

configure_file(
               "${PROJECT_SOURCE_DIR}/include/path.h.in"
               "${PROJECT_BINARY_DIR}/path.h"
              )

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/include")

#-------------------- Create a library -----------------------------------------
#Generate the shared library from the library sources
#-------------------------------------------------------------------------------
add_library(${PROJECT_NAME}_lib SHARED 
            lib_src/sLibrary.cpp
          )
          
add_library(${PROJECT_NAME}_lib::lib_1 ALIAS ${PROJECT_NAME}_lib)

target_include_directories(${PROJECT_NAME}_lib
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/lib_src
)

#------------------- Create an executable --------------------------------------
file(GLOB 
          CPP_SOURCES "src/*.cpp")
          
add_executable(${PROJECT_NAME} ${CPP_SOURCES})

# link the new library target with the binary target
target_link_libraries( ${PROJECT_NAME}
    PRIVATE 
        ${PROJECT_NAME}_lib::lib_1
)













