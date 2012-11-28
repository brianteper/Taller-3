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
	initwindow(700, 650, "Laberinto");
	
	bool salir = false;
	while (!salir){
		setcolor(WHITE);

		outtextxy(10,10,"--------------------------------------------------------------------------------------------------------------------------------------------------------------");
		outtextxy(250,30,"MENU PRINCIPAL");
		outtextxy(10,50,"--------------------------------------------------------------------------------------------------------------------------------------------------------------");
		outtextxy(10,70,"1. Para leer un laberinto desde el disco.");
		outtextxy(10,90,"2. Para generar un laberinto al azar.");
		outtextxy(10,110,"3. Para guardar el laberinto generado(luego de haber generado un laberinto).");
		outtextxy(10,130,"4. Para salir.");
		outtextxy(10,150,"--------------------------------------------------------------------------------------------------------------------------------------------------------------");

		if (ismouseclick(WM_LBUTTONDOWN)){
			int y = mousey();
			clearmouseclick(WM_LBUTTONDOWN);

			if ((y > 50) && (y < 80)){
				_opcion = '1';
				SubMenu();
				cleardevice();
			}

			if ((y > 80) && (y < 100)){
				_opcion = '2';
				SubMenu();
				cleardevice();
			}

			if ((y > 100) && (y < 120)){
				_opcion = '3';
				Guardar();
			}

			if ((y > 120) && (y < 150)){
				_opcion = '4';
				salir = true;
				closegraph();
			}
		}
	}

	/*do
	{
		system("cls");
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout << "                         MENU PRINCIPAL" << endl;
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout<<"1. Para leer un laberinto desde el disco."<<endl;
		cout<<"2. Para generar un laberinto al azar."<<endl;
		cout<<"3. Para guardar el laberinto generado(luego de haber generado un laberinto)."<<endl;
		cout<<"4. Para salir."<<endl;
		cout<<"-------------------------------------------------------------------------------"<<endl;
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
	while(_opcion!='4');*/
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
		outtextxy(10,70,"1. Para recorrer el laberinto utilizando el metodo 1 (Derecha, Arriba y Abajo).");
		outtextxy(10,90,"2. Para recorrer el laberinto utilizando el metodo 2 (Arriba, Derecha y Abajo).");
		outtextxy(10,110,"3. Para recorrer el laberinto utilizando el metodo 3 (Abajo, Arriba y Derecha).");
		outtextxy(10,130,"0. Para volver al menu principal");
		outtextxy(10,150,"--------------------------------------------------------------------------------------------------------------------------------------------------------------");

		if (ismouseclick(WM_LBUTTONDOWN)){
			int y = mousey();
			clearmouseclick(WM_LBUTTONDOWN);

			if ((y > 50) && (y < 80)){
				cleardevice();
				_opcion2 = '1';

				if(_opcion=='1')
				{
					if (Leer()){
						_lab->CargarFijo(_lab, _mapaTexto);
						refreshallbgi();
						_lab->Recorrer(_opcion2);
						salir = true;
					}
				}
				if(_opcion=='2')
				{
					_lab->CargarRandom(_lab,_mapaTexto);
					refreshallbgi();
					_lab->Recorrer(_opcion2);
					salir = true;
				}
			}

			if ((y > 80) && (y < 100)){
				cleardevice();
				_opcion2 = '2';

				if(_opcion=='1')
				{
					if (Leer()){
						_lab->CargarFijo(_lab, _mapaTexto);
						refreshallbgi();
						_lab->Recorrer(_opcion2);
						salir = true;
					}
				}
				if(_opcion=='2')
				{
					_lab->CargarRandom(_lab,_mapaTexto);
					refreshallbgi();
					_lab->Recorrer(_opcion2);
					salir = true;
				}
			}

			if ((y > 100) && (y < 120)){
				cleardevice();
				_opcion2 = '3';

				if(_opcion=='1')
				{
					if (Leer()){
						_lab->CargarFijo(_lab, _mapaTexto);
						refreshallbgi();
						_lab->Recorrer(_opcion2);
						salir = true;
					}
				}
				if(_opcion=='2')
				{
					_lab->CargarRandom(_lab,_mapaTexto);
					refreshallbgi();
					_lab->Recorrer(_opcion2);
					salir = true;
				}
			}

			if ((y > 120) && (y < 150)){
				salir = true;
			}
		}
	}

	/*do
	{
		system("cls");
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout << "                         MENU TIPO DE RECORRIDO " << endl;
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout<<"1. Para recorrer el laberinto utilizando el metodo 1 (Derecha, Arriba y Abajo)."<<endl;
		cout<<"2. Para recorrer el laberinto utilizando el metodo 2 (Arriba, Derecha y Abajo)."<<endl;
		cout<<"3. Para recorrer el laberinto utilizando el metodo 3 (Abajo, Arriba y Derecha)."<<endl;
		cout<<"0. Para volver al menu principal"<<endl;
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout<<"Ingrese una opcion:";
		cin>>_opcion2;

		if(_opcion2!='0'&&(_opcion2=='1')||(_opcion2=='2')||(_opcion2=='3'))
		{
			if(_opcion=='1')
			{
				if (Leer()){
					_lab->CargarFijo(_lab, _mapaTexto);
					refreshallbgi();
					_lab->Recorrer(_opcion2);
				}
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
	while(_opcion2!='0');*/
}

void Interfaz::Guardar(){
	if(_arch->AbrirArchEscritura(_ArchS))
	{
		_lab->ContenidoAString(_ArchS,_mapaTexto);
		_arch->CerrarArch(_ArchS);
		cout<<"El archivo se guardo correctamente!"<<endl;
	}
}

bool Interfaz::Leer(){
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
