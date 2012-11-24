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

	Arch=fopen("C:\\laberinto.txt","rt");
	if(Arch==NULL)
	{
		cout<<"No se pudo abrir el Archivo de Entrada."<<endl;
		return 0;
	}
	else
	{
		return 1;
	}
	
}

int Archivo::AbrirArchEscritura(FILE *&Arch)
{
	Arch=fopen("c:\\laberintoNuevo.txt","wt");
	if(Arch==NULL)
	{
		cout<<"No se pudo abrir el Archivo de Salida."<<endl;
		return 0;
	}
	else
	{
		return 1;
	}
}

void Archivo::CerrarArch(FILE*&Arch)
{
	fclose(Arch);
}

void Archivo::Parser(FILE*&Arch,int mapaTexto[][ANCHO_LAB])
{
	fgets(_linea,MAXLINEA,Arch);
	while (!feof(Arch))
	{
		_token = strtok(_linea,",");
		for(_c=0;_c<ANCHO_LAB;_c++)
		{
			mapaTexto[_f][_c] = atoi(_token);
			_token = strtok(NULL,",");
		}
		_f++;
		fgets(_linea,MAXLINEA,Arch);
	}
}