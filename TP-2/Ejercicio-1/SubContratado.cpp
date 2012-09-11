#include "SubContratado.h"
#include <iostream>
using namespace std;

SubContratado::SubContratado(const char* nombre):Empleado(nombre){
	_tarifa = 0;
	_nohoras = 0;
}

void SubContratado::setTarifa(float tarifa){ //Extiende
	_tarifa = tarifa;
}

void SubContratado::setHoras(float nohoras){ //Extiende
	_nohoras = nohoras;
}

void SubContratado::verTodo(){ //Especializa
	Empleado::verTodo();
	cout << "Tarifa: " << _tarifa << endl << "No. Horas: " << _nohoras << endl << "Sueldo: " << calcularPago() << endl;
}
	
float SubContratado::calcularPago(){ //Especializa
	return (_tarifa * _nohoras);
}