#pragma once
#include "TRecurso.h"
#define GLEW_STATIC
#include <GL/glew.h>

class TRecursoTriangle :
	public TRecurso
{
public:
	TRecursoTriangle();
	~TRecursoTriangle();
	void draw();
	void borrarCuadrado();
	bool cargarShaders();
	void cargarCuadrado();
	bool cargarFichero(char*);
private:
	GLuint VBO, VAO, EBO;
	GLuint shaderProgram;
	GLuint vertexShader;
	GLint success;
	GLuint fragmentShader;
};

