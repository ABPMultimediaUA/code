#pragma once
#include <string>
#include <vector>
#include <glm\vec2.hpp>
#include <glm\vec3.hpp>
#ifndef GLEW_STATIC
#define GLEW_STATIC
#include <GL/glew.h>
#endif

class shader;
class texture;

struct Vertex {
	glm::vec3 Position;
	glm::vec3 Normal;
	glm::vec2 TexCoords;
};

class mesh
{
public:
	mesh();
	mesh(std::vector<Vertex>, std::vector<GLuint>, std::vector<texture>);
	~mesh();
	void setupMesh();
	std::vector<Vertex> getVertices();
	std::vector<GLuint> getIndices();
	std::vector<texture> getTextures();
	void Draw(shader);
private:
	GLuint VAO, VBO, EBO;
	std::vector<Vertex> vertices;
	std::vector<GLuint> indices;
	std::vector<texture> textures;
};

