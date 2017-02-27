#include <iostream>
#include "entityTree\TNodo.h";
#include "entityTree\TTransform.h";
#include "entityTree\TCamara.h";
#include "entityTree\TLuz.h";
#include "entityTree\TMalla.h";


int main() {
	TNodo origen(nullptr);
	std::vector<TNodo*> nodos;
	nodos.push_back(new TNodo(new TTransform()));
	nodos.push_back(new TNodo(new TTransform()));
	nodos.push_back(new TNodo(new TMalla()));
	nodos.push_back(new TNodo(new TLuz()));
	nodos.push_back(new TNodo(new TTransform()));
	nodos.push_back(new TNodo(new TCamara()));
	std::cout << "Nodos Creados correctamente" << std::endl;
	origen.addHijo(nodos.at(1));
	nodos.at(1)->addHijo(nodos.at(0));
	nodos.at(0)->addHijo(nodos.at(2));
	nodos.at(1)->addHijo(nodos.at(3));
	origen.addHijo(nodos.at(4));
	nodos.at(4)->addHijo(nodos.at(5));
	std::cout << "Nodos Enlazados correctamente" << std::endl;
	origen.draw();
	std::cout << "Nodos Fin draw" << std::endl;
	origen.~TNodo();
	system("PAUSE");
	return 0;
}