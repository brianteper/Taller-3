#ifndef CURSO_H
#define CURSO_H
#include "Persona.h"
#include "Alumno.h"
#include "Profesor.h"
#define MAX 50

class Curso {
private:
	Persona *_vec[MAX];
	int _opcion;
	void generarMenu();
	int obtenerOpcion();
public:
	Curso();
	~Curso();
	void Procesar();
};

#endif
