/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TTransform.h
 * Author: elcuc_000
 *
 * Created on 7 de febrero de 2017, 0:29
 */

#ifndef TTRANSFORM_H
#define TTRANSFORM_H

#include "../tools/glm/fwd.hpp"

class TEntidad;

class TTransform : public TEntidad {
public:
    TTransform();
    TTransform(const TTransform& orig);
    virtual ~TTransform();
    void identidad();
    void cargar(glm::mat4);
    void trasponer();
    void trasladar(float,float,float);
    void rotar(float,float,float,float);
    void beginDraw();
    void endDraw();
private:
    glm::mat4 matriz;
};

#endif /* TTRANSFORM_H */

