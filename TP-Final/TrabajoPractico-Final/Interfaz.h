#ifndef INTERFAZ_H
#define INTERFAZ_H

#include "Laberinto.h"
#include "Archivo.h"

class Interfaz {
private:
	Laberinto	*_lab;
	Archivo		*_arch;
	FILE		*_ArchE;
	FILE		*_ArchS;
	char		_opcion;
	char		_opcion2;
	int			_mapaTexto[ALTO_LAB][ANCHO_LAB];
public:
	Interfaz();
	~Interfaz();
	void Guardar();
	void Leer();
	void Menu();
	void SubMenu();
};

#endif