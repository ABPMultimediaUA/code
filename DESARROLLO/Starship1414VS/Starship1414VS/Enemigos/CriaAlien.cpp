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
#include "navmeshes.h"
#include "AStar.h"
#include "../Escenario/Escenario.h"
#include "../Fisicas/Entity2D.h"
#include "Waypoints.h"


CriaAlien::CriaAlien(ISceneManager* smgr, IVideoDriver* driver, b2World *world, vector3df posicion, Escenario* esce, Waypoints* puntos) : Enemigo(smgr, driver, world, posicion, puntos) {
    
	//seria mejor que se le pasara las cosas necesarias del escenario que todo el escenario entero
	//para hacer el tema de los navmesehses y los waypoints
	maya = smgr -> addCubeSceneNode(5); //preguntar a Miguel Angel
    if (maya) {
        maya -> setPosition(posicion); //vector3df(0, 10, 40)
        maya->getMaterial(0).EmissiveColor.set(0, 0, 0, 20);
    }

    vel = 35.0f;
    pos = maya->getPosition();
	rot = maya->getRotation();
    
    estadoActual = BUSCARPUNTO;
    raza = CRIA;
    blindaje = 0.0f;
	damageChoque = 10.0f;
	entity = new Entity2D(world, pos, true, this, smgr, raza);
   // nav = new navmeshes(10, esce);
	//Botiquines *bot = new Botiquines(*static_cast<Botiquines*>(objeto->getObjeto3D()));
	
	waypoints = puntos;
   // waypoints->creaPesos(entity);

	waypoints->mostrarPesos();

	disparado = false;
	//posJugador.X  = -30.0f;
	//posJugador.Y = -90.0f;
	damageBala = 10.0f;



//    std::cout << "GRAFO CON 0" << std::endl;
//    std::cout << "" << std::endl;
    //    nav->muestraGrafo();
  //  std::cout << "COLISIONES" << std::endl;
   // std::cout << "" << std::endl;
   // nav->setColisiones(esce->getParedes());
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

void CriaAlien::Update(f32 dt) { //cambiar a que no se le pase nada y que en el estado 0 busque el waypoint mas cercano a su posicion
	
	//crear metodos para todos los estados
	switch (estadoActual) {

        case BUSCARPUNTO: 
          
			BuscarWaypoint();
				
            break;

        case PATRULLAR: //patrullar
          
			Patrullar();
           
            break;

        case ATACAR: //atacar
          
			Atacar(dt);
			iniLogicaDifusa();

            break;


		case ROTACION:
			maya->getMaterial(0).EmissiveColor.set(0, 255, 50, 150);


			break;

		case ESCAPAR:

			maya->getMaterial(0).EmissiveColor.set(0, 255, 50, 150);
			iniLogicaDifusa();

			break;

		case CUERPOACUERPO:

			maya->getMaterial(0).EmissiveColor.set(0, 10, 250, 150);
			vector3df posPlayer;
			posPlayer.X = posJugador.X;
			posPlayer.Y = 0.0f;
			posPlayer.Z = posJugador.Y;
			dir = path->getDireccion(pos, posPlayer);


			this->Mover(dir);
			if (path->estoyEnElNodo(pos, posPlayer)) {
				dir = -1;
				this->setVelocidad();

	

				/*posNodo = path->buscarWaypointMasCorto(posNodo);
				puntoFin = waypoints->getNodoX(posNodo);*/

			}

			
			iniLogicaDifusa();

			break;

    }

	this->actualizarLista();
	GVida->setPosition(pos);
	RVida->setPosition(vector3df(pos.X - 8, pos.Y, pos.Z));


}

/*void CriaAlien::Mover(int modo) {


}*/

void CriaAlien::Patrullar() {

	maya->getMaterial(0).EmissiveColor.set(0, 15, 0, 200);
	if (puntoFin == nullptr) {

		posNodo = path->buscarWaypointMasCorto(posNodo);

		if (posNodo != -1) {
			puntoFin = waypoints->getNodoX(posNodo);
		}

		if(nodoAnterior == puntoFin) {

		
			posNodo = path->buscarWaypointNoRepetido(puntoFin->getLugarDelNodo(), puntoIni->getLugarDelNodo());
			puntoFin = waypoints->getNodoX(posNodo);

		}

		/*std::cout << std::endl;
		std::cout << "NOMBRE DEL DESTINO: " << this->puntoFin->getNombre() << std::endl;*/

	}

	else if(puntoFin != nullptr) {
	


		dir = path->getDireccion(pos, puntoFin->getPosicion());
		/*	std::cout << std::endl;
		std::cout << "DIR: " << dir << std::endl;
		std::cout << std::endl;*/
		this->Mover(dir);
		if (path->estoyEnElNodo(pos, puntoFin->getPosicion())) {
			dir = -1;
			this->setVelocidad();
		
			nodoAnterior = puntoIni;
			puntoIni = puntoFin;
			puntoFin = nullptr;

			/*posNodo = path->buscarWaypointMasCorto(posNodo);
			puntoFin = waypoints->getNodoX(posNodo);*/

		}


	}

	/*std::cout << std::endl;
	std::cout << "PATRULLO PREMO!" << std::endl;
	std::cout << std::endl;*/

}

void CriaAlien::Atacar(f32 dt)
{
	maya->getMaterial(0).EmissiveColor.set(0, 255, 50, 0);
	/*		std::cout << std::endl;
	std::cout << "CRIA ALIEN" << std::endl;
	std::cout << "POS X: " << posJugador.X << "POS Y(Z): " << posJugador.Y << std::endl;
	std::cout << std::endl;*/

	if (disparado == false) {

		this->disparar(dt); //donde crea la bala

	}


	if (disparado == true) {
		this->aumentarTiempoDisparo(dt);
		if (this->getTiempoDisparo() >= 0.7f) {
			this->setDisparo(false);
			this->resetTiempoDisparo();
		}
	}

	this->setVelocidad();
}

void CriaAlien::BuscarWaypoint()
{
	maya->getMaterial(0).EmissiveColor.set(0, 0, 200, 10);

	if (puntoIni == nullptr) {
		posNodo = path->buscarWaypointCercano(pos, waypoints->getNodos());

		if(posNodo != -1)
			puntoIni = waypoints->getNodoX(posNodo);

		//	std::cout << std::endl;
		//std::cout << "NOMBRE: " << this->puntoIni->getNombre() << std::endl;
		//std::cout << "POS NODO: " << posNodo << std::endl;
	}



	if (puntoIni != nullptr) {
		dir = path->getDireccion(pos, puntoIni->getPosicion());
		/*	std::cout << std::endl;
		std::cout << "DIR: " << dir << std::endl;
		std::cout << std::endl;*/

		this->Mover(dir);

		if (path->estoyEnElNodo(pos, puntoIni->getPosicion())) {
			estadoActual = PATRULLAR;

			dir = -1;
			this->setVelocidad();

		}
	}
}

void CriaAlien::quitarVida(float damage) {

    std::cout << "CRIA ALIEN" << std::endl;

    vida = vida - (damage - blindaje);
    irr::core::stringw wideString(vida);
    GVida->setText(wideString.c_str());

    std::cout << vida << std::endl;
}