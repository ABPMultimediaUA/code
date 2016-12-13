/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   renderComponent.h
 * Author: elcuc_000
 *
 * Created on 2 de diciembre de 2016, 2:13
 */

#ifndef RENDERCOMPONENT_H
#define RENDERCOMPONENT_H

#include "componente.h"
#include "../facade/facadeMotorGrafico.h"
#include "../framework/vector3.h"

class renderComponent : public componente {
public:
    renderComponent();
    renderComponent(const renderComponent& orig);
    renderComponent(facadeMotorGrafico*, int*, const char*, vector3*);
    virtual ~renderComponent();
    facadeMotorGrafico* getMaya();
    void setMaya(facadeMotorGrafico*);
    void crearMaya(int*, const char*, vector3*);
private:
    facadeMotorGrafico *maya; //esto puede canviar a una facade nueva;
    int *posMaya;
};

#endif /* RENDERCOMPONENT_H */

