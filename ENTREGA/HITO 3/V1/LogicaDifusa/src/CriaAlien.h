#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   CriaAlien.h
* Author: Hector
*
* Created on 16 de enero de 2017, 18:00
*/

#ifndef CRIAALIEN_H
#define CRIAALIEN_H

#include "Enemigo.h"

class navmeshes;
class Escenario;

class CriaAlien : public Enemigo {
public:
	CriaAlien(ISceneManager* smgr, IVideoDriver* driver, b2World *world, vector3df posicion, Escenario* esce, Waypoints* puntos);
	//CriaAlien(const CriaAlien& orig);
	virtual ~CriaAlien();
	void Update(f32 dt);
	void Patrullar();
	void Atacar(f32 dt);
	void BuscarWaypoint();
	void quitarVida(float damage);
	void dibujaGrid(ISceneManager *grid);
private:

	navmeshes* nav;

};

#endif /* CRIAALIEN_H */

