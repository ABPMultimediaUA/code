#pragma once

#include <irrlicht.h>
#include <Box2D\Box2D.h>

using namespace irr;
using namespace core;
using namespace scene;

class Entity2D;


class Objetos
{
public:
	Objetos(const vector3df &posicion, const vector3df &rotacion, const vector3df &escala, const int &identificacion, IMeshSceneNode *nodo);
	~Objetos();
	vector3df getPos();
	vector3df getRot();
	vector3df getEscala();
	int getID();
	virtual void setFisica(b2World *world);

protected:

	vector3df pos;
	vector3df rot;
	vector3df scale;
	Entity2D *entity;
	int ID;
	IMeshSceneNode *maya;
};

