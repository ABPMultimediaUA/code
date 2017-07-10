#pragma once
#include <vector>

class estadosJuego;
class MaquinaEstadosJuego
{

private:
	std::vector<estadosJuego *> listaEstados;
	estadosJuego * estadoActivo;
	void activarEstado(estadosJuego * nombreEstados);
public:
	MaquinaEstadosJuego();
	 ~MaquinaEstadosJuego(void);
	void addEstado(estadosJuego * nombreEstados, bool activo=false);
	void cambiaEstado(const std::string nombre);
	estadosJuego * getEstadoActivo();
	estadosJuego * getEstado(const std::string nombre);
};

