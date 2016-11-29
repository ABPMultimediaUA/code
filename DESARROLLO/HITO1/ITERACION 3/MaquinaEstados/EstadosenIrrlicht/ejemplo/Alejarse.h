/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Alejarse.h
 * Author: Iván
 *
 * Created on 29 de noviembre de 2016, 19:56
 */

#ifndef ALEJARSE_H
#define ALEJARSE_H

#include "Estado.h"
#include "Personaje.h"
#include "Enemigo.h"

class Alejarse : public Estado {
public:
    Alejarse();
    Alejarse(const Alejarse& orig);
    virtual ~Alejarse();
    void Ejecutar(Personaje *pers, Enemigo *ene);
private:

};

#endif /* ALEJARSE_H */

