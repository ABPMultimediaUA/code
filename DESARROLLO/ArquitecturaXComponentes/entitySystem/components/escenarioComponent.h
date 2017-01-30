/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   escenarioComponent.h
 * Author: elcuc_000
 *
 * Created on 18 de diciembre de 2016, 23:25
 */

#ifndef ESCENARIOCOMPONENT_H
#define ESCENARIOCOMPONENT_H

#include "componente.h"

class escenarioComponent : public componente{
public:
    escenarioComponent();
    escenarioComponent(const escenarioComponent& orig);
    escenarioComponent(unsigned short);
    virtual ~escenarioComponent();
    void setEscenario(unsigned short);
    unsigned short getEscenario();
private:
    unsigned short* escenario;
};

#endif /* ESCENARIOCOMPONENT_H */

