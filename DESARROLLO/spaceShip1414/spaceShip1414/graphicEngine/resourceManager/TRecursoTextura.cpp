#include "TRecursoTextura.h"
#include <iostream>
#include <SOIL\SOIL.h>
#include <cstring>
#include <string>

TRecursoTextura::TRecursoTextura()
{
}


TRecursoTextura::~TRecursoTextura()
{
	glDeleteTextures(1, &textura);
}

bool TRecursoTextura::cargarFichero(std::string ntextura)
{
	size_t index = ntextura.find_last_of("\\/");
	nombre = index == std::string::npos ? "" : ntextura.substr(index + 1);
	std::cout << "Recurso nombre: " << nombre << std::endl;

	glGenTextures(1, &textura);
	glBindTexture(GL_TEXTURE_2D, textura); // all upcoming GL_TEXTURE_2D operations now have effect on this texture object
										   // set the texture wrapping parameters
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);	// set texture wrapping to GL_REPEAT (default wrapping method)
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	// set texture filtering parameters	
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST_MIPMAP_LINEAR);
	// load image, create texture and generate mipmaps
	int width, height, nrComponents;
	unsigned char *data = SOIL_load_image(ntextura.c_str(), &width, &height, &nrComponents, 0);
	if (data)
	{
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
		glGenerateMipmap(GL_TEXTURE_2D);
		SOIL_free_image_data(data);
		return true;
	}
	else
	{
		std::cout << "Failed to load texture" << std::endl;
		SOIL_free_image_data(data);
		return false;
	}
}

void TRecursoTextura::draw()
{
}

GLuint TRecursoTextura::getTexturaID()
{
	return textura;
}
