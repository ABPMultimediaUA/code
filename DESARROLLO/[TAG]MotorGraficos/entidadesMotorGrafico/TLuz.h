/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TLuz.h
 * Author: elcuc_000
 *
 * Created on 7 de febrero de 2017, 1:47
 */

#ifndef TLUZ_H
#define TLUZ_H

class TEntidad;
class TColor;

class TLuz : public TEntidad {
public:
    TLuz();
    TLuz(const TLuz& orig);
    virtual ~TLuz();
    void setIntensidad(TColor);
    TColor getIntensidad();
    void beginDraw();
    void endDraw();
private:
    TColor intensidad;
};

#endif /* TLUZ_H */

