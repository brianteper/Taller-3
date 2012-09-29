#ifndef CIRCULO_H 
#define CIRCULO_H

class Circulo{
private:
	int _x;
	int _y;
	float _radio;
public:
	Circulo(void);
	Circulo(int x, int y,float radio);
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
	void setRadio(float radio);
	float getRadio();
	void dibujar();
	~Circulo(void);

};//fin clase

#endif