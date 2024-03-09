#include <Window/Window.h>

namespace TuckTuck
{
    Window::Window()
    {
        // It may be more correct to move glfw initialization to 
        // a graphics library and not just a window, but we will 
        // worry about that later.
        // (or just force the WindowEventListener to init first lol)
        glfwInit();
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

        glfw_window_ = glfwCreateWindow(800, 600, "TuckTuckWindow", NULL, NULL);
        // glfw_window_ = glfwCreateWindow(800, 600, "TuckTuckWindow", glfwGetPrimaryMonitor(), NULL);
        if (!glfw_window_)
        {
            // TUCKTUCK_ENGINE_CRITICAL("could not create window");
            assert(false);
        }

        glViewport(0, 0, 800, 600);
    }

    Window::~Window()
    {
        // use .release() to convert to raw pointer, which should be safe since the window
        // is destroyed at this point.
        // again, might be better to move this to a graphics library
        glfwDestroyWindow(glfw_window_);
        glfwTerminate();
    }

    bool Window::windowShouldClose()
    {
        return glfwWindowShouldClose(glfw_window_);
    }

    void Window::render()
    {
        // we prooobbbably shouldn't poll events here
        glfwPollEvents();
        glfwSwapBuffers(glfw_window_);
    }

    void Window::resizeWindow()
    {
        // 
    }



}