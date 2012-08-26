#include <iostream>
using namespace std;

#define MAX 30
#define MSGINGRESO "Ingrese una cadena de caracteres:"
#define MSGSHOW "La cadena al reves es:"

void ingreso(char *&puntero);
int cantcaracteres(char *&puntero);
void mostrar(char *&puntero, int cantidad);
void liberar(char *&puntero);

void main(){
	char *pvec = new char[MAX+1];

	ingreso(pvec);
	
	int cant = cantcaracteres(pvec);

	mostrar(pvec, cant);

	liberar(pvec);
}

void ingreso(char *&puntero){
	cout << MSGINGRESO << endl;
	//Obtengo toda la línea incluyendo los espacios, agrego 1 a MAX para \0
	cin.getline(puntero, MAX+1);
}

int cantcaracteres(char *&puntero){
	int cantidad = 0;
	
	//Cuento la cantidad de caracteres como strlen y me ubico en la última posición para luego mostrar al revés
	while (*puntero != '\0'){
		cantidad++;
		*puntero++;
	}

	return cantidad;
}

void mostrar(char *&puntero, int cantidad){
	system("cls");
	cout << MSGSHOW << endl;

	//Muestro al reves la cantidad de caracteres ingresados
	for (int i = 0; i < cantidad; i++){
		//Comienzo retrocediendo el puntero porque el ultimo caracter es \0
		puntero--;
		cout << *puntero; 
	}	
}

void liberar(char *&puntero){
	delete [] puntero;
}