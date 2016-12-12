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
#include "entitySystem/framework/entityManager.h"
#include "entitySystem/components/camaraComponent.h"
#include "entitySystem/components/transformComponent.h"
#include "entitySystem/components/velocityComponent.h"

int main(){
    facadeMotorGrafico *fMG = new facadeMotorGrafico(640,480);
    if(fMG->deviceOK()){
	return 1;
    }
    entityManager *eM = new entityManager();
    eM->addEntity();
    fMG->inicarCamaras();
    fMG->inicarMayas();
    vector3 *vp = new vector3(0, 30, -40);
    eM->addComponentToEntity(eM->getEntity(1), new camaraComponent(fMG, eM->getEntity(1)->getID(), vp, new vector3(0, 5, 0)));
    eM->addComponentToEntity(eM->getEntity(1), new transformComponent(vp, new vector3(1, 1, 1), new vector3(1, 1, 1)));
    eM->addComponentToEntity(eM->getEntity(1), new velocityComponent(new vector2(20,20)));
    fMG->addStaticTextProva();
    gameClock *clock = new gameClock();
    clock->start();
    while(fMG->run()){
        std::cout<<"My clock dt: "<<clock->timeElapsed()<<std::endl;
        if(fMG->isWindowActive()){
            fMG->render(255,100,101,140);
        }
        else{
            fMG->yield();
        }
    }
    fMG->drop();
    return 0;
}
