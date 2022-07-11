#include "Event.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <string.h>

bool* Event::_keys;
uint* Event::_frames;
uint Event::_current = 0;

float Event::deltaX = 0.0f;
float Event::deltaY = 0.0f;
float Event::x = 0.0f;
float Event::y = 0.0f;

bool Event::_cursor_locked = false;
bool Event::_cursor_started = false;

#define _MOUSE_BUTTONS 1024

Event::Event() {
	GLFWwindow* window = Window::window;
	_keys = new bool[1032];
	_frames = new uint[1032];

	memset(_keys, false, 1032 * sizeof(bool));
	memset(_frames, 0, 1032 * sizeof(uint));
};

Event::~Event() {
	delete[] _keys;
	delete[] _frames;
}