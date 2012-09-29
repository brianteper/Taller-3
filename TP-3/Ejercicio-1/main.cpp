#include <iostream>
#include "graphics.h" 
#include "Tablero.h"

using namespace std;

void main( ){
		initwindow(800, 600, "Tablero");
		Tablero t("Mi super tablero");
		t.dibujarT();
		refreshallbgi();
		cin.get();
		closegraph();
}