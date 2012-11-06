#ifndef POSICION_H
#define POSICION_H

class Posicion {
private:
	Laberinto* lab;
	int x;
	int y;
public:
	Posicion(Laberinto* _lab, int _x, int _y);
	void Dibujar();
	bool esValida();
	char getTipo();
	int getX();
	int getY();
};

#endif