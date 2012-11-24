#include "Camino.h"
#include "Circulo.h"
#include "graphics.h"

Camino::Camino(Laberinto* _lab, int _x, int _y):Posicion(_lab, _x, _y){
	_estado = LIBRE;
	_xInicial = 18;
	_yInicial = 88;
}

void Camino::CambiarEstado(Estado nuevoEstado){
	_estado = nuevoEstado;
}

void Camino::Dibujar(){
	Circulo* _pc=new Circulo(
	_xInicial+(LADO*getx()),
	_yInicial+(LADO*gety()),
	RADIO
	);
	if(_estado==VISITADO)
	{
		setcolor(GREEN);
		setfillstyle(1, GREEN);
		_pc->dibujar();
	}
	if(_estado==DESCARTADO)
	{
		setcolor(RED);
		setfillstyle(1, RED);
		_pc->dibujar();
	}
}

bool Camino::esValida(){
	return (_estado==LIBRE);
}

char Camino::getTipo(){
	return 'C';
}