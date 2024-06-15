#pragma once

#ifdef KH_PLATFORM_WINDOWS

extern Khayu::Application* Khayu::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Khayu::CreateApplication();
	app->Run();
	delete app;
}

#endif