#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

class Persona {
protected:
	char* _nombre;
	int _edad;	//entre 15 y 70
	char _estado_civil; //'C' casado 'S' soltero 'O' otro
public:
	Persona(void);
	Persona(const char* nombre, int edad, char estadocivil);
	~Persona(void){if (_nombre) delete []_nombre;}
	const char* getNombre(){return _nombre;}
	void setNombre(const char *nombre);
	virtual void verTodo();
	virtual char getTipo()=0;
};

#endif