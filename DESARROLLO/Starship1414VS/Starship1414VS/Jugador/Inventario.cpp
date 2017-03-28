
#include "Inventario.h"
#include "../Escenario/ObjConsumables/Objetos.h"



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
			std::cout << "///////////" << std::endl;
			std::cout << "BOTIQUIN" << std::endl;
			std::cout << "///////////" << std::endl;
		}

		else {
			std::cout << "///////////" << std::endl;
			std::cout << "LLAVE" << std::endl;
			std::cout << "///////////" << std::endl;

		}

	}


}
