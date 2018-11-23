cmake_minimum_required (VERSION 3.5)

# https://cmake.org/cmake/help/latest/manual/cmake-modules.7.html

project(package_find)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules
                      ${CMAKE_MODULE_PATH})

set(all_found_result "ok")

# some actions
include(test)

# find package by own script
find_package(_OpenSSL)

# Add an executable
add_executable(package_find main.cpp)

if(all_found_result STREQUAL "ok")
  message("all libraries was found")
else()
  message( FATAL_ERROR "Not all libraries was found!" )
endif()


# https://cmake.org/cmake/help/v3.0/command/message.html
message( STATUS         " status " )
message( WARNING        " warning " )
message( AUTHOR_WARNING " author warning " )
message( SEND_ERROR     " send error " )
message( DEPRECATION    " deprecation " )
message( FATAL_ERROR    " fatal error " )
