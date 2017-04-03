#pragma once

#include <iostream>
#include <map>


class Tick;

enum Status {

	BH_INVALID,
	BH_SUCCESS,
	BH_FAILURE,
	BH_RUNNING,

};

class Node {

public:

	Node(std::string n_accion, std::string n_task);
	std::string getAccion();
	std::string getTipoTask();
	Status getEstado();
	void setID(int n_ID);
	void setEstado(Status s);
	virtual Task* create() = 0;
	virtual void destroy(Task*) = 0;

	virtual ~Node() {}

private:
	int ID;
	std::string accion;
	std::string tipoTask;
	Status estado;
	//lista de sus nodos hijos
};

class Task {

public:
	Task(Node *node);
	~Task();
	virtual Status update() = 0;
	virtual void onInicializar();
	virtual void onTerminar(Status);


protected:
	Node *nodo;


};

class BehaivorTree
{

public:

	BehaivorTree();
	~BehaivorTree();
	void tick();
	void addNode(Node *hijo, Node *padre);
	void imprimirArbol();


private:

	//lista de nodos
	std::map<int, Node*> arbol;
	Node *root;
	int contNodos;
	
};

//debug para el arbol
//struct NockBehavior
//{
//	int inicializarLlamada;
//	int terminarLlamada;
//	int updateLlamada;
//	Status estadoRetornado;
//	Status estadoTerminado;
//
//	NockBehavior() {
//
//	}
//
//	virtual void onInicializar() override {
//		++inicializarLlamada;
//	}
//
//	virtual void onTerminar(Status s) override{
//		++terminarLlamada;
//		estadoTerminado = s;
//	}
//
//	virtual Status update() override {
//		++updateLlamada;
//		return estadoRetornado;
//	}
//};
//
//TEST(StarterKit1, TaskInicializar) {
//
//}



class Composite : public Node {

protected:
	 std::vector<Node*> nodes;
	
};

class Sequence : public Task {

public:

	Sequence(Composite *node);
	Composite* getNode();
	virtual void onInicializar();
	virtual Status update();



protected:

	std::vector<Node*>::iterator hijoActual;
	BehaivorTree *arbolActual;
};

class Selector : public Composite {

protected:

	virtual void onInicializar();
	virtual Status update();
	std::vector<BehaivorTree*>::iterator hijoActual;

};