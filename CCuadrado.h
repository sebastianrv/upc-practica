#pragma once

#include <iostream>
using namespace std;
using namespace System;

class CCuadrado
{
public:
	CCuadrado();
	~CCuadrado();
	int getx();
	int gety();
	int getcolor();
	int getdx();
	int getdy();

	void setx(int newX);
	void sety(int newY);
	void setcolor(int newColor);
	void setdx(int newdx);
	void setdy(int newDy);

	void borrar();
	void mover();
	void mostrar();

private:
	int x;
	int y;
	int color;
	int dx;
	int dy;

};

CCuadrado::CCuadrado()
{
	Random r;
	x = 1;
	y = 0;
	dx = 1;
	dy = 1;
	color = r.Next(1, 16);

}

CCuadrado::~CCuadrado()
{
}
int  CCuadrado::getx() { return x; }
int  CCuadrado::gety() { return y; }
int  CCuadrado::getcolor() { return color; }
int  CCuadrado::getdx() { return dx; }
int  CCuadrado::getdy() { return dy; }

void CCuadrado::setx(int newX) { x = newX; }
void CCuadrado::sety(int newY) { y = newY; }
void CCuadrado::setcolor(int newColor) { color = newColor; }
void CCuadrado::setdx(int newdx) { dx = newdx; }
void CCuadrado::setdy(int newDy) { dy = newDy; }

void CCuadrado::borrar()
{
	Console::SetCursorPosition(x, y);
	cout << " ";
}
void CCuadrado::mover()
{
	if(x<79 && y==0)
	{
		x = x + dx;
	}
	if (x > 0 && y == 25)
	{
		x = x - dx;
	}
	if (y < 25&&x == 79)
	{
		y = y + dy;
	}
	if (y>0&&x==0  )
	{
		y = y - dy;
	}
}
void CCuadrado::mostrar()
{
	Console::SetCursorPosition(x, y);
	Console::ForegroundColor = ConsoleColor(color);
	cout << (char)219;
}
