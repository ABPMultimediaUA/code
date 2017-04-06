/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Enemigo.cpp
 * Author: Iván
 *
 * Created on 29 de noviembre de 2016, 17:52
 */



#include <Math.h>
#include "Enemigo.h"
#include "Nodo.h"
#include "../Fisicas/Entity2D.h"
#include "Waypoints.h"
#include "AStar.h"
#include "../Jugador/Bala.h"
#include "LogicaDifusa.h"




#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif

Enemigo::Enemigo(ISceneManager* smgr, IVideoDriver* driver, b2World *world, vector3df posicion, Waypoints* puntos) {
    


	smgr1 = smgr;
	mundo = world;
	VD = driver;
	puntoIni = nullptr;
	puntoFin = nullptr;
	dir = -1;




}

//Enemigo::Enemigo(const Enemigo& orig) {
//}

Enemigo::~Enemigo() {
    std::cout << "" << std::endl;

    std::cout << "////////////////////////" << std::endl;
    std::cout << "MUERE: " << maya << std::endl;
	listaBalas.clear();
	estadoActual = -1;
	maya->getParent()->removeChild(maya);
    GVida->getParent()->removeChild(GVida);
    RVida->getParent()->removeChild(RVida);
	//delete(waypoints);
	delete(path);
	delete(logica);
	/*delete(puntoIni);
	delete(puntoFin);*/
    delete(entity);
	puntoFin = nullptr;
	puntoIni = nullptr;
}

void Enemigo::Update(f32 dt) {
}

void Enemigo::Mover(int modo) {
	//rot.Y = 0.0f;

	switch (modo) {

	case 0:
		/* std::cout<<"case 0: Sntes"<<std::endl;
		std::cout<<"Pos X: "<<pos.X<<std::endl;
		std::cout<<"Pos2D X: "<<body->GetPosition().x<<std::endl;*/
		// body->ApplyForceToCenter(b2Vec2(5.0,0.0), true);

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(vel, 0.0f));
		entity->getSombraE2D()->SetLinearVelocity(b2Vec2(vel, 0.0f));
		pos.X = entity->getCuerpo2D()->GetPosition().x;

		/* std::cout<<"Des"<<std::endl;
		std::cout<<"Pos X: "<<pos.X<<std::endl;
		std::cout<<"Pos2D X: "<<entity->getBody2D->GetPosition().x<<std::endl;*/

		//rot.Y = 90.0f;

		break;

	case 1:

		/*  std::cout<<"case 1: Sntes"<<std::endl;
		std::cout<<"Pos X: "<<pos.X<<std::endl;
		std::cout<<"Pos2D X: "<<entity->getBody2D->GetPosition().x<<std::endl;*/

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-vel, 0.0f));
		entity->getSombraE2D()->SetLinearVelocity(b2Vec2(-vel, 0.0f));
		pos.X = entity->getCuerpo2D()->GetPosition().x;


		/*std::cout<<"Des"<<std::endl;
		std::cout<<"Pos X: "<<pos.X<<std::endl;
		std::cout<<"Pos2D X: "<<entity->getBody2D->GetPosition().x<<std::endl;*/

		//rot.Y = -90.0f;

		break;

	case 2:

		/*   std::cout<<"case 2: Sntes"<<std::endl;
		std::cout<<"Pos Z: "<<pos.Z<<std::endl;
		std::cout<<"Pos2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;*/

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, vel));
		entity->getSombraE2D()->SetLinearVelocity(b2Vec2(0.0f, vel));
		pos.Z = entity->getCuerpo2D()->GetPosition().y;


		/*  std::cout<<"Des"<<std::endl;
		std::cout<<"Pos Z: "<<pos.Z<<std::endl;
		std::cout<<"Pos2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;*/

		break;

	case 3:

		/*   std::cout<<"case 3: Sntes"<<std::endl;
		std::cout<<"Pos Z: "<<pos.Z<<std::endl;
		std::cout<<"Pos2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;*/

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, -vel));
		entity->getSombraE2D()->SetLinearVelocity(b2Vec2(0.0f, -vel));
		pos.Z = entity->getCuerpo2D()->GetPosition().y;

		/* std::cout<<"Des"<<std::endl;
		std::cout<<"Pos Z: "<<pos.Z<<std::endl;
		std::cout<<"Pos2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;*/
		//rot.Y = 180.0f;

		break;

		//W+D
	case 4:

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(vel, vel));
		entity->getSombraE2D()->SetLinearVelocity(b2Vec2(vel, vel));
		pos.X = entity->getCuerpo2D()->GetPosition().x;
		pos.Z = entity->getCuerpo2D()->GetPosition().y;

		//rot.Y = 45.0f;
		break;

		//D+S
	case 5:
		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(vel, -vel));
		entity->getSombraE2D()->SetLinearVelocity(b2Vec2(vel, -vel));
		pos.X = entity->getCuerpo2D()->GetPosition().x;
		pos.Z = entity->getCuerpo2D()->GetPosition().y;
		break;
		//rot.Y = 135.0f;
		//A+S
	case 6:

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-vel, -vel));
		entity->getSombraE2D()->SetLinearVelocity(b2Vec2(-vel, -vel));
		pos.X = entity->getCuerpo2D()->GetPosition().x;
		pos.Z = entity->getCuerpo2D()->GetPosition().y;

		break;
		//rot.Y = -135.0f;
		//A+W
	case 7:

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-vel, vel));
		entity->getSombraE2D()->SetLinearVelocity(b2Vec2(-vel, vel));
		pos.X = entity->getCuerpo2D()->GetPosition().x;
		pos.Z = entity->getCuerpo2D()->GetPosition().y;

		//rot.Y = -45.0f;

		break;

	}
	//    std::cout<<"//////////////////////////////////////////"<<std::endl;
	//            std::cout<<""<<std::endl;
	//            std::cout<<"POS PERS DESPUES"<<std::endl;
	//                 std::cout<<"Pos 3D X: "<<pos.X<<"Pos 3D Z: "<<pos.Z<<std::endl;
	//                 std::cout<<"Pos 2D X: "<<entity->getCuerpo2D()->GetPosition().x<<"Pos 2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;


	setPos(pos);
	//maya->setRotation(rot);

}

