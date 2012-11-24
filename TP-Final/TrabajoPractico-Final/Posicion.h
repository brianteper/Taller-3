#ifndef POSICION_H
#define POSICION_H

class Laberinto;
class Posicion {
private:
	Laberinto* _lab;
	int _x;
	int _y;
public:
	Posicion(Laberinto* lab, int x, int y);
	virtual void Dibujar() = 0;
	virtual bool esValida() = 0;
	virtual char getTipo() = 0;
	int getX();
	int getY();
};

#endif