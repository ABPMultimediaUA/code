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

#include <vector>
#include <typeinfo>
#include "facadeMotorGrafico.h"

#include "facadeColision.h"
#include "../entitySystem/components/cargadorComponent.h"
#include "../framework/vector3G.h"
#include "../entitySystem/framework/entityManager.h"

facadeMotorGrafico::facadeMotorGrafico(int w, int h) {
	device = createDevice(video::EDT_OPENGL, dimension2d<u32>(w, h), 16, false, false, false, &teclado);
	device->setWindowCaption(L"SPACESHIP 1414 [alpha 1]");
	driver = device->getVideoDriver();
	smgr = device->getSceneManager();
	guienv = device->getGUIEnvironment();
	node = smgr->addMeshSceneNode(smgr->addArrowMesh("Arrow", video::SColor(255, 255, 0, 0), video::SColor(255, 0, 255, 0), 16, 16, 2.f, 1.3f, 0.1f, 0.6f));
	node->setMaterialFlag(video::EMF_LIGHTING, false);
	posMaya = 1;
	posCamara = 1;
}

facadeMotorGrafico::facadeMotorGrafico(const facadeMotorGrafico& orig) {
	device = orig.device;
	device->setWindowCaption(L"SPACESHIP 1414 [alpha 1]");
	driver = orig.driver;
	smgr = orig.smgr;
	guienv = orig.guienv;
	node = orig.node;
}

facadeMotorGrafico::~facadeMotorGrafico() {
	delete mayas;
	delete camaras;
	delete node;
	delete guienv;
	delete smgr;
	delete driver;
	delete device;
}

void facadeMotorGrafico::addStaticTextProva() {
	guienv->addStaticText(L"Aquitectura X Componentes v0.5", rect<s32>(10, 10, 260, 22), true);
}

void facadeMotorGrafico::changeActiveCamera(int c) {
	smgr->setActiveCamera(camaras->find(c)->second);
}

bool facadeMotorGrafico::run() {
	if (device->run()) {
		return true;
	}
	return false;
}

bool facadeMotorGrafico::isWindowActive() {
	if (device->isWindowActive()) {
		return true;
	}
	return false;
}

void facadeMotorGrafico::setFondoScene(int c1, int c2, int c3, int c4) {
	driver->beginScene(true, true, SColor(c1, c2, c3, c4));
}

void facadeMotorGrafico::drawObjectsGraf() {
	smgr->drawAll();
}

void facadeMotorGrafico::drawGUI() {
	guienv->drawAll();
}

void facadeMotorGrafico::endScene() {
	driver->endScene();
}

void facadeMotorGrafico::yield() {
	device->yield();
}

void facadeMotorGrafico::drop() {
	device->drop();
}

void facadeMotorGrafico::close() {
	device->closeDevice();
}

unsigned long facadeMotorGrafico::addMaya(unsigned short t, const char *textura, vector3G p) {
	if (t == 1) {
		mayas->insert(std::make_pair(posMaya, smgr->addCubeSceneNode(10)));
	}
	else if (t = 2) {
		mayas->insert(std::make_pair(posMaya, smgr->addCubeSceneNode(2)));
	}
	std::map<int, IMeshSceneNode*>::iterator it = mayas->find(posMaya);
	it->second->setMaterialFlag(EMF_LIGHTING, false);
	it->second->setPosition(vector3df(p.getX(), p.getY(), p.getZ()));
	it->second->setMaterialTexture(0, driver->getTexture(textura));
	return posMaya++;
}

unsigned short facadeMotorGrafico::addCamera(vector3G vp, vector3G vf) {
	camaras->insert(std::pair<int, ICameraSceneNode*>(posCamara, smgr->addCameraSceneNode(0, vector3df(vp.getX(), vp.getY(), vp.getZ()), vector3df(vf.getX(), vf.getY(), vf.getZ()))));
	return posCamara++;
}

void facadeMotorGrafico::borrarPorIDCamara(int p) {
	camaras->find(p)->second->getParent()->removeChild(camaras->find(p)->second);
	camaras->erase(p);
}

