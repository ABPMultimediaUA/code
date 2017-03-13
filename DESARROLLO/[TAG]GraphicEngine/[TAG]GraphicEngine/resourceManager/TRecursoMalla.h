#pragma once
#include "TRecurso.h"
#include <vector>
#include <GL/glew.h>

struct TextureMalla;
struct VertexMalla;


class TRecursoMalla :
	public TRecurso
{
public:
	TRecursoMalla();
	~TRecursoMalla();
	bool cargarFichero(char*);
	void draw();
private:
	std::vector<VertexMalla> vertices;
	std::vector<GLuint> indices;
	std::vector<TextureMalla> textures;
	GLuint VAO, VBO, EBO;
	void setupMesh();
};

