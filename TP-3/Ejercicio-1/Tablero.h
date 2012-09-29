#ifndef TABLERO_H 
#include "Circulo.h"
#include "Rectangulo.h"
#define TOPE 8

class Tablero{
private:
	char _cadena[20];
	Circulo *_cir;
	Rectangulo *_rec[TOPE][TOPE];
public:
	Tablero(void);
	Tablero(char *cad);
	~Tablero(void);
	void dibujarT();
};//fin clase

#endif 