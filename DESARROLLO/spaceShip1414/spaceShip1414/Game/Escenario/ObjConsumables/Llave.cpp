#include "Llave.h"
#include "../../Fisicas/Entity2D.h"
#include "../Fisicas/Mundo.h"

Llave::Llave(const glm::vec3 & posicion, const glm::vec3 & rotacion, const glm::vec3 & escala, const int & identificacion, std::string nombreHabitacion) :
	Objetos(posicion, rotacion, escala, identificacion)
{
	nombre = nombreHabitacion;
}


Llave::~Llave()
{
}

void Llave::setFisica(Mundo * world)
{
	entity = new Entity2D(world->getWorldBox2D(), pos, rot, scale, this, ID);

}

std::string Llave::getNombreHabitacion()
{
	return nombre;
}
