#pragma once
#include <vector>
class TEntidad;

class TNodo
{
public:
	TNodo();
	~TNodo();
	int addHijo(TNodo*);
	void setPadre(TNodo*);
	int removeHijo(TNodo*);
	bool setEntidad(TEntidad*);
	TNodo* getPadre();
	void draw();
private:
	TEntidad* entidad;
	std::vector<TNodo*> hijos;
	TNodo* padre;
};

