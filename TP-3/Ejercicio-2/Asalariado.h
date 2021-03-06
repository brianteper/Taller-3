#ifndef ASALARIADO_H
#define ASALARIADO_H
#include "empleado.h"

class Asalariado : public Empleado
{
private:
	float _sueldoMensual;
public:
	Asalariado();
	Asalariado(const char *nombre, float sueldoMensual);
	~Asalariado();
	void setSueldoMensual(float sueldo){_sueldoMensual=sueldo;}
	float getSueldoMensual(){return _sueldoMensual;}
	float calcularPago(){return _sueldoMensual;}
	void verTodo();
};

#endif
