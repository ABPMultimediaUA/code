/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cargadorComponente.h
 * Author: elcuc_000
 *
 * Created on 20 de diciembre de 2016, 2:29
 */

#ifndef CARGADORCOMPONENTE_H
#define CARGADORCOMPONENTE_H

class cargadorComponente {
public:
    cargadorComponente();
    cargadorComponente(const cargadorComponente& orig);
    cargadorComponente(int, float, bool);
    virtual ~cargadorComponente();
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

#endif /* CARGADORCOMPONENTE_H */

