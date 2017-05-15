#include "TRecursoTextura.h"
#include <iostream>
#include <SOIL\SOIL.h>

TRecursoTextura::TRecursoTextura()
{
}


TRecursoTextura::~TRecursoTextura()
{
}

bool TRecursoTextura::cargarFichero(std::string ntextura, )
{
	size_t index = ntextura.find_last_of("\\/");
	nombre = index == std::string::npos ? "" : ntextura.substr(index + 1);
	std::cout << "Recurso nombre: " << nombre << std::endl;

	glGenTextures(1, &textura);

	unsigned char* image;

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, textura);
	image = SOIL_load_image(ntextura.c_str, &width, &height, 0, SOIL_LOAD_RGB);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	return false;
}

void TRecursoTextura::draw()
{
}

GLuint TRecursoTextura::getTexturaID()
{
	return textura;
}
