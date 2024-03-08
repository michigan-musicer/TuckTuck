cmake_minimum_required(VERSION 3.16.0)
project(TuckTuckGame)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/TuckTuck")
add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/Sandbox")

# add_executable(TuckTuck ...)
