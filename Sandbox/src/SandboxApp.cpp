#include "Icarus.h"


class Sandbox : public Icarus::Application
{
	public:
		Sandbox()
		{
		};
		~Sandbox() 
		{
		};
};




Icarus::Application* Icarus::CreateApplication()
{
	return new Sandbox();
}