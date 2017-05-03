#include "Mundo3D.h"
#include "GlDebugDraw.h"

Mundo3D::Mundo3D()
{
	collisionConfiguration = new btDefaultCollisionConfiguration();

	///use the default collision dispatcher. For parallel processing you can use a diffent dispatcher (see Extras/BulletMultiThreaded)
	 dispatcher = new	btCollisionDispatcher(collisionConfiguration);

	///btDbvtBroadphase is a good general purpose broadphase. You can also try out btAxis3Sweep.
	 overlappingPairCache = new btDbvtBroadphase();

	///the default constraint solver. For parallel processing you can use a different solver (see Extras/BulletMultiThreaded)
	solver = new btSequentialImpulseConstraintSolver;

	dynamicsWorld = new btDiscreteDynamicsWorld(dispatcher, overlappingPairCache, solver, collisionConfiguration);

	debugMode = new GlDebugDraw();

	dynamicsWorld->setGravity(btVector3(0, -10, 0));
	debugMode->setDebugMode(btIDebugDraw::DBG_DrawWireframe);
	dynamicsWorld->setDebugDrawer(debugMode);

}


Mundo3D::~Mundo3D()
{
	delete dynamicsWorld;
	delete solver;
	delete dispatcher;
	delete collisionConfiguration;
	delete debugMode;

}

btDiscreteDynamicsWorld * Mundo3D::getMundo3DBullet()
{
	return dynamicsWorld;
}

GlDebugDraw * Mundo3D::getDebgMode()
{
	return debugMode;
}
