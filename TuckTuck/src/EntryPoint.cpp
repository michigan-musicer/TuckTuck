export module TuckTuck:EntryPoint;

import TuckTuck:Application;

export int main()
{
    auto app = TuckTuck::ApplicationFactory();
    app->run();
    delete app;
}
