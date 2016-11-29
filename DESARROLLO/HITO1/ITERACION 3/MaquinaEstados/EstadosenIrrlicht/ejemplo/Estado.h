/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Estado.h
 * Author: Iván
 *
 * Created on 29 de noviembre de 2016, 18:26
 */

#ifndef ESTADO_H
#define ESTADO_H
#include "Personaje.h"
#include "Enemigo.h"

class Estado {
public:
    Estado();
    int id;
    Estado(const Estado& orig);
    virtual ~Estado();
    virtual void Ejecutar(Personaje *pers, Enemigo *ene);
private:

};

#endif /* ESTADO_H */

