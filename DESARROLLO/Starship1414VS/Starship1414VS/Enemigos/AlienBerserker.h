#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   AlienBerserker.h
* Author: David
*
* Created on 18 de enero de 2017, 16:50
*/

#ifndef ALIENBERSERKER_H
#define ALIENBERSERKER_H

#include "Enemigo.h"

class AlienBerserker : public Enemigo {

public:
	AlienBerserker(ISceneManager* smgr, IVideoDriver* driver, b2World *world, vector3df posicion, Waypoints *puntos);
	// AlienBerserker(const AlienBerserker& orig);
	virtual ~AlienBerserker();
	void Update();
	void Mover(int modo, f32 dt);
	void Patrullar();
	void quitarVida(float damage);
private:

};

#endif /* ALIENBERSERKER_H */

