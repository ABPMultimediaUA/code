/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   vector2.cpp
* Author: elcuc_000
*
* Created on 2 de diciembre de 2016, 4:06
*/

#include "vector2G.h"

vector2G::vector2G() {
	x = 0.0f;
	y = 0.0f;
}

vector2G::vector2G(const vector2G& orig) {
	x = orig.x;
	y = orig.y;
}

vector2G::vector2G(float XX, float YY) {
	x = XX;
	y = YY;
}

vector2G::~vector2G() {
}

void vector2G::setX(float XX) {
	x = XX;
}

void vector2G::setY(float YY) {
	y = YY;
}

void vector2G::setXY(float XX, float YY) {
	x = XX;
	y = YY;
}

float vector2G::getX() {
	return x;
}

float vector2G::getY() {
	return y;
}