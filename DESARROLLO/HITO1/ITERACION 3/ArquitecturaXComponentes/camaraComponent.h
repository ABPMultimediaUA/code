/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   camaraComponent.h
 * Author: elcuc_000
 *
 * Created on 3 de diciembre de 2016, 1:32
 */

#ifndef CAMARACOMPONENT_H
#define CAMARACOMPONENT_H

#include "componente.h"
#include "vector3.h"
#include "facadeMotorGrafico.h"

class camaraComponent : public componente {
public:
    camaraComponent();
    camaraComponent(const camaraComponent& orig);
    camaraComponent(facadeMotorGrafico*, vector3*);
    virtual ~camaraComponent();
    void setFoco(vector3);
    void setFoco(float,float,float);
    void setCamara(facadeMotorGrafico*);
    vector3 getFoco();
    float getFocoX();
    float getFocoY();
    float getFocoZ();
    facadeMotorGrafico* getCamara();
private:
    vector3 *foco;
    facadeMotorGrafico *camara;
};

#endif /* CAMARACOMPONENT_H */

