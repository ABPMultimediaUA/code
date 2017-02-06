/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   navmeshes.cpp
 * Author: User
 * 
 * Created on 6 de febrero de 2017, 17:11
 */

#include "navmeshes.h"



navmeshes::navmeshes(int grid, Escenario* esce) {
    
    tamGrid = grid;
    tam = esce->getTam();
    
    
}

navmeshes::navmeshes(const navmeshes& orig) {
}

navmeshes::~navmeshes() {
}

