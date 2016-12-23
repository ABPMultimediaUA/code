/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   accionsSystem.h
 * Author: elcuc_000
 *
 * Created on 23 de diciembre de 2016, 18:17
 */

#ifndef ACCIONSSYSTEM_H
#define ACCIONSSYSTEM_H

#include "system.h"
class facadeMotorGrafico;

class accionsSystem : public system {
public:
    accionsSystem();
    accionsSystem(const accionsSystem& orig);
    accionsSystem(entityManager*);
    virtual ~accionsSystem();
    void update(facadeMotorGrafico* fMG);
private:

};

#endif /* ACCIONSSYSTEM_H */

