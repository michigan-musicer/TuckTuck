#include <Window/WindowManager.h>

namespace TuckTuck
{
    WindowManager::WindowManager()
    {
        window_ = std::make_unique<Window>();
        windowListener_ = std::make_unique<WindowEventListener>();
    }

    WindowManager::~WindowManager()
    {

    }

    bool WindowManager::windowShouldClose()
    {
        return window_->windowShouldClose();
    }

    void WindowManager::renderWindow()
    {
        return window_->render();
    }

    // void WindowManager::resizeWindow()
    // {
    //     // 
    // }



}