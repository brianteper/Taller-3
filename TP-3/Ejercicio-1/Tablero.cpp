#include "Tablero.h"
#include "graphics.h"

Tablero::Tablero(void){
	_cir = new Circulo(50,50,30);
	strcpy(_cadena, "Tablero");
	int x1=100;
	int y1=100;
	int x2=170;
	int y2=170;
	for(int i = 0; i < TOPE; i++){
		for(int j = 0; j < TOPE; j++){
			_rec[i][j] = new Rectangulo(x1,y1,x2,y2);
			x1+=70;
			x2+=70;
		}
		x1=100;
		x2=170;
		y1+=70;
		y2+=70;
	}
}

Tablero::Tablero(char *cad){
	_cir = new Circulo(50,50,25);
	strcpy(_cadena, cad);
	int x1=100;
	int y1=100;
	int x2=170;
	int y2=170;
	for(int i = 0; i < TOPE; i++){
		for(int j = 0; j < TOPE; j++){
			_rec[i][j] = new Rectangulo(x1,y1,x2,y2);
			x1+=70;
			x2+=70;
		}
		x1=100;
		x2=170;
		y1+=70;
		y2+=70;
	}
}

void Tablero::dibujarT(){
	_cir->dibujar();
	outtextxy(100,50,_cadena);
	for(int i = 0; i < TOPE; i++){
		for(int j = 0; j < TOPE; j++){
			if(_rec[i][j])_rec[i][j]->dibujar();
		}
	}
}

Tablero::~Tablero(void)
{
	if(_cir)delete _cir;
	for(int i = 0; i < TOPE; i++){
		for(int j = 0; j < TOPE; j++){
			if(_rec[i][j]) delete _rec[i][j];
		}
	}
}

