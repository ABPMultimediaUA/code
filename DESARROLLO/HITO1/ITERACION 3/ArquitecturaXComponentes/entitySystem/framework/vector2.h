/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vector2.h
 * Author: elcuc_000
 *
 * Created on 2 de diciembre de 2016, 4:06
 */

#ifndef VECTOR2_H
#define VECTOR2_H

class vector2 {
public:
    vector2();
    vector2(const vector2& orig);
    vector2(float,float);
    virtual ~vector2();
    void setX(float);
    void setY(float);
    void setXY(float,float);
    float getX();
    float getY();
    void getXY(float*,float*);
private:
    float *x,*y;
};

#endif /* VECTOR2_H */

