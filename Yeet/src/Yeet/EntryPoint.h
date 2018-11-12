#pragma once

#ifdef YT_PLAT_WINDOWS
	extern Yeet::Application* Yeet::CreateApplication();
	int main(int argc, char** argv) {
		auto app = Yeet::CreateApplication();
		app->Run();
		delete app;
		return 0;
	}
#else
	#error Windows supported only
#endif