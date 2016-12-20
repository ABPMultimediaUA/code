/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cargadorComponent.h
 * Author: JaumeLloret
 *
 * Created on 20 de diciembre de 2016, 16:13
 */

#ifndef CARGADORCOMPONENT_H
#define CARGADORCOMPONENT_H

#include "componente.h"

class cargadorComponent : public componente{
public:
    cargadorComponent();
    cargadorComponent(const cargadorComponent& orig);
    cargadorComponent(int, float, bool);
    virtual ~cargadorComponent();
    void setCargador(int);
    void setTiempoDisparo(float);
    void setDisparo(bool);
    int getCargador();
    float getTiempoDisparo();
    bool getDisparo();
private:
    int cargador;
    float tiempoDisparo;
    bool disparo;
    //std::list<Bala*> listaBalas;
};

#endif /* CARGADORCOMPONENT_H */

