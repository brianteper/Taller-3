#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
using namespace std;
class Empleado
{
private:
	char _nombre[21];
public:
	Empleado(void);
	Empleado(const char *nombre);
	~Empleado(void);
	void setNombre(const char *nombre);
	const char* getNombre();
	virtual float calcularPago()=0;
	virtual void verTodo(){cout << "nombre: "<<_nombre<<endl;}
};

#endif
