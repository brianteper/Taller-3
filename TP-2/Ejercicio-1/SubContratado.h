#ifndef SUBCONTRATADO_H
#define SUBCONTRATADO_H

#include "Empleado.h"

class SubContratado: public Empleado{
	float _tarifa;
	float _nohoras;
public:
	SubContratado(const char* nombre);
	void setTarifa(float tarifa); //Extiende
	void setHoras(float nohoras); //Extiende
	void verTodo(); //Especializa
	float calcularPago(); //Especializa
};

#endif