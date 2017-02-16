#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   facadeColision.h
* Author: elcuc_000
*
* Created on 20 de diciembre de 2016, 1:39
*/

#ifndef FACADECOLISION_H
#define FACADECOLISION_H

#include <Box2D\Box2D.h>
#include <map>

class MiContactListener;
class MyContactFilter;
class gameEntity;
class vector2G;
class vector3G;
class Entity2D;

class facadeColision {
public:
	facadeColision();
	facadeColision(const facadeColision& orig);
	virtual ~facadeColision();
	void setWorldStep(float);
	unsigned long newEntity2D(vector3G);
	unsigned long newEntity2D(vector3G, vector3G, bool);
	vector3G moveEntity2D0(int, vector2G);
	vector3G moveEntity2D1(int, vector2G);
	vector3G moveEntity2D2(int, vector2G);
	vector3G moveEntity2D3(int, vector2G);
	vector3G moveEntity2D4(int, vector2G);
	vector3G moveEntity2D5(int, vector2G);
	vector3G moveEntity2D6(int, vector2G);
	vector3G moveEntity2D7(int, vector2G);
	vector3G moveEntity2DB(int, vector2G);
	void setEntity2DVelocity(int, vector2G);
	void deleteEntity2d(int);
private:
	b2World* world;
	MiContactListener* contactListenerInstance;
	MyContactFilter* filtroContact;
	std::map<int, Entity2D*>* entityMap;
	unsigned long numEntity2D;
};

#endif /* FACADECOLISION_H */

