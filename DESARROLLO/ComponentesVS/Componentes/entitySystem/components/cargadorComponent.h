#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   cargadorComponent.h
* Author: JaumeLloret
*
* Created on 20 de diciembre de 2016, 16:13
*/

#ifndef CARGADORCOMPONENT_H
#define CARGADORCOMPONENT_H

#include "componente.h"

class cargadorComponent : public componente {
public:
	cargadorComponent();
	cargadorComponent(const cargadorComponent& orig);
	cargadorComponent(unsigned short);
	virtual ~cargadorComponent();
	void setCargador(unsigned short);
	unsigned short getCargador();
	void disparoPP();
	unsigned short getDisparo();
	void cargar();
private:
	unsigned short cargador;
	unsigned short disparo;
};

#endif /* CARGADORCOMPONENT_H */

