

#include "Flocking.h"
#include "../../Fisicas/Entity2D.h"
#include "../Enemigo.h"

Flocking::Flocking(bool x)
{
	lider = x;
}


Flocking::~Flocking()
{
}

vector3df Flocking::cohesion(Entity2D * entity)
{
	vector3df vectorU(0,0,0);
	vector3df centroMasas(0, 0, 0);
	vector3df pos(0, 0, 0);
	vector3df posE(entity->getCuerpo2D()->GetPosition().x,
		0,
		entity->getCuerpo2D()->GetPosition().y);

	for (std::size_t i = 0; i < vecindario.size(); i++) {

		if (vecindario.at(i) != entity){
			pos.set(vecindario.at(i)->getCuerpo2D()->GetPosition().x,
				0,
				vecindario.at(i)->getCuerpo2D()->GetPosition().y);
			centroMasas += pos;
		}

	}

	if(vecindario.size() > 0) {

		centroMasas = media(centroMasas, vecindario.size());
		vectorU = centroMasas - posE;
		vectorU = vectorU.normalize();
	}
	return vectorU;
}

vector3df Flocking::alineacion(Entity2D * entity)
{

	vector3df vectorU(0, 0, 0);
	vector3df vel(0, 0, 0);
	vector3df posE(entity->getCuerpo2D()->GetPosition().x,
		0,
		entity->getCuerpo2D()->GetPosition().y);

	for (std::size_t i = 0; i < vecindario.size(); i++) {

		if (vecindario.at(i) != entity) {

			Enemigo *e = static_cast<Enemigo*>(vecindario.at(i)->getObjeto3D());

			vel.set(vecindario.at(i)->getCuerpo2D()->GetLinearVelocity().x / e->getVel(),
				0,
				vecindario.at(i)->getCuerpo2D()->GetLinearVelocity().y / e->getVel());

			vectorU += vel;
		}

	}

	if (vecindario.size() > 0) {

		vectorU = media(vectorU, vecindario.size());
		vectorU = vectorU.normalize();
	}
	return vectorU;
}

vector3df Flocking::separacion(Entity2D * entity)
{
	
}

bool Flocking::getLider()
{
	return lider;
}

void Flocking::addEntity(Entity2D * e)
{
	vecindario.push_back(e);
}

void Flocking::removeEntity(Entity2D * e)
{

	for(std::size_t i = 0; i < vecindario.size(); i++) {
		if(vecindario.at(i) != nullptr && vecindario.at(i) == e) {
			vecindario.at(i) == nullptr;
		}

	}

}

vector3df Flocking::media(vector3df v, int cont)
{

	v.X / cont;
	v.Z / cont;

	return v;
	
}