void facadeMotorGrafico::borrarPorIDMaya(int p) {
	mayas->find(p)->second->getParent()->removeChild(mayas->find(p)->second);
	mayas->erase(p);
}

bool facadeMotorGrafico::deviceOK() {
	if (!device) {
		return true;
	}
	return false;
}

void facadeMotorGrafico::inicarCamaras() {
	camaras = new std::map<int, ICameraSceneNode*>();
}

void facadeMotorGrafico::inicarMayas() {
	mayas = new std::map<int, IMeshSceneNode*>();
}

void facadeMotorGrafico::render(int c1, int c2, int c3, int c4) {
	driver->beginScene(true, true, SColor(c1, c2, c3, c4));
	smgr->drawAll();
	guienv->drawAll();
	driver->endScene();
}

unsigned short facadeMotorGrafico::teclaPulsada() {
	if (teclado.isKeyDown(irr::KEY_KEY_W) && teclado.isKeyDown(irr::KEY_KEY_D)) {
		return 4;
	}
	else if (teclado.isKeyDown(irr::KEY_KEY_S) && teclado.isKeyDown(irr::KEY_KEY_D)) {
		return 5;
	}
	else if (teclado.isKeyDown(irr::KEY_KEY_S) && teclado.isKeyDown(irr::KEY_KEY_A)) {
		return 6;
	}
	else if (teclado.isKeyDown(irr::KEY_KEY_A) && teclado.isKeyDown(irr::KEY_KEY_W)) {
		return 7;
	}// X + and -
	else if (teclado.isKeyDown(irr::KEY_KEY_D)) {
		return 0;
	}
	else if (teclado.isKeyDown(irr::KEY_KEY_A)) {
		return 1;
	}//Z + and -
	else if (teclado.isKeyDown(irr::KEY_KEY_W)) {
		return 2;
	}
	else if (teclado.isKeyDown(irr::KEY_KEY_S)) {
		return 3;
	}
	return 9;
}

void facadeMotorGrafico::setFocoandPoscionCamara(int ID, vector3G f, vector3G p) {
	camaras->find(ID)->second->setPosition(vector3df(p.getX(), p.getY(), p.getZ()));
	camaras->find(ID)->second->setTarget(vector3df(f.getX(), f.getY(), f.getZ()));
}

unsigned short facadeMotorGrafico::getCamaraActiva() {
	smgr->getActiveCamera();
	unsigned short a = 1;//valor para que funcione en visual
	return a;
}

void facadeMotorGrafico::setPosicionMaya(int ID, vector3G p) {
	mayas->find(ID)->second->setPosition(vector3df(p.getX(), p.getY(), p.getZ()));
}

vector3G facadeMotorGrafico::getMousePosition() {
	vector3df position;
	line3df ray = smgr->getSceneCollisionManager()->getRayFromScreenCoordinates(teclado.GetMouseState().Position, smgr->getActiveCamera());
	plane3df plane(position, vector3df(0, 0, -1));
	plane.getIntersectionWithLine(ray.start, ray.getVector(), position);
	position.X = teclado.GetMouseState().Position.X;
	position.Y = teclado.GetMouseState().Position.Y;
	return vector3G((position.X * 1), (position.Y * 1), (position.Z * 1));
}

void facadeMotorGrafico::setRotationMaya(int e, vector3G r) {
	mayas->find(e)->second->setRotation(vector3df(r.getX(), r.getY(), r.getZ()));
}

bool facadeMotorGrafico::getClickIZQ() {
	if (teclado.GetMouseState().LeftButtonDown) {
		return true;
	}
	else {
		return false;
	}
}

void facadeMotorGrafico::accionPulsada(entityManager* eM) {
	if (teclado.isKeyDown(irr::KEY_KEY_R)) {
		dynamic_cast<cargadorComponent*>(eM->getComponentOffEntity(eM->getEntity(1), typeid(cargadorComponent).name()))->cargar();
	}
}

vector3G facadeMotorGrafico::getNormalize2(vector3G m) {
	vector2df direction(m.getX() - 320, m.getY() - 240);
	direction.normalize();
	return vector3G(direction.X * 1, direction.Y * 1, m.getZ());
}