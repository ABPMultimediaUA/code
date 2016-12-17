/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   diccionarioEnCo.cpp
 * Author: JaumeLloret
 * 
 * Created on 28 de noviembre de 2016, 1:34
 */

#include "diccionarioEnCo.h"
#include <typeinfo>
#include <string.h>
#include <iostream>

using namespace std;

diccionarioEnCo::diccionarioEnCo() {
    dicc = new multimap<gameEntity*, componente*>();
}

diccionarioEnCo::diccionarioEnCo(const diccionarioEnCo& orig) {
    this->dicc = orig.dicc;
}

diccionarioEnCo::~diccionarioEnCo() {
    delete dicc;
}

componente* diccionarioEnCo::getComponent(gameEntity* g, const char* s){
    std::cout<<"dicc->size(): "<<dicc->size()<<std::endl;
    pair<multimap<gameEntity* ,componente*>::iterator, multimap<gameEntity* ,componente*>::iterator> rangeComp = dicc->equal_range(g);
    for (multimap<gameEntity* ,componente*>::iterator it = rangeComp.first; it != rangeComp.second; ++it){
        if(strcmp(s, typeid(*it->second).name()) == 0){
            return it->second;
        }
    }
    std::cerr<<"Error: Componente no existe"<<std::endl;
    return 0;
}

vector<componente*> diccionarioEnCo::getComponents(gameEntity* g){
    vector<componente*> vecComp;
    pair<multimap<gameEntity* ,componente*>::iterator, multimap<gameEntity* ,componente*>::iterator> rangeComp = dicc->equal_range(g);
    for (multimap<gameEntity* ,componente*>::iterator it = rangeComp.first; it != rangeComp.second; ++it){
       vecComp.push_back(it->second);
    }
    return vecComp;
}

bool diccionarioEnCo::add(gameEntity* g, componente* c){
    if(diccionarioEnCo::existCompWithEnt(g,c) == false){
        dicc->insert(make_pair(g,c));
        return true;
    }
    else{
        return false;
    }
}

void diccionarioEnCo::remove(gameEntity* g, componente* c){
    pair<multimap<gameEntity* ,componente*>::iterator, multimap<gameEntity* ,componente*>::iterator> rangeComp = dicc->equal_range(g);
    for (multimap<gameEntity* ,componente*>::iterator it = rangeComp.first; it != rangeComp.second; ++it){
        if(dicc->value_comp()(*it,make_pair(g,c)) == 0){
            dicc->erase(it);
        }
    }
}

bool diccionarioEnCo::existCompWithEnt(gameEntity* g, componente* c){
    pair<multimap<gameEntity* ,componente*>::iterator, multimap<gameEntity* ,componente*>::iterator> rangeComp = dicc->equal_range(g);
    for (multimap<gameEntity* ,componente*>::iterator it = rangeComp.first; it != rangeComp.second; ++it){
        std::cout<<"it.id: "<<*it->first->getID()<<" g.id: "<<*g->getID()<<" it.getTipo: "<<it->second->getTipo()<<" c.getTipo"<<c->getTipo()<<std::endl;
        if(*it->first->getID() == *g->getID() && strcmp(it->second->getTipo(), c->getTipo()) == 0){
            return true;
        }
    }
    return false;
}

void diccionarioEnCo::printAllEntitysAndComponents(){
    std::cout<<"========================= Dicionario ==========================="<<std::endl;
    for (std::multimap<gameEntity* ,componente*>::iterator it = dicc->begin(); it != dicc->end(); ++it){
        std::cout<<"Entidad: "<<*it->first->getID()<<" Componente: "<<it->second->getTipo()<<std::endl;
    }
    std::cout<<"================================================================"<<std::endl;
}