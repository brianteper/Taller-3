#include "Vendedor.h"

Vendedor::Vendedor()
{
	_porcentaje = 0.0;
}

Vendedor::Vendedor(const char* nombre, float tarifa, float nroHoras, float porcentaje)
	:SubContratado(nombre,tarifa,nroHoras){
	setPorcentaje(porcentaje);
}

Vendedor::~Vendedor(void)
{
}

float Vendedor::calcularPago(){
	float total = SubContratado::calcularPago();
	return ((total * _porcentaje / 100) + total);
}

void Vendedor::verTodo(){
	SubContratado::verTodo();
	cout << "Porcentaje: " << _porcentaje << endl;
}
