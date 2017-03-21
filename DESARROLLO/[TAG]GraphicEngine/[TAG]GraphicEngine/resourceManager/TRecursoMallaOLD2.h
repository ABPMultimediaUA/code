#pragma once
#include "TRecurso.h"
#include <vector>
#ifndef GLEW_STATIC
#define GLEW_STATIC
#include <GL/glew.h>
#endif
#include <glm\vec2.hpp>
#include <glm\vec3.hpp>
#include <assimp\scene.h>

class TRecursoTextura;

//#define SAFE_DELETE(p) if (p) { delete p; p = NULL; }

struct Vertex {
	glm::vec3 Position;
	glm::vec3 Normal;
	glm::vec2 TexCoords;
};

class TRecursoMalla :
	public TRecurso
{
public:
	TRecursoMalla();
	~TRecursoMalla();
	bool cargarFichero(const std::string&);
	void draw();
private:
	bool InitFromScene(const aiScene* pScene, const std::string& Filename);
	void InitMesh(unsigned int Index, const aiMesh* paiMesh);
	bool InitMaterials(const aiScene* pScene, const std::string& Filename);

#define INVALID_MATERIAL 0xFFFFFFFF
#define INVALID_MESH_VALUE 0xffffffff

	struct MeshEntry {
		MeshEntry();

		~MeshEntry();

		bool Init(const std::vector<Vertex>& Vertices, const std::vector<GLuint>& Indices);

		GLuint VB;
		GLuint IB;
		unsigned int NumIndices;
		unsigned int MaterialIndex;
	};

	std::vector<MeshEntry> m_Entries;
	std::vector<TRecursoTextura> m_Textures;
};

