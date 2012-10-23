#include "SubContratado.h"
#include "Empleado.h"

SubContratado::SubContratado(){
	_tarifa = 0.0;
	_nroHoras = 0.0;
}

SubContratado::SubContratado(const char *nombre, float tarifa, float nroHoras):Empleado(nombre){
	setTarifa(tarifa);
	setHoras(nroHoras);
}

SubContratado::~SubContratado()
{
}

void SubContratado::verTodo(){
	Empleado::verTodo();
	cout << "Horas Trabajadas: " << _nroHoras << endl;
	cout << "Tarifa: " << _tarifa << endl;
	cout << "Sueldo Mensual: " << calcularPago() << endl;
}

float SubContratado::calcularPago(){
	return (_tarifa * _nroHoras);
}
