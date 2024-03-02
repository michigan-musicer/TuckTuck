export module TuckTuck:EntryPoint;

import TuckTuck:Application;

export int main()
{
    TuckTuck::Logger::init();
    logEngineWarn("Loggers initialized");
    int a = 5;
    logInfo("Var is {0}", a);

    auto app = TuckTuck::ApplicationFactory();
    app->run();
    delete app;
}
