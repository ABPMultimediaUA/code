#pragma once
#include "TRecurso.h"
#include <string>
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
private:
	std::string directorio;
	mesh malla;
	shader sombreado;
};

