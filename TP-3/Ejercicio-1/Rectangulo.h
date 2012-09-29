#ifndef RECTANGULO_H 
#define RECTANGULO_H 
//#include "graphics.h"
class Rectangulo{

private:
	int _y1;
	int _x2;
	int _y2;
	int _x1;
	int _ancho;
	int _alto;
public:
	Rectangulo(void);
	Rectangulo(int x1,int y1, int x2, int y2);
	void setX1(int x);
	int getX1();
	void setY1(int y);
	int getY1();
	void setX2(int x);
	int getX2();
	void setY2(int y);
	int getY2();
	int getAncho();
	int getAlto();
	void dibujar();
	~Rectangulo(void);
};//fin clase

#endif