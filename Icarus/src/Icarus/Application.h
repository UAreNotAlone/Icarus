#pragma once

#include "Core.h"




namespace Icarus {

	class ICARUS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();
	};

	//  To be defined by the client
	Application* CreateApplication();
}
