/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Secuencia.h
 * Author: Iván
 *
 * Created on 18 de diciembre de 2016, 19:19
 */

#ifndef SECUENCIA_H
#define SECUENCIA_H
#include <vector>
#include <iterator>
#include "Nodo.h"

class Secuencia : public Nodo {
public:
    Secuencia();
    Secuencia(const Secuencia& orig);
    virtual ~Secuencia();
    std::vector<Nodo*> hijos;
    virtual Estado Ejecutar();
    virtual void Anyadir(Nodo* n);
private:

};

#endif /* SECUENCIA_H */

