#include "Pared.h"

Pared::Pared(Laberinto* _lab, int _x, int _y):Posicion(_lab, _x, _y){

}

void Pared::Dibujar(){

}

bool Pared::esValida(){
	return false;
}

char Pared::getTipo(){
	return 'P';
}