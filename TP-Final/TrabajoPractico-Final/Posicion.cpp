#include "Posicion.h"
#include "Laberinto.h"

Posicion::Posicion(Laberinto* lab, int x, int y){
	_lab = lab;
	_x = x;
	_y = y;
}

int Posicion::getX(){
	return _x;
}

int Posicion::getY(){
	return _y;
}