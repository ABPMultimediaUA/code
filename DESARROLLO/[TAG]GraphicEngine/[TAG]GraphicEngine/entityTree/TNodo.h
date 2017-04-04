#pragma once
#include <vector>
class TEntidad;

class TNodo
{
public:
	TNodo();
	TNodo(TEntidad*);
	TNodo(TNodo*, TEntidad*);
	~TNodo();
	bool addHijo(TNodo*);
	void setPadre(TNodo*);
	int removeHijo(TNodo*);
	bool setEntidad(TEntidad*);
	TEntidad* getEntidad();
	TNodo* getPadre();
	int getID();
	void draw();
	void draw(unsigned int);
private:
	static int id;
	TEntidad* entidad;
	std::vector<TNodo*> hijos;
	TNodo* padre;
	int idN;
};

