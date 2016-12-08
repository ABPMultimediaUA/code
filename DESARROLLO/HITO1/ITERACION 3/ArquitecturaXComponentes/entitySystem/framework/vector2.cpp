/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vector2.cpp
 * Author: elcuc_000
 * 
 * Created on 2 de diciembre de 2016, 4:06
 */

#include "vector2.h"

vector2::vector2() {
    x = new float();
    y = new float();
}

vector2::vector2(const vector2& orig) {
    x = new float();
    y = new float();
    x = orig.x;
    y = orig.y;
}

vector2::~vector2() {
    delete x;
    delete y;
}

void vector2::setX(float XX){
    *x = XX;
}

void vector2::setY(float YY){
    *y = YY;
}

void vector2::setXY(float XX, float YY){
    *x = XX;
    *y = YY;
}

float vector2::getX(){
    return *x;
}

float vector2::getY(){
    return *y;
}

void vector2::getXY(float *XX, float *YY){
    *XX = *x;
    *YY = *y;
}