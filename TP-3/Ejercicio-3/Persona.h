#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

class Persona {
protected:
	char* _nombre; // es un puntero de char no una cadena debe pedir memoria !
	int _edad;	// entre 15 y 70
	char _estado_civil; // 'C' casado 'S' soltero 'O' otro
public:
	Persona();
	Persona(const char* nombre, int edad, char estadocivil);
	~Persona(){if (_nombre) delete []_nombre;}
	const char* getNombre(){return _nombre;}
	void setNombre(const char *nombre);
	virtual void verTodo(); // muestra todos los datos de la persona
	virtual char getTipo()=0; // devuelve el “tipo” según corresponda (tipo de…).
};

#endif