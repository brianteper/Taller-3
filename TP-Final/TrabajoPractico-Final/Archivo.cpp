#include "Archivo.h"

Archivo::Archivo()
{
	_linea=NULL;
	_linea= new char[MAXCHAR2];
	_c=0;
	_f=0;
}

Archivo::~Archivo()
{
	if(_linea)
		delete []_linea;
}

int Archivo::AbrirArchLectura(FILE *&Arch)
{
	Arch=fopen(RUTA,"rt");
	if(Arch==NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	
}

int Archivo::AbrirArchEscritura(FILE *&Arch)
{
	Arch=fopen(RUTA,"wt");
	if(Arch==NULL)
	{
		cout<<"ERROR NO SE PUDO ABRIR EL ARCHIVO DE SALIDA:"<<RUTA<<endl;
		return 0;
	}
	else
	{
		return 1;
	}
}

void Archivo::CerrarArch(FILE*&Arch)
{
	if (Arch){
		fclose(Arch);
	}
}

void Archivo::Parser(FILE*&Arch,int mapaTexto[][ANCHO_LAB])
{
	_f = 0;
	// OBTENEMOS LA LINEA COMPLETA
	fgets(_linea,MAXLINEA,Arch);
	while (!feof(Arch))
	{
		// SEPARAMOS EL CONTENIDO DE LA LINEA CON , 
		_token = strtok(_linea,",");
		for(_c=0;_c<ANCHO_LAB;_c++)
		{
			mapaTexto[_f][_c] = atoi(_token);  // CONVIERTE EL CARACTER A INT Y LO GUARDA EN LA POSICION DE LA MATRIZ
			_token = strtok(NULL,",");
		}
		_f++;
		fgets(_linea,MAXLINEA,Arch);
	}
}