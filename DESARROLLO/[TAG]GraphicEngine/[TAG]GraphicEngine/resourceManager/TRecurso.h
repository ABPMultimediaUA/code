#pragma once
#include <string>
class TRecurso
{
public:
	TRecurso();
	TRecurso(char*);
	~TRecurso();
	char* getNombre();
	void setNombre(char*);
	virtual bool cargarFichero(std::string) = 0;
	virtual void draw() = 0;
private:
	char* nombre;
};

