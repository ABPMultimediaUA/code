/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vector3.cpp
 * Author: elcuc_000
 * 
 * Created on 2 de diciembre de 2016, 2:23
 */
#include <iostream>
#include "vector3.h"

vector3::vector3() {
    x = new float();
    y = new float();
    z = new float();
}

vector3::vector3(const vector3& orig) {
    x = orig.x;
    y = orig.y;
    z = orig.z;
}

vector3::vector3(float XX, float YY, float ZZ){
    x = new float();
    y = new float();
    z = new float();
    *x = XX;
    *y = YY;
    *z = ZZ;
}

vector3::~vector3() {
    delete x;
    delete y;
    delete z;
}

void vector3::setX(float XX){
    *x = XX;
}

void vector3::setY(float YY){
    *y = YY;
}

void vector3::setZ(float ZZ){
    *z = ZZ;
}

void vector3::setXYZ(float XX, float YY ,float ZZ){
    *x = XX;
    *y = YY;
    *z = ZZ;
}

float vector3::getX(){
    return *x;
}

float vector3::getY(){
    return *y;
}

float vector3::getZ(){
    return *z;
}

void vector3::getXYZ(float *XX, float *YY, float *ZZ){
    *XX = *x;
    *YY = *y;
    *ZZ = *z;
}