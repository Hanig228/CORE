#include <iostream>
#include <GLFW.h>
#include <WIN_SYS/window.h>

int main() {
	try
	{
		GLFW init;
		Window::init("Window", 1280, 780);
		while (!Window::close())
		{
			Window::poll();
		}
	}
	catch (const std::runtime_error EROR){
		std::cout << "	EROR: " << EROR.what();
		return -1;
	}
	Window::term();
	return 0;
}