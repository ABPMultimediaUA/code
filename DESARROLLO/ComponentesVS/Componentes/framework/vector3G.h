#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   vector3G.h
* Author: elcuc_000
*
* Created on 2 de diciembre de 2016, 2:23
*/

#ifndef VECTOR3G_H
#define VECTOR3G_H

class vector3G {
public:
	vector3G();
	vector3G(const vector3G& orig);
	vector3G(float, float, float);
	virtual ~vector3G();
	void setX(float);
	void setY(float);
	void setZ(float);
	void setXYZ(float, float, float);
	float getX();
	float getY();
	float getZ();
private:
	float x, y, z;
};

#endif /* VECTOR3G_H */

