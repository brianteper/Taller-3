#include "Alumno.h"

Alumno::Alumno()
{
	_curso=0;
	_num_asignaturas=0;
	strcpy(_estado,"");
}

Alumno::Alumno(const char *nombre, int edad, char estadocivil, int curso, 
	           int num_asignaturas, const char *estado):Persona(nombre,edad,estadocivil){
	_curso = curso;
	_num_asignaturas = num_asignaturas;
	strcpy(_estado,estado);
}

Alumno::~Alumno()
{
}

void Alumno::verTodo(){
	Persona::verTodo();
	cout << "Curso: " << _curso << endl;
	cout << "Numero de asignaturas: " << _num_asignaturas << endl;
	cout << "Estado: " << _estado << endl;
}
