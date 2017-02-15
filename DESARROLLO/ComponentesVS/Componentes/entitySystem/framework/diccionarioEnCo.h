#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   diccionarioEnCo.h
* Author: JaumeLloret
*
* Created on 28 de noviembre de 2016, 1:34
*/

#ifndef DICCIONARIOENCO_H
#define DICCIONARIOENCO_H

#include <map>
#include <vector>

class gameEntity;
class componente;

class diccionarioEnCo {
public:
	diccionarioEnCo();
	diccionarioEnCo(const diccionarioEnCo& orig);
	virtual ~diccionarioEnCo();
	componente* getComponent(gameEntity*, const char*);
	std::vector<componente*> getComponents(gameEntity*);
	void deleteAllComponents(gameEntity*);
	unsigned short size();
	bool add(gameEntity*, componente*);
	void remove(gameEntity*, componente*);
	bool existCompWithEnt(gameEntity*, componente*);
	void printAllEntitysAndComponents();
	std::vector< std::pair<gameEntity*, componente*> > getAllComponentType(const char*);
private:
	std::multimap<gameEntity*, componente*> *dicc;
};

#endif /* DICCIONARIOENCO_H */

