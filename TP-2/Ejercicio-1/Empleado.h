#ifndef EMPLEADO_H
#define EMPLEADO_H

class Empleado{
	char _nombre[21];
public:
	Empleado();
	Empleado(const char* nombre);
	void setNombre(const char* nombre);
	const char* getNombre();
	float calcularPago();
	void verTodo();
};

#endif