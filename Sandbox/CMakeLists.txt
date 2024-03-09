set(SANDBOX_SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/src")

add_executable(Sandbox 
    "${SANDBOX_SOURCE_DIR}/Sandbox.cpp"
    )

# add_dependencies(Sandbox TuckTuck)

set(SANDBOX_BUILD_DEBUG TRUE)
# target_compile_options(Sandbox PUBLIC -lGl -g -lm -lglfw -lglfw3)
if(SANDBOX_BUILD_DEBUG)
    add_compile_options(Sandbox PRIVATE -g -O0)
endif()

target_link_libraries(Sandbox PRIVATE TuckTuck)


