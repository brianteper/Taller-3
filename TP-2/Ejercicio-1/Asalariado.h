#ifndef ASALARIADO_H
#define ASALARIADO_H

#include "Empleado.h"

class Asalariado: public Empleado{
	float _sueldomensual;
public:
	Asalariado(const char* nombre);
	void setSueldoMensual(float sueldomensual); //Extiende
	float getSueldoMensual(); //Extiende
	float calcularPago(); //Especializa
	void verTodo(); //Especializa
};

#endif