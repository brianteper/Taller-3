#include "Interfaz.h"
#include "graphics.h"
#include <iostream>
using namespace std;

void main()
{
	Interfaz* interfaz = new Interfaz();
	delete interfaz;
	refreshallbgi();
	closegraph();
	getchar();
}