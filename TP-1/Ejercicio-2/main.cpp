#include <iostream>
using namespace std;

#define MAX 30
#define MSGINGRESO "Ingrese una cadena de caracteres:"
#define MSGSHOW "La cadena al reves es:"

class Pila{
private:
	char* _tope; // elemento a apilar
	//char* _aux;
	int _cant; // cantidad de elementos de la pila
	int _max; // cantidad maxima de elementos de la pila

public:
	Pila(){ Pila(0); } // constructor por defecto
	Pila(int max); // constructor parametrizado recibe la cant maxima de la pila
	~Pila(); // destructor
	void push(char dato); // apila un elemento
	char pop( ); // desapila un elemento y lo devuelve
	bool empty( ); // indica si esta vacia la pila
	bool full( ); // indica si esta llena la pila
	int getCant(){ return _cant;} //devuelve cant. de elementos actuales en la pila
};

Pila::Pila(int max) {
	_max = max;
	_cant = 0;
	_tope = new char[max+1];
	//*_tope = '\0';
	//_aux = new char;
	//*_aux = *_tope;
}

Pila::~Pila() {
	while (!empty()){
		char* c = (char*)pop();
		delete c;
	}
}

void Pila::push(char dato) {
	if (!full()){
		_cant++;
		*_tope = dato;
		//*_aux = *_tope;
		_tope++;
		*_tope = '\0';
	}
}

char Pila::pop() {
	if (!empty()){
		_tope--;
		_cant--;	
		char aux = *_tope;
		*_tope = '\0';
		//*_aux = *(_tope - 1);		
		return aux;
	}else{
		return NULL;
	}
}

bool Pila::empty() {
	return (_tope != NULL);
}

bool Pila::full() {
	char* aux = new char;
	if (!aux) {
		return false;	// No hay mas memoria disponible
	} else {
		delete aux;
		if (_max != 0) {
			return (getCant() == _max);
		} else {
			return false;
		}
	}
}

void main(){
	char* ingreso = new char;
	Pila pila(MAX);

	cout << MSGINGRESO << endl;
	cin.getline(ingreso, MAX+1);

	while (*ingreso != '\0'){
		pila.push(*ingreso);
		*ingreso++;
	}

	system("cls");
	cout << MSGSHOW << endl;

	while(!pila.empty()){
		cout << pila.pop(); 
	}
}