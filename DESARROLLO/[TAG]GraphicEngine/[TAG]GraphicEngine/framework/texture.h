#pragma once
#include <string>
#ifndef GLEW_STATIC
#define GLEW_STATIC
#include <GL/glew.h>
#endif
#ifndef ASSIMP_TYPE_INCLUYED
#define ASSIMP_TYPE_INCLUYED
#include <assimp\types.h>
#endif
class texture
{
public:
	texture();
	texture(GLuint, std::string, aiString);
	~texture();
	GLuint getID();
	std::string getType();
	aiString getPath();
	void setID(GLuint);
	void setType(std::string);
	void setPath(aiString);
private:
	GLuint id;
	std::string type;
	aiString path;
};

