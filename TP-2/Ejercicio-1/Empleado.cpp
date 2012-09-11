#include "Empleado.h"
#include <iostream>
using namespace std;

Empleado::Empleado(const char* nombre){
	strcpy(_nombre, nombre);
}

void Empleado::setNombre(const char* nombre){
	strcpy(_nombre, nombre);
}

const char* Empleado::getNombre(){
	return _nombre;
}

float Empleado::calcularPago(){
	return 0.0;
}

void Empleado::verTodo(){ 
	cout<< "Nombre: " << _nombre << endl; 
}