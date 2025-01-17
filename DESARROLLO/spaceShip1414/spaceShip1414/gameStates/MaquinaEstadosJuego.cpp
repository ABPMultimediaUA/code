#include "MaquinaEstadosJuego.h"
#include "estadosJuego.h"
#include <iostream>

MaquinaEstadosJuego::MaquinaEstadosJuego()
{
}

MaquinaEstadosJuego::~MaquinaEstadosJuego()
{
	listaEstados.clear();
	std::cout << "MaquinaEstadosJuego Destroyed" << std::endl;
}

void MaquinaEstadosJuego::addEstado(estadosJuego * nombreEstados, bool activo)
{
	listaEstados.push_back(nombreEstados);

	if (activo)
	{
		nombreEstados->setEstadoActivo(true);
		nombreEstados->inicializarEstado();
		estadoActivo = nombreEstados;
	}
}

void MaquinaEstadosJuego::cambiaEstado(const std::string nombre)
{
	if (!listaEstados.empty())
	{
		getEstadoActivo()->limpiarEstado();
		getEstadoActivo()->setEstadoActivo(false);
		for (std::size_t i = 0; i < listaEstados.size(); i++)
		{
			if (nombre == listaEstados[i]->getEstado())
			{
				listaEstados[i]->setEstadoActivo(true);
				listaEstados[i]->inicializarEstado();
				activarEstado(listaEstados[i]);
			}
		}
	}
}

estadosJuego * MaquinaEstadosJuego::getEstadoActivo()
{
	return estadoActivo;
}

estadosJuego * MaquinaEstadosJuego::getEstado(const std::string nombre)
{
	if (!listaEstados.empty())
	{
		for (std::size_t i = 0; i < listaEstados.size(); i++)
		{
			if (listaEstados[i]->getEstado() == nombre)
			{
				return listaEstados[i];
			}
		}
	}
	return NULL;
}

void MaquinaEstadosJuego::activarEstado(estadosJuego * estado)
{
	estadoActivo = estado;
}