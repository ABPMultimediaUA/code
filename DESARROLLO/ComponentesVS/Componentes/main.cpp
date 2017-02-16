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

#include <typeinfo>
#include "facade/facadeColision.h"
#include "facade/facadeMotorGrafico.h"
#include "framework/vector3G.h"
#include "framework/vector2G.h"
#include "framework/gameClock.h"
#include "entitySystem/framework/entityManager.h"
#include "entitySystem/components/camaraComponent.h"
#include "entitySystem/components/transformComponent.h"
#include "entitySystem/components/velocityComponent.h"
#include "entitySystem/components/playerComponent.h"
#include "entitySystem/components/renderComponent.h"
#include "entitySystem/components/colisionComponent.h"
#include "entitySystem/components/cargadorComponent.h"
#include "entitySystem/components/handleMoverComponent.h"
#include "entitySystem/systems/handleMoverSystem.h"
#include "entitySystem/systems/camaraSystem.h"
#include "entitySystem/systems/moveSystem.h"
#include "entitySystem/systems/rotarSystem.h"
#include "entitySystem/systems/disparoSystem.h"
#include "entitySystem/systems/accionsSystem.h"

int main() {
	facadeMotorGrafico *fMG = new facadeMotorGrafico(640, 480);
	facadeColision *fC = new facadeColision();
	if (fMG->deviceOK()) {
		return 1;
	}
	entityManager *eM = new entityManager();
	fMG->inicarCamaras();
	fMG->inicarMayas();
	handleMoverSystem *hMS = new handleMoverSystem(eM);
	camaraSystem *cS = new camaraSystem(eM);
	moveSystem *mS = new moveSystem(eM);
	rotarSystem *rS = new rotarSystem(eM);
	disparoSystem *dS = new disparoSystem(eM);
	accionsSystem *aS = new accionsSystem(eM);

	//Jugador 1
	eM->addEntity("Player");
	eM->addComponentToEntity(eM->getEntity(1), new handleMoverComponent());
	eM->addComponentToEntity(eM->getEntity(1), new transformComponent(vector3G(0, 0, 0), vector3G(0, 0, 0), vector3G(0, 0, 0)));
	eM->addComponentToEntity(eM->getEntity(1), new velocityComponent(vector2G(100.0f, 100.0f)));
	eM->addComponentToEntity(eM->getEntity(1), new colisionComponent(fC, vector3G(0, 0, 0)));
	eM->addComponentToEntity(eM->getEntity(1), new renderComponent(1, fMG, "resources/texture/life/bruce.jpg", vector3G(0, 0, 0)));
	eM->addComponentToEntity(eM->getEntity(1), new cargadorComponent(30));
	//Camara 2
	eM->addEntity("Camera");
	eM->addComponentToEntity(eM->getEntity(2), new camaraComponent(fMG, vector3G(0, 70, -40), vector3G(0, 5, 0)));
	eM->addComponentToEntity(eM->getEntity(2), new transformComponent(vector3G(0, 70, -40), vector3G(0, 0, 0), vector3G(0, 0, 0)));
	eM->addComponentToEntity(eM->getEntity(2), new velocityComponent(vector2G(100.0f, 100.0f)));

	fMG->addStaticTextProva();
	gameClock *clock = new gameClock();
	clock->start();
	eM->printAllEntitysAndComponents();
	float dt = 0;
	unsigned long time = clock->getTime();
	while (fMG->run()) {
		if (fMG->isWindowActive()) {
			/****************/
			/*    Imput    */
			/**************/
			hMS->update(fMG);
			rS->update(fMG);
			dS->update(fC, fMG, clock);
			aS->update(fMG);
			/*****************/
			/*    update    */
			/***************/
			dt = (clock->getTime() - time) / 1000.f;
			fC->setWorldStep(dt);
			mS->update(fC, fMG, clock);
			cS->update(2, fMG);
			/*****************/
			/*    Render    */
			/***************/
			fMG->render(255, 100, 101, 140);
			time = clock->getTime();
		}
		else {
			fMG->yield();
		}
	}
	fMG->drop();
	return 0;
}
