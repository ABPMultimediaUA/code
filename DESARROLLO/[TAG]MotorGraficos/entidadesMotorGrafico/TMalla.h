/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TMalla.h
 * Author: elcuc_000
 *
 * Created on 7 de febrero de 2017, 2:20
 */

#ifndef TMALLA_H
#define TMALLA_H

class TEntidad;

class TMalla : public TEntidad {
public:
    TMalla();
    TMalla(const TMalla& orig);
    virtual ~TMalla();
    void cargarMalla();
    void beginDraw();
    void endDraw();
private:

};

#endif /* TMALLA_H */

