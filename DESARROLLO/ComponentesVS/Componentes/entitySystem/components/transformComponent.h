#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   transformComponent.h
* Author: elcuc_000
*
* Created on 1 de diciembre de 2016, 1:37
*/

#ifndef TRANSFORMCOMPONENT_H
#define TRANSFORMCOMPONENT_H

#include "componente.h"
#include "../../framework/vector3G.h"

class transformComponent : public componente {
public:
	transformComponent();
	transformComponent(const transformComponent& orig);
	transformComponent(vector3G, vector3G, vector3G);
	virtual ~transformComponent();
	vector3G getPosicion();
	vector3G getRotacion();
	vector3G getEscala();
	bool getModificado();
	void setPosicion(float, float, float);
	void setPosicion(vector3G);
	void setRotacion(float, float, float);
	void setRotacion(vector3G);
	void setEscala(float, float, float);
	void setEscala(vector3G);
	void setModificado(bool);
private:
	vector3G posicion;
	vector3G rotacion;
	vector3G escala;
	bool modificado;
};

#endif /* TRANSFORMCOMPONENT_H */

