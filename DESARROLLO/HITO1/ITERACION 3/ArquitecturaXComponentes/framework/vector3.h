/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vector3.h
 * Author: elcuc_000
 *
 * Created on 2 de diciembre de 2016, 2:23
 */

#ifndef VECTOR3_H
#define VECTOR3_H

class vector3 {
public:
    vector3();
    vector3(const vector3& orig);
    vector3(float, float, float);
    virtual ~vector3();
    void setX(float);
    void setY(float);
    void setZ(float);
    void setXYZ(float, float, float);
    float getX();
    float getY();
    float getZ();
    void getXYZ(float*, float*, float*);
private:
    float *x,*y,*z;
};

#endif /* VECTOR3_H */

