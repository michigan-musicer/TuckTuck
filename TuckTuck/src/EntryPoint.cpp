module TuckTuck:EntryPoint;

int main()
{
    auto app = TuckTuck::ApplicationFactory();
    app->run();
    delete app;
}
