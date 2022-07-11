#include "window.h"
#include <stdexcept>
#include <GL/VAO.h>

GLFWwindow* Window::window;

int Window::init(const char* title, int width, int height){
	window = glfwCreateWindow(width, height, title, nullptr, nullptr);
	if (!window) {
		throw std::runtime_error("Window");
	}

	glfwMakeContextCurrent(window);

	glewExperimental = true;
	if (glewInit() != GLEW_OK) {
		throw std::runtime_error("GLEW");
	}
}

bool Window::close(){
	return glfwWindowShouldClose(window);
}
void Window::poll() {
	glfwPollEvents();
}

void Window::term(){
	glfwDestroyWindow(window);
}