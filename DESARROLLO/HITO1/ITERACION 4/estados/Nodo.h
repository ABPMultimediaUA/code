/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.h
 * Author: RicharRisa
 *
 * Created on 16 de diciembre de 2016, 16:28
 */

#ifndef NODO_H
#define NODO_H

#include <iostream>
#include <list>

class Nodo {
public:
    Nodo();
    Nodo(const Nodo& orig);
    virtual ~Nodo();
    void Ejecutar();
    list<Nodo> hijos;
private:

};

#endif /* NODO_H */

