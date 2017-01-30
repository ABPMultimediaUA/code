/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   handleMoverComponent.h
 * Author: elcuc_000
 *
 * Created on 14 de diciembre de 2016, 23:41
 */

#ifndef HANDLEMOVERCOMPONENT_H
#define HANDLEMOVERCOMPONENT_H

#include "componente.h"

class handleMoverComponent : public componente {
public:
    handleMoverComponent();
    handleMoverComponent(const handleMoverComponent& orig);
    virtual ~handleMoverComponent();
    short getLastDirr();
    void setLastDirr(short);
private:
    short *lastDirreccion;
};

#endif /* HANDLEMOVERCOMPONENT_H */

