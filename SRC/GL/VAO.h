#pragma once
#include <gl.h>
#include <vector>

namespace GL
{
	class VAO
	{
	private:
		GLuint VAo;
		std::vector<GLuint> BUF;
	public:
		VAO();
		VAO(const VAO&) = delete;
		void add(const std::vector<float>& data);
		void draw(GLsizei count);
		~VAO();
	};
}