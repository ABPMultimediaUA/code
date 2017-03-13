#include "TRecursoMalla.h"
#include <string>
#include <glm\vec2.hpp>
#include <glm\vec3.hpp>

struct Vertex
{
	glm::vec3 Position;
	glm::vec3 Normal;
	glm::vec2 TexCoords;
};

struct Texture
{
	GLuint id;
	std::string
};


TRecursoMalla::TRecursoMalla()
{
}


TRecursoMalla::~TRecursoMalla()
{
}

bool TRecursoMalla::cargarFichero(char *)
{
	return false;
}

void TRecursoMalla::draw()
{
}

void TRecursoMalla::setupMesh()
{
}
