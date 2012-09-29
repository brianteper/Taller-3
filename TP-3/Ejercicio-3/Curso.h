#ifndef CURSO_H
#define CURSO_H
#include "Persona.h"
#include "Alumno.h"
#include "Profesor.h"
#define MAX 50

class Curso
{
private:
	Persona *_vec[MAX];
	int _opcion;
	void GenerarMenu();
	int ObtenerOpcion();
public:
	Curso(void);
	~Curso(void);
	void Procesar();
};

#endif
