#ifndef VENDEDOR_H
#define VENDEDOR_H
#include "subcontratado.h"

class Vendedor :
	public SubContratado
{
private:
	float _porcentaje;
public:
	Vendedor(void);
	Vendedor(const char* nombre, float tarifa, float nroHoras, float porcentaje);
	void setPorcentaje(float porcentaje){_porcentaje=porcentaje;}
	float getPorcentaje(){return _porcentaje;}
	void verTodo();
	float calcularPago();
	~Vendedor(void);
};
#endif
