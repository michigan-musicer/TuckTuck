#include <EntryPoint.h>


int main()
{
    // TuckTuck::Logger::init();
    // TUCKTUCK_ENGINE_WARN("Loggers initialized");
    int a = 5;
    // TUCKTUCK_CLIENT_INFO("Var is {0}", a);

    auto app = TuckTuck::ApplicationFactory();
    app->run();
    delete app;
}
