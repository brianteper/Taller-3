#include "Posicion.h"
#include "Laberinto.h"

class Laberinto;
Posicion::Posicion(Laberinto* _lab, int _x, int _y){
	lab = _lab;
	x = _x;
	y = _y;
}

int Posicion::getX(){
	return x;
}

int Posicion::getY(){
	return y;
}