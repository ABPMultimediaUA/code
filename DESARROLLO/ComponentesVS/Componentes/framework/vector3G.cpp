/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   vector3G.cpp
* Author: elcuc_000
*
* Created on 2 de diciembre de 2016, 2:23
*/
#include <iostream>
#include "vector3G.h"

vector3G::vector3G() {
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}

vector3G::vector3G(const vector3G& orig) {
	x = orig.x;
	y = orig.y;
	z = orig.z;
}

vector3G::vector3G(float XX, float YY, float ZZ) {
	x = XX;
	y = YY;
	z = ZZ;
}

vector3G::~vector3G() {
}

void vector3G::setX(float XX) {
	x = XX;
}

void vector3G::setY(float YY) {
	y = YY;
}

void vector3G::setZ(float ZZ) {
	z = ZZ;
}

void vector3G::setXYZ(float XX, float YY, float ZZ) {
	x = XX;
	y = YY;
	z = ZZ;
}

float vector3G::getX() {
	return x;
}

float vector3G::getY() {
	return y;
}

float vector3G::getZ() {
	return z;
}
