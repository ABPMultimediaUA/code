/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: elcuc_000
 * 
 * Created on 1 de noviembre de 2016, 1:47
 */

#include <Box2D.h>
#include <iostream>
#include "entitySystem/facade/facadeMotorGrafico.h"
#include "entitySystem/framework/vector3.h"
#include "entitySystem/framework/gameClock.h"

int main(){
    facadeMotorGrafico *fMG = new facadeMotorGrafico(640,480);
    if(fMG->deviceOK()){
	return 1;
    }
    fMG->addStaticTextProva();
    int *i = new int();
    *i = 2;
    fMG->inicarCamaras();
    fMG->inicarMayas();
    fMG->addCamera(i, new vector3(0, 30, -40), new vector3(0, 5, 0));
    gameClock *clock = new gameClock();
    clock->start();
    while(fMG->run()){
        std::cout<<"My clock: "<<clock->getTime()<<std::endl;
        std::cout<<"Irlicht clock: "<<fMG->getTime()<<std::endl;
        fMG->render(255,100,101,140);
    }
    fMG->drop();
    return 0;
}
