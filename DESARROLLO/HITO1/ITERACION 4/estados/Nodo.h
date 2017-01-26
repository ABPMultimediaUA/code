/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.h
 * Author: Iván
 *
 * Created on 16 de diciembre de 2016, 16:28
 */

#ifndef NODO_H
#define NODO_H

#include <iostream>
#include <List>
#include <iterator>
#include <memory>
#include <vector>

class Enemigo;

class Nodo {
public:
    Nodo();
    Nodo (const Nodo& orig);
    virtual ~Nodo();
    virtual void Anyadir(Nodo* n);
    typedef enum{OK, NO, EXE} Estado;
    virtual Estado Ejecutar(Enemigo* ene);
    Estado e;
    virtual void CambioEstado (int est);
    virtual Estado GetEstado ();
    
private:

};

#endif /* NODO_H */

