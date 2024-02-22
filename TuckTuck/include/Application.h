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
}
