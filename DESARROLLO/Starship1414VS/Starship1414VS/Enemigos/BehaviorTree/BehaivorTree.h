#pragma once

#include <iostream>
#include <list>


class Tick;

enum Status {

	BH_INVALID,
	BH_READY,
	BH_SUCCESS,
	BH_FAILURE,
	BH_RUNNING,

};

class Node {

public:

	Node();
	Node(std::string n_accion, std::string n_task);
	std::string getAccion();
	std::string getTipoTask();
	Status getEstado();
	void setID(int n_ID);
	void setEstado(Status s);
	void setPadre(Node *p);
	virtual void update();
	void crearHijos(int cont, Node *p);
	//virtual Task* create() = 0;
	//virtual void destroy(Task*) = 0;

	virtual ~Node() {}

protected:
	int ID;
	std::string accion;
	std::string tipoTask;
	Status estado;
	std::list<Node*> nodosHijos;
	Node *padre;
};

//class Task {
//
//public:
//	Task(Node *node);
//	~Task();
//	virtual Status update() = 0;
//	virtual void onInicializar();
//	virtual void onTerminar(Status);
//
//
//protected:
//	Node *nodo;
//
//
//};

class BehaivorTree
{

public:

	BehaivorTree();
	~BehaivorTree();
	void tick();
	void addNode(Node *hijo, Node *padre, std::size_t hijos);
	void imprimirArbol();


private:

	//lista de nodos
	std::list<Node*> arbol;
	Node *root;
	int contNodos;
	
};



//class Composite : public Node {
//
//protected:
//	 std::vector<Node*> nodes;
//	
//};

class Sequence : public Node {

public:

	Sequence();
	Node* getNode();
	virtual void onInicializar();
	void update();



private:

	std::list<Node*>::iterator hijoActual;
	
};

class Selector : public Node {


public:

	Selector();
	~Selector();
	void update();

private:

	std::list<BehaivorTree*>::iterator hijoActual;

};