#pragma once

class CFecha
{
public:
	CFecha(int dia, int mes, int año);
	~CFecha();

	int getdia();
	int getmes();
	int getaño();
	void setdia(int d);
	void setmes(int m);
	void setaño(int a);
	char *mesLetras();
	bool bisiesto();
	bool valido();

private:
	int dia;
	int mes;
	int año;
};

CFecha::CFecha(int dia, int mes, int año)
{
	this->dia = dia;
	this->mes = mes;
	this->año = año;

}

CFecha::~CFecha()
{
}
int  CFecha::getdia() { return dia; };
int  CFecha::getmes() { return mes; };
int  CFecha::getaño() { return año; };
void CFecha::setdia(int d) { dia = d; };
void CFecha::setmes(int m) { mes = m; };
void CFecha::setaño(int a) { año = a; };
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
	if (año % 4 == 0)
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
	if (año < 2018 && año>1950)
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
