//Efraín Girón Romero
//Programa de operaciones con fracciones y simplificacion
#include "stdafx.h"
#include "Fracciones.h"
#include <iostream>

using namespace std;

int main()
{
	int R = 0;
	Fracciones A(0, 0, 0), B(0, 0, 0), Resul(0, 0, 0);
	do
	{
		system("cls");
		int D1, D2, N1, N2, Res = 0;
		cout << "|-----Caluculadora de fracciones-----|" << endl;
		cout << "Ingresa la fracción 1\nNumerador" << endl;
		cin >> N1;
		A.asignarN(N1);
		cout << "Denominador" << endl;
		cin >> D1;
		A.asignarD(D1);
		system("cls");
		cout << "|-----Caluculadora de fracciones-----|" << endl;
		cout << "Ingresa la fracción 2\nNumerador" << endl;
		cin >> N2;
		B.asignarN(N2);
		cout << "Denominador" << endl;
		cin >> D2;
		B.asignarD(D2);
		system("cls");
		if (D1 == 0 || D2 == 0) 
		{
			cout << "Error!!!!\nIndeterminación" << endl;
			system("pause");
		}
		else
		{
			cout << "¿Qué acción deceas realizar?\n1: Suma\n2: Resta\n3: Multiplicación\n4: Division\n5: Simplificar" << endl;
			cin >> Res;
			switch (Res)
			{
			case 1:
				system("cls");
				Resul = A.Suma(B);
				Resul = Resul.Simplificar();
				cout << Resul.Entero << "*" << Resul.Numerador << "/" << Resul.Denominador << endl;
				system("pause");
				break;
			case 2:
				system("cls");
				Resul = A.Resta(B);
				Resul = Resul.Simplificar();
				cout << Resul.Entero << "*" << Resul.Numerador << "/" << Resul.Denominador << endl;
				system("pause");
				break;
			case 3:
				system("cls");
				Resul = A.Multiplicacion(B);
				Resul = Resul.Simplificar();
				cout << Resul.Entero << "*" << Resul.Numerador << "/" << Resul.Denominador << endl;
				system("pause");
				break;
			case 4:
				system("cls");
				Resul = A.Division(B);
				Resul = Resul.Simplificar();
				cout << Resul.Entero << "*" << Resul.Numerador << "/" << Resul.Denominador << endl;
				system("pause");
				break;
			case 5:
				system("cls");
				Resul = A.Simplificar();
				cout << Resul.Entero << "*" << Resul.Numerador << "/" << Resul.Denominador << endl;
				Resul = B.Simplificar();
				cout << Resul.Entero << "*" << Resul.Numerador << "/" << Resul.Denominador << endl;
				system("pause");
				break;
			default:
				system("cls");
				cout << "La opcion no es valida." << endl;
				break;
			}
			system("cls");
			cout << "¿Deseas volverlo a hacer?\n1: Si\n2: No" << endl;
			cin >> R;
		}
	} while (R != 2);
    return 0;
}
