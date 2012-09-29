#ifndef ALUMNO_H
#define ALUMNO_H

#include "persona.h"

class Alumno :public Persona {
private:
	int _curso;		//numero de curso
	int _num_asignaturas; //cantidad de asignaturas
	char _estado[20]; //regular, recursante, baja
public:
	Alumno(void);
	Alumno(const char* nombre, int edad, char estadocivil, int curso, 
		   int num_asignaturas, const char* estado);
	~Alumno(void);
	void verTodo();
	int getCurso(){return _curso;}
	char getTipo(){return 'A';}
	const char *getEstado(){return _estado;}
};

#endif