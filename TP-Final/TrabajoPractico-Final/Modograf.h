#include "Comun.h"
#include "Circulo.h"
#include "Rectangulo.h"

class Modograf
{
private:
	int _gdriver;  
	int _gmode;
	int _errorcode;
	
public:
	Modograf(char * folder);
	~Modograf();
};