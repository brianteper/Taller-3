#include <iostream>
using namespace std;

#define MAX 30
#define MSGINGRESO "Ingrese una cadena de caracteres:"
#define MSGSHOW "La cadena al reves es:"

class Pila{
private:
	char* _tope; // elemento a apilar
	int _cant; // cantidad de elementos de la pila
	int _max; // cantidad maxima de elementos de la pila
	char *_primero; // apunta al primer elemento de la pila

public:
	Pila(); // constructor por defecto
	Pila(int max); // constructor parametrizado recibe la cant maxima de la pila
	~Pila(); // destructor
	bool push(char dato); // apila un elemento
	bool pop(char &dato); // desapila un elemento y lo devuelve
	bool empty( ); // indica si esta vacia la pila
	bool full( ); // indica si esta llena la pila
	int getCant(){ return _cant;} //devuelve cant. de elementos actuales en la pila
};

Pila::Pila() {
	_max=0;
	_cant=0;
	_primero = new char[_max];
	_tope = _primero;
}

Pila::Pila(int max) {
	_max = max;
	_cant = 0; 
	_primero = new char[_max];
	_tope = _primero;
}

Pila::~Pila(){
	if(_tope){
		delete[] _primero;
	}
}

bool Pila::push(char dato) {
	if(!full()){
		_cant++;
		*_tope = dato;
		_tope++;
		return true;
	}else{
		return false;
	}
}

bool Pila::pop(char &dato) {
	if(!empty()){
		_cant--;
		_tope--;
		dato = *_tope;
		return true;
	}else{
		return false;
	}
}

bool Pila::empty() {
	return (_tope == _primero);
}

bool Pila::full() {
	return (_tope == (_primero + _max));
}

void main(){
	char* ingreso = new char;
	char letra;
	Pila pila(MAX);

	cout << MSGINGRESO << endl;
	cin.getline(ingreso, MAX);

	while (*ingreso != '\0'){
		pila.push(*ingreso);
		ingreso++;
	}

	system("cls");
	cout << MSGSHOW << endl;

	while(!pila.empty()){
		pila.pop(letra);
		cout << letra; 
	}

	cin.get();
}