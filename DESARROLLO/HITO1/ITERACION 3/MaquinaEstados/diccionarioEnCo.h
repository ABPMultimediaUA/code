/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   diccionarioEnCo.h
 * Author: elcuc_000
 *
 * Created on 28 de noviembre de 2016, 1:34
 */

#ifndef DICCIONARIOENCO_H
#define DICCIONARIOENCO_H

#include "gameEntity.h"
#include "componente.h"


class diccionarioEnCo {
public:
    diccionarioEnCo();
    diccionarioEnCo(const diccionarioEnCo& orig);
    virtual ~diccionarioEnCo();
    std::pair<gameEntity*, componente*> at(unsigned short);
    bool add(gameEntity*, componente*);
    void remove(unsigned short);
    bool existCompWithEnt(gameEntity*, componente*);
private:
    std::vector< std::pair<gameEntity*, componente*> > *dicc;
};

#endif /* DICCIONARIOENCO_H */

