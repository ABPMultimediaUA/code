/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   system.h
 * Author: elcuc_000
 *
 * Created on 7 de diciembre de 2016, 0:51
 */

#ifndef SYSTEM_H
#define SYSTEM_H

#include "../framework/entityManager.h"


class system {
public:
    system();
    system(const system& orig);
    system(entityManager *);
    virtual ~system();
    void update(unsigned int);
    entityManager* getEntityManager();
private:
    entityManager *eManager;
};

#endif /* SYSTEM_H */

