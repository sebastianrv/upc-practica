// EJERCICIO 1 DE PPT.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include <conio.h>
#include <iostream>

using namespace System;
using namespace std;

void Listar_arreglo(int *arreglo, int *N)
{
	Console::Clear();
	if (arreglo != NULL)
	{
		for (int i = 0; i < *N; i++)
			cout << "\n" << arreglo[i];
	}
	else
		cout << "\n El arreglo esta vacio....";
	_getch();
}

int *Agrega_Final(int *arreglo, int *N, int elemento)
{
	Console::Clear();
	int *temp = new int[*N +1];
	for (int i = 0; i < *N; i++)
	{
		temp[i] = arreglo[i];
	}
	temp[*N] = elemento;
	*N = *N + 1;
	return temp;
}
int *Eliminar_En_Posicion(int *arreglo, int *N, int posicion)
{
	Console::Clear();
	int *temp = new int[*N - 1];
	for (int i = 0; i < posicion; i++)
	{
		temp[i] = arreglo[i];
	}
	for (int i = posicion+1; i < *N; i++)
	{
		temp[i-1] = arreglo[i];
	}

	/*for (int i = 0, k = 0; i < *N; i++)
	{
		if (i != posicion)
		{
			temp[k] = arreglo[i];
			k++;
		}
	}
	*/
	*N = *N - 1;
	
	return temp;
}

int *Agregar_Inicio(int *arreglo, int *N, int elemento)
{
	Console::Clear();
	int *temp = new int[*N + 1];
	temp[0] = elemento;
	for (int i = 0; i < *N; i++)
		temp[i + 1] = arreglo[i];
	*N = *N + 1;

	return temp;
}
int *Ordenar_Mayor_Menor(int *arreglo, int *N)
{
	int temp;
	for (int i = 0; i < *N; i++)
	{
		for (int j = i+1; j < *N; j++)
		{
			if (arreglo[i] < arreglo[j])
			{
				temp = arreglo[i];
				arreglo[i] = arreglo[j];
				arreglo[j] = temp;
			}
		}
	}
	return arreglo;
}
int MENU()
{
	int opcion;

	do
	{
		cout << "MENU" << endl;
		cout << "1)LISTAR ELEMENTOS" << endl;
		cout << "2)AGREGAR AL FINAL" << endl;
		cout << "3)ELIMINAR POSICION" << endl;
		cout << "4)AGREGAR AL INICIO" << endl;
		cout << "5)ORDENAR DE MAYOR A MENOR" << endl;
		cout << "		INGRESE UNA OPCION			" << endl;
		cin >> opcion;
	} while (opcion<1 || opcion>5);

	return opcion;
}

int main()
{
	int opcion_menu;
	int *Arreglo_dinamico = NULL; // arreglo dinamico
	int *N = new int; //tamano del arreglo
	*N = 0;
	int numero;
	int pos;
	while (1)
	{
		Console::Clear();
		opcion_menu = MENU();
		if (opcion_menu == 1)
		{
			Listar_arreglo(Arreglo_dinamico, N);
		}
		if (opcion_menu == 2)
		{
			cout << "\nIngrese numero (final): ";
			cin >> numero;
			Arreglo_dinamico = Agrega_Final(Arreglo_dinamico, N, numero);
		}
		if (opcion_menu == 3)
		{
			cout << "\nIngrese posicion a eliminar: ";
			cin >> pos;
			if (pos < 0 || pos >= *N)
			{
				_getch();
				Arreglo_dinamico;
			}
			else
			{
				_getch();
				Eliminar_En_Posicion(Arreglo_dinamico, N, pos);
			}
		}
		if (opcion_menu == 4)
		{
			cout << "\nIngrese numero (inicio): ";
			
			cin >> pos;
			Arreglo_dinamico = Agregar_Inicio(Arreglo_dinamico, N, pos);
		}
		if (opcion_menu == 5)
		{
			Arreglo_dinamico = Ordenar_Mayor_Menor(Arreglo_dinamico, N);
		}
	}
	_getch();
	return 0;
	cout << "\nPresione una tecla para continuar ...";
}
