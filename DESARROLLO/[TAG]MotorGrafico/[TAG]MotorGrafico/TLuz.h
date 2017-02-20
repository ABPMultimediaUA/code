#pragma once
#include "TEntidad.h"


class TLuz :
	public TEntidad
{
public:
	TLuz();
	~TLuz();
	void setIntensidad(int);
	int getIntensidad();
	void beginDraw();
	void endDraw();
};

