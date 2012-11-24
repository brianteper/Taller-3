#ifndef CAMINO_H
#define CAMINO_H

#include "Posicion.h"
#include "Comun.h"
#include "Circulo.h"

class Camino : public Posicion {
private:
	Estado _estado;
	int	_xInicial;
	int _yInicial;
	Circulo *_pc;
public:
	Camino(Laberinto* _lab, int _x, int _y);
	~Camino();
	void CambiarEstado(Estado nuevoEstado);
	void Dibujar();
	bool esValida();
	char getTipo();
};

#endif