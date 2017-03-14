#pragma once
#include <string>
#include <glm\vec2.hpp>
#include <glm\vec3.hpp>
#include <GL\glew.h>

struct Vertex {
	glm::vec3 Position;
	glm::vec3 Normal;
	glm::vec2 TexCoords;
};

struct Texture {
	GLuint id;
	std::string type;
};

class mesh
{
public:
	mesh();
	~mesh();
};

