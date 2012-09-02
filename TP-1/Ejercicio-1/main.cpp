#include <iostream>
using namespace std;

#define MAX 30
#define MSGINGRESO "Ingrese una cadena de caracteres:"
#define MSGSHOW "La cadena al reves es:"

void main(){
	char *pvec = new char[MAX+1];
	char *aux = pvec;

	cout << MSGINGRESO << endl;
	cin.getline(pvec, MAX+1);

	while (*pvec != '\0'){
		*pvec++;
	}

	system("cls");
	cout << MSGSHOW << endl;

	*pvec--;
	while (pvec != aux){ 
		cout << *pvec; 
		*pvec--;
	}
	cout << *pvec; 

	delete [] pvec;
}