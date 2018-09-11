#pragma once
#include "CCuadrado.h"
class arregloCuadrado
{
public:
	arregloCuadrado();
	~arregloCuadrado();
	void agregar(CCuadrado *nuevo);
	void mostrar();
	void mover();
	void borrar();
	void eliminar();
	void cambiarColor();
	
private:
	CCuadrado **arreglo;
	int *N;
};

arregloCuadrado::arregloCuadrado()
{

	N = new int;
	*N = 1;
	arreglo = new CCuadrado *[*N];
}

arregloCuadrado::~arregloCuadrado()
{

}
void arregloCuadrado::agregar(CCuadrado *nuevo)
{
	arreglo[*N - 1]=nuevo;
	*N = *N + 1;
}
void arregloCuadrado::mostrar()			
{
	for (int i = 0; i < *N-1; i++)
	{
		arreglo[i]->mostrar();
	}
}
void arregloCuadrado::mover()			
{
	for (int  i = 0; i < *N-1; i++)
	{
		arreglo[i]->mover();
	}
}
void arregloCuadrado::borrar()			
{
	for (int i = 0; i < *N-1; i++)
	{
		arreglo[i]->borrar();
	}
}
void arregloCuadrado::eliminar()		
{
	CCuadrado **aux = new CCuadrado*[*N - 1];
	for (int i = 1; i < *N - 1; i++)
	{
		aux[i - 1] = arreglo[i];
	}
	arreglo[0]->borrar();
	*N = *N - 1;
	arreglo = aux;
}
void arregloCuadrado::cambiarColor()
{
	Random r;
	int color;
	for (int  i = 0; i < *N-1; i++)
	{
		color = r.Next(1, 16);
		arreglo[i]->setcolor(color);
	}
}
