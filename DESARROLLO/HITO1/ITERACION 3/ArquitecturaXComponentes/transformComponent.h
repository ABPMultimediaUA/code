/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   transformComponent.h
 * Author: elcuc_000
 *
 * Created on 1 de diciembre de 2016, 1:37
 */

#ifndef TRANSFORMCOMPONENT_H
#define TRANSFORMCOMPONENT_H

#include "componente.h"
#include "vector3.h"

class transformComponent : public componente {
public:
    transformComponent();
    transformComponent(const transformComponent& orig);
    virtual ~transformComponent();
    vector3 getPosicion();
    vector3 getRotacion();
    vector3 getEscala();
    void setPosicion(float,float,float);
    void setPosicion(vector3);
    void setRotacion(float,float,float);
    void setRotacion(vector3);
    void setEscala(float,float,float);
    void setEscala(vector3);
private:
    vector3 *posicion;
    vector3 *rotacion;
    vector3 *escala;
};

#endif /* TRANSFORMCOMPONENT_H */

