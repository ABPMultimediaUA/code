#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   disparoSystem.h
* Author: elcuc_000
*
* Created on 22 de diciembre de 2016, 0:54
*/

#ifndef DISPAROSYSTEM_H
#define DISPAROSYSTEM_H

#include "system.h"
class facadeMotorGrafico;
class facadeColision;
class gameClock;

class disparoSystem : public system {
public:
	disparoSystem();
	disparoSystem(entityManager*);
	disparoSystem(const disparoSystem& orig);
	virtual ~disparoSystem();
	void update(facadeColision*, facadeMotorGrafico*, gameClock*);
	void createBullet(facadeColision*, facadeMotorGrafico*, gameClock*);
private:
	bool disparado;
	double time;
};

#endif /* DISPAROSYSTEM_H */

