/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   diccionarioEnCo.cpp
 * Author: elcuc_000
 * 
 * Created on 28 de noviembre de 2016, 1:34
 */

#include "diccionarioEnCo.h"
#include "gameEntity.h"
#include "componente.h"
#include <vector>
#include <typeinfo>

using namespace std;

diccionarioEnCo::diccionarioEnCo() {
    dicc = new vector< pair<gameEntity*, componente*> >();
}

diccionarioEnCo::diccionarioEnCo(const diccionarioEnCo& orig) {
    this->dicc = orig.dicc;
}

diccionarioEnCo::~diccionarioEnCo() {
    for(vector< pair<gameEntity*, componente*> >::iterator i = dicc->begin(); i != dicc->end(); ++i){
        delete *i;
    }
    delete dicc;
}

std::pair<gameEntity*, componente*> diccionarioEnCo::at(unsigned short p){
    return dicc->at(p);
}
bool diccionarioEnCo::add(gameEntity* g, componente* c){
    if(diccionarioEnCo.existCompWithEnt() == false){
        dicc->pop_back(make_pair(g,c));
        return true;
    }
    else{
        return false;
    }
}
void diccionarioEnCo::remove(unsigned short p){
    vector<pair <gameEntity*, componente*> >::iterator it = dicc->begin()+p;
    pair<gameEntity*, componente*> gc = dicc->at(p);
    delete gc.second;
    dicc->erase(it);
}
bool diccionarioEnCo::existCompWithEnt(gameEntity* g, componente* c){
    int j = 0;
    for(vector< pair<gameEntity*, componente*> >::iterator i = dicc->begin(); i != dicc->end(); ++i){
        if(dicc->at(j).first->getID() == g->getID() && typeid(dicc->at(j).second) == typeid(c)){
            return false;
        }
        j++;
    }
    return true;
}
