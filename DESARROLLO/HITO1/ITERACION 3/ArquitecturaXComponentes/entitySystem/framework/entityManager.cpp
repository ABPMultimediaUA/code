/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   entityManager.cpp
 * Author: JaumeLloret
 * 
 * Created on 21 de noviembre de 2016, 19:53
 */

#include <iostream>
#include "entityManager.h"

using namespace std;

entityManager::entityManager() {
    this->idMasBajaUsada = new unsigned short();
    this->entidades = new vectorEntity();
    this->dicc = new diccionarioEnCo();
}

entityManager::entityManager(const entityManager& orig) {
    this->idMasBajaUsada = orig.idMasBajaUsada;
    this->entidades = orig.entidades;
    this->dicc = orig.dicc;
}

entityManager::~entityManager() {
    delete this->idMasBajaUsada;
    delete this->dicc;
    delete this->entidades;
}

//valor maximo del unsigned int = 4294967296
int entityManager::generarID(){
    if(*idMasBajaUsada < 65535){
        return *idMasBajaUsada++;
    }
    else{
        for(int i = 1; i < 65535 && entidades->at(i) == 0; i++){
            return i;
        }
    }
    cerr<<"Error: No quedan mas IDs!"<<endl;
    return 0;
}

gameEntity* entityManager::crearEntidad(){
    return new gameEntity(this->generarID()); 
}

void entityManager::addComponentToEntity(gameEntity* ge,componente* co){
    if(!existEntity(ge)){
        this->dicc->add(ge,co);
    }
}

componente* entityManager::getComponentOffEntity(gameEntity* ge, char* s){
    return this->dicc->getComponent(ge,s);
}

vector<componente*> entityManager::getAllEntityComponent(gameEntity* ge){
    return dicc->getComponents(ge);
}

void entityManager::borrarEntity(gameEntity* ge){
    if(!ge){
        for(unsigned short i = 0; i<entidades->size() && entidades->at(i)->getID() == ge->getID();i++){
            entidades->remove(i);
        }
    }
}

bool entityManager::existEntity(gameEntity *g){
    for(unsigned short i = 0; i<entidades->size() && entidades->at(i)->getID() == g->getID();i++){
        return true;
    }
    return false;
}