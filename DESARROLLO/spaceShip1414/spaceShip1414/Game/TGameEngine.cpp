#include "TGameEngine.h"
#include "Escenario\readJson.h"
#include "Escenario\Escenario.h"
#include "..\Fisicas\Mundo.h"
#include "..\Fisicas\b2GLDraw.h"
#include "player.h"

TGameEngine::TGameEngine()
{
}

TGameEngine::~TGameEngine()
{
}

bool TGameEngine::iniciarGameEngine(TGraphicEngine * motorApp)
{
	world = new Mundo();
	world->setMotorGame(motorApp, this);
	scene = new Escenario(motorApp, world);
	json = new readJson(scene);
	fooDrawInstance = new b2GLDraw();
	world->getWorldBox2D()->SetDebugDraw(fooDrawInstance);
	flags = 0;
	flags += b2Draw::e_shapeBit;
	flags += b2Draw::e_jointBit;
	//	flags += b2Draw::e_aabbBit;
	flags += b2Draw::e_pairBit;
	flags += b2Draw::e_centerOfMassBit;
	fooDrawInstance->SetFlags(flags);
	jugador = new player(motorApp, world);
	return true;
}

void TGameEngine::update(double deltaTime)
{
	world->stepBox2D(1.0 / 60.0, 6, 2);
	world->getWorldBox2D()->DrawDebugData();
	world->clearForcesBox2D();
	scene->actualizarEstadoPuerta();
	scene->actualizarListaEnemigos(deltaTime);
}

void TGameEngine::cambiarLuzActiva(int id)
{
	if (scene) {
		std::cout << "no es nulo" << std::endl;
	}
	scene->cambioDeLuces(id);
}

player * TGameEngine::getPlayer()
{
	return jugador;
}

Camara * TGameEngine::getCamara()
{
	return scene->getCamara();
}

void TGameEngine::drawDebug() {
	world->getWorldBox2D()->DrawDebugData();

}