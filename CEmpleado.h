#pragma once
#include "CFecha.h"
class CEmpleado
{
public:
	CEmpleado(char*n, char *a, CFecha*contra, CFecha*naci);
	~CEmpleado();

private:
	CFecha * FechaContratacion;
	CFecha *FechaNacimiento;
	char *nombre;
	char*apellido;
};

CEmpleado::CEmpleado(char*n, char *a, CFecha*contra, CFecha*naci)
{
	nombre = new char[25];
	apellido = new char[25];
	nombre = n;
	apellido = a;
	FechaContratacion = contra;
	FechaNacimiento = naci;
}

CEmpleado::~CEmpleado()
{
}
