#ifndef POSICION_H
#define POSICION_H

class Laberinto;
class Posicion {
private:
	Laberinto* lab;
	int x;
	int y;
public:
	Posicion(Laberinto* _lab, int _x, int _y);
	virtual void Dibujar() = 0;
	virtual bool esValida() = 0;
	virtual char getTipo() = 0;
	int getX();
	int getY();
};

#endif