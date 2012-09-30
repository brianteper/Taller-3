#include <iostream>
#include "graphics.h" 
#include "Tablero.h"

using namespace std;

void main( ){
	initwindow(800, 700, "Tablero"); //Medidas para que se vea todo el tablero
	Tablero t("Tablero");
	t.dibujarTablero();
	refreshallbgi();
	cin.get();
	closegraph();
}