module TuckTuck;

TuckTuck::Application* TuckTuck::ApplicationFactory()
{
    return new Sandbox();
}
