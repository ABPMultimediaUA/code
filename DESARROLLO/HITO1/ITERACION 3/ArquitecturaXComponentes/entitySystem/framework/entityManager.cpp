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

#include <typeinfo>
#include <iostream>
#include <string.h>
#include "entityManager.h"

entityManager::entityManager() {
    idMasBajaUsada = new unsigned short();
    entidades = new vectorEntity();
    *idMasBajaUsada = 1;
    dicc = new diccionarioEnCo();
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
        return (*idMasBajaUsada)++;
    }
    else{
        for(int i = 1; i < 65535 && entidades->at(i) == 0; i++){
            return i;
        }
    }
    std::cerr<<"Error: No quedan mas IDs!"<<std::endl;
    return 0;
}

void entityManager::addEntity(const char* t){
    entidades->add(this->crearEntidad(t));
}

unsigned short entityManager::addEntityR(const char* t){
    entidades->add(this->crearEntidad(t));
    return entidades->at(entidades->size()-1)->getID();
}

gameEntity* entityManager::crearEntidad(const char* t){
    return new gameEntity(this->generarID(),t); 
}

void entityManager::addComponentToEntity(gameEntity* ge,componente* co){
    if(existEntity(ge)){
        this->dicc->add(ge,co);
    }
    else{
        std::cerr<<"Error: No se ha incluido el componente!"<<std::endl;
    }
}

componente* entityManager::getComponentOffEntity(gameEntity* ge, const char* s){
    return this->dicc->getComponent(ge,s);
}

std::vector<componente*> entityManager::getAllEntityComponent(gameEntity* ge){
    return dicc->getComponents(ge);
}

void entityManager::borrarEntity(gameEntity* ge){
    if(ge){
        for(unsigned short i = 0; i<entidades->size() && entidades->at(i)->getID() == ge->getID();i++){
            entidades->remove(i);
        }
    }
}

bool entityManager::existEntity(gameEntity *g){
    if(g){
        for(unsigned short i = 0; i<entidades->size();i++){
            if(entidades->at(i)->getID() == g->getID()){
                return true;
            }
        }
    }
    std::cerr<<"Error: Entidad pasada Null"<<std::endl;
    return false;
}

gameEntity* entityManager::getEntity(unsigned int e){
    for(unsigned short i = 0; i<entidades->size();i++){
        if(entidades->at(i)->getID() == e){
            return entidades->at(i);
        }
    }
    std::cerr<<"Error: No existe ninguna entidad con esa ID"<<std::endl;
    return 0;
}

void entityManager::printAllEntitysID(){
    entidades->printAllEntitysID();
}

void entityManager::printAllEntitysAndComponents(){
    dicc->printAllEntitysAndComponents();
}

std::vector< std::pair<gameEntity*,componente*> > entityManager::getAllComponentType(const char* type){
    return dicc->getAllComponentType(type);
}