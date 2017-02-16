/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   system.cpp
* Author: elcuc_000
*
* Created on 7 de diciembre de 2016, 0:51
*/

#include "system.h"
#include <iostream>

system::system() {
}

system::system(const system& orig) {
	eManager = orig.eManager;
}

system::system(entityManager *eM) {
	eManager = eM;
}

system::~system() {
	std::cout << "Sistema eleminado" << std::endl;
}

entityManager* system::getEntityManager() {
	return eManager;
}