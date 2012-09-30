#include "Persona.h"

using namespace std;

Persona::Persona()
{
	_nombre = new char[30];
	strcpy(_nombre,"");
	_edad = 0;
	_estado_civil = '\0';
}

Persona::Persona(const char *nombre, int edad, char estadocivil){
	_nombre = NULL;
	setNombre(nombre);	
	_edad = edad;
	_estado_civil = estadocivil; 
}

void Persona::verTodo(){
	cout << "Nombre: " << _nombre << endl;
	cout << "Edad: " << _edad << endl;
	cout << "Estado Civil: " << _estado_civil << endl;
}

void Persona::setNombre(const char *nombre){
	if(_nombre){
		delete []_nombre;
	}
	_nombre = new char[strlen(nombre)+1];
	strcpy(_nombre,nombre);
}