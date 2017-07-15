

#include "MunicionPistola.h"
#include "../Fisicas/Entity2D.h"
#include "../Fisicas/Mundo.h"


MunicionPistola::MunicionPistola(const glm::vec3 & posicion, const glm::vec3 & rotacion, const glm::vec3 & escala, const int & identificacion, const int &tipoM, const int &balasDeLaCaja, TGraphicEngine *motor):
	Municion(posicion, rotacion, escala, identificacion, tipoM, motor)
{
	municion = balasDeLaCaja;
}


MunicionPistola::~MunicionPistola()
{
}

int MunicionPistola::getMunicion()
{
	return municion;
}

void MunicionPistola::setFisica(Mundo * world)
{
	entity = new Entity2D(world->getWorldBox2D(), pos, rot, scale, this, ID);
}
