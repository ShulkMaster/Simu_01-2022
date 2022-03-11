cmake_minimum_required(VERSION 3.16)
project(simulation)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories("dataStructures")
include_directories("Class 03-09")

add_executable("main" "Class 03-09/main.cpp")

# Data structures executables
add_executable("charArray" "dataStructures/array/charArray/charArray.cpp")
add_executable("intArray" "dataStructures/array/intArray/intArray.cpp")