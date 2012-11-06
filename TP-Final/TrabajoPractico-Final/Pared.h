#ifndef PARED_H
#define PARED_H

#include "posicion.h"

class Pared : public Posicion {
public:
	Pared(Laberinto* _lab, int _x, int _y);
	void Dibujar();
	bool esValida();
	char getTipo();
};

#endif