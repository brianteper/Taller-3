#ifndef PROFESOR_H
#define PROFESOR_H
#include "persona.h"

class Profesor :public Persona {
private:
	char _departamento[30]; //analista, control, quimica
	char _categoria[20]; //titular, suplente
public:
	Profesor(void);
	Profesor(const char* nombre, int edad, char estadocivil, const char* departamento, const char* categoria);
	~Profesor(void);
	void verTodo();
	const char* getCategoria(){return _categoria;}
	char getTipo(){ return 'P';} //devulve 'P' de profesor
};
#endif
