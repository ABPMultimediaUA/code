
		//if((*I).nombre == "FinalPosibles") {

		//	for (std::list<ElementoHijo>::iterator T = (*I).ObjetosEscena.begin(); T != (*I).ObjetosEscena.end(); T++) {

		//		IMeshSceneNode *objeto = SM->addCubeSceneNode(10.0f, 0, -1,
		//			vector3df(10 * ((*T).position.x + ((*I).position.x)), 10 * ((*T).position.y + ((*I).position.y)), 10 * ((*T).position.z + (*I).position.z)),
		//			vector3df((*T).rotation.x + (*I).rotation.x, (*T).rotation.y + (*I).rotation.y, (*T).rotation.z + (*I).rotation.z),
		//			vector3df((*T).escala.x * (*I).escala.x, (*T).escala.y * (*I).escala.y, (*T).escala.z * (*I).escala.z));
		//		objeto->getMaterial(0).EmissiveColor.set(20, 255, 0, 80);

		//		Terminal *terminal = new Terminal(vector3df(10 * ((*T).position.x + ((*I).position.x)), 10 * ((*T).position.y + ((*I).position.y)), 10 * ((*T).position.z + (*I).position.z)), 
		//			vector3df((*T).rotation.x + (*I).rotation.x, (*T).rotation.y + (*I).rotation.y, (*T).rotation.z + (*I).rotation.z), 
		//			vector3df((*T).escala.x * (*I).escala.x, (*T).escala.y * (*I).escala.y, (*T).escala.z * (*I).escala.z), mundo, objeto,this);
		//		
		//	}

		//}


		//for (std::list<ElementoHijo>::iterator M = (*I).ObjetosEscena.begin(); M != (*I).ObjetosEscena.end(); M++) {
		//	if ((*M).nombre == "Suelo") {
		//		IMeshSceneNode *objeto = SM->addCubeSceneNode(100.0f, 0, -1,
		//			vector3df((*M).position.x + (*I).position.x, (*M).position.y + (*I).position.y, (*M).position.z + (*I).position.y),
		//			vector3df((*M).rotation.x + (*I).rotation.x, (*M).rotation.y + (*I).rotation.y, (*M).rotation.z + (*I).rotation.z),
		//			vector3df((*M).escala.x * (*I).escala.x, 0, (*M).escala.z * (*I).escala.z));
		//		objeto->getMaterial(0).EmissiveColor.set(0, 20, 20, 20);
		//		tam = objeto->getScale().X * objeto->getScale().Z * 100;
		//	}
		//	else {
		//	
		//		for (std::list<Elemento>::iterator N = (*M).ObjetosEscena.begin(); N != (*M).ObjetosEscena.end(); N++) {
		//			
		//			if ((*M).nombre == "Puertas") {
		//				//puertas
		//				IMeshSceneNode *objeto = SM->addCubeSceneNode(10.0f, 0, -1,
		//					vector3df(10 * ((*N).position.x + ((*M).position.x + (*I).position.x)), 10 * ((*N).position.y + ((*M).position.y + (*I).position.y)), 10 * ((*N).position.z + (*M).position.z + (*I).position.z)),
		//					vector3df((*N).rotation.x + (*M).rotation.x + (*I).rotation.x, (*N).rotation.y + (*M).rotation.y + (*I).rotation.y, (*N).rotation.z + (*M).rotation.z + (*I).rotation.z),
		//					vector3df(((*N).escala.x * (*M).escala.x * (*I).escala.x), (*N).escala.y * (*M).escala.y * (*I).escala.y, (*N).escala.z * (*M).escala.z * (*I).escala.z));
		//				objeto->getMaterial(0).EmissiveColor.set(0, 20+num*5, 5*num+60, 50-num);

		//				Puerta *door = new Puerta(num, vector3df(10 * ((*N).position.x + ((*M).position.x + (*I).position.x)), 10 * ((*N).position.y + ((*M).position.y + (*I).position.y)), 10 * ((*N).position.z + (*M).position.z + (*I).position.z)),
		//					vector3df((*N).rotation.x + (*M).rotation.x + (*I).rotation.x, (*N).rotation.y + (*M).rotation.y + (*I).rotation.y, (*N).rotation.z + (*M).rotation.z + (*I).rotation.z),
		//					vector3df(((*N).escala.x * (*M).escala.x * (*I).escala.x), (*N).escala.y * (*M).escala.y * (*I).escala.y, (*N).escala.z * (*M).escala.z * (*I).escala.z),
		//					objeto);

		//				door->setFisica(mundo,SM,num);
		//				puertas.push_back(door);
		//				num++;
		//			}

		//			//                                if((*I).nombre=="Escenario"){
		//			//                                      IMeshSceneNode *objeto = SM->addCubeSceneNode(10.0f, 0, -1,
		//			//                                          vector3df(10*((*N).position.x+((*M).position.x+(*I).position.x)),10*((*N).position.y+((*M).position.y+(*I).position.y)),10*((*N).position.z+(*M).position.z+(*I).position.z)),
		//			//                                          vector3df((*N).rotation.x+(*M).rotation.x+(*I).rotation.x,(*N).rotation.y+(*M).rotation.y+(*I).rotation.y,(*N).rotation.z+(*M).rotation.z+(*I).rotation.z),
		//			//                                          vector3df(((*N).escala.x*(*M).escala.x*(*I).escala.x),(*N).escala.y*(*M).escala.y*(*I).escala.y,(*N).escala.z*(*M).escala.z*(*I).escala.z));
		//			//                                         objeto->getMaterial(0).EmissiveColor.set(20,80,80,80);
		//			//                                         Pared *wall = new Pared(vector3df(10*((*N).position.x+((*M).position.x+(*I).position.x)), 10*((*N).position.y+((*M).position.y+(*I).position.y)), 10*((*N).position.z+(*M).position.z+(*I).position.z)),
		//			//                                                    vector3df((*N).rotation.x+(*M).rotation.x+(*I).rotation.x,(*N).rotation.y+(*M).rotation.y+(*I).rotation.y,(*N).rotation.z+(*M).rotation.z+(*I).rotation.z),
		//			//                                                    vector3df(((*N).escala.x*(*M).escala.x*(*I).escala.x),(*N).escala.y*(*M).escala.y*(*I).escala.y,(*N).escala.z*(*M).escala.z*(*I).escala.z));
		//			//
		//			//                                         wall->setFisica(mundo);
		//			//                                }
		//			else {
		//				//paredes y objetos

		//				IMeshSceneNode *objeto = SM->addCubeSceneNode(10.0f, 0, -1,
		//					vector3df(10 * ((*N).position.x + ((*M).position.x + (*I).position.x)), 10 * ((*N).position.y + ((*M).position.y + (*I).position.y)), 10 * ((*N).position.z + (*M).position.z + (*I).position.z)),
		//					vector3df((*N).rotation.x + (*M).rotation.x + (*I).rotation.x, (*N).rotation.y + (*M).rotation.y + (*I).rotation.y, (*N).rotation.z + (*M).rotation.z + (*I).rotation.z),
		//					vector3df(((*N).escala.x * (*M).escala.x * (*I).escala.x), (*N).escala.y * (*M).escala.y * (*I).escala.y, (*N).escala.z * (*M).escala.z * (*I).escala.z));
		//				objeto->getMaterial(0).EmissiveColor.set(20, 80, 80, 80);
		//				Pared *wall = new Pared(vector3df(10 * ((*N).position.x + ((*M).position.x + (*I).position.x)), 10 * ((*N).position.y + ((*M).position.y + (*I).position.y)), 10 * ((*N).position.z + (*M).position.z + (*I).position.z)),
		//					vector3df((*N).rotation.x + (*M).rotation.x + (*I).rotation.x, (*N).rotation.y + (*M).rotation.y + (*I).rotation.y, (*N).rotation.z + (*M).rotation.z + (*I).rotation.z),
		//					vector3df(((*N).escala.x * (*M).escala.x * (*I).escala.x), (*N).escala.y * (*M).escala.y * (*I).escala.y, (*N).escala.z * (*M).escala.z * (*I).escala.z));

		//				wall->setFisica(mundo);
		//				paredes.push_back(wall);
		//			}
		//		}
		//	}

		//}