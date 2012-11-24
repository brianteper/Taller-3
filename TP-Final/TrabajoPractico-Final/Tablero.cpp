#include "Tablero.h"
#include "graphics.h"

Tablero::Tablero(){
	_circ = new Circulo(50,50,30);
	strcpy(_cadena, "Tablero");
	int x1=100;
	int y1=100;
	int x2=170;
	int y2=170;

	outtextxy(45,40,"A");

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
	_circ = new Circulo(50,50,25);
	strcpy(_cadena, cad);
	int x1=100;
	int y1=100;
	int x2=170;
	int y2=170;

	outtextxy(45,40,"A");

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

void Tablero::dibujarTablero(){
	_circ->dibujar();
	
	char _cad[3]="";
	char _cadn[3]="";
	int xt=125;
	int yt=70;

	_cad[0]='A';
	_cadn[0]='1';

	for(int i=0;i<TOPE;i++){
		outtextxy(xt,yt,_cad);
		outtextxy(yt,xt,_cadn);
		_cad[0]++;
		_cadn[0]++;
		xt=xt+72;
	}

	outtextxy(100,30,_cadena);

	for(int i = 0; i < TOPE; i++){
		for(int j = 0; j < TOPE; j++){
			if(_rec[i][j]){
				_rec[i][j]->dibujar();
			}
		}
	}
}

Tablero::~Tablero()
{
	if(_circ){
		delete _circ;
	}
	for(int i = 0; i < TOPE; i++){
		for(int j = 0; j < TOPE; j++){
			if(_rec[i][j]){
				delete _rec[i][j];
			}
		}
	}
}

