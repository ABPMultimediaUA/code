#pragma once
#include "TRecurso.h"
#include <string>
#ifndef GLEW_STATIC
#define GLEW_STATIC
#include <GL/glew.h>
#endif
#include <imageMagick\Magick++.h>
class TRecursoMaterial :
	public TRecurso
{
public:
	TRecursoMaterial(GLenum, std::string&);
	~TRecursoMaterial();
	bool cargarFichero(const std::string&);
	void draw();
	void enlazar(GLenum);
private:
	GLenum m_textureTarget;
	GLuint m_textureObj;
	Magick::Image m_image;
	Magick::Blob m_blob;
};