vector3df Enemigo::getPos() {
    return pos;
}

void Enemigo::setPos(vector3df pos) {
    maya->setPosition(pos);
}

float Enemigo::getVel() {
    return vel;
}

void Enemigo::setVelocidad() {

    if (entity->getSombraE2D() != NULL) {
        entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, 0.0f));
        entity->getSombraE2D()->SetLinearVelocity(b2Vec2(0.0f, 0.0f));
    }
}

void Enemigo::Patrullar() {


}

void Enemigo::Atacar(f32 dt)
{
}

void Enemigo::BuscarWaypoint()
{
}

bool Enemigo::estaVivo() {

    if (entity != NULL)
        return entity->getLive();
    else
        return false;

}

float Enemigo::getVida() {
    return vida;
}

void Enemigo::quitarVida(float damage) {


}

Entity2D* Enemigo::getEntity()
{
	return entity;
}

float Enemigo::getDamageChoque()
{
	return damageChoque;
}

void Enemigo::setEstado(int num)
{
	estadoActual = num;
}

int Enemigo::getEstado()
{
	return estadoActual;
}

void Enemigo::setDisparo(bool x)
{
	disparado = x;
}

void Enemigo::aumentarTiempoDisparo(float t)
{
	tiempoDisparo += t;
}

void Enemigo::resetTiempoDisparo()
{
	tiempoDisparo = 0.0f;
}

float Enemigo::getTiempoDisparo()
{
	return tiempoDisparo;
}

bool Enemigo::getDisparado()
{
	return disparado;
}

void Enemigo::disparar(float dt)
{
	tiempoDisparo += dt;
	disparado = true;
	Bala *bullet = new Bala(smgr1, VD, mundo, pos, posJugador, damageBala, 2, 300.0f);
	listaBalas.push_back(bullet);

}

void Enemigo::actualizarLista()
{
	if (!listaBalas.empty()) {
		for (std::list<Bala*>::iterator it = listaBalas.begin(); it != listaBalas.end();) {
			if ((*it) != NULL) {
				if (!(*it)->estaViva()) {

					delete(*it);
					it = listaBalas.erase(it);
				}
				else
					it++;
			}
			else
				it++;
		}

		for (std::list<Bala*>::iterator it = listaBalas.begin(); it != listaBalas.end(); it++) {
			if ((*it) != NULL && (*it)->estaViva() == true) {
				(*it)->moverEnemigoDisparo();
				//(*it)->update();
			}
		}
	}
}

void Enemigo::setPosJugador(float x, float y)
{
	posJugador.X = x;
	posJugador.Y = y;

	//std::cout << std::endl;
	//std::cout << "SET ENEMIGO" << std::endl;
	//std::cout << "POS X: " << posJugador.X << "POS Y(Z): " << posJugador.Y << std::endl;
	//std::cout << std::endl;

}

Nodo * Enemigo::getNodoInicio()
{
	return puntoIni;
}

Nodo * Enemigo::getNodoFin()
{
	return puntoFin;
}

void Enemigo::setPesoMaximoLogicaDifusa(float x)
{
	logica->setPesoMaximo(x);
}

void Enemigo::iniLogicaDifusa()
{
	//std::cout << std::endl;
	//std::cout << "ESTADO ANTES: " << std::endl;
	//std::cout << estadoActual << std::endl;
	//std::cout << std::endl;
	
	logica->fusificador(vida, pos, posJugador, moral, resistencia);
	estadoActual = logica->getEstadoDecidido();

	//std::cout << std::endl;
	//std::cout << "ESTADO DESPUES: " << std::endl;
	//std::cout << estadoActual << std::endl;
	//std::cout << std::endl;
}
