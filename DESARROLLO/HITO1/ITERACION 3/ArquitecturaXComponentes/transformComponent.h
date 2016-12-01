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

class transformComponent : public componente {
public:
    transformComponent();
    transformComponent(const transformComponent& orig);
    virtual ~transformComponent();
private:

};

#endif /* TRANSFORMCOMPONENT_H */

