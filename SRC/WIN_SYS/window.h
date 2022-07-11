#pragma once
#include <gl.h>
#include <GLFW/glfw3.h>

class Window
{
private:
	static GLFWwindow* window;
	friend class Event;
public:
	static int init(const char* title, int width, int height);
	static bool close();
	static void poll();
	static void term();
};