


#include "LogicaDifusa.h"


/*
-Rango vida leyenda

0 ----> alto 100 - 80
1 ----> media 80 - 50
2 ----> baja 50 - 30
3 ----> huir 30 - 10



-Rango distancia leyenda

0 ----> lejos 
1 ----> media
2 ----> corta

*/


LogicaDifusa::LogicaDifusa(const float &vidaM)
{
	vidaMax = vidaM;

}


LogicaDifusa::~LogicaDifusa()
{
}

void LogicaDifusa::fusificador(const float & vidaE, const vector3df & posE, const vector3df & posJ)
{
	//vidaJugador = vidaJ;
	vidaEnemigo = vidaE;
	posEnemigo = posE;
	posJugador = posJ;
	
	reiniciarArrays();
	condiccionesDeLaVidaEnemigo();
	condiccionesDeLaDistancia();
	sistemaDeInferencia();

}

void LogicaDifusa::baseDeConocimiento()
{

}

void LogicaDifusa::desfusificador()
{
}

void LogicaDifusa::sistemaDeInferencia()
{
	baseDeConocimiento();
}

void LogicaDifusa::condiccionesDeLaVidaEnemigo()
{
	//vida alta

	float limt1 = vidaMax * 0.75f;

	float limt2 = vidaMax * 0.45f;
	float limt3 = vidaMax * 0.85f;
	float ptoM = vidaMax * 0.65f;

	float limt4 = vidaMax * 0.25f;
	float limt5 = vidaMax * 0.55f;
	float ptoB = vidaMax * 0.40f;
	
	float limt6 = vidaMax * 0.35f;
	float limt7 = vidaMax * 0.10f;

	if (vidaEnemigo > limt1) {

		if (vidaEnemigo < vidaMax) {
			resultadosVidaEnemigo[0] = (vidaEnemigo - limt1) / (vidaMax - limt1); //100 - 75
		}

		else {
			resultadosVidaEnemigo[0] = 1.0f;
		}
	}


	//vida media
	if (vidaEnemigo > limt2 && vidaEnemigo < limt3) {

		if (vidaEnemigo <= ptoM) {
			resultadosVidaEnemigo[1] = (vidaEnemigo - limt2) / (ptoM - limt2); //65 - 45
		}

		else {
			resultadosVidaEnemigo[1] = 2.0f - (vidaEnemigo - limt2) / (ptoM - limt2);
		}
	}

	//vida baja
	if (vidaEnemigo > limt4 && vidaEnemigo < limt5) {

		if (vidaEnemigo <= ptoB) {
			resultadosVidaEnemigo[2] = (vidaEnemigo - limt4) / (ptoB - limt4);//40 - 25
		}

		else {
			resultadosVidaEnemigo[2] = 2.0f - (vidaEnemigo - limt4) / (ptoB - limt4);

		}
	}

	//huir
	if (vidaEnemigo < limt6) {

		if (vidaEnemigo > limt7) {
			resultadosVidaEnemigo[3] = -(vidaEnemigo - limt7) / (limt7 - limt6); //10 - 35
		}

		else {
			resultadosVidaEnemigo[3] = 1.0f;
		}
	}
}

//void LogicaDifusa::condiccionesDeLaVidaJugador()
//{
//
//	//vida alta
//	if (vidaJugador > 70.0f) {
//
//		if (vidaJugador < 100.0f) {
//			resultadosVidaJugador[0] = (vidaJugador - 70.0f) / 30.0f; //100 - 75
//		}
//
//		else {
//			resultadosVidaJugador[0] = 1.0f;
//		}
//	}
//
//
//	//vida media
//	if (vidaJugador > 35.0f && vidaJugador < 85.0f) {
//
//		if (vidaJugador <= 55.0f) {
//			resultadosVidaJugador[1] = (vidaJugador - 35.0f) / 20.0f; //65 - 45
//		}
//
//		else {
//			resultadosVidaJugador[1] = 2.0f - (vidaJugador - 35.0f) / 20.0f;
//		}
//	}
//
//
//	//huir
//	if (vidaJugador < 30.0f) {
//
//		if (vidaJugador > 10.0f) {
//			resultadosVidaJugador[2] = -(vidaJugador - 10.0f) / (-20.0f); //no se si se deberia poner un menos ?
//		}
//
//		else {
//			resultadosVidaJugador[2] = 1.0f;
//		}
//	}
//}

void LogicaDifusa::condiccionesDeLaDistancia()
{
}

void LogicaDifusa::setPesoMaximo(float x)
{
	posMax = x;
}

void LogicaDifusa::reiniciarArrays() {

	for (std::size_t i = 0; i < 4; i++) {

		resultadosVidaEnemigo[i] = 0.0f;
	
	}

	for (std::size_t i = 0; i < 3; i++) {

		//resultadosVidaJugador[i] = 0.0f;
		resultadosDePos[i] = 0.0f;

	}


}
