#include "Camino.h"
#include "Circulo.h"
#include "graphics.h"

Camino::Camino(Laberinto* lab, int x, int y):Posicion(lab, x, y){
	_estado = LIBRE;
	_xInicial = 18;
	_yInicial = 88;
	_pc=NULL;
}

Camino::~Camino()
{
	if(_pc)
		delete _pc;
}

void Camino::CambiarEstado(Estado nuevoEstado){
	_estado = nuevoEstado;
}

void Camino::Dibujar(){
	_pc=new Circulo(
	_xInicial+(LADO*getX()),
	_yInicial+(LADO*getY()),
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