#pragma once
#include "TRecurso.h"
class mesh;
class shader;

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
};

