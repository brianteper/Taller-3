#ifndef PARED_H
#define PARED_H

#include "Posicion.h"
#include "Comun.h"
#include "Rectangulo.h"

class Pared : public Posicion {
private:
	Rectangulo *_pr;
	int _left;
	int _top;
	int _right; 
	int _bottom;
public:
	Pared(Laberinto* lab, int x, int y);
	~Pared();
	void Dibujar();
	bool esValida();
	char getTipo();
	void setLeft(int left);
	void setTop(int top);
	void setRight(int right);
	void setBottom(int bottom);
};

#endif