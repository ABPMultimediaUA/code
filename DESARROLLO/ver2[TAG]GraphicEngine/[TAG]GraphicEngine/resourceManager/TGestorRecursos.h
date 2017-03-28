#pragma once
#include <vector>

class TRecurso;

class TGestorRecursos
{
public:
	TGestorRecursos();
	~TGestorRecursos();
	TRecurso* getRecurso(std::string *);
private:
	std::vector<TRecurso*> recursos;
};

