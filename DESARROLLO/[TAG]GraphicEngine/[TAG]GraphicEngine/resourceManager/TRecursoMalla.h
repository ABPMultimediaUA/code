#pragma once
#include "TRecurso.h"
class TRecursoMalla :
	public TRecurso
{
public:
	TRecursoMalla();
	~TRecursoMalla();
	bool cargarFichero(char*);
	void draw();
};

