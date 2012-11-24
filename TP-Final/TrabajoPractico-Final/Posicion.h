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
	void Dibujar();
	bool esValida();
	virtual char getTipo() = 0;
	int getX();
	int getY();
};

#endif