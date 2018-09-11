#include "CArrCuadrado.h"
#include <conio.h>
int main()
{
	arregloCuadrado*objArrCuadrado = new arregloCuadrado();
	CCuadrado*nuevo;
	nuevo= new CCuadrado();
	objArrCuadrado->agregar(nuevo);
	objArrCuadrado->mostrar();
	while (1)
	{
		_sleep(50);
	
		if (kbhit())
		{
			char tecla = getch();
			switch (tecla)
			{
			case 'a':
				nuevo = new CCuadrado();
				objArrCuadrado->agregar(nuevo);
				break;
			case 'e':
				objArrCuadrado->eliminar();
				break;
			case 'c':
				
				objArrCuadrado->cambiarColor();
				break;
			}
		}
		objArrCuadrado->borrar();
		objArrCuadrado->mover();
		objArrCuadrado->mostrar();
	}
	


}