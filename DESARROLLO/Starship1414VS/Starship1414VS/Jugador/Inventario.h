#pragma once

#include <iostream>
#include <vector>
#include<string>

class Objetos;


class Inventario
{

public:
	Inventario();
	~Inventario();
	void addObjeto(Objetos*);
	Objetos* usarObjeto(int);
	void mostrarInventario();
	void deleteObj(Objetos *obj);


private:

	std::vector<Objetos*> inventary;

};

