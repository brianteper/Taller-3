#include "Profesor.h"

Profesor::Profesor()
{
	strcpy(_departamento,"");
	strcpy(_categoria,"");
}

Profesor::Profesor(const char *nombre, int edad, char estadocivil,
				   const char *departamento, const char *categoria):Persona(nombre,edad,estadocivil){
		strcpy(_departamento,departamento);
		strcpy(_categoria,categoria);
}

Profesor::~Profesor()
{
}

void Profesor::verTodo(){
	Persona::verTodo();
	cout << "Departamento: " << _departamento << endl;
	cout << "Categoria: " << _categoria << endl;
}
