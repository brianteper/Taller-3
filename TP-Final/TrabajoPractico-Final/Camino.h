#ifndef CAMINO_H
#define CAMINO_H

#include "Posicion.h"
#include "Comun.h"

class Camino : public Posicion {
private:
	Estado _estado;
	int	_xInicial;
	int _yInicial;
public:
	Camino(Laberinto* _lab, int _x, int _y);
	void CambiarEstado(Estado nuevoEstado);
	void Dibujar();
	bool esValida();
	char getTipo();
};

#endif