set(SANDBOX_SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/src")

add_executable(Sandbox 
    "${SANDBOX_SOURCE_DIR}/Sandbox.cpp"
    )

# add_dependencies(Sandbox TuckTuck)

target_link_libraries(Sandbox PRIVATE TuckTuck)
