project(sub_main)

# Create the executable
add_executable(${PROJECT_NAME} main.cpp)

# This will cause the include directories for that target to be added to this project
target_link_libraries(${PROJECT_NAME}
    sub::lib_c
    sub::lib_cpp
)
