#pragma once
class TRecurso
{
public:
	TRecurso();
	TRecurso(char*);
	~TRecurso();
	char* getNombre();
	void setNombre(char*);
	virtual bool cargarFichero(char*) = 0;
	virtual void draw() = 0;
private:
	char* nombre;
};

