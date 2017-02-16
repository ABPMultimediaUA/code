#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   MiContactListener.h
* Author: David
*
* Created on 7 de diciembre de 2016, 11:27
*/

#ifndef MICONTACTLISTENER_H
#define MICONTACTLISTENER_H

class MiContactListener : public b2ContactListener {
public:
	MiContactListener();
	MiContactListener(const MiContactListener& orig);
	~MiContactListener();
	// Se produce un contacto entre dos cuerpos
	virtual void BeginContact(b2Contact* contact);
	// El contacto entre los cuerpos ha finalizado
	virtual void EndContact(b2Contact* contact);
	// Se ejecuta antes de resolver el contacto.
	// Podemos evitar que se procese
	virtual void PreSolve(b2Contact* contact, const b2Manifold* oldManifold);
	// Podemos obtener el impulso aplicado sobre los cuerpos en contacto
	virtual void PostSolve(b2Contact* contact, const b2ContactImpulse* impulse);
};



#endif /* MICONTACTLISTENER_H */

