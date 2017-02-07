/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TEntidad.h
 * Author: elcuc_000
 *
 * Created on 7 de febrero de 2017, 0:02
 */

#ifndef TENTIDAD_H
#define TENTIDAD_H

class TEntidad {
public:
    TEntidad();
    TEntidad(const TEntidad& orig);
    virtual ~TEntidad();
    virtual void beginDraw();
    virtual void endDraw();
private:
    
};

#endif /* TENTIDAD_H */

