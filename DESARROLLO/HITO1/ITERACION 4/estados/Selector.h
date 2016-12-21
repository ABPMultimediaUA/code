/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Selector.h
 * Author: Iván
 *
 * Created on 18 de diciembre de 2016, 19:28
 */

#ifndef SELECTOR_H
#define SELECTOR_H
#include <List>
#include <iterator>
#include "Nodo.h"

class Selector : public Nodo {
public:
    Selector();
    Selector(const Selector& orig);
    virtual ~Selector();
    std::list<Nodo*> hijos;
    virtual bool Ejecutar();
    virtual void Anyadir(Nodo* n);
private:

    
};

#endif /* SELECTOR_H */

