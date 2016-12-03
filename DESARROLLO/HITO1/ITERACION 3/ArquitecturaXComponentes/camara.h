/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   camara.h
 * Author: elcuc_000
 *
 * Created on 3 de diciembre de 2016, 1:24
 */

#ifndef CAMARA_H
#define CAMARA_H

#include "gameEntity.h"

class camara : public gameEntity {
public:
    camara();
    camara(const camara& orig);
    camara(int);
    virtual ~camara();
    
private:

};

#endif /* CAMARA_H */

