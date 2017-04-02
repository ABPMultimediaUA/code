#pragma once

#include <iostream>
#include <vector>

enum Status {

	BH_INVALID,
	BH_SUCCESS,
	BH_FAILURE,
	BH_RUNNING,

};

class Node {

public:
	virtual Task* create() = 0;
	virtual void destroy(Task*) = 0;

	virtual ~Node() {}

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

protected:

	Task *tarea;
	Node *nodo;
	Status estado;


	virtual Status update() = 0;
	virtual void onInicializar();
	virtual void onTerminar(Status);

public:

	BehaivorTree();
	BehaivorTree(Node *node);
	~BehaivorTree();
	void setup(Node *node);
	void teardown();
	Status tick();

	Task* getTarea();

private:
	Status m_Status;
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