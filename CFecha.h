#pragma once

class CFecha
{
public:
	CFecha(int dia, int mes, int a�o);
	~CFecha();

	int getdia();
	int getmes();
	int geta�o();
	void setdia(int d);
	void setmes(int m);
	void seta�o(int a);
	char *mesLetras();
	bool bisiesto();
	bool valido();

private:
	int dia;
	int mes;
	int a�o;
};

CFecha::CFecha(int dia, int mes, int a�o)
{
	this->dia = dia;
	this->mes = mes;
	this->a�o = a�o;

}

CFecha::~CFecha()
{
}
int  CFecha::getdia() { return dia; };
int  CFecha::getmes() { return mes; };
int  CFecha::geta�o() { return a�o; };
void CFecha::setdia(int d) { dia = d; };
void CFecha::setmes(int m) { mes = m; };
void CFecha::seta�o(int a) { a�o = a; };
char *CFecha::mesLetras()	
{ 
	char*aux = new char[20];
	switch (mes)
	{
	case 1:
		aux = "Enero";
		break;
	case 2:
		aux = "Febrero";
		break;
	case 3:
		aux = "Marzo";
		break;
	case 4:
		aux = "Abril";
		break;
	case 5:
		aux = "Mayo";
		break;
	case 6:
		aux = "Junio";
		break;
	case 7:
		aux = "Julio";
		break;
	case 8:
		aux = "Agosto";
		break;
	case 9:
		aux = "Septiembre";
		break;
	case 10:
		aux = "Octubre";
		break;
	case 11:
		aux = "Noviembre";
		break;
	case 12:
		aux = "Diciembre";
		break;
	}
}
bool CFecha::bisiesto()		
{
	if (a�o % 4 == 0)
		return true;
	return false;
}
bool CFecha::valido()		
{
	bool d, m, a = false;

	if (dia >= 0 && dia <= 30)
	{
		d = true;
	}
	if (mes >= 0 && mes <= 12)
	{
		m = true;
	}
	if (a�o < 2018 && a�o>1950)
	{
		a = true;
	}
	if (d == true && m == true && a == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}
