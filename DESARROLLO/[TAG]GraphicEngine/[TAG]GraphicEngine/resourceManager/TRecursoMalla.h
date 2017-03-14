#pragma once
#include "TRecurso.h"

class mesh;

class TRecursoMalla :
	public TRecurso
{
public:
	TRecursoMalla();
	~TRecursoMalla();
	bool cargarFichero(char*);
	void draw();
private:

};

