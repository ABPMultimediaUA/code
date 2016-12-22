/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   velocityComponent.h
 * Author: elcuc_000
 *
 * Created on 2 de diciembre de 2016, 4:01
 */

#ifndef VELOCITYCOMPONENT_H
#define VELOCITYCOMPONENT_H

#include "componente.h"
#include "../../framework/vector2.h"

class velocityComponent : public componente {
public:
    velocityComponent();
    velocityComponent(const velocityComponent& orig);
    velocityComponent(vector2);
    virtual ~velocityComponent();
    void setVelocidad(float,float);
    void setVelocidad(vector2);
    vector2 getVelocidad();
private:
    vector2 velocidad;
};

#endif /* VELOCITYCOMPONENT_H */

