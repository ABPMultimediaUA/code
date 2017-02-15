/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   CriaAlien.cpp
 * Author: Hector
 *
 * Created on 16 de enero de 2017, 18:00
 */

#include "CriaAlien.h"

CriaAlien::CriaAlien(ISceneManager* smgr, IVideoDriver* driver, b2World *world, vector3df posicion, Escenario* esce, Waypoints* puntos) : Enemigo(smgr, driver, world, posicion, puntos) {
    maya = smgr -> addCubeSceneNode(5); //preguntar a Miguel Angel
    if (maya) {
        maya -> setPosition(posicion); //vector3df(0, 10, 40)
        maya->getMaterial(0).EmissiveColor.set(0, 128, 0, 20);
    }

    vel = 20.0f;
    pos = maya->getPosition();
    entity = new Entity2D(world, pos, true, this, smgr);
    estadoActual = DESCANSAR;
    raza = CRIA;
    blindaje = 0.0f;
    nav = new navmeshes(5, esce);
        waypoints = puntos;
    waypoints->creaPesos(entity);





//    std::cout << "GRAFO CON 0" << std::endl;
//    std::cout << "" << std::endl;
    //    nav->muestraGrafo();
    std::cout << "COLISIONES" << std::endl;
    std::cout << "" << std::endl;
    nav->setColisiones(esce->getParedes());
    //nav->muestraGrafo();

    // dibujaGrid(smgr);


}

//CriaAlien::CriaAlien(const CriaAlien& orig) {
//}

CriaAlien::~CriaAlien() {


}

void CriaAlien::dibujaGrid(ISceneManager *grid) {
    float** matriz = nav->getMatriz();
    IMeshSceneNode *maya;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (matriz[i][j] == 1) {
                maya = grid->addCubeSceneNode(0.20);
                maya->setMaterialFlag(irr::video::EMF_WIREFRAME, true);
                maya->setMaterialFlag(irr::video::EMF_BACK_FACE_CULLING, false);
                maya->getMaterial(0).EmissiveColor.set(0, 255, 10, 20);
                maya->setPosition(vector3df(10 + i, 10, 10 + j));

            } else {
                maya = grid->addCubeSceneNode(0.20);
                maya->setMaterialFlag(irr::video::EMF_WIREFRAME, true);
                maya->setMaterialFlag(irr::video::EMF_BACK_FACE_CULLING, false);
                maya->getMaterial(0).EmissiveColor.set(0, 255, 255, 255);
                maya->setPosition(vector3df(10 + i, 10, 10 + j));
            }

        }
    }
}

void CriaAlien::Update(int estado) {
    switch (estado) {

        case 0: //descansar
            estadoActual = estado;

            maya->getMaterial(0).EmissiveColor.set(0, 0, 200, 10);
            break;

        case 1: //patrullar
            estadoActual = estado;
            maya->getMaterial(0).EmissiveColor.set(0, 15, 0, 200);
            break;

        case 2: //atacar
            estadoActual = estado;
            maya->getMaterial(0).EmissiveColor.set(0, 255, 50, 0);
            break;

    }
}

void CriaAlien::Mover(int modo, f32 dt) {

}

void CriaAlien::Patrullar() {

}

void CriaAlien::quitarVida(float damage) {

    std::cout << "CRIA ALIEN" << std::endl;

    vida = vida - (damage - blindaje);
    irr::core::stringw wideString(vida);
    GVida->setText(wideString.c_str());

    std::cout << vida << std::endl;
}