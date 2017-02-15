#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   camaraSystem.h
* Author: JaumeLloret
*
* Created on 9 de diciembre de 2016, 16:13
*/

#ifndef CAMARASYSTEM_H
#define CAMARASYSTEM_H

#include "system.h"
class entityManager;
class facadeMotorGrafico;

class camaraSystem : public system {
public:
	camaraSystem();
	camaraSystem(const camaraSystem& orig);
	camaraSystem(entityManager*);
	virtual ~camaraSystem();
	void update(unsigned int, facadeMotorGrafico*);
private:

};

#endif /* CAMARASYSTEM_H */

