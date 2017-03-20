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

    vel = 50.0f;
    pos = maya->getPosition();
	rot = maya->getRotation();
    entity = new Entity2D(world, pos, true, this, smgr);
    estadoActual = DESCANSAR;
    raza = CRIA;
    blindaje = 0.0f;
	damageChoque = 10.0f;
   // nav = new navmeshes(10, esce);
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
	std::cout << "" << std::endl;

	std::cout << "////////////////////////" << std::endl;
	std::cout << "VIVO: " << maya << std::endl;


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
	
	
	switch (estadoActual) {

        case DESCANSAR: //descansar
          
			maya->getMaterial(0).EmissiveColor.set(0, 0, 200, 10);
			
			if (puntoIni == nullptr) {
				posNodo = path->buscarWaypointCercano(pos, waypoints->getNodos());
				puntoIni = waypoints->getNodoX(posNodo);	
				
			//	std::cout << std::endl;
			//std::cout << "NOMBRE: " << this->puntoIni->getNombre() << std::endl;
			//std::cout << "POS NODO: " << posNodo << std::endl;
			}
		
            
			
			
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
				
            break;

        case PATRULLAR: //patrullar
          
            maya->getMaterial(0).EmissiveColor.set(0, 15, 0, 200);
			if(puntoFin == nullptr) {

				posNodo = path->buscarWaypointMasCorto(posNodo);
				puntoFin = waypoints->getNodoX(posNodo);
				/*std::cout << std::endl;
				std::cout << "NOMBRE DEL DESTINO: " << this->puntoFin->getNombre() << std::endl;*/
				
			}

			else {
				maya->getMaterial(0).EmissiveColor.set(0, 15, 150, 200);

				
				dir = path->getDireccion(pos, puntoFin->getPosicion());
			/*	std::cout << std::endl;
				std::cout << "DIR: " << dir << std::endl;
				std::cout << std::endl;*/
				this->Mover(dir);
				if (path->estoyEnElNodo(pos, puntoFin->getPosicion())) {
					dir = -1;
					this->setVelocidad();
					puntoIni = puntoFin;
					puntoFin = nullptr;
					
					/*posNodo = path->buscarWaypointMasCorto(posNodo);
					puntoFin = waypoints->getNodoX(posNodo);*/

				}
				

			}

			/*std::cout << std::endl;
			std::cout << "PATRULLO PREMO!" << std::endl;
			std::cout << std::endl;*/
            break;

        case ATACAR: //atacar
           
            maya->getMaterial(0).EmissiveColor.set(0, 255, 50, 0);
	/*		std::cout << std::endl;
			std::cout << "CRIA ALIEN" << std::endl;
			std::cout << "POS X: " << posJugador.X << "POS Y(Z): " << posJugador.Y << std::endl;
			std::cout << std::endl;*/

			if (disparado == false) {

				this->disparar(dt); //donde crea la bala

			}


			if ( disparado == true) {
				this->aumentarTiempoDisparo(dt);
				if (this->getTiempoDisparo() >= 0.7f) {
					this->setDisparo(false);
					this->resetTiempoDisparo();
				}
			}

			this->setVelocidad();

            break;


		case ROTACION:
			maya->getMaterial(0).EmissiveColor.set(0, 255, 50, 150);


			break;
    }

	this->actualizarLista();
	


}

