#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   colisionComponent.h
* Author: elcuc_000
*
* Created on 18 de diciembre de 2016, 23:44
*/

#ifndef COLISIONCOMPONENT_H
#define COLISIONCOMPONENT_H

#include "componente.h"
class Entity2D;
class facadeColision;
class vector3G;

class colisionComponent : public componente {
public:
	colisionComponent();
	colisionComponent(const colisionComponent& orig);
	colisionComponent(facadeColision*, vector3G);
	colisionComponent(facadeColision*, vector3G, vector3G, bool);
	virtual ~colisionComponent();
	unsigned long getPosCol();
private:
	unsigned long pos;
};

#endif /* COLISIONCOMPONENT_H */

