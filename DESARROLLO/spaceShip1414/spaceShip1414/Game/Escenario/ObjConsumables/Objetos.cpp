
#include "Objetos.h"
#include "../../Fisicas/Entity2D.h"
#include "../Fisicas/Mundo.h"

Objetos::Objetos(const glm::vec3 & posicion, const glm::vec3 & rotacion, const glm::vec3 & escala, const int & identificacion)
{
	pos = posicion;
	rot = rotacion;
	scale = escala;
	ID = identificacion;
	


}

Objetos::~Objetos() {

	//destroyEntidades();

}

void Objetos::destroyEntidades()
{
	//if (maya != nullptr && entity != nullptr) {
	//	maya->getParent()->removeChild(maya);
	//	delete(entity);
	//}
	//maya = nullptr;
	entity = nullptr;
}

glm::vec3 Objetos::getPos()
{
	return pos;
}

glm::vec3 Objetos::getRot()
{
	return rot;
}

glm::vec3 Objetos::getEscala()
{
	return scale;
}

int Objetos::getID()
{
	return ID;
}

void Objetos::setFisica(Mundo * world)
{

}

bool Objetos::getVivo() {
	return entity->getLive();
}
