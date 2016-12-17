/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo2.h
 * Author: Iván
 *
 * Created on 17 de diciembre de 2016, 13:55
 */

#ifndef NODO2_H
#define NODO2_H
#include <List>
#include <iterator>
#include "Nodo.h"

class Nodo2 : public Nodo {
public:
    Nodo2();
    Nodo2(const Nodo2& orig);
    virtual ~Nodo2();
    virtual bool Ejecutar();
private:

};

#endif /* NODO2_H */

