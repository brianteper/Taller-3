#include <iostream>
#include "Empleado.h"
#include "Asalariado.h"
#include "SubContratado.h"
#include "Vendedor.h"
using namespace std;

void main(){
	Asalariado uno("Jorge");
	SubContratado dos("Miguel");
	Vendedor tres("Juan"), cuatro("Ernesto");

	uno.setSueldoMensual(2000);
	dos.setHoras(30);
	dos.setTarifa(50);
	tres.setHoras(30);
	tres.setTarifa(50);
	tres.setPorcentaje(5);
	cuatro.setHoras(30);
	cuatro.setTarifa(50);
	cuatro.setPorcentaje(10);

	uno.verTodo();
	cout << endl;
	dos.verTodo();
	cout << endl;
	tres.verTodo();
	cout << endl;
	cuatro.verTodo();

	getchar();
}