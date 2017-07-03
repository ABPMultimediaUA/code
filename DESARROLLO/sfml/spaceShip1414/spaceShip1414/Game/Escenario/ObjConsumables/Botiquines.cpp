

#include "Botiquines.h"
#include "../Fisicas/Entity2D.h"
#include "../Fisicas/Mundo.h"

Botiquines::Botiquines(const glm::vec3 & posicion, const glm::vec3 & rotacion, const glm::vec3 & escala, const int & identificacion) :
	Objetos(posicion, rotacion, escala, identificacion)
{
	vida = 50.0f;
}

Botiquines::~Botiquines()
{
}

float Botiquines::getVida()
{
	return vida;
}

void Botiquines::setFisica(Mundo * world)
{
	entity = new Entity2D(world->getWorldBox2D(), pos, rot, scale, this, ID);

}
