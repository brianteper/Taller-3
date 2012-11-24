#include "Circulo.h"
#include "graphics.h"

void Circulo::setX(int x){
	_x = x;
}

int Circulo::getX() {
	return _x;
}

void Circulo::setY(int y){
	_y = y;
}

int Circulo::getY() {
	return _y;
}

void Circulo::setRadio(float radio){
	_radio = radio;
}

float Circulo::getRadio() {
	return _radio;
}

void Circulo::dibujar(){
	circle(_x, _y, _radio);
}

Circulo::~Circulo()
{
}

Circulo::Circulo()
{
	_x=0;
	_y=0;
	_radio=0;
}

Circulo::Circulo(int x, int y, float radio){
	_x=x;
	_y=y;
	_radio= radio;
}

