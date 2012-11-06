#ifndef LABERINTO_H
#define LABERINTO_H

class Laberinto {
private:
	int ALTO_LAB;
	int ANCHO_LAB;
	bool listo;
	bool volviendo;
	void Limpiar();
	void MostrarPosicion(int _x, int _y);
	bool Visitar(int _x, int _y);
public:
	Laberinto();
	~Laberinto();
	void CargarFijo();
	void ContenidoAString();
	void Mostrar();
	void Recorrer();
};

#endif