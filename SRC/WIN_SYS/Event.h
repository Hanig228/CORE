#pragma once

#include "window.h"

typedef unsigned int uint;

class Event{
private:
	static uint* _frames;
	static uint _current;

	static float deltaX;
	static float deltaY;
	static float x;
	static float y;

	static bool* _keys;
	static bool _cursor_locked;
	static bool _cursor_started;
public:
	Event();
	~Event();
};

