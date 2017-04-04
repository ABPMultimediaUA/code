
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

void BehaivorTree::addNode(Node * hijo, Node * padre, std::size_t hijos)
{
	if(root == nullptr && padre == nullptr) {
		
		arbol.push_back(hijo);
		root = hijo;
		hijo->setID(contNodos);
		contNodos++;

		for (std::size_t i = 0; i < hijos; i++) {
			hijo->crearHijos(contNodos, hijo);
			contNodos++;
		}
		
	}

	else {


		
	}

}

void BehaivorTree::imprimirArbol()
{
}



//==========SEQUENCE===========


//Node * Sequence::getNode()
//{
//	return  nullptr;
//}
//
//void Sequence::onInicializar()
//{
//	hijoActual = NULL;
//}
//
//Status Sequence::update()
//{
//	
//	while (true) {
//
//		Status s = hijo->tick();
//
//		if (s != BH_SUCCESS) {
//			return s;
//		}
//
//		if (++hijoActual == arbol.end()) {
//			return BH_SUCCESS;
//		}
//
//	}
//
//	//ASSERT_FAIL(BehaivorTree, "Se ha salido del bucle por un error");
//	return BH_INVALID;
//
//
//}


//==========SELECTOR===========


//void Selector::onInicializar()
//{
//	hijoActual = arbol.begin();
//
//}
//
//Status Selector::update()
//{
//	while (true) {
//
//		Status s = hijo->tick();
//
//		if (s != BH_FAILURE) {
//			return s;
//		}
//
//		if (++hijoActual == arbol.end()) {
//
//			return BH_FAILURE;
//
//		}
//
//	}
//
//	return BH_INVALID;
//}




//===========TASK=================

//Task::Task(Node * node)
//{
//	nodo = node;
//}
//
//Task::~Task()
//{
//}
//
//void Task::onInicializar()
//{
//}
//
//void Task::onTerminar(Status)
//{
//}



//=================== NODE =======================

Node::Node()
{
}

Node::Node(std::string n_accion, std::string n_task)
{
	ID = NULL;
	accion = n_accion;
	tipoTask = n_task;
	setEstado(BH_READY);
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

void Node::setPadre(Node * p)
{
	padre = p;
}

void Node::update()
{

}

void Node::crearHijos(int cont, Node *p)
{
	//habria que ver alguna manera de distinguir que tipo de nodo queremos crear
	//si es alguno normal o de algun tipo en concreto

	//ver si traerse el bucle aqui para aumentar el contador del arbol
	//y que lo devuelva cuando acabe para que se guarde otra vez

	//Node *n = new Node();
	//n->setID(cont);
	//n->setPadre(p);
	//nodosHijos.push_back(n);
}
