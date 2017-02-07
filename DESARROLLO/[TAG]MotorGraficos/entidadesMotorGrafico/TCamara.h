/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TCamara.h
 * Author: elcuc_000
 *
 * Created on 7 de febrero de 2017, 2:01
 */

#ifndef TCAMARA_H
#define TCAMARA_H

class TEntidad;

class TCamara : public TEntidad {
public:
    TCamara();
    TCamara(const TCamara& orig);
    virtual ~TCamara();
    void setPerspectiva(float,float,float,float,float,float,float,float);
    void setParalela(float,float,float,float,float,float,float,float);
    void beginDraw();
    void endDraw();
private:
    bool esPerspectiva;
    float cderecha, cizquierda, carriba, cabajo, lderecha, lizquierda, larriba, labajo; 
};

#endif /* TCAMARA_H */

