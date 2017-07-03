

#include "MunicionSubfusil.h"
#include "../Fisicas/Entity2D.h"
#include "../Fisicas/Mundo.h"


MunicionSubfusil::MunicionSubfusil(const glm::vec3 & posicion, const glm::vec3 & rotacion, const glm::vec3 & escala, const int & identificacion, const int &tipoM, const int &balasDeLaCaja)
	: Municion(posicion, rotacion, escala, identificacion, tipoM)
{
	municion = balasDeLaCaja;
}


MunicionSubfusil::~MunicionSubfusil()
{
}

int MunicionSubfusil::getMunicion()
{
	return municion;
}

void MunicionSubfusil::setFisica(Mundo * world)
{
	entity = new Entity2D(world->getWorldBox2D(), pos, rot, scale, this, ID);

}
