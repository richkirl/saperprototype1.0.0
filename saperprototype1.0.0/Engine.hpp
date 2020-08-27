#ifndef ENGINE
#define ENGINE
#include <iostream>

#include <GLFW/glfw3.h>
#include <cassert>

class Engine
{
public:
	static int SCREEN_WIDTH;
	static int SCREEN_HEIGHT;
	static float Getdt();

	Engine();
	~Engine();

	bool Initialize(const char* windowTitle);

	void Update();
	void BeginRender();
	void EndRender();

private:
	static GLFWwindow* window;

	static float dt;
	float lasttime;
};
#endif ENGINE
