/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   balaComponent.h
 * Author: elcuc_000
 *
 * Created on 22 de diciembre de 2016, 1:01
 */

#ifndef BALACOMPONENT_H
#define BALACOMPONENT_H

#include "componente.h"
#include "../../framework/vector3.h"
#include "../../framework/vector2.h"

class balaComponent : public componente {
public:
    balaComponent();
    balaComponent(float, vector3);
    balaComponent(const balaComponent& orig);
    virtual ~balaComponent();
    float getTiempoDisparo();
    vector2 getVelocidad();
    bool getVivo();
    vector3 getPosFinal();
    void setTiempoDisparo(float);
    void setVelocidad(vector2);
    void setPosFinal(vector3);
    void setVivo(bool);
private:
    float tiempoDisparo;
    bool vivo;
    vector3 posFinal;
};

#endif /* BALACOMPONENT_H */

