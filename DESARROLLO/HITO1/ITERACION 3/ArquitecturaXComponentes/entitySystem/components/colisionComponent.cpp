/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   colisionComponent.cpp
 * Author: elcuc_000
 * 
 * Created on 18 de diciembre de 2016, 23:44
 */

#include <typeinfo>
#include "colisionComponent.h"
#include "../../facade/Entity2D.h"
#include "../../facade/facadeColision.h"
#include "../../framework/vector3G.h"

colisionComponent::colisionComponent() : componente(typeid(colisionComponent).name()) {
}

colisionComponent::colisionComponent(const colisionComponent& orig) : componente(typeid(colisionComponent).name()) {
}

colisionComponent::colisionComponent(facadeColision* fC, vector3G v) : componente(typeid(colisionComponent).name()) {
    pos = fC->newEntity2D(v);
}

colisionComponent::colisionComponent(facadeColision* fC, vector3G v, vector3G r, bool s) : componente(typeid(colisionComponent).name()) {
    pos = fC->newEntity2D(v,r,s);
}

colisionComponent::~colisionComponent() {
}

unsigned long colisionComponent::getPosCol(){
    return pos;
}