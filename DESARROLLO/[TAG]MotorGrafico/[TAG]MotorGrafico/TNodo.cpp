#include "TNodo.h"
#include <iostream>
#include "TEntidad.h"

TNodo::TNodo()
{
	padre = nullptr;
	entidad = nullptr;
}


TNodo::~TNodo()
{
	std::cout << "Nodo eliminado" << std::endl;
	delete entidad;
	for (std::vector<TNodo*>::iterator it = hijos.begin(); it != hijos.end(); ++it)
	{
		delete *it;
	}
}

int TNodo::addHijo(TNodo* n)
{
	if (n != nullptr)
	{
		this->hijos.push_back(n);
		n->setPadre(this);
		return 1;
	}
	return 0;
}

void TNodo::setPadre(TNodo* n)
{
	this->padre = n;
}

int TNodo::removeHijo(TNodo* n)
{
	for (std::vector<TNodo*>::iterator it = this->hijos.begin(); it != this->hijos.end(); ++it)
	{
		if (*it == n)
		{
			hijos.erase(it);
			delete *it;
			return 1;
		}
	}
	return 0;
}

bool TNodo::setEntidad(TEntidad* e)
{
	if (e != nullptr)
	{
		this->entidad = e;
		return true;
	}
	return false;
}

TNodo* TNodo::getPadre()
{
	return this->padre;
}

void TNodo::draw()
{
	if (this->entidad) {
		this->entidad->beginDraw();
	}
	for (std::vector<TNodo*>::iterator it = this->hijos.begin(); it != this->hijos.end(); ++it) {
		it->draw();
	}
	if (this->entidad) {
		this->entidad->endDraw();
	}
}