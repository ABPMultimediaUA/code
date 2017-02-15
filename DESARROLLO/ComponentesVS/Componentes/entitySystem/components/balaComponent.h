#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   balaComponent.h
* Author: elcuc_000
*
* Created on 22 de diciembre de 2016, 1:01
*/

#ifndef BALACOMPONENT_H
#define BALACOMPONENT_H

#include "componente.h"
#include "../../framework/vector3G.h"
class vector2G;

class balaComponent : public componente {
public:
	balaComponent();
	balaComponent(unsigned long, vector3G);
	balaComponent(const balaComponent& orig);
	virtual ~balaComponent();
	unsigned long getTiempoDisparo();
	vector2G getVelocidad();
	bool getVivo();
	vector3G getPosFinal();
	void setTiempoDisparo(unsigned long);
	void setVelocidad(vector2G);
	void setPosFinal(vector3G);
	void setVivo(bool);
private:
	unsigned long tiempoDisparo;
	bool vivo;
	vector3G posFinal;
};

#endif /* BALACOMPONENT_H */

