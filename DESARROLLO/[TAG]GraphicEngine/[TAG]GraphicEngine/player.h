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
	TTransform* Rotation();
	TTransform* Scale();
	TTransform* Translation();
	void Translation(float, float, float);
	void setVelocity(float);
	void setYaw(float);
	void setPitch(float);
	TNodo * getNodoTrans();
private:
	float velocity;
	float yaw;
	float pitch;
	TTransform *rotation;
	TTransform *scale;
	TTransform *translation;
	TTransform *tCamara;
	TNodo *translationNodo;
};

