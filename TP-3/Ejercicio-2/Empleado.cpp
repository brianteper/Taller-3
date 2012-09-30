#include "Empleado.h"

Empleado::Empleado(){
	strcpy(_nombre,"\0");
}

Empleado::Empleado(const char *nombre){
	strcpy(_nombre,nombre);
}

Empleado::~Empleado(){
}

void Empleado::setNombre(const char *nombre){
	strcpy(_nombre, nombre);
}
const char* Empleado::getNombre(){
	return _nombre;
}
