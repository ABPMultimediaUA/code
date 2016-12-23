/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   handleMoverSystem.h
 * Author: elcuc_000
 *
 * Created on 14 de diciembre de 2016, 23:55
 */

#ifndef HANDLEMOVERSYSTEM_H
#define HANDLEMOVERSYSTEM_H

#include "system.h"
class facadeMotorGrafico;

class handleMoverSystem : public system {
public:
    handleMoverSystem();
    handleMoverSystem(const handleMoverSystem& orig);
    handleMoverSystem(entityManager*);
    virtual ~handleMoverSystem();
    void update(facadeMotorGrafico*);
private:

};

#endif /* HANDLEMOVERSYSTEM_H */

