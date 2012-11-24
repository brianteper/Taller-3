#include "Pared.h"

Pared::Pared(Laberinto* lab, int x, int y):Posicion(lab, x, y){
	setcolor(BROWN);
	setfillstyle(9, BROWN);
	_left=10;
	_top=80;
	_right=25; 
	_bottom=95;
	_pr=NULL;
	_pr=new Rectangulo(
	_left+(LADO*getX()),
	_top+(LADO*getY()),
	_right+(LADO*getX()),
	_bottom+(LADO*getY())
	);
}

Pared::~Pared()
{
	if(_pr)
		delete _pr;
}

void Pared::Dibujar(){
	_pr->dibujar();
}

void Pared::setLeft(int left)
{
	_left=left;
}

void Pared::setTop(int top)
{
	_top=top;
}

void Pared::setRight(int right)
{
	_right=right; 
}

void Pared::setBottom(int bottom)
{
	_bottom=bottom;
}

bool Pared::esValida()
{
	return false;
}

char Pared::getTipo(){
	return 'P';
}