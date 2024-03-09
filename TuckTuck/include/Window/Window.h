#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <Common.h>
#include <Logger.h>

#define USE_GLFW 1
#define USE_OTHER 0

namespace TuckTuck
{
    // necessary to wrap GLFWwindow* in a unique_ptr
    // struct DestroyGLFWWindow {
    //     void operator()(GLFWwindow* ptr)
    //     {
    //         glfwDestroyWindow(ptr);
    //     }
    // };

    // This class should interface with whatever graphics library we end up using, rather than the window manager.
    // indirection lessgooooo 
    class Window
    {
    public:
        Window();
        ~Window();

        // used as condition for render / game loop
        bool windowShouldClose();
        void render();

        void resizeWindow();

    private:
        // std::unique_ptr<GLFWwindow> glfw_window_;
        // This is an unwrapped GLFWwindow pointer for now because C structs do not
        // play nice with std::make_unique
        GLFWwindow* glfw_window_;

    }; 


}