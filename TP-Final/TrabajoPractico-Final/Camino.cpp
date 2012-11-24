#include "Camino.h"

Camino::Camino(Laberinto* _lab, int _x, int _y):Posicion(_lab, _x, _y){

}

void Camino::CambiarEstado(int nuevoEstado){

}

void Camino::Dibujar(){

}

bool Camino::esValida(){
	return false;
}

char Camino::getTipo(){
	return 'C';
}