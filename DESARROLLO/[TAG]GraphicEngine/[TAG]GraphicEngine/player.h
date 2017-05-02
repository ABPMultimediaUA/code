#pragma once
class TTransform;
class TGraphicEngine;
class TNodo;
class player
{
public:
	player(TGraphicEngine*);
	player(TGraphicEngine*, TTransform*);
	~player();
	float getVelocity();
	float getYaw();
	float getPitch();
	void rotation(TGraphicEngine *, float, float, float, float);
	void rotationYPR(TGraphicEngine *, float, float, float);
	void scale(TGraphicEngine *, float, float, float);
	void translation(TGraphicEngine *, float, float, float);
	void setVelocity(float);
	void setYaw(float);
	void setPitch(float);
	TNodo* getNodo();
private:
	float velocity;
	float yaw;
	float pitch;
	TNodo *nodo;
};

