# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Set the output directory for executables to 'bin'
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# Project name and language
project(MyProject CXX)

# Create a variable with the source files using GLOB
file(GLOB SOURCE_FILES "src/*.cpp")

# Add the source files to the executable
add_executable(my_executable main.cpp ${SOURCE_FILES})

target_include_directories(my_executable PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)