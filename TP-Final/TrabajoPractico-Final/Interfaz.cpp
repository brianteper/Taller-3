#include "Interfaz.h"
#include "graphics.h"
#include <iostream>

using namespace std;

Interfaz::Interfaz(){
	_opcion='\0';
	_opcion2='\0';
	_mg=NULL;
	_ArchE=NULL;
	_ArchS=NULL;
	_arch=new Archivo;
	_lab=new Laberinto;
	Menu();
}

Interfaz::~Interfaz(){
	cout<<"¿Desea guardar el ultimo laberinto generado (S/N)?:";
	cin>>_opcion;
	_opcion=toupper(_opcion);
	if(_opcion=='S')
	{
		Guardar();
	}
	if(_arch)
		delete _arch;
	if(_lab)
		delete _lab;
	if(_mg)
		delete _mg;
}

void Interfaz::Menu()
{
	do
	{
		cout<<"1. Para leer un laberinto desde el disco.\n";
		cout<<"2. Para generar un laberinto al azar.\n";
		cout<<"3. Para guardar el laberinto generado(luego de haber generado un laberinto).\n";
		cout<<"4. Para salir.\n";
		cout<<"Ingrese una opcion:";
		cin>>_opcion;
		switch(_opcion)
		{
			case '1':
			case '2':
				SubMenu();
				break;

			case '3':
				Guardar();
				break;
		}
	}
	while(_opcion!='4');
}

void Interfaz::SubMenu()
{
	do
	{
		cout<<"1. Para recorrer el laberinto utilizando el metodo 1(Derecha, arriba y abajo).\n";
		cout<<"2. Para recorrer el laberinto utilizando el metodo 2(Arriba, derecha y abajo).\n";
		cout<<"3. Para recorrer el laberinto utilizando el metodo 3(Abajo, arriba y derecha).\n";
		cout<<"0. Para volver al menu principal\n";
		cout<<"Ingrese una opcion:";
		cin>>_opcion2;
		if(_opcion2!='0'&&(_opcion2=='1')||(_opcion2=='2')||(_opcion2=='3'))
		{
			if(_mg)delete _mg;
			_mg=new Modograf("..\\TP FINAL 2010");

			if(_opcion=='1')
			{
				_arch->AbrirArchLectura(_ArchE);
				_arch->parser(_ArchE,_mapaTexto);
				_arch->CerrarArch(_ArchE);
				_lab->CargarFijo(_lab, _mapaTexto);
				_lab->Recorrer(_opcion2);
			}
			if(_opcion=='2')
			{
				_lab->CargarRandom(_lab,_mapaTexto);
				_lab->Recorrer(_opcion2);
			}
			cout<<"Presione una tecla para continuar.\n";
			cin.get();
			_lab->Limpiar();
		}
	}
	while(_opcion2!='0');
}

void Interfaz::Guardar(){
	if(_arch->AbrirArchEscritura(_ArchS))
	{
		_lab->ContenidoAString(_ArchS,_mapaTexto);
		_arch->CerrarArch(_ArchS);
		cout<<"El archivo se guardo correctamente!\n";
	}
}

void Interfaz::Leer(){

}
