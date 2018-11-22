cmake_minimum_required(VERSION 3.5)

# Set the project name
project (sublibrary_cpp)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

# Add a library with the above sources
add_library(${PROJECT_NAME} src/sub_cpp.cpp)
add_library(sub::lib_cpp ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)
