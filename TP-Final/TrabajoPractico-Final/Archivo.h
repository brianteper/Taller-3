#ifndef ARCHIVO_H
#define ARCHIVO_H

#include "Comun.h"

class Archivo
{
private:
	char *_token;
	char *_linea;
	int _c;
	int	_f;

public:
	Archivo();
	~Archivo();
	int AbrirArchLectura(FILE *&Arch);
	int AbrirArchEscritura(FILE *&Arch);
	void CerrarArch(FILE *&Arch);
	void Parser(FILE*&Arch,int mapaTexto[][ANCHO_LAB]);
};

#endif