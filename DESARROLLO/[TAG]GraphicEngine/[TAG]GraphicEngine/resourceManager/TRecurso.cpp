#include "TRecurso.h"

TRecurso::TRecurso()
{
}

TRecurso::TRecurso(char *n)
{
	this->nombre = n;
}

TRecurso::~TRecurso()
{
}

char * TRecurso::getNombre()
{
	return this->nombre;
}

void TRecurso::setNombre(char *n)
{
	this->nombre = n; 
}
