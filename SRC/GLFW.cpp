#include "GLFW.h"
#include <GLFW/glfw3.h>
#include <stdexcept>

GLFW::GLFW(){
	glfwInit();

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);
	//glfwWindowHint(GLFW_SAMPLES, 2);

	if (!glfwInit()){
		throw std::runtime_error("GLFW in IT");
	}
}

GLFW::~GLFW() {
	glfwTerminate();
}