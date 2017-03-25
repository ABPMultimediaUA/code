


#include "LogicaDifusa.h"


/*
-Rango vida leyenda

0 ----> alto 100 - 80
1 ----> media 80 - 50
2 ----> baja 50 - 30
3 ----> huir 30 - 10



-Rango distancia leyenda

0 ----> lejos 
1 ----> media
2 ----> corta

*/


LogicaDifusa::LogicaDifusa()
{
	for (std::size_t i = 0; i < 4; i++) {
		rangoVida[i] = i;
	}

	for (std::size_t i = 0; i < 3; i++) {
		rangoDistancia[i] = i;
	}
}


LogicaDifusa::~LogicaDifusa()
{
}
