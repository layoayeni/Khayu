#include <Khayu.h>

class Sandbox : public Khayu::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Khayu::Application* Khayu::CreateApplication()
{
	return new Sandbox();
}