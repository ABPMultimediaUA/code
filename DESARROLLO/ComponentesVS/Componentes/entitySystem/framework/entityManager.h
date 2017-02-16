#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   entityManager.h
* Author: JaumeLloret
*
* Created on 21 de noviembre de 2016, 19:53
*/

#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H

#include <vector>

class vectorEntity;
class componente;
class gameEntity;
class diccionarioEnCo;
class facadeMotorGrafico;
class facadeColision;

class entityManager {
public:
	entityManager();
	entityManager(const entityManager& orig);
	virtual ~entityManager();
	int generarID();
	gameEntity* crearEntidad(const char*);
	void addComponentToEntity(gameEntity*, componente*);
	componente* getComponentOffEntity(gameEntity*, const char*);
	std::vector<componente*> getAllEntityComponent(gameEntity*);
	void borrarEntity(gameEntity*, facadeColision*, facadeMotorGrafico*);
	bool existEntity(gameEntity*);
	gameEntity* getEntity(unsigned int);
	void addEntity(const char*);
	unsigned short addEntityR(const char*);
	void printAllEntitysID();
	void printAllEntitysAndComponents();
	std::vector< std::pair<gameEntity*, componente*> > getAllComponentType(const char*);
private:
	unsigned short *idMasBajaUsada;
	vectorEntity *entidades;
	diccionarioEnCo *dicc;
};

#endif /* ENTITYMANAGER_H */

