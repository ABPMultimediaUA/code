/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Bala.h"
#include <Math.h>


#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif

Bala::Bala(ISceneManager* smgr, IVideoDriver* driver, b2World *world, vector3df posPers, vector2df mousePosition) {

    maya = smgr -> addCubeSceneNode(2); //preguntar a Miguel Angel

    if (maya) {
        maya -> setMaterialFlag(EMF_LIGHTING, false);
        maya -> setPosition(posPers);
        maya->setMaterialTexture(0, driver->getTexture("texture/bruce.jpg"));
        //primer parametro del setVertexColors es de la maya que quieres cambiar el color y con su getMesh se consigue
        // smgr -> getMeshManipulator()->setVertexColors(cube->getMesh(), SColor(0, 0, 255, 128));//lus, R, G, B
    }



    pos = maya->getPosition();
//    bodyDef.type = b2_dynamicBody;
//    bodyDef.position.Set(pos.X, pos.Z);
//    bodyShape.SetAsBox(2, 2);
//    body = world->CreateBody(&bodyDef);
//    body -> CreateFixture(&bodyShape, 1.0f);

    
    posRaton = vector2df(mousePosition.X, mousePosition.Y);
    live = true;
    posInicial = posPers;
}

Bala::Bala(const Bala& orig) {
}

Bala::~Bala() {
    maya->getParent()->removeChild(maya);
    //delete(entity)
}

void Bala::setPosition(vector3df v) {
    maya->setPosition(v);
}

void Bala::mover(f32 tiempo) {

    //    const f32 availableMovement = MOVEMENT_SPEED * tiempo;
    //    vector2df toMousePosition(posRaton.X - nodePosition.X, posRaton.Y - nodePosition.Y);
    //    //nodePosition.getDistanceFrom(posRaton)
    //    std::cout << "ToMOUSE: " << toMousePosition.getLength() << std::endl;
    //    if (toMousePosition.getLength() < availableMovement) {
    //        nodePosition = vector2df(posRaton.X, posRaton.Y); // Jump to the final position
    //        return false;
    //        //Bala *bullet = new Bala(smgr, driver, world, pers);
    //    } else
    //        nodePosition += toMousePosition.normalize() * availableMovement; // Move towards it
    //
    //    maya->setPosition(vector3df(nodePosition.X, 0, nodePosition.Y));


    vector2df direction(posRaton.X - 320, posRaton.Y - 240);
    direction.normalize();

    float v1 = direction.X * 200.0f * tiempo;
    float v2 = -direction.Y * 200.0f * tiempo;

    float x = maya->getPosition().X + v1;
    float y = maya->getPosition().Z + v2;

    maya->setPosition(vector3df(x, 0, y));

    pos = maya->getPosition();
}

vector3df Bala::getPos() {

    return pos;
}

void Bala::setPosRaton() {

}

bool Bala::estaViva() {

    return live;
}

bool Bala::update() {

    float hola = pos.getDistanceFrom(posInicial);
    //std::cout << "Distancia: " << hola << std::endl;

    if (hola > 100) {
        live = false;
        return false;
    } else
        return true;


}