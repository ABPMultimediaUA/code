#include "TTriangle.h"
#include "..\resourceManager\TRecursoTriangle.h"
#include <iostream>


TTriangle::TTriangle()
{
	tri = new TRecursoTriangle();
}


TTriangle::~TTriangle()
{
	tri->borrarCuadrado();
}

void TTriangle::beginDraw()
{
	tri->draw();
}

void TTriangle::endDraw()
{
	std::cout << "Cuadrado dibujado" << std::endl;
}
