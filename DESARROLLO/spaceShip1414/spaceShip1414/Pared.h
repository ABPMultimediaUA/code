#pragma once
class TTransform;
class TGraphicEngine;
class TCamara;
class Pared
{
public:
	Pared(TGraphicEngine * motorApp,glm::vec3 tras, glm::vec3 rot, glm::vec3 sca);
	~Pared();
	float getVelocity();
	float getYaw();
	float getPitch();
	TTransform* Rotation();
	TTransform* Scale();
	TTransform* Translation();
	void setVelocity(float);
	void setYaw(float);
	void setPitch(float);
private:
	float velocity;
	float yaw;
	float pitch;
	TTransform *rotation;
	TTransform *scale;
	TTransform *translation;
};

