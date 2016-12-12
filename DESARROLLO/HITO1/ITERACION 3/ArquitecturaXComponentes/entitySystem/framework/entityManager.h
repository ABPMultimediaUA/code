/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   entityManager.h
 * Author: JaumeLloret
 *
 * Created on 21 de noviembre de 2016, 19:53
 */

#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H

#include "diccionarioEnCo.h"
#include "gameEntity.h"
#include "../components/componente.h"
#include "vectorEntity.h"
#include "diccionarioEnCo.h"
#include <vector>

class entityManager {
public:
    entityManager();
    entityManager(const entityManager& orig);
    virtual ~entityManager();
    int generarID();
    gameEntity* crearEntidad();
    void addComponentToEntity(gameEntity*,componente*);
    componente* getComponentOffEntity(gameEntity*, char*);
    std::vector<componente*> getAllEntityComponent(gameEntity*);
    void borrarEntity(gameEntity*);
    bool existEntity(gameEntity*);
    gameEntity* getEntity(unsigned int);
    void addEntity();
private:
    unsigned short *idMasBajaUsada;
    vectorEntity *entidades;
    diccionarioEnCo *dicc;
};

#endif /* ENTITYMANAGER_H */

