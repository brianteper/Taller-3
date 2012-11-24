#include "Modograf.h"

Modograf::Modograf(char * folder) 
{
	_gdriver = DETECT;
	initgraph(&_gdriver, &_gmode, folder);
	
	_errorcode = graphresult();
	if (_errorcode != grOk)
	{
		cout << "Error al pasar al modo gráfico:" << grapherrormsg(_errorcode) << "\n";
		cout << "Pulse una tecla para terminar:";
		getch();
	}
}

Modograf::~Modograf()
{
	closegraph();
}