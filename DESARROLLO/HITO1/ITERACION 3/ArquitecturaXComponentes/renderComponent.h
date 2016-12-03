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
#include "facadeMotorGrafico.h"

class renderComponent : public componente {
public:
    renderComponent();
    renderComponent(const renderComponent& orig);
    renderComponent(facadeMotorGrafico*);
    virtual ~renderComponent();
    facadeMotorGrafico* getMaya();
    void setMaya(facadeMotorGrafico*);
private:
    facadeMotorGrafico *maya; //esto puede canviar a una facade nueva;
};

#endif /* RENDERCOMPONENT_H */

