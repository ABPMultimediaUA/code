#pragma once

#include "LinearMath/btIDebugDraw.h"


class GlDebugDraw : public btIDebugDraw
{
private:

	int m_debugMode;

public:
	GlDebugDraw();
	~GlDebugDraw();

	virtual void drawLine(const btVector3& from, const btVector3& to, const btVector3& fromColor, const btVector3& toColor) = 0;

	virtual void drawLine(const btVector3& from, const btVector3& to, const btVector3& color) = 0;

	virtual void drawSphere(const btVector3& p, btScalar radius, const btVector3& color) = 0;

	virtual void drawTriangle(const btVector3& a, const btVector3& b, const btVector3& c, const btVector3& color, btScalar alpha) = 0;

	virtual void drawContactPoint(const btVector3& PointOnB, const btVector3& normalOnB, btScalar distance, int lifeTime, const btVector3& color) = 0;

	virtual void reportErrorWarning(const char* warningString) = 0;

	virtual void draw3dText(const btVector3& location, const char* textString) = 0;

	virtual void setDebugMode(int debugMode) = 0;

	virtual int getDebugMode() const { return m_debugMode; }
};

