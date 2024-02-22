module;

export module TuckTuck:Application;

import <iostream>;

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

    }

    Application::~Application()
    {

    }

    void Application::run()
    {
        while(true)
        {    
            std::cout << "passing test\n";
            break;
        }
    }

}


