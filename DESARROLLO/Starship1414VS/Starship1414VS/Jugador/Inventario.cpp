
#include "Inventario.h"
#include "../Escenario/ObjConsumables/Objetos.h"
#include "../Escenario//ObjConsumables/Llave.h"
#include "../Escenario//ObjConsumables/Botiquines.h"




Inventario::Inventario()
{
}


Inventario::~Inventario()
{
	inventary.clear();
}

void Inventario::addObjeto(Objetos * obj)
{
	inventary.push_back(obj);
	mostrarInventario();
}

Objetos* Inventario::usarObjeto(int tipo)
{
	for(std::size_t i = 0; i < inventary.size(); i++) {

		if(tipo == 0) {

		}
		
		else {


		}

	}
	return nullptr;
}

void Inventario::mostrarInventario()
{

	for (std::size_t i = 0; i < inventary.size(); i++) {

		if (inventary.at(i)->getID() == 0) {
			std::cout << std::endl;
			std::cout << "///////////" << std::endl;
			std::cout << "BOTIQUIN" << std::endl;
			std::cout << "///////////" << std::endl;
			Botiquines *bot = static_cast<Botiquines*>(inventary[i]);
			std::cout << "VIDA: " << bot->getVida() << std::endl;
		}

		else {
			std::cout << "///////////" << std::endl;
			std::cout << "LLAVE" << std::endl;
			std::cout << "///////////" << std::endl;
			Llave *l = static_cast<Llave*>(inventary[i]);
			std::cout << "HAB: " << l->getNombreHabitacion() << std::endl;
			std::cout << std::endl;

		}

	}


}
