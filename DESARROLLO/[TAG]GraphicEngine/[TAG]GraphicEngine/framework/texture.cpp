#include "texture.h"

texture::texture()
{
}

texture::texture(GLuint ID, std::string ty, aiString pa) : id(ID), type(ty), path(pa)
{
}

texture::~texture()
{
	std::cout << "Destroyed TRecursoTextura" << std::endl;
}

GLuint texture::getID()
{
	return this->id;
}

std::string texture::getType()
{
	return this->type;
}

aiString texture::getPath()
{
	return this->path;
}

void texture::setID(GLuint ID)
{
	this->id = ID;
}

void texture::setType(std::string ty)
{
	this->type = ty;
}

void texture::setPath(aiString pa)
{
	this->path = pa;
}