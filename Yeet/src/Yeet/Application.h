#pragma once

#include "core.h"

namespace Yeet {
	class YEET_API Application {
	public:
		Application();
		void Run();
		virtual ~Application();
	};
	Application* CreateApplication();
}
