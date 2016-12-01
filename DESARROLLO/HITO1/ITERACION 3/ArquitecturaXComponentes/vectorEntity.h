/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vectorEntity.h
 * Author: JaumeLloret
 *
 * Created on 28 de noviembre de 2016, 1:34
 */

#ifndef VECTORENTITY_H
#define VECTORENTITY_H

#include "gameEntity.h"

class vectorEntity {
public:
    vectorEntity();
    vectorEntity(const vectorEntity& orig);
    virtual ~vectorEntity();
    gameEntity* at(unsigned short);
    void add(gameEntity*);
    bool remove(unsigned short);
    unsigned short size();
private:
    gameEntity **vE;
    unsigned short *t;
    unsigned short *u;
};

#endif /* VECTORENTITY_H */

