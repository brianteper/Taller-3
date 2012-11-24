#ifndef LABERINTO_H
#define LABERINTO_H

#include "Posicion.h"
#include "Pared.h"
#include "Camino.h"

class Laberinto {
private:
	Posicion	*_mapa[ALTO_LAB][ANCHO_LAB];
	char		*_texto;
	int			_alto_lab;
	int			_ancho_lab;
	bool		_listo;
	bool		_ingreso;
	int			_left;
	int			_top;
	int			_right;
	int			_bottom;
	int			_f;
	int			_c;
	int			_x; 
	int			_random;
	bool		_entrada;
	bool		_salida;
public:
	Laberinto();
	~Laberinto();
	void CargarFijo(Laberinto*l,int mapaTexto[][ANCHO_LAB]);
	void CargarRandom(Laberinto*l,int mapaTexto[][ANCHO_LAB]);
	void ContenidoAString(FILE *&Arch,int mapaTexto[][ANCHO_LAB]);
	void Recorrer(char opcion);
	void MostrarTexto();
	void MostrarTextoSalida();
	void MostrarTextoSinSalida();
	bool Visitar(int x, int y);
	bool Visitar2(int x, int y);
	bool Visitar3(int x, int y);
	void Limpiar();
};

#endif