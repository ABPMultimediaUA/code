/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Perseguir.h
 * Author: Iván
 *
 * Created on 29 de noviembre de 2016, 18:34
 */

#ifndef PERSEGUIR_H
#define PERSEGUIR_H

#include "Estado.h"
#include "Personaje.h"
#include "Enemigo.h"

class Perseguir : public Estado{
public:
    Perseguir();
    Perseguir(const Perseguir& orig);
    virtual ~Perseguir();
    void Ejecutar(Personaje *pers, Enemigo *ene);
private:

};

#endif /* PERSEGUIR_H */

