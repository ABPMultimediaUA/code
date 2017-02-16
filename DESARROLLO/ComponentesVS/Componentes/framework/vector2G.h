#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   vector2.h
* Author: elcuc_000
*
* Created on 2 de diciembre de 2016, 4:06
*/

#ifndef VECTOR2G_H
#define VECTOR2G_H

class vector2G {
public:
	vector2G();
	vector2G(const vector2G& orig);
	vector2G(float, float);
	virtual ~vector2G();
	void setX(float);
	void setY(float);
	void setXY(float, float);
	float getX();
	float getY();
private:
	float x, y;
};

#endif /* VECTOR2G_H */

