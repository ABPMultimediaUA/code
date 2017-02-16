#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   healthComponent.h
* Author: elcuc_000
*
* Created on 22 de diciembre de 2016, 1:11
*/

#ifndef HEALTHCOMPONENT_H
#define HEALTHCOMPONENT_H

#include "componente.h"

class healthComponent : public componente {
public:
	healthComponent();
	healthComponent(const healthComponent& orig);
	virtual ~healthComponent();
private:

};

#endif /* HEALTHCOMPONENT_H */

