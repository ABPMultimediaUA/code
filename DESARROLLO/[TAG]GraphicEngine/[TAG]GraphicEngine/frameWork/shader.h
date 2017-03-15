#pragma once
#include <GL/glew.h>

class shader
{
public:
	shader();
	shader(const GLchar* vertexPath, const GLchar* fragmentPath);
	~shader();
	void Use();
	GLuint getProgram();
private:
	GLuint Program;
};

