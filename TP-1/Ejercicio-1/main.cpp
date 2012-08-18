#include <iostream>
using namespace std;

#define MAX 31
#define MENSAJE "Ingrese un caracter, para finalizar ingrese 0:"

void main(){
	char *pvec = new char[MAX];
	int cant = 0;
	
	cout << MENSAJE << endl;
	cin >> *pvec;

	while (*pvec != '0'){
		cant++;
		*pvec++;
		cout << MENSAJE << endl;
		cin >> *pvec;
	}

	*pvec = '\0';
	
	for (int i = 0; i < cant; i++){
		pvec--;
		cout << *pvec << endl; 
	}

	delete [] pvec;
}