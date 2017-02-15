#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   stateMachineComponent.h
* Author: elcuc_000
*
* Created on 1 de diciembre de 2016, 1:37
*/

#ifndef STATEMACHINECOMPONENT_H
#define STATEMACHINECOMPONENT_H

#include "componente.h"

class stateMachineComponent : public componente {
public:
	stateMachineComponent();
	stateMachineComponent(const stateMachineComponent& orig);
	virtual ~stateMachineComponent();
private:

};

#endif /* STATEMACHINECOMPONENT_H */

