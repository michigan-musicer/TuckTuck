module;



export module TuckTuck:Application;

export import module TuckTuck:Logger;

namespace TuckTuck
{

    export class Application
    {
    public:
        Application();
        virtual ~Application();

        void run();
    };

    export Application* ApplicationFactory();

    // impls

    Application::Application()
    {
        logEngineWarn("Starting application")
    }

    Application::~Application()
    {
        logEngineWarn("Ending application")
    }

    void Application::run()
    {
        while(true)
        {    
            logEngineInfo("passing test");
            break;
        }
    }

}


