#pragma once

namespace TuckTuck
{

    class Application
    {
    public:
        Application();
        virtual ~Application();

        void run();
    };

    // note that this is not good modern C++ practice, reference the API talk from cppcon by
    // Jason Turner to learn more
    Application* ApplicationFactory();
}