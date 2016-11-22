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

//valor maximo del unsigned int = 4294967294
int entityManager::generarID(){
    if(this->idMasBajaUsada < 65535){
        return *this->idMasBajaUsada++;
    }
    else{
        for(int i = 1; i < 65535; i++){
            if(this->entidades->at(i) == 0){
                return i;
            }
        }
    }
    cerr<<"Error: No quedan mas IDs!"<<endl;
    return 0;
}

gameEntity* entityManager::crearEntidad(){}

void entityManager::addComponentToEntity(gameEntity*,componente*){}

componente* entityManager::getComponentOffEntity(gameEntity*,componente*){}

void entityManager::borrarEntity(gameEntity*){}

std::vector<componente*>* entityManager::getAllEntityComponent(gameEntity*){}