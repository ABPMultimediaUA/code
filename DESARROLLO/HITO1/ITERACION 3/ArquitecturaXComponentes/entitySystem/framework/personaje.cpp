/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   personaje.cpp
 * Author: elcuc_000
 * 
 * Created on 2 de diciembre de 2016, 1:07
 */

#include "personaje.h"
#include <iostream>

personaje::personaje() {
}

personaje::personaje(const personaje& orig) : gameEntity(orig) {
}

personaje::personaje(int _id) : gameEntity(_id) {
}

personaje::~personaje() {
    std::cout<<"Personaje Borrado"<<std::endl;
}

