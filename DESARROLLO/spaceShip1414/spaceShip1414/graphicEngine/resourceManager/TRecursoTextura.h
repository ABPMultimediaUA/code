#pragma once
#include "TRecurso.h"
#ifndef GLEW_STATIC
#define GLEW_STATIC
#include <GL/glew.h>
#endif
class TRecursoTextura :
	public TRecurso
{
public:
	TRecursoTextura();
	~TRecursoTextura();
	bool cargarFichero(std::string) override;
	void draw() override;
	GLuint getTexturaID();
private:
	GLuint textura;
	int width, height;
};

