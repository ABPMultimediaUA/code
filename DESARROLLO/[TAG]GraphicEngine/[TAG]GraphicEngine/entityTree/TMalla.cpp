#include "TMalla.h"
#include <iostream>
#include "../resourceManager/TRecursoMalla.h"
#include "../resourceManager/TGestorRecursos.h"

TMalla::TMalla()
{
	
}

TMalla::TMalla(std::string path)
{
	this->cargarMalla(path);
}
TMalla::TMalla(std::string path, TGestorRecursos& gestor)
{
	this->cargarMalla(path);
}

TMalla::~TMalla()
{
	std::cout << "TMalla Destroyed" << std::endl;
}

void TMalla::cargarMalla(std::string path)
{
	if(this->malla == nullptr)
	{
		this->malla = new TRecursoMalla();
		this->malla->cargarFichero(path);
	}
	else
	{
		this->malla->cargarFichero(path);
	}
}

void TMalla::cargarMalla(std::string path, TGestorRecursos& gestor)
{
	this->malla = static_cast<TRecursoMalla*>(gestor.getRecurso(path,1));
}

void TMalla::beginDraw()
{
	this->malla->draw();
}

void TMalla::beginDraw(unsigned int p)
{
	this->malla->draw(p);
}

void TMalla::endDraw()
{
}
