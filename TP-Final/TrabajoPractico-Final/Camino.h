#ifndef CAMINO_H
#define CAMINO_H

#include "posicion.h"

class Camino : public Posicion {
private:
	enum Estado { LIBRE, VISITADO, DESCARTADO };
public:
	Camino(Laberinto* _lab, int _x, int _y);
	void CambiarEstado(int nuevoEstado);
	void Dibujar();
	bool esValida();
	char getTipo();
};

#endif