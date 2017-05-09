#include "TRecursoTextura.h"
#include <fstream>
#include <iostream>
#include <SOIL\SOIL.h>

TRecursoTextura::TRecursoTextura()
{
}


TRecursoTextura::~TRecursoTextura()
{
	glDeleteTextures(1, &textureID);
}

void TRecursoTextura::draw()
{
	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, textureID);
	//glUniform1i(glGetUniformLocation(programID, getNombre()), 0);
}

void TRecursoTextura::draw(GLuint programID)
{
	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, textureID);
	glUniform1i(glGetUniformLocation(programID, static_cast<const GLchar*>(getNombre().c_str())),0);
}

bool TRecursoTextura::cargarFichero(std::string n)
{
	size_t index = n.find_last_of("\\/");
	nombre = index == std::string::npos ? "" : n.substr(index + 1);
	std::cout << "Recurso nombre: " << nombre << std::endl;

	if (loadTEX(n)) 
	{
		return true;
	}
	else
	{
		return false;
	}
}

GLuint TRecursoTextura::getTextureID()
{
	return textureID;
}

GLuint TRecursoTextura::loadBMP(const std::string & image)
{
	std::ifstream file = std::ifstream(image.c_str(), std::ios::in | std::ios::binary);

	if (!file.is_open()) {
		std::cout << "No se a podido abrir la imagen: " << image << std::endl;
		return 0;
	}

	char header[54];

	if (file.read(header, 54)) {
		int dataPos = *(int*)&(header[0x0A]);
		int imageSize = *(int*)&(header[0x22]);
		int width = *(int*)&(header[0x12]);
		int height = *(int*)&(header[0x16]);

		char* data = new char[imageSize];

		file.read(data, imageSize);
		file.close();

		// Crear un ID para la textura OpenGL
		GLuint textureID;
		glGenTextures(1, &textureID);

		// Enlazar la textura recien creada
		// GL_TEXTURE_2D la textura es un arreglo de pixeles de 2 dimensiones
		glBindTexture(GL_TEXTURE_2D, textureID);

		// Crear la textura
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_BGR, GL_UNSIGNED_BYTE, data);

		// Liberar memoria usada por la imagen BMP
		delete[] data;

		// filtering, wrapping and mip maps
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

		return textureID;
	}

	return 0;
}

GLuint TRecursoTextura::loadTEX(const std::string & n)
{
	glGenTextures(1, &textureID);
	glBindTexture(GL_TEXTURE_2D, textureID);

	int width, height;
	//unsigned char* image = SOIL_load_image(n.c_str(), &width, &height, 0, SOIL_LOAD_RGB);
	//glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
	//SOIL_free_image_data(image);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	return textureID;
}
