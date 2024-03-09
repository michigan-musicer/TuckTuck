#include <Application.h>

namespace TuckTuck
{

    Application::Application()
    {
        
    }

    Application::~Application()
    {
        
    }

    void Application::run()
    {
        // this...is really weird for logs
        std::unique_ptr<Logger>             g_logger_               = std::make_unique<Logger>();

        TUCKTUCK_ENGINE_WARN("Logs initialized, engine started");
        TUCKTUCK_ENGINE_WARN("Engine managers starting construction");

        std::unique_ptr<WindowManager>      g_windowManager_        = std::make_unique<WindowManager>();
        // std::unique_ptr<InputManager>       g_inputManager_         = std::make_unique<InputManager>(); 

        TUCKTUCK_ENGINE_WARN("Engine managers completed construction");

        while(!g_windowManager_->windowShouldClose())
        {    
            g_windowManager_->renderWindow();
            break;
        }
    }

}


