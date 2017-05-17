#include "graphicEngine\TGraphicEngine.h"
#include "graphicEngine\entityTree\TTransform.h"
#include "graphicEngine\entityTree\TCamara.h"
#include "graphicEngine\entityTree\TNodo.h"
#include "graphicEngine\entityTree\TMalla.h"
#include "Camara.h"
#include "player.h"
#include "Game\Escenario\readJson.h"
#include "Game\Escenario\Escenario.h"
#include <glm\gtx\string_cast.hpp>
#include "Fisicas\Mundo.h"
#include "Fisicas\b2GLDraw.h"


#define GLFW_DLL
#define GLFW_BUILD_DLL

//variables constante para las dimenciones de la ventana
const GLuint WIDTH = 1366, HEIGHT = 768;

int main() {
	TGraphicEngine motorApp;
	if (motorApp.init("SpaceShip 1414", WIDTH, HEIGHT))
	{
		motorApp.info();
		Mundo * world = new Mundo();
		//Malla
		//camara
		player jugador(&motorApp, world);

		Camara cam(&motorApp,1,true,&jugador);
		/*cam.Translation()->trasladar(0, 10, 40);
		cam.setPitch(-30);
		cam.Rotation()->rotarYPR(0,cam.getPitch(),0);*/
		
	//	Camara cam2(&motorApp, 0);
		/*cam2.Rotation()->rotar(80.0f, 1.0f, 0.0f, 0.0f);
		cam2.Translation()->trasladar(0, 0, 100);*/

		Escenario *scene = new Escenario(&motorApp, world, &cam);
		readJson *json = new readJson(scene);
		b2GLDraw fooDrawInstance;
		world->getWorldBox2D()->SetDebugDraw(&fooDrawInstance);
		uint32 flags = 0;
		flags += b2Draw::e_shapeBit;
		flags += b2Draw::e_jointBit;
		flags += b2Draw::e_aabbBit;
		flags += b2Draw::e_pairBit;
		flags += b2Draw::e_centerOfMassBit;
		fooDrawInstance.SetFlags(flags);
		motorApp.run(world, scene);
		
	}
	return 0;
}