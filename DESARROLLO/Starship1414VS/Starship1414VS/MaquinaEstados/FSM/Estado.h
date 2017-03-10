#pragma once

template <class entidad_tipo>

class Estado
{
	entidad_tipo* entidad_propia;


public:
	
	virtual void Add(entidad_tipo*) = 0;
	virtual void Ejecutar(entidad_tipo*) = 0;
	virtual void Exit(entidad_tipo*) = 0;
	~Estado();
};

