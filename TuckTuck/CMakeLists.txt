cmake_minimum_required(VERSION 3.16.0)
# project(TuckTuckEngine)

set(TUCKTUCK_SOURCE_FOLDER "${CMAKE_CURRENT_LIST_DIR}/src")

add_library(TuckTuck SHARED 
    "${TUCKTUCK_SOURCE_FOLDER}/Application.cpp"
    "${TUCKTUCK_SOURCE_FOLDER}/EntryPoint.cpp"
    "${TUCKTUCK_SOURCE_FOLDER}/Logger.cpp"
)
set(CMAKE_POSITION_INDEPENDENT_CODE TRUE)
set(TUCKTUCK_LIBRARY_DIR ${CMAKE_CURRENT_LIST_DIR})


find_package(spdlog)

add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/extern")

target_link_libraries(TuckTuck spdlog)

# PUBLIC for headers that should be exposed, PRVIATE for those that shouldn't be
# we should have two different calls for the public and private 
target_include_directories(TuckTuck PUBLIC
    "${CMAKE_CURRENT_LIST_DIR}/include"
    "${CMAKE_CURRENT_LIST_DIR}/extern/spdlog"
    )


