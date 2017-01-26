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
#include "gameEntity.h"
#include "componente.h"
#include <map>
#include <string>
#include <typeinfo>
#include <vector>

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

componente* diccionarioEnCo::getComponent(gameEntity* g, string s){
    pair <multimap<char,int>::iterator, multimap<char,int>::iterator> rangeComp = dicc->equal_range(*g);
    for (multimap<char,int>::iterator it = rangeComp.first; it != rangeComp.second && s.compare(typeid(*it->second).name()) ; ++it){
        return it->second;
    }
    return 0;
}

vector<componente*> diccionarioEnCo::getComponents(gameEntity* g){
    vector<componente*> vecComp;
    pair <multimap<char,int>::iterator, multimap<char,int>::iterator> rangeComp = dicc->equal_range(*g);
    for (multimap<char,int>::iterator it = rangeComp.first; it != rangeComp.second; ++it){
       vecComp.push_back(it->second);
    }
    return vecComp;
}

bool diccionarioEnCo::add(gameEntity* g, componente* c){
    if(diccionarioEnCo.existCompWithEnt() == false){
        dicc->insert(make_pair(g,c));
        return true;
    }
    else{
        return false;
    }
}

void diccionarioEnCo::remove(gameEntity* g, componente* c){
    pair <multimap<char,int>::iterator, multimap<char,int>::iterator> rangeComp = dicc->equal_range(*g);
    for (multimap<char,int>::iterator it = rangeComp.first; it != rangeComp.second && dicc->value_comp()(it,make_pair(g,c)) == 0 ; ++it){
        dicc->erase(it);
    }
}

bool diccionarioEnCo::existCompWithEnt(gameEntity* g, componente* c){
    pair <multimap<char,int>::iterator, multimap<char,int>::iterator> rangeComp = dicc->equal_range(*g);
    for (multimap<char,int>::iterator it = rangeComp.first; it != rangeComp.second && dicc->value_comp()(it,make_pair(g,c)) == 0 ; ++it){
        return true;
    }
    return false;
}
