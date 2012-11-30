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
	cout<<"\250Desea guardar el ultimo laberinto generado (S/N)?:";
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
	initwindow(700, 650);
	bool salir = false;
	while (!salir){
		setcolor(WHITE);

		outtextxy(10,10,"--------------------------------------------------------------------------------------------------------------------------------------------------------------");
		outtextxy(250,30,"MENU PRINCIPAL");
		outtextxy(10,50,"--------------------------------------------------------------------------------------------------------------------------------------------------------------");
		outtextxy(10,70,"1. Leer un laberinto existente.");
		outtextxy(10,90,"2. Generar un laberinto al azar.");
		outtextxy(10,110,"3. Guardar el laberinto ya generado.");
		outtextxy(10,130,"4. Salir.");
		outtextxy(10,150,"--------------------------------------------------------------------------------------------------------------------------------------------------------------");
	
		if (ismouseclick(WM_LBUTTONDOWN)){
			int y = mousey();
			clearmouseclick(WM_LBUTTONDOWN);

				// OPCION 1
			if ((y > 50) && (y < 80)){
				_opcion = '1';
				SubMenu();
				cleardevice();
			}

				// OPCION 2
			if ((y > 80) && (y < 100)){
				_opcion = '2';
				SubMenu();
				cleardevice();
			}

				// OPCION 3
			if ((y > 100) && (y < 120)){
				_opcion = '3';
				Guardar();
				}

				// OPCION 4
			if ((y > 120) && (y < 150)){
				_opcion = '4';
				salir = true;
				closegraph();
			}
		}
	}

}

void Interfaz::SubMenu()
{
	cleardevice();
	bool salir = false;
	while (!salir){
		setcolor(WHITE);

		outtextxy(10,10,"--------------------------------------------------------------------------------------------------------------------------------------------------------------");
		outtextxy(250,30,"MENU TIPO DE RECORRIDO");
		outtextxy(10,50,"--------------------------------------------------------------------------------------------------------------------------------------------------------------");
		outtextxy(10,70,"1. Recorrer el laberinto con el método mas optimo (Derecha, Arriba, Abajo) ");
		outtextxy(10,90,"2. Recorrer el laberinto con el método intermedio (Arriba, Derecha y Abajo)");
		outtextxy(10,110,"3. Recorrer el laberinto con el método menos optimo (Abajo, Arriba y Derecha)");
		outtextxy(10,130,"0. Volver al menu principal");
		outtextxy(10,150,"--------------------------------------------------------------------------------------------------------------------------------------------------------------");

		// CLICK 1 SUBMENU
		if (ismouseclick(WM_LBUTTONDOWN)){
			int y = mousey();
			clearmouseclick(WM_LBUTTONDOWN);

			if ((y > 50) && (y < 80)){
				cleardevice();
				_opcion2 = '1';

				// CLICK 1 MENU PPAL
				if(_opcion=='1')
				{
					if (Leer()){
						_lab->CargarFijo(_lab, _mapaTexto);
						_lab->Recorrer(_opcion2);
						_lab->Limpiar();
					}
				}

				// CLICK 2 MENU PPAL
				if(_opcion=='2')
				{
					_lab->CargarRandom(_lab,_mapaTexto);
					_lab->Recorrer(_opcion2);
					_lab->Limpiar();
				}
			}

			// CLICK 2 SUBMENU
			if ((y > 80) && (y < 100)){
				cleardevice();
				_opcion2 = '2';	

				// CLICK 1 MENU PPAL
				if(_opcion=='1')
				{
					if (Leer()){
						_lab->CargarFijo(_lab, _mapaTexto);
						_lab->Recorrer(_opcion2);
						_lab->Limpiar();
					}
				}
				// CLICK 2 MENU PPAL
				if(_opcion=='2')
				{
					_lab->CargarRandom(_lab,_mapaTexto);
					_lab->Recorrer(_opcion2);
					_lab->Limpiar();
				}
			}

			// CLICK 3 SUBMENU
			if ((y > 100) && (y < 120)){
				cleardevice();
				_opcion2 = '3';

				// CLICK 1 MENU PPAL
				if(_opcion=='1')
				{
					if (Leer()){
						_lab->CargarFijo(_lab, _mapaTexto);
						_lab->Recorrer(_opcion2);
						_lab->Limpiar();
					}
				}
				// CLICK 2 MENU PPAL
				if(_opcion=='2')
				{
					_lab->CargarRandom(_lab,_mapaTexto);
					_lab->Recorrer(_opcion2);
					_lab->Limpiar();
				}
			}

			// CLICK 4 SUBMENU
			if ((y > 120) && (y < 150)){
				salir = true;
			}
		}
	}

}

bool Interfaz::Leer(){
	// VERIFICA QUE EL ARCHIVO EXISTA
	if (_arch->AbrirArchLectura(_ArchE) == 1){
		_arch->Parser(_ArchE,_mapaTexto);
		_arch->CerrarArch(_ArchE);
		return 1;
	}else{
		cout<<"ERROR NO EXISTE EL ARCHIVO DE ENTRADA: "<<RUTA<<endl;
		cin.get();
		return 0;
	}
}


void Interfaz::Guardar(){
	if(_arch->AbrirArchEscritura(_ArchS))
	{
		_lab->ContenidoAString(_mapaTexto, _ArchS);
		_arch->CerrarArch(_ArchS);
		cout<<"El archivo se guardo correctamente!"<<endl;
	}
}

