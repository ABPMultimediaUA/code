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
class facadeMotorGrafico;
class vector3G;

class renderComponent : public componente {
public:
    renderComponent();
    renderComponent(const renderComponent& orig);
    renderComponent(unsigned short, facadeMotorGrafico*, const char*, vector3G);
    virtual ~renderComponent();
    void setMaya(facadeMotorGrafico*);
    void crearMaya(unsigned short, facadeMotorGrafico*, const char*, vector3G);
    int getPosMaya();
private:
    int posMaya;
};

#endif /* RENDERCOMPONENT_H */

