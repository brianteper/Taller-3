#include "Vendedor.h"

Vendedor::Vendedor(void)
{
	_porcentaje = 0.0;
}

Vendedor::
	Vendedor(const char* nombre, float tarifa, float nroHoras, float porcentaje)
		:SubContratado(nombre,tarifa,nroHoras){
	setPorcentaje(porcentaje);
}

Vendedor::~Vendedor(void)
{
}

float Vendedor::calcularPago(){
	return SubContratado::calcularPago()*(1+_porcentaje/100);
}

void Vendedor::verTodo(){
	SubContratado::verTodo();
	cout<<"Porcentaje: "<<_porcentaje<<endl;
}
