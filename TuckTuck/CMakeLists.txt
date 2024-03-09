cmake_minimum_required(VERSION 3.16.0)
# project(TuckTuckEngine)

set(TUCKTUCK_SOURCE_FOLDER "${CMAKE_CURRENT_LIST_DIR}/src")


add_library(TuckTuck SHARED 
    "${TUCKTUCK_SOURCE_FOLDER}/Application.cpp"
    "${TUCKTUCK_SOURCE_FOLDER}/EntryPoint.cpp"
    "${TUCKTUCK_SOURCE_FOLDER}/Logger.cpp"
    "${TUCKTUCK_SOURCE_FOLDER}/glad.c"
    "${TUCKTUCK_SOURCE_FOLDER}/Events/EventListener.cpp"
    "${TUCKTUCK_SOURCE_FOLDER}/Events/EventProducer.cpp"
    "${TUCKTUCK_SOURCE_FOLDER}/Window/Window.cpp"
    "${TUCKTUCK_SOURCE_FOLDER}/Window/WindowEvent.cpp"
    "${TUCKTUCK_SOURCE_FOLDER}/Window/WindowEventListener.cpp"
    "${TUCKTUCK_SOURCE_FOLDER}/Window/WindowManager.cpp"
    )
set(CMAKE_POSITION_INDEPENDENT_CODE TRUE)
set(TUCKTUCK_LIBRARY_DIR ${CMAKE_CURRENT_LIST_DIR})

set(TUCKTUCK_BUILD_DEBUG TRUE)

# target_compile_options(TuckTuck PUBLIC -lGl -g -lm -lglfw -lglfw3)

if(TUCKTUCK_BUILD_DEBUG)
    target_compile_options(TuckTuck PRIVATE -g)
endif() 

find_package(spdlog)
find_package(glfw3 REQUIRED)

add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/extern")

target_link_libraries(TuckTuck spdlog)
# For some reason my install is named GLFW but the package itself is named glfw3...
# this should probably be wrapped in an if 
target_link_libraries(TuckTuck glfw)

# PUBLIC for headers that should be exposed, PRVIATE for those that shouldn't be
# we should have two different calls for the public and private 
target_include_directories(TuckTuck PUBLIC
    "${CMAKE_CURRENT_LIST_DIR}/include"
    "${CMAKE_CURRENT_LIST_DIR}/extern/spdlog"
    "${CMAKE_CURRENT_LIST_DIR}/extern/glad"
    )


