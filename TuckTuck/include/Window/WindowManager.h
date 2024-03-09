#pragma once

#include <Window/WindowEventListener.h>

namespace TuckTuck
{

    class WindowManager
    {
    public:
        WindowManager();
        ~WindowManager();

        bool windowShouldClose();
        void renderWindow();

    private:
        std::unique_ptr<Window> window_;
        std::unique_ptr<WindowEventListener> windowListener_;
    };

}
