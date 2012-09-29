#ifndef SUBCONTRATADO_H
#define SUBCONTRATADO_H

#include "empleado.h"

class SubContratado :
	public Empleado
{
private:
	float _tarifa;
	float _nroHoras;
public:
	SubContratado(void);
	SubContratado(const char* nombre, float tarifa, float nroHoras);
	~SubContratado(void);
	void setTarifa(float tarifa){_tarifa=tarifa;}
	float getTarifa(){return _tarifa;}
	void setHoras(float nroHoras){_nroHoras=nroHoras;}
	float getHoras(){return _nroHoras;}
	void verTodo();
	float calcularPago();
};

#endif
