#pragma once
class TEntidad
{
public:
	virtual void beginDraw() = 0;
	virtual void beginDraw(unsigned int) = 0;
	virtual void endDraw() = 0;
};

