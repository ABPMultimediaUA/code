/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   facadeColision.cpp
* Author: elcuc_000
*
* Created on 20 de diciembre de 2016, 1:39
*/

#include "facadeColision.h"
#include "../framework/MiContactListener.h"
#include "../framework/MyContactFilter.h"
#include "../entitySystem/framework/gameEntity.h"
#include "../framework/vector2G.h"
#include "../framework/vector3G.h"
#include "Entity2D.h"

facadeColision::facadeColision() {
	world = new b2World(b2Vec2(0.0f, 0.0f));
	contactListenerInstance = new MiContactListener();
	filtroContact = new MyContactFilter();
	world->SetContactListener(contactListenerInstance);
	world->SetContactFilter(filtroContact);
	numEntity2D = 1;
	entityMap = new std::map<int, Entity2D*>();
}

facadeColision::facadeColision(const facadeColision& orig) {
}

facadeColision::~facadeColision() {
	for (std::map<int, Entity2D*>::iterator it = entityMap->begin(); it != entityMap->end(); ++it) {
		delete it->second;
	}
	delete entityMap;
	delete contactListenerInstance;
	delete filtroContact;
	delete world;
}

void facadeColision::setWorldStep(float dt) {
	world->Step(dt, 6, 2);
	world->ClearForces();
}

unsigned long facadeColision::newEntity2D(vector3G v) {
	entityMap->insert(std::make_pair(numEntity2D, new Entity2D(world, v)));
	return numEntity2D++;
}

unsigned long facadeColision::newEntity2D(vector3G v, vector3G r, bool s) {
	entityMap->insert(std::make_pair(numEntity2D, new Entity2D(world, v, r, s)));
	return numEntity2D++;
}

vector3G facadeColision::moveEntity2D0(int p, vector2G v) {
	std::map<int, Entity2D*>::iterator entity = entityMap->find(p);
	entity->second->getCuerpo2D()->SetLinearVelocity(b2Vec2(v.getX(), 0.0f));
	return vector3G(entity->second->getCuerpo2D()->GetPosition().x, 0.0f, entity->second->getCuerpo2D()->GetPosition().y);
}

vector3G facadeColision::moveEntity2D1(int p, vector2G v) {
	std::map<int, Entity2D*>::iterator entity = entityMap->find(p);
	entity->second->getCuerpo2D()->SetLinearVelocity(b2Vec2(-v.getX(), 0.0f));
	return vector3G(entity->second->getCuerpo2D()->GetPosition().x, 0.0f, entity->second->getCuerpo2D()->GetPosition().y);
}

vector3G facadeColision::moveEntity2D2(int p, vector2G v) {
	std::map<int, Entity2D*>::iterator entity = entityMap->find(p);
	entity->second->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, v.getY()));
	return vector3G(entity->second->getCuerpo2D()->GetPosition().x, 0.0f, entity->second->getCuerpo2D()->GetPosition().y);
}

vector3G facadeColision::moveEntity2D3(int p, vector2G v) {
	std::map<int, Entity2D*>::iterator entity = entityMap->find(p);
	entity->second->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, -v.getY()));
	return vector3G(entity->second->getCuerpo2D()->GetPosition().x, 0.0f, entity->second->getCuerpo2D()->GetPosition().y);
}

vector3G facadeColision::moveEntity2D4(int p, vector2G v) {
	std::map<int, Entity2D*>::iterator entity = entityMap->find(p);
	entity->second->getCuerpo2D()->SetLinearVelocity(b2Vec2(v.getX(), v.getY()));
	return vector3G(entity->second->getCuerpo2D()->GetPosition().x, 0.0f, entity->second->getCuerpo2D()->GetPosition().y);
}

vector3G facadeColision::moveEntity2D5(int p, vector2G v) {
	std::map<int, Entity2D*>::iterator entity = entityMap->find(p);
	entity->second->getCuerpo2D()->SetLinearVelocity(b2Vec2(v.getX(), -v.getY()));
	return vector3G(entity->second->getCuerpo2D()->GetPosition().x, 0.0f, entity->second->getCuerpo2D()->GetPosition().y);
}

vector3G facadeColision::moveEntity2D6(int p, vector2G v) {
	std::map<int, Entity2D*>::iterator entity = entityMap->find(p);
	entity->second->getCuerpo2D()->SetLinearVelocity(b2Vec2(-v.getX(), -v.getY()));
	return vector3G(entity->second->getCuerpo2D()->GetPosition().x, 0.0f, entity->second->getCuerpo2D()->GetPosition().y);
}

vector3G facadeColision::moveEntity2D7(int p, vector2G v) {
	std::map<int, Entity2D*>::iterator entity = entityMap->find(p);
	entity->second->getCuerpo2D()->SetLinearVelocity(b2Vec2(-v.getX(), v.getY()));
	return vector3G(entity->second->getCuerpo2D()->GetPosition().x, 0.0f, entity->second->getCuerpo2D()->GetPosition().y);
}

vector3G facadeColision::moveEntity2DB(int p, vector2G v) {
	std::map<int, Entity2D*>::iterator entity = entityMap->find(p);
	entity->second->getCuerpo2D()->SetLinearVelocity(b2Vec2(v.getX(), v.getY()));
	return vector3G(entity->second->getCuerpo2D()->GetPosition().x, 10.0f, entity->second->getCuerpo2D()->GetPosition().y);
}

void facadeColision::setEntity2DVelocity(int p, vector2G v) {
	std::map<int, Entity2D*>::iterator entity = entityMap->find(p);
	entity->second->getCuerpo2D()->SetLinearVelocity(b2Vec2(v.getX(), v.getY()));
}

void facadeColision::deleteEntity2d(int p) {
	delete entityMap->find(p)->second;
	entityMap->erase(p);
}