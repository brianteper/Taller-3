#include <iostream>
using namespace std;

class Uno {
	private:
		int _dato;
	public:
		Uno() { _dato = 0; }
		~Uno() { cout << "me voy chau!" << endl; }
		void setDato(int dato) { _dato = dato; }
		int getDato() { return _dato; }
		void mostrar();
};

void Uno::mostrar() {
	cout << "El dato es: " << _dato << endl;
}

void main ()
{
	Uno objeto1, objeto2, objeto3;
	
	objeto1.setDato(10);
	objeto2.setDato(5);

	objeto1.mostrar();
	objeto2.mostrar();
	objeto3.mostrar();

	cout << objeto1.getDato();

	cin.get();
}