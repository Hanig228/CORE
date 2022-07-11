#include "VAO.h"

GL::VAO::VAO(){
	glGenVertexArrays(1, &VAo);
	glBindVertexArray(VAo);
}

void GL::VAO::add(const std::vector<float>& data){
	GLuint VBO;
	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, data.size() * sizeof(float), data.data(), GL_STATIC_DRAW);
	glVertexAttribPointer(BUF.size(), 3, GL_FLOAT, GL_FALSE, 0, nullptr);
	BUF.push_back(VBO);
}
void GL::VAO::draw(GLsizei count){
	glBindVertexArray(VAo);
	for (size_t i = 0; i < BUF.size(); ++i) {
		glEnableVertexAttribArray(i);
	}
	glDrawArrays(GL_TRIANGLES, 0, count);
	for (size_t i = 0; i < BUF.size(); ++i) {
		glDisableVertexAttribArray(i);
	}
}

GL::VAO::~VAO(){
	glDeleteBuffers(BUF.size(), BUF.data());
	glDeleteVertexArrays(1, &VAo);
}