#pragma once

#include<vector>
#define manejador MaquinaEstados::getInstancia()

class Estados;

class MaquinaEstados
{

private:
	std::vector<Estados*> listaEstados;
private:
	MaquinaEstados(void);
	virtual ~MaquinaEstados(void);
	
public:
	static MaquinaEstados& getInstancia(void)
	{
		static MaquinaEstados instancia;
		return instancia;
	}

public:

	void addEstado(Estados* nombreEstados, bool activo=false);
	void cambiaEstado(const std::string nombre);
	Estados* getEstadoActivo();
	Estados* getEstado(const std::string nombre);

};

