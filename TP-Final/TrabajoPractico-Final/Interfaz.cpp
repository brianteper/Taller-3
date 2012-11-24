#include "Interfaz.h"
#include "graphics.h"
#include <iostream>

using namespace std;

Interfaz::Interfaz(){
	_opcion='\0';
	_opcion2='\0';
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
}

void Interfaz::Menu()
{
	do
	{
		system("cls");
		cout<<"1. Para leer un laberinto desde el disco."<<endl;
		cout<<"2. Para generar un laberinto al azar."<<endl;
		cout<<"3. Para guardar el laberinto generado(luego de haber generado un laberinto)."<<endl;
		cout<<"4. Para salir."<<endl;
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
		system("cls");
		cout<<"1. Para recorrer el laberinto utilizando el metodo 1 (Derecha, Arriba y Abajo)."<<endl;
		cout<<"2. Para recorrer el laberinto utilizando el metodo 2 (Arriba, Derecha y Abajo)."<<endl;
		cout<<"3. Para recorrer el laberinto utilizando el metodo 3 (Abajo, Arriba y Derecha)."<<endl;
		cout<<"0. Para volver al menu principal"<<endl;
		cout<<"Ingrese una opcion:";
		cin>>_opcion2;

		if(_opcion2!='0'&&(_opcion2=='1')||(_opcion2=='2')||(_opcion2=='3'))
		{
			initwindow(1000, 650, "Laberinto");

			if(_opcion=='1')
			{
				Leer();
				_lab->CargarFijo(_lab, _mapaTexto);
				refreshallbgi();
				_lab->Recorrer(_opcion2);
			}
			if(_opcion=='2')
			{
				_lab->CargarRandom(_lab,_mapaTexto);
				refreshallbgi();
				_lab->Recorrer(_opcion2);
			}
			cout<<endl<<"Presione una tecla para continuar."<<endl;
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
		cout<<"El archivo se guardo correctamente!"<<endl;
	}
}

void Interfaz::Leer(){
	_arch->AbrirArchLectura(_ArchE);
	_arch->Parser(_ArchE,_mapaTexto);
	_arch->CerrarArch(_ArchE);
}
