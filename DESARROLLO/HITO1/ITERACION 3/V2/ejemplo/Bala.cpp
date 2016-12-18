/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Bala.h"
#include "readJson.h"
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

    life = true;
    
    posRaton = vector2df(mousePosition.X, mousePosition.Y);
    
    posInicial = posPers;
    
    entity = new Entity2D(world, pos, maya->getRotation(), true);
    
}

Bala::Bala(const Bala& orig) {
}

Bala::~Bala() {
    maya->getParent()->removeChild(maya);
    delete(entity);
}

void Bala::setPosition(vector3df v) {
    maya->setPosition(v);
}

void Bala::mover(f32 tiempo) {

//    std::cout<<"//////////////////////////////////////////"<<std::endl;
//            std::cout<<""<<std::endl;
//            std::cout<<"POS BALA ANTES"<<std::endl;
//                 std::cout<<"Pos 3D X: "<<pos.X<<"Pos 3D Z: "<<pos.Z<<std::endl;
//                 std::cout<<"Pos 2D X: "<<entity->getCuerpo2D()->GetPosition().x<<"Pos 2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;

    vector2df direction(posRaton.X - 320, posRaton.Y - 240);
    direction.normalize();


    float v1 = direction.X * 200.0f;
    float v2 = -direction.Y * 200.0f;
    
    float x = entity->getCuerpo2D()->GetPosition().x + v1;
    float y = entity->getCuerpo2D()->GetPosition().y + v2;
    entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(x, y));

    maya->setPosition(vector3df(entity->getCuerpo2D()->GetPosition().x, 10, entity->getCuerpo2D()->GetPosition().y));
    pos = maya->getPosition();

//    float v1 = direction.X * 200.0f * tiempo;
//    float v2 = -direction.Y * 200.0f * tiempo;

//    float x = maya->getPosition().X + v1;
//    float y = maya->getPosition().Z + v2;
//
//    maya->setPosition(vector3df(x, 10, y));
//    pos = maya->getPosition();
//        std::cout<<"//////////////////////////////////////////"<<std::endl;
//            std::cout<<""<<std::endl;
//            std::cout<<"POS BALA DESPUES"<<std::endl;
//                 std::cout<<"Pos 3D X: "<<pos.X<<"Pos 3D Z: "<<pos.Z<<std::endl;
//                 std::cout<<"Pos 2D X: "<<entity->getCuerpo2D()->GetPosition().x<<"Pos 2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;

}

vector3df Bala::getPos() {

    return pos;
}

void Bala::setPosRaton() {

}

bool Bala::estaViva() {

    return entity->getLive();
//    return life;
}

bool Bala::update() {

    float hola = pos.getDistanceFrom(posInicial);
    //std::cout << "Distancia: " << hola << std::endl;

    if (hola > 100) {
        entity->setLive(false);
//        life = false;
        return false;
    } else
        return true;


}