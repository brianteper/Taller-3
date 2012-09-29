#include "Asalariado.h"
#include "Empleado.h"

Asalariado::Asalariado(void){
	_sueldoMensual = 0.0;
}

Asalariado::Asalariado(const char *nombre, float sueldoMensual):Empleado(nombre){
	setSueldoMensual(sueldoMensual);
}

Asalariado::~Asalariado(void)
{
}

void Asalariado::verTodo(){
	Empleado::verTodo();
	//cout<<"Sueldo Mensual: "<<_sueldoMensual<<endl;
}

