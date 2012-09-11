#include "Asalariado.h"
#include <iostream>
using namespace std;

Asalariado::Asalariado(const char* nombre):Empleado(nombre){
	_sueldomensual = 0;
}
	
void Asalariado::setSueldoMensual(float sueldomensual){ //Extiende
	_sueldomensual = sueldomensual;
}
	
float Asalariado::getSueldoMensual(){ //Extiende
	return _sueldomensual;
}

float Asalariado::calcularPago(){ //Especializa
	return _sueldomensual;
}
	
void Asalariado::verTodo(){ //Especializa
	Empleado::verTodo();
	cout << "Sueldo: " << calcularPago() << endl; 
}