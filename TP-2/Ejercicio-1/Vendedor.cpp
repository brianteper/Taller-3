#include "Vendedor.h"
#include <iostream>
using namespace std;

Vendedor::Vendedor(const char* nombre):SubContratado(nombre){
	_porcentaje = 0;
}

void Vendedor::setPorcentaje(float porcentaje){ //Extiende
	_porcentaje = porcentaje;
}

void Vendedor::verTodo(){ //Especializa
	SubContratado::verTodo();
	cout << "Sueldo + Comision: " << calcularPago() << endl;
}
	
float Vendedor::calcularPago(){ //Especializa
	float total = SubContratado::calcularPago();
	return ((total * _porcentaje / 100) + total);
}