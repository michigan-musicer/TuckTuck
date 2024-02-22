module TuckTuck;

class Sandbox : public TuckTuck::Application
{
public:
    Sandbox()
    {

    }

    ~Sandbox()
    {

    }

};

TuckTuck::Application* TuckTuck::ApplicationFactory()
{
    return new Sandbox();
}
