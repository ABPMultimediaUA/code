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
#include "Nodo.h"


CriaAlien::CriaAlien(ISceneManager* smgr, IVideoDriver* driver, b2World *world, vector3df posicion, Escenario* esce, Waypoints* puntos) : Enemigo(smgr, driver, world, posicion, puntos) {
    
	//seria mejor que se le pasara las cosas necesarias del escenario que todo el escenario entero
	//para hacer el tema de los navmesehses y los waypoints
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
    nav = new navmeshes(10, esce);
        waypoints = puntos;
    waypoints->creaPesos(entity);

	waypoints->mostrarPesos();





//    std::cout << "GRAFO CON 0" << std::endl;
//    std::cout << "" << std::endl;
    //    nav->muestraGrafo();
  //  std::cout << "COLISIONES" << std::endl;
   // std::cout << "" << std::endl;
    nav->setColisiones(esce->getParedes());
    //nav->muestraGrafo();
	path = new AStar(waypoints->getMatriz(), waypoints->getNodos().size());

    // dibujaGrid(smgr);


}

//CriaAlien::CriaAlien(const CriaAlien& orig) {
//}

CriaAlien::~CriaAlien() {


}

void CriaAlien::dibujaGrid(ISceneManager *grid) {
    float** matriz = nav->getMatriz();
    IMeshSceneNode *maya;
    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 50; j++) {
            if (matriz[i][j] == 1) {
                maya = grid->addCubeSceneNode(10);
                maya->setMaterialFlag(irr::video::EMF_WIREFRAME, true);
                maya->setMaterialFlag(irr::video::EMF_BACK_FACE_CULLING, false);
                maya->getMaterial(0).EmissiveColor.set(0, 255, 10, 20);
                maya->setPosition(vector3df(10*i-240, 5, 10 * j - 240));

            } else {
                maya = grid->addCubeSceneNode(10);
                maya->setMaterialFlag(irr::video::EMF_WIREFRAME, true);
                maya->setMaterialFlag(irr::video::EMF_BACK_FACE_CULLING, false);
                maya->getMaterial(0).EmissiveColor.set(0, 255, 255, 255);
                maya->setPosition(vector3df(10 * i - 240, 10, 10 * j - 240));
            }

        }
    }
}

void CriaAlien::Update() { //cambiar a que no se le pase nada y que en el estado 0 busque el waypoint mas cercano a su posicion
	int posNodo = 0;
	switch (estadoActual) {

        case DESCANSAR: //descansar
          
			
				
			posNodo = path->buscarWaypointCercano(pos, waypoints->getNodos());
			puntoIni = waypoints->getNodoX(posNodo);
			std::cout << std::endl;
			std::cout << "NOMBRE: " << this->puntoIni->getNombre() << std::endl;
			
            maya->getMaterial(0).EmissiveColor.set(0, 0, 200, 10);
			estadoActual = PATRULLAR;
            break;

        case PATRULLAR: //patrullar
          
            maya->getMaterial(0).EmissiveColor.set(0, 15, 0, 200);
			if(puntoFin == nullptr) {

				posNodo = path->buscarWaypointMasCorto(posNodo);
				puntoFin = waypoints->getNodoX(posNodo);
				std::cout << std::endl;
				std::cout << "NOMBRE DEL DESTINO: " << this->puntoFin->getNombre() << std::endl;
			}

			else {
				
				/*std::cout << std::endl;
				std::cout << "A MOVERSE" << std::endl;*/
			}

			/*std::cout << std::endl;
			std::cout << "PATRULLO PREMO!" << std::endl;
			std::cout << std::endl;*/
            break;

        case ATACAR: //atacar
           
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