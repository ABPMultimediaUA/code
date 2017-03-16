#pragma once
#include <string>
#include <vector>
#include <glm\vec2.hpp>
#include <glm\vec3.hpp>
#include <GL\glew.h>

class shader;

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
	mesh(std::vector<Vertex>, std::vector<GLuint>, std::vector<Texture>);
	~mesh();
	void setupMesh();
	std::vector<Vertex> getVertices();
	std::vector<GLuint> getIndices();
	std::vector<Texture> getTextures();
	void Draw(shader);
private:
	GLuint VAO, VBO, EBO;
	std::vector<Vertex> vertices;
	std::vector<GLuint> indices;
	std::vector<Texture> textures;
	
};

