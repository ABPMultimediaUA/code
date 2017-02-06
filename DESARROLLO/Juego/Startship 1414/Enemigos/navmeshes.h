/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   navmeshes.h
 * Author: User
 *
 * Created on 6 de febrero de 2017, 17:11
 */

#ifndef NAVMESHES_H
#define NAVMESHES_H

#include <irrlicht.h>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class navmeshes {
    
public:
    
    navmeshes();
    navmeshes(const navmeshes& orig);
    virtual ~navmeshes();
    void muestraGrafo();
    void setColisiones();
    
private:

    int **matriz;
    
    
};

#endif /* NAVMESHES_H */

