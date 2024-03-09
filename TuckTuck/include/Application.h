#pragma once

#include <Common.h>
#include <Window/WindowManager.h>
#include <Input/InputManager.h>
#include <Logger.h>


namespace TuckTuck
{

    class Application
    {
    public:
        Application();
        virtual ~Application();

        // std::unique_ptr<Window> getWindow();

        void run();
    private:
        // this is where our window member will live after being init'd in Application
        // std::unique_ptr<WindowEventListener> windowEventListener_;
    };

    // note that this is not good modern C++ practice, reference the API talk from cppcon by
    // Jason Turner to learn more
    Application* ApplicationFactory();
}
