#pragma once
#include "entityTree\TNodo.h"
#include "entityTree\TTransform.h"
#include "entityTree\TCamara.h"
#include "entityTree\TLuz.h"
#include "entityTree\TMalla.h"
#include "resourceManager\TGestorRecursos.h"
#include <iostream>
#include <glm\vec3.hpp>

class TMotorTAG
{
public:
	TMotorTAG();
	~TMotorTAG();
	TNodo *crearNodo(TNodo *padre, TEntidad *ent);
	TTransform *crearTransform();
	TCamara *crearCamara();
	void registrarCamara(TNodo *);
	TLuz *crearLuz(glm::vec3, glm::vec3);
	void registrarLuz(TNodo *);
	TMalla *crearMalla(std::string n);
	void draw();
private:
	TNodo* escena;
	TGestorRecursos *gestorRecursos;
	//atributos para el mantenimiento de luces, cámaras y viewports
};

