#pragma once
#include "TRecurso.h"
#include <vector>
#ifndef GLEW_STATIC
#define GLEW_STATIC
#include <GL/glew.h>
#endif
#include <assimp\mesh.h>
#include <glm\vec3.hpp>
#include <glm\vec2.hpp>

class TRecursoMalla :
	public TRecurso
{
	class Mesh
	{
	public:
		Mesh(const aiMesh*, TRecursoMalla*);
		~Mesh();
		void draw();
		void draw(GLuint);
		void init(const aiMesh*);
	private:
		TRecursoMalla* model;
		std::vector<glm::vec3> vertex;
		std::vector<glm::vec3> vertex;
		std::vector<glm::vec3> normal;
		std::vector<glm::vec2> uv;
		std::vector<GLuint> indices;
		GLuint buffer[4];
		GLuint vao;
		float shininess, shininess_strength;
		float color_ambient[4] = { 1, 1, 1, 1 };
		float color_diffuse[4] = { 1, 1, 1, 1 };
		float color_specular[4] = { 0.0 };
		float color_emissive[4] = { 0.0 };
		
		void load(const aiMesh*);
		inline void aiColorToFloat(aiColor4D&, float[4]);
		void create();
	};

public:
	TRecursoMalla();
	~TRecursoMalla();
	bool cargarFichero(const std::string&);
	void draw();
private:

};

