#include "Rectangulo.h"
#include "graphics.h"

void Rectangulo::setX1(int x){
	_x1 = x;
}

int Rectangulo::getX1() {
	return _x1;
}

void Rectangulo::setY1(int y){
	_y1 = y;
}

int Rectangulo::getY1() {
	return _y1;
}

void Rectangulo::setX2(int x){
	_x2 = x;
}

int Rectangulo::getX2() {
	return _x2;
}

void Rectangulo::setY2(int y){
	_y2 = y;
}

int Rectangulo::getY2() {
	return _y2;
}

int Rectangulo::getAlto() {
	return _alto;
}

int Rectangulo::getAncho() {
	return _ancho;
}

void Rectangulo::dibujar(){
	rectangle(_x1,_y1,_x2,_y2);
}

Rectangulo::~Rectangulo()
{
}

Rectangulo::Rectangulo()
{
	_y1=0;
	_x2=0;
	_y2=0;
	_x1=0;
	_ancho=0;
	_alto=0;
}

Rectangulo::Rectangulo(int x1, int y1, int x2, int y2)
{
	_y1=x1;
	_x2=y1;
	_y2=x2;
	_x1=y2;
}