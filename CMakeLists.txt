cmake_minimum_required(VERSION 3.10)

project(vectorHomework VERSION 1.0)

add_library(Vector STATIC Vector.cpp)
add_executable(main main.cpp)

target_link_libraries(main PRIVATE Vector)

target_compile_options(main PRIVATE -Wall)
