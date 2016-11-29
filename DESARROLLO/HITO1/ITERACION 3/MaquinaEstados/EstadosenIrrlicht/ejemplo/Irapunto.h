/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Irapunto.h
 * Author: Iván
 *
 * Created on 29 de noviembre de 2016, 20:03
 */

#ifndef IRAPUNTO_H
#define IRAPUNTO_H

#include "Estado.h"
#include "Personaje.h"
#include "Enemigo.h"

class Irapunto : public Estado {
public:
    Irapunto();
    Irapunto(const Irapunto& orig);
    virtual ~Irapunto();
    void Ejecutar(Personaje *pers, Enemigo *ene);
private:

};

#endif /* IRAPUNTO_H */

