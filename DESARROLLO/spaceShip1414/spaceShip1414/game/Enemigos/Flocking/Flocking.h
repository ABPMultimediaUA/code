#pragma once

#include <Box2D\Box2D.h>
#include <iostream>
#include <vector>



class Entity2D;

class Flocking
{

private:

	bool lider;
	std::vector<Entity2D*> vecindario;



public:
	Flocking();
	~Flocking();
	void cohesion(Entity2D entity); //1�
	void alineacion(); //3�
	void separacion(); //2�
	bool getLider();
	void addEntity(Entity2D *e);
	void removeEntity(Entity2D *e);


};

