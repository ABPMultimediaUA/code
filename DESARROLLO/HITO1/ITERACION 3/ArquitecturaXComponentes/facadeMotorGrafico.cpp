/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   facadeMotorGrafico.cpp
 * Author: elcuc_000
 * 
 * Created on 3 de diciembre de 2016, 1:47
 */

#include "facadeMotorGrafico.h"

facadeMotorGrafico::facadeMotorGrafico() {
}

facadeMotorGrafico::facadeMotorGrafico(const facadeMotorGrafico& orig) {
}

facadeMotorGrafico::~facadeMotorGrafico() {
}

void addStaticTextOnScreen(char*, int, int, int, int);
void changeActiveCamera(int);
unsigned int getTime();
unsigned int getLastTime();
void setLastTime(unsigned int);
void run();
void isWindowActive();
void setFondoScene(int,int,int,int);
void drawObjectsGraf();
void drawGUI();
void changeScene();
void yield();
void drop();
void close();
void addMaya(int,char*);
void addCamera(int,int,vector3,vector3);