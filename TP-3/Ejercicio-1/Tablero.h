#ifndef TABLERO_H 
#include "Circulo.h"
#include "Rectangulo.h"
#define TOPE 8

class Tablero{
private:
	char _cadena[20];
	Circulo *_circ;
	Rectangulo *_rec[TOPE][TOPE];
public:
	Tablero();
	Tablero(char *cad);
	~Tablero();
	void dibujarTablero();
};

#endif 