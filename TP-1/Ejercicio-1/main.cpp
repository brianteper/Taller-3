#include <iostream>
using namespace std;

#define MAX 30
#define MSGINGRESO "Ingrese un caracter, para finalizar ingrese 0:"
#define MSGSHOW "La cadena al reves es:"

void ingreso(char *&puntero, int &cantidad);
void mostrar(char *&puntero, int cantidad);
void liberar(char *&puntero);

void main(){
	char *pvec = new char[MAX+1];
	int cant = 0;

	ingreso(pvec, cant);
	
	mostrar(pvec, cant);

	liberar(pvec);
}

void ingreso(char *&puntero, int &cantidad){
	cout << MSGINGRESO << endl;
	cin >> *puntero;

	while (*puntero != '0' && cantidad < MAX){
		cantidad++;
		*puntero++;
		cout << MSGINGRESO << endl;
		cin >> *puntero;
	}

	*puntero = '\0';
}

void mostrar(char *&puntero, int cantidad){
	system("cls");
	cout << MSGSHOW << endl;

	for (int i = 0; i < cantidad; i++){
		puntero--;
		cout << *puntero << endl; 
	}	
}

void liberar(char *&puntero){
	delete [] puntero;
}