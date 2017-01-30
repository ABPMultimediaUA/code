/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   playerComponent.h
 * Author: JaumeLloret
 *
 * Created on 9 de diciembre de 2016, 16:31
 */

#ifndef PLAYERCOMPONENT_H
#define PLAYERCOMPONENT_H

#include "componente.h"

class playerComponent : public componente {
public:
    playerComponent();
    playerComponent(const playerComponent& orig);
    virtual ~playerComponent();
private:
};

#endif /* PLAYERCOMPONENT_H */

