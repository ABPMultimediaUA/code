#include "BehaivorTree.h"



//==========BEHAVIOR TREE===========



void BehaivorTree::onInicializar()
{
}

void BehaivorTree::onTerminar(Status)
{
}

BehaivorTree::BehaivorTree()
{
	tarea = nullptr;
	nodo = nullptr;
	estado = BH_INVALID;
}

BehaivorTree::BehaivorTree(Node * node)
{

	tarea = nullptr;
	nodo = nullptr;
	estado = BH_INVALID;
}


BehaivorTree::~BehaivorTree()
{
}

void BehaivorTree::setup(Node * node)
{
	teardown();
	nodo = node;
	tarea = node->create();
}

void BehaivorTree::teardown()
{
	if (tarea == nullptr) {
		return;
	}

	nodo->destroy(tarea);
	tarea = nullptr;

}

Status BehaivorTree::tick()
{

	//si el estado no ha sido inicializado se llama
	if (m_Status == BH_INVALID) {

		tarea->onInicializar();
	}

	m_Status = update();

	//si no esta corriendo se cierra este estado
	if (m_Status != BH_RUNNING) {
		tarea->onTerminar(m_Status);
	}

	return m_Status;
}

Task * BehaivorTree::getTarea()
{
	return tarea;
}



//==========SEQUENCE===========


Composite * Sequence::getNode()
{
	return  static_cast<Composite*>(nodo);
}

void Sequence::onInicializar()
{
	hijoActual = 
}

Status Sequence::update()
{
	
	while (true) {

		Status s = hijo->tick();

		if (s != BH_SUCCESS) {
			return s;
		}

		if (++hijoActual == arbol.end()) {
			return BH_SUCCESS;
		}

	}

	//ASSERT_FAIL(BehaivorTree, "Se ha salido del bucle por un error");
	return BH_INVALID;


}


//==========SELECTOR===========


void Selector::onInicializar()
{
	hijoActual = arbol.begin();

}

Status Selector::update()
{
	while (true) {

		Status s = hijo->tick();

		if (s != BH_FAILURE) {
			return s;
		}

		if (++hijoActual == arbol.end()) {

			return BH_FAILURE;

		}

	}

	return BH_INVALID;
}




//===========TASK=================

Task::Task(Node * node)
{
	nodo = node;
}

Task::~Task()
{
}

void Task::onInicializar()
{
}

void Task::onTerminar(Status)
{
}
