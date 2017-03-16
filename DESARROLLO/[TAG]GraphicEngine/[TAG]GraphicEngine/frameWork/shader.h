#pragma once
#ifndef GLEW_STATIC
#define GLEW_STATIC
#include <GL/glew.h>
#endif // !1



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

