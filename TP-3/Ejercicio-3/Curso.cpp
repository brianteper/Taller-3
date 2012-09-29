#include "Curso.h"

#define NULL 0

int Contador;
char * nombre;
int edad;
int curso;
int cantasig;
char estciv;
char est[20];
Alumno * Alu;

char depto[30];
char categ[20];
Profesor * Prof;

Curso::Curso(void)
{
	_opcion =0;
	for (int i=0; i<MAX; i++) {
		_vec[i] = NULL;
	}
}

Curso::~Curso(void)
{
	if(nombre) delete []nombre;
	for (int i=0; i<MAX;i++) {
		if(_vec[i]) delete _vec[i];
	}
}

void Curso::Procesar() {
	Contador = -1;
	GenerarMenu();
	do {
		
		Contador++;
		switch (ObtenerOpcion()) {
			case 1:
				if(nombre) delete []nombre;
				nombre = new char[30];
				system("cls");
				cout<<"Ingrese nombre: "<<endl;
				cin>>nombre;
				cout<<"Ingrese curso: "<<endl;
				cin>>curso;
				cout<<"Ingrese cantidad asignaturas: "<<endl;
				cin>>cantasig;
				do {
					cout<<"Ingrese edad: "<<endl;
					cin>>edad;
				} while (edad >150 && edad <0);
				do {
					cout<<"Ingrese estado civil: "<<endl;
					cin>>estciv;
				} while (toupper(estciv) != 'C' && toupper(estciv) != 'S' && toupper(estciv) != 'O');
				do {	
					cout<<"Ingrese estado: "<<endl;
					cin>>est;
				} while (strcmp(est,"regular") != 0 && strcmp(est,"recursante") != 0 && strcmp(est,"baja") != 0);
				Alu = new Alumno(nombre, edad, estciv, curso, cantasig, est); //Upcasting
				_vec[Contador] = Alu;
				system("cls");
				GenerarMenu();
				break;
			case 2:
				if(nombre) delete []nombre;
				nombre = new char[30];
				system("cls");
				cout<<"Ingrese nombre: "<<endl;
				cin>>nombre;
				do {
					cout<<"Ingrese edad: "<<endl;
					cin>>edad;
				} while (edad >150 && edad <0);
				do {	
					cout<<"Ingrese estado civil: "<<endl;
					cin>>estciv;
				} while (toupper(estciv) != 'C' && toupper(estciv) != 'S' && toupper(estciv) != 'O');
				do {
					cout<<"Ingrese departamento: "<<endl;
					cin>>depto;
				} while (strcmp(depto,"sistemas") != 0 && strcmp(depto,"control") != 0 && strcmp(depto,"quimica") != 0);
				do {
					cout<<"Ingrese categoria: "<<endl;
					cin>>categ;
				} while (strcmp(categ,"titular") != 0 && strcmp(categ,"suplente") != 0 && strcmp(categ,"auxiliar") != 0);
				Prof = new Profesor(nombre, edad, estciv, depto, categ); //Upcasting
				_vec[Contador] = Prof;
				system("cls");
				GenerarMenu();
				break;
			case 3:
				system("cls");
				for (int i=0; i<MAX; i++) {
					if(_vec[i]) {
						_vec[i]->verTodo(); //Polimorfismo
						cout<<endl;
					}
				}
				cout<<endl;
				GenerarMenu();
				break;
			case 4:
				system("cls");
				for (int i=0; i<MAX; i++) {
					if(_vec[i]) {
						if (_vec[i]->getTipo() == 'P') {
							cout<<"Nombre: "<<_vec[i]->getNombre()<<endl;
							cout<<"Categoria: "<<((Profesor *)_vec[i])->getCategoria()<<endl; //Downcasting
							cout<<endl;
						}
					}
				}
				cout<<endl;
				GenerarMenu();
				getchar();
				break;
				break;
			case 5:
				system("cls");
				for (int i=0; i<MAX; i++) {
					if(_vec[i]) {
						if (_vec[i]->getTipo() == 'A') {
							cout<<"Nombre: "<<_vec[i]->getNombre()<<endl;
							cout<<"Estado: "<<((Alumno *)_vec[i])->getEstado()<<endl;
							cout<<endl;
						}
					}
				}
				cout<<endl;
				GenerarMenu();
				getchar();
				break;
				break;
			case 6:
				break; 
			default:
				system("cls");
				GenerarMenu();
				break;
		}
	} while (ObtenerOpcion() != 6 && Contador < MAX);
}

void Curso::GenerarMenu() {	cout<<"********************************************************\n";
	cout<<"* 1 - Alta de un Alumno\n";
	cout<<"* 2 - Alta de un profesor\n";
	cout<<"* 3 - Mostrar todos los datos\n";
	cout<<"* 4 - Mostrar nombre profesor y categoria\n";
	cout<<"* 5 - Mostrar nombre alumno y estado\n";
	cout<<"* 6 - Salir\n";
	cout<<"********************************************************\n";
	cout<<"Ingrese su opcion: ";	cin>>_opcion;
}

int Curso::ObtenerOpcion() {
	return _opcion;
}