#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   camaraComponent.h
* Author: elcuc_000
*
* Created on 3 de diciembre de 2016, 1:32
*/

#ifndef CAMARACOMPONENT_H
#define CAMARACOMPONENT_H

#include "componente.h"
#include "../../framework/vector3G.h"
class facadeMotorGrafico;

class camaraComponent : public componente {
public:
	camaraComponent();
	camaraComponent(const camaraComponent& orig);
	camaraComponent(facadeMotorGrafico*, vector3G, vector3G);
	virtual ~camaraComponent();
	void setFoco(vector3G);
	void setFoco(float, float, float);
	vector3G getFoco();
	float getFocoX();
	float getFocoY();
	float getFocoZ();
	void setFoco(int);
	void crearCamara(facadeMotorGrafico*, vector3G, vector3G);
	unsigned short getPosCamara();
private:
	vector3G foco;
	unsigned short posCamara;
};

#endif /* CAMARACOMPONENT_H */

