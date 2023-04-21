#pragma once
#ifdef IC_PLATFORM_WINDOWS

extern Icarus::Application* Icarus::CreateApplication();



int main(int argc, char** argv)
{
	//  Sandbox* sandBox = new Sandbox();
	printf("Icarus Engine \n");
	auto app = Icarus::CreateApplication();
    app->run();
	delete app;
	return 0;
}
#endif