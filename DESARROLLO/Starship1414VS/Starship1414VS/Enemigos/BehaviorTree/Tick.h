#pragma once

#include <iostream>
#include <vector>

class Node;
class BehaivorTree;

class Tick
{
public:
	Tick();
	~Tick();
	void inicializar();
	void addNode(Node *node);
	void abrirNode(Node *node);
	void tickNode(Node *node);
	void closeNode(Node *node);
	void salirNode(Node *node);
	void setTree(BehaivorTree*);
	std::vector<Node*> getVector();


private:

	BehaivorTree *tree;
	std::vector<Node*> nodosAbiertos;
	int contNodos = 0;


};

