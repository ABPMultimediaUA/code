
#include "BehaivorTree.h"
#include "Tick.h"


//==========BEHAVIOR TREE===========


BehaivorTree::BehaivorTree()
{
	root = nullptr;
	contNodos = 0;
}


BehaivorTree::~BehaivorTree()
{
}



void BehaivorTree::tick()
{
	Tick *BT_tick = new Tick();
	
	BT_tick->setTree(this);

	//root->ejecutar();

	Node *nodoActual = BT_tick->getVector().at(0);
	


}

void BehaivorTree::addNode(Node * hijo, Node * padre)
{
	if(root == nullptr) {
		
		arbol[contNodos] = hijo;
		root = hijo;
		hijo->setID(contNodos);
		contNodos++;
	}

	else {


		
	}

}

void BehaivorTree::imprimirArbol()
{
}



//==========SEQUENCE===========


Composite * Sequence::getNode()
{
	return  static_cast<Composite*>(nodo);
}

void Sequence::onInicializar()
{
	hijoActual = NULL;
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



//=================== NODE =======================

Node::Node(std::string n_accion, std::string n_task)
{
	ID = NULL;
	accion = n_accion;
	tipoTask = n_task;
}

std::string Node::getAccion()
{
	return accion;
}

std::string Node::getTipoTask()
{
	return tipoTask;
}

Status Node::getEstado()
{
	return estado;
}

void Node::setID(int n_ID)
{
	ID = n_ID;
}

void Node::setEstado(Status s)
{
	estado = s;
}
