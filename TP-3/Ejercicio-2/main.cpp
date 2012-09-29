#include <iostream>
#include "Empleado.h"
#include "Asalariado.h"
#include "SubContratado.h"
#include "Vendedor.h"

using namespace std;

void main(){
	system("cls");

	Empleado *vec[5]={NULL,NULL,NULL,NULL,NULL};

	vec[0]=new Asalariado("fernando",2000);
	vec[1]=new SubContratado("nicolas",50,180);
	vec[2]=new SubContratado("melina",50,100);
	vec[3]=new Vendedor("piere",40,80,10);
	vec[4]=new Vendedor("pepe",35,80,5);

	for(int i=0;i<5;i++){
		if(vec[i]){
			vec[i]->verTodo();
			cout<<"Sueldo Mensual: "<<vec[i] -> calcularPago()<<endl<<endl;
		}
	}
	
	for(int i=0;i<5;i++){
		if(vec[i]) delete vec[i];
	}
	getchar();
}