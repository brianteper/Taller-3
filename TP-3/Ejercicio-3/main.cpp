#include "Curso.h"

using namespace std;

void main(){
	Curso* c = new Curso();
	c->Procesar();
	delete c;
	getchar();
}