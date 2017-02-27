#pragma once
#include <vector>

class TRecurso;

class TGestorRecursos
{
public:
	TGestorRecursos();
	~TGestorRecursos();
	TRecurso* getRecurso(char*);
private:
	std::vector<TRecurso*> recursos;
};

