#include "Curso.h"

#define NULL 0

int Contador;
char * nombre;
int edad;
int curso;
int cantAsig;
char estCiv;
char est[20];
Alumno * Alu;

char depto[30];
char categ[20];
Profesor * Prof;

Curso::Curso()
{
	_opcion =0;
	for (int i=0; i<MAX; i++) {
		_vec[i] = NULL;
	}
}

Curso::~Curso()
{
	if(nombre){ 
		delete []nombre;
	}
	for (int i=0; i<MAX;i++) {
		if(_vec[i]){
			delete _vec[i];
		}
	}
}

void Curso::Procesar() {
	Contador = -1;
	generarMenu();
	do {
		Contador++;
		switch (obtenerOpcion()) {
			case 1:
				if(nombre){
					delete []nombre;
				}
				nombre = new char[30];
				system("cls");
				cout << "Ingrese Nombre: " << endl;
				cin >> nombre;
				cout << "Ingrese Curso: " << endl;
				cin >> curso;
				cout << "Ingrese Cantidad Asignaturas: " << endl;
				cin >> cantAsig;
				
				do {
					cout << "Ingrese Edad: " << endl;
					cin >> edad;
				} while (edad>150 && edad<0);
				do {
					cout << "Ingrese Estado Civil: " << endl;
					cin >> estCiv;
				} while (toupper(estCiv) != 'C' && toupper(estCiv) != 'S' && toupper(estCiv) != 'O');
				do {	
					cout << "Ingrese Estado: " << endl;
					cin >> est;
				} while (strcmp(est,"regular") != 0 && strcmp(est,"recursante") != 0 && strcmp(est,"baja") != 0);
				
				Alu = new Alumno(nombre, edad, estCiv, curso, cantAsig, est);
				_vec[Contador] = Alu;
				system("cls");
				generarMenu();
				break;
			case 2:
				if(nombre){
					delete []nombre;
				}
				nombre = new char[30];
				system("cls");
				cout << "Ingrese Nombre: " << endl;
				cin >> nombre;
				do {
					cout << "Ingrese Edad: " << endl;
					cin >> edad;
				} while (edad>150 && edad<0);
				do {	
					cout << "Ingrese Estado Civil: " << endl;
					cin >> estCiv;
				} while (toupper(estCiv) != 'C' && toupper(estCiv) != 'S' && toupper(estCiv) != 'O');
				do {
					cout << "Ingrese Departamento: " << endl;
					cin >> depto;
				} while (strcmp(depto,"sistemas") != 0 && strcmp(depto,"control") != 0 && strcmp(depto,"quimica") != 0);
				do {
					cout << "Ingrese Categoria: " << endl;
					cin >> categ;
				} while (strcmp(categ,"titular") != 0 && strcmp(categ,"suplente") != 0 && strcmp(categ,"auxiliar") != 0);
				
				Prof = new Profesor(nombre, edad, estCiv, depto, categ);
				_vec[Contador] = Prof;
				system("cls");
				generarMenu();
				break;
			case 3:
				system("cls");
				for (int i=0; i<MAX; i++) {
					if(_vec[i]) {
						_vec[i]->verTodo(); 
						cout << endl;
					}
				}
				cout << endl;
				generarMenu();
				break;
			case 4:
				system("cls");
				for (int i=0; i<MAX; i++) {
					if(_vec[i]) {
						if (_vec[i]->getTipo() == 'P') {
							cout << "Nombre: " << _vec[i]->getNombre() << endl;
							cout << "Categoria: " << ((Profesor *)_vec[i])->getCategoria() << endl;
							cout << endl;
						}
					}
				}
				cout << endl;
				generarMenu();
				getchar();
				break;
				break;
			case 5:
				system("cls");
				for (int i=0; i<MAX; i++) {
					if(_vec[i]) {
						if (_vec[i]->getTipo() == 'A') {
							cout << "Nombre: " << _vec[i]->getNombre() << endl;
							cout << "Estado: " << ((Alumno *)_vec[i])->getEstado() << endl;
							cout << endl;
						}
					}
				}
				cout<<endl;
				generarMenu();
				getchar();
				break;
				break;
			case 6:
				break; 
			default:
				system("cls");
				generarMenu();
				break;
		}
	} while (obtenerOpcion() != 6 && Contador < MAX);
}

void Curso::generarMenu() {
	cout << "------------------------------------------" << endl;
	cout << "1. Alta de un Alumno" << endl;
	cout << "2. Alta de un Profesor" << endl;
	cout << "3. Mostrar Todos los Datos" << endl;
	cout << "4. Mostrar Nombre Profesor y Categoria" << endl;
	cout << "5. Mostrar Nombre Alumno y Estado" << endl;
	cout << "6. Salir" << endl;
	cout << "------------------------------------------" << endl;

	cout << "Ingrese su Opcion: ";
	cin >> _opcion;
}

int Curso::obtenerOpcion() {
	return _opcion;
}