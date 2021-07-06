#include <Engine.h>

class Designer : public Engine::Application
{
public:
	Designer()
	{

	}

	~Designer()
	{

	}
};

Engine::Application* Engine::CreateApplication()
{
	return new Designer();
}
