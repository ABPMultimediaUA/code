/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   diccionarioEnCo.h
 * Author: JaumeLloret
 *
 * Created on 28 de noviembre de 2016, 1:34
 */

#ifndef DICCIONARIOENCO_H
#define DICCIONARIOENCO_H

#include "gameEntity.h"
#include "../components/componente.h"
#include <map>
#include <vector>


class diccionarioEnCo {
public:
    diccionarioEnCo();
    diccionarioEnCo(const diccionarioEnCo& orig);
    virtual ~diccionarioEnCo();
    componente* getComponent(gameEntity*, char*);
    std::vector<componente*> getComponents(gameEntity*);
    unsigned short size();
    bool add(gameEntity*, componente*);
    void remove(gameEntity*, componente*);
    bool existCompWithEnt(gameEntity*, componente*);
private:
    std::multimap<gameEntity*, componente*> *dicc;
};

#endif /* DICCIONARIOENCO_H */

