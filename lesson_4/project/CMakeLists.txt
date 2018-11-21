cmake_minimum_required(VERSION 3.5)

project (cmake_example_4)

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

#------------------- Create an executable --------------------------------------
file(GLOB 
          CPP_SOURCES "src/*.cpp")

link_directories(${CMAKE_SOURCE_DIR}/libs/shared)
#link_directories(${CMAKE_SOURCE_DIR}/libs/static)

add_executable(${PROJECT_NAME} ${CPP_SOURCES})

target_link_libraries( ${PROJECT_NAME}
                       cmake_example_4_shared_lib
)

#target_link_libraries( ${PROJECT_NAME}
#                       cmake_example_4_static_lib
#)












