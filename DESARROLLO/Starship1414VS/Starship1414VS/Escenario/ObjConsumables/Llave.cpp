#include "Llave.h"
#include "../../Fisicas/Entity2D.h"


Llave::Llave(const vector3df & posicion, const vector3df & rotacion, const vector3df & escala, const int & identificacion, IMeshSceneNode *nodo) :
	Objetos(posicion, rotacion, escala, identificacion, nodo)
{
}


Llave::~Llave()
{
}

void Llave::setFisica(b2World * world)
{
	entity = new Entity2D(world, pos, rot, scale, this, ID);

}