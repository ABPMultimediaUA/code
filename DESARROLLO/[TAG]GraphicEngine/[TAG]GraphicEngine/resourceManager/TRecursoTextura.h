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
	void draw() override;
	void draw(GLuint);
	bool cargarFichero(std::string) override;
	GLuint getTextureID();
private:
	GLuint loadBMP(const std::string&);
	GLuint loadTEX(const std::string&);
	GLuint textureID;
	GLuint buffer[2];
};

