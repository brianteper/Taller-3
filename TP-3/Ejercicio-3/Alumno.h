#ifndef ALUMNO_H
#define ALUMNO_H

#include "persona.h"

class Alumno: public Persona {
private:
	int _curso;		//numero de curso
	int _num_asignaturas; //cantidad de asignaturas
	char _estado[20]; //regular, recursante, baja
public:
	Alumno();
	Alumno(const char* nombre, int edad, char estadocivil, int curso, 
		   int num_asignaturas, const char* estado);
	~Alumno();
	void verTodo(); // muestra todos los datos del alumno
	int getCurso(){return _curso;}
	char getTipo(){return 'A';} // devuelve ‘A’ de alumno
	const char *getEstado(){return _estado;}
};

#endif