void CriaAlien::Mover(int modo) {

	//rot.Y = 0.0f;

	switch (modo) {

	case 0:
		/* std::cout<<"case 0: Sntes"<<std::endl;
		std::cout<<"Pos X: "<<pos.X<<std::endl;
		std::cout<<"Pos2D X: "<<body->GetPosition().x<<std::endl;*/
		// body->ApplyForceToCenter(b2Vec2(5.0,0.0), true);

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(vel, 0.0f));
		 entity->getSombraE2D()->SetLinearVelocity(b2Vec2(vel, 0.0f));
		pos.X = entity->getCuerpo2D()->GetPosition().x;

		/* std::cout<<"Des"<<std::endl;
		std::cout<<"Pos X: "<<pos.X<<std::endl;
		std::cout<<"Pos2D X: "<<entity->getBody2D->GetPosition().x<<std::endl;*/
		
		//rot.Y = 90.0f;
		
		break;

	case 1:

		/*  std::cout<<"case 1: Sntes"<<std::endl;
		std::cout<<"Pos X: "<<pos.X<<std::endl;
		std::cout<<"Pos2D X: "<<entity->getBody2D->GetPosition().x<<std::endl;*/

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-vel, 0.0f));
		  entity->getSombraE2D()->SetLinearVelocity(b2Vec2(-vel, 0.0f));
		pos.X = entity->getCuerpo2D()->GetPosition().x;


		/*std::cout<<"Des"<<std::endl;
		std::cout<<"Pos X: "<<pos.X<<std::endl;
		std::cout<<"Pos2D X: "<<entity->getBody2D->GetPosition().x<<std::endl;*/

		//rot.Y = -90.0f;

		break;

	case 2:

		/*   std::cout<<"case 2: Sntes"<<std::endl;
		std::cout<<"Pos Z: "<<pos.Z<<std::endl;
		std::cout<<"Pos2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;*/

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, vel));
		 entity->getSombraE2D()->SetLinearVelocity(b2Vec2(0.0f, vel));
		pos.Z = entity->getCuerpo2D()->GetPosition().y;


		/*  std::cout<<"Des"<<std::endl;
		std::cout<<"Pos Z: "<<pos.Z<<std::endl;
		std::cout<<"Pos2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;*/

		break;

	case 3:

		/*   std::cout<<"case 3: Sntes"<<std::endl;
		std::cout<<"Pos Z: "<<pos.Z<<std::endl;
		std::cout<<"Pos2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;*/

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(0.0f, -vel));
		entity->getSombraE2D()->SetLinearVelocity(b2Vec2(0.0f, -vel));
		pos.Z = entity->getCuerpo2D()->GetPosition().y;

		/* std::cout<<"Des"<<std::endl;
		std::cout<<"Pos Z: "<<pos.Z<<std::endl;
		std::cout<<"Pos2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;*/
		//rot.Y = 180.0f;

		break;

		//W+D
	case 4:

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(vel, vel));
		entity->getSombraE2D()->SetLinearVelocity(b2Vec2(vel, vel));
		pos.X = entity->getCuerpo2D()->GetPosition().x;
		pos.Z = entity->getCuerpo2D()->GetPosition().y;

		//rot.Y = 45.0f;
		break;

		//D+S
	case 5:
		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(vel, -vel));
		entity->getSombraE2D()->SetLinearVelocity(b2Vec2(vel, -vel));
		pos.X = entity->getCuerpo2D()->GetPosition().x;
		pos.Z = entity->getCuerpo2D()->GetPosition().y;
		break;
		//rot.Y = 135.0f;
		//A+S
	case 6:

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-vel, -vel));
		 entity->getSombraE2D()->SetLinearVelocity(b2Vec2(-vel, -vel));
		pos.X = entity->getCuerpo2D()->GetPosition().x;
		pos.Z = entity->getCuerpo2D()->GetPosition().y;

		break;
		//rot.Y = -135.0f;
		//A+W
	case 7:

		entity->getCuerpo2D()->SetLinearVelocity(b2Vec2(-vel, vel));
		 entity->getSombraE2D()->SetLinearVelocity(b2Vec2(-vel, vel));
		pos.X = entity->getCuerpo2D()->GetPosition().x;
		pos.Z = entity->getCuerpo2D()->GetPosition().y;

		//rot.Y = -45.0f;

		break;

	}
	//    std::cout<<"//////////////////////////////////////////"<<std::endl;
	//            std::cout<<""<<std::endl;
	//            std::cout<<"POS PERS DESPUES"<<std::endl;
	//                 std::cout<<"Pos 3D X: "<<pos.X<<"Pos 3D Z: "<<pos.Z<<std::endl;
	//                 std::cout<<"Pos 2D X: "<<entity->getCuerpo2D()->GetPosition().x<<"Pos 2D Z: "<<entity->getCuerpo2D()->GetPosition().y<<std::endl;


	setPos(pos);
	//maya->setRotation(rot);

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