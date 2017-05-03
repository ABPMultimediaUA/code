#include "Mundo.h"
#include "MiContactListener.h"
#include "MyContactFilter.h"
#include <btBulletDynamicsCommon.h>


Mundo::Mundo()
{
	world = new b2World(gravity);
	btDefaultCollisionConfiguration* collisionConfiguration = new btDefaultCollisionConfiguration();

	///use the default collision dispatcher. For parallel processing you can use a diffent dispatcher (see Extras/BulletMultiThreaded)
	btCollisionDispatcher* dispatcher = new	btCollisionDispatcher(collisionConfiguration);

	///btDbvtBroadphase is a good general purpose broadphase. You can also try out btAxis3Sweep.
	btBroadphaseInterface* overlappingPairCache = new btDbvtBroadphase();

	///the default constraint solver. For parallel processing you can use a different solver (see Extras/BulletMultiThreaded)
	btSequentialImpulseConstraintSolver* solver = new btSequentialImpulseConstraintSolver;

	dynamicsWorld = new btDiscreteDynamicsWorld(dispatcher, overlappingPairCache, solver, collisionConfiguration);

	dynamicsWorld->setGravity(btVector3(0, -10, 0));

	init();
}


Mundo::~Mundo()
{
	delete(contactListenerInstance);
	delete(filtroContact);
	delete(world);

}

void Mundo::init()
{
	contactListenerInstance = new MiContactListener();
	filtroContact = new MyContactFilter();
	gravity.Set(0.0f, 0.0f);

	world->SetContactListener(contactListenerInstance);
	world->SetContactFilter(filtroContact);
}

b2World * Mundo::getWorldBox2D()
{
	return world;
}

void Mundo::stepBox2D(double dt, int t, int s)
{
	world->Step(dt, t, s);
}

void Mundo::clearForcesBox2D()
{
	world->ClearForces();
}
