#pragma once
/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   componente.h
* Author: JaumeLloret
*
* Created on 21 de noviembre de 2016, 19:11
*/

#ifndef COMPONENTE_H
#define COMPONENTE_H

class componente {
public:
	componente();
	componente(const componente& orig);
	componente(const char *);
	virtual ~componente();
	const char* getTipo();
	void setTipo(const char*);
private:
	const char *tipo;
};

#endif /* COMPONENTE_H */

