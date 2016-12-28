/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo1.h
 * Author: Iván
 *
 * Created on 17 de diciembre de 2016, 13:52
 */

#ifndef NODO1_H
#define NODO1_H
#include <List>
#include <iterator>
#include "Nodo.h"

class Nodo1 : public Nodo {
public:
    Nodo1();
    Nodo1(const Nodo1& orig);
    virtual ~Nodo1();
    virtual Estado Ejecutar();
private:

};

#endif /* NODO1_H */

