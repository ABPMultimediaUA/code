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

#include <vector>
#include <map>
#include <iostream>
#include "entityManager.h"
#include "gameEntity.h"
#include "componente.h"

using namespace std;

entityManager::entityManager() {
    this->idMasBajaUsada = new unsigned int();
    this->entidades = new vector<gameEntity*>();
    this->dicc = new map<gameEntity*,componente*>();
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
    if(this->idMasBajaUsada < 65535){
        return *this->idMasBajaUsada++;
    }
    else{
        for(int i = 1; i < 65535 && this->entidades->at(i) == 0; i++){
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
    if(!ge && !co){
        this->dicc->insert(pair<gameEntity*,componente*>(ge,co));
    }
}

componente* entityManager::getComponentOffEntity(gameEntity* ge){
}

std::vector<componente*>* entityManager::getAllEntityComponent(gameEntity* ge){}

void entityManager::borrarEntity(gameEntity* ge){
    if(!ge){
        for(int i = 0; i<this->entidades->size() && *this->entidades->at(i)->getID() == *ge->getID();i++){
            this->entidades->erase(this->entidades->begin() + i);
        }
    }
}