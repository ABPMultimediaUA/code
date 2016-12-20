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
#include <iostream>
#include <typeinfo>
#include "facade/facadeMotorGrafico.h"
#include "framework/vector3.h"
#include "framework/gameClock.h"
#include "entitySystem/framework/entityManager.h"
#include "entitySystem/components/camaraComponent.h"
#include "entitySystem/components/transformComponent.h"
#include "entitySystem/components/velocityComponent.h"
#include "entitySystem/components/playerComponent.h"
#include "entitySystem/components/renderComponent.h"
#include "entitySystem/systems/handleMoverSystem.h"
#include "entitySystem/components/handleMoverComponent.h"
#include "entitySystem/systems/camaraSystem.h"
#include "entitySystem/systems/moveSystem.h"
#include "entitySystem/systems/rotarSystem.h"

#define kUpdateTimePS15 1000/15

int main(){
    facadeMotorGrafico *fMG = new facadeMotorGrafico(640,480);
    if(fMG->deviceOK()){
	return 1;
    }
    entityManager *eM = new entityManager();
    fMG->inicarCamaras();
    fMG->inicarMayas();
    handleMoverSystem *hMS = new handleMoverSystem(eM);
    camaraSystem *cS = new camaraSystem(eM);
    moveSystem *mS = new moveSystem(eM);
    rotarSystem *rS = new rotarSystem(eM);
    
    //Jugador 1
    eM->addEntity();
    eM->addComponentToEntity(eM->getEntity(1), new handleMoverComponent());
    eM->addComponentToEntity(eM->getEntity(1), new transformComponent(new vector3(0, 0, 0), new vector3(0, 0, 0), new vector3(1, 1, 1)));
    eM->addComponentToEntity(eM->getEntity(1), new velocityComponent(new vector2(20,20)));
    eM->addComponentToEntity(eM->getEntity(1), new renderComponent(fMG, eM->getEntity(1)->getID(), "resources/texture/life/bruce.jpg", new vector3(0, 0, 0)));
    //Camara 2
    eM->addEntity();
    eM->addComponentToEntity(eM->getEntity(2), new camaraComponent(fMG, eM->getEntity(2)->getID(), new vector3(0, 30, -40), new vector3(0, 5, 0)));
    eM->addComponentToEntity(eM->getEntity(2), new transformComponent(new vector3(0, 30, -40), new vector3(0, 0, 0), new vector3(1, 1, 1)));
    eM->addComponentToEntity(eM->getEntity(2), new velocityComponent(new vector2(20,20)));
    
    fMG->addStaticTextProva();
    gameClock *clock = new gameClock();
    clock->start();    
    eM->printAllEntitysAndComponents();
    float dt = 0;
    unsigned long time = clock->getTime();
    while(fMG->run()){
        if(fMG->isWindowActive()){
            /****************/
            /*    Imput    */
            /**************/
            hMS->update(fMG);
            rS->update(dt);
            /*****************/
            /*    update    */
            /***************/
            dt = clock->getTime() - time;
            if(dt>kUpdateTimePS15){
                dt = dt/1000.f;
                mS->update(dt);
                cS->update((dt),2);
                time = clock->getTime();
            }
            /*****************/
            /*    Render    */
            /***************/
            fMG->render(255,100,101,140);
            
        }
        else{
            fMG->yield();
        }
    }
    fMG->drop();
    return 0;
}
