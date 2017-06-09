//Numerador/Denominador
#ifndef FRACCIONES_H
#define FRACCIONES_H

class Fracciones
{
public:
	int Denominador, Numerador, Entero;
	Fracciones(int a, int b, int c);
	void asignarD(int d);
	void asignarN(int e);
	Fracciones Simplificar();
	Fracciones Suma(Fracciones A);
	Fracciones Resta(Fracciones B);
	Fracciones Multiplicacion(Fracciones C);
	Fracciones Division(Fracciones D);
	~Fracciones();
};
#endif //FRACCIONES_H