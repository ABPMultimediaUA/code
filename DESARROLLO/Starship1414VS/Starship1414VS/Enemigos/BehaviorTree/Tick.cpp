#include "Tick.h"
#include "BehaivorTree.h"


Tick::Tick()
{
	inicializar();
}


Tick::~Tick()
{
}

void Tick::inicializar()
{
	tree = nullptr;
	
}

void Tick::addNode(Node * node)
{
	++contNodos;
	nodosAbiertos.push_back(node);
}

void Tick::abrirNode(Node * node)
{
}

void Tick::tickNode(Node * node)
{
}

void Tick::closeNode(Node * node)
{
	nodosAbiertos.pop_back();

}

void Tick::salirNode(Node * node)
{
}

void Tick::setTree(BehaivorTree *arbol)
{
	tree = arbol;
}

std::vector<Node*> Tick::getVector()
{
	return nodosAbiertos;
}
