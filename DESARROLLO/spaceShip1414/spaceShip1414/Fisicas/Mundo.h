#pragma once
#include <Box2D\Box2D.h>

class MiContactListener;
class MyContactFilter;

class Mundo{

public:
	Mundo();
	~Mundo();
	void init();
	b2World* getWorldBox2D();

private:

	b2World *world;
	MiContactListener* contactListenerInstance;
	MyContactFilter* filtroContact;
	b2Vec2 gravity;

};

