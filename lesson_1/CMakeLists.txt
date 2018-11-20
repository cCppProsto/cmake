cmake_minimum_required(VERSION 3.5)

project (cmake_example_1)

#set(CMAKE_BUILD_TYPE Debug)
#set(CMAKE_BUILD_TYPE Release)

# set(CMAKE_CXX_STANDARD 11)  # enable C++11 standard
# set(CMAKE_CXX_STANDARD 14)  # enable C++14 standard
# set(CMAKE_CXX_STANDARD 17)  # enable C++17 standard
# or
# set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98")
# set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++03")
# set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
# set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
# set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

# set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c89")
# set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")
# set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11")


#add_definitions(-Wall -O2)
# or
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")


#set(SOURCES main.cpp test.c)
#or
file(GLOB 
          CPPS "*.cpp"
          C    "*.c")

# add_executable(${PROJECT_NAME} main.cpp test.c)
#add_executable(${PROJECT_NAME} ${SOURCES})
# or 
add_executable(${PROJECT_NAME} ${CPPS} ${C})
