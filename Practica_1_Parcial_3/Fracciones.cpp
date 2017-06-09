#include "stdafx.h"
#include "Fracciones.h"

Fracciones::Fracciones(int a, int b, int c)
{
	this->Entero = a;
	this->Numerador = b;
	this->Denominador = c;
}

Fracciones::~Fracciones(){}

void Fracciones::asignarD(int d) 
{
	 this->Denominador = d;
}

void Fracciones::asignarN(int e)
{
	this->Numerador = e;
}

Fracciones Fracciones::Simplificar()
{
	int N = this->Numerador;
	int D = this->Denominador;
	int E = this->Entero;
	if (N >= D)
	{
		if (N = D)
		{
			E = N / D;
			N = 0;
			D = 0;
		}
		else
		{
			while (N >= D)
			{
				D -= N;
				E++;
			}
		}
	}
	if (N < D)
	{
		while (N % 2 == 0 && D % 2 == 0)
		{
			N /= 2;
			D /= 2;
		}
		while (N % 3 == 0 && D % 3 == 0)
		{
			N /= 3;
			D /= 3;
		}
	}
	Fracciones R(E, N, D);
	return R;
}

Fracciones Fracciones::Suma(Fracciones A)
{
	Fracciones R(0, 0, 0);
	R.Denominador = this->Denominador * A.Denominador;
	R.Numerador = ((R.Denominador / this->Denominador)*this->Numerador) + ((R.Denominador / A.Denominador)*A.Numerador);
	return R;
}

Fracciones Fracciones::Resta(Fracciones B)
{
	Fracciones R(0, 0, 0);
	R.Denominador = this->Denominador * B.Denominador;
	R.Numerador = ((R.Denominador / this->Denominador)*this->Numerador) - ((R.Denominador / B.Denominador)*B.Numerador);
	return R;
}

Fracciones Fracciones::Multiplicacion(Fracciones C) 
{
	Fracciones R(0, 0, 0);
	R.Numerador = this->Numerador * C.Numerador;
	R.Denominador = this->Denominador * C.Denominador;
	return R;
}

Fracciones Fracciones::Division(Fracciones D)
{
	Fracciones R(0, 0, 0);
	R.Numerador = this->Numerador * D.Denominador;
	R.Denominador = this->Denominador * D.Numerador;
	return R;
}