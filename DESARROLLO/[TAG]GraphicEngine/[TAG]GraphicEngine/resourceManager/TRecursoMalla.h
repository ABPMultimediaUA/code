#pragma once
#include "TRecurso.h"
#include <vector>
class mesh;
class shader;
struct Texture;

class TRecursoMalla :
	public TRecurso
{
public:
	TRecursoMalla();
	TRecursoMalla(std::string);
	~TRecursoMalla();
	bool cargarFichero(std::string);
	void draw();
	void setShader(shader*);
private:
	std::string directorio;
	mesh* malla;
	shader* sombreado;
	std::vector<Texture>* textures_loaded;
};

