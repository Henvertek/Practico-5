// Ejercicio 10.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int A[100];
	for(int i = 0; i < 100; i++) {
		//A[i] = rand()%10;
		A[i] = i;
		cout << A[i] << endl;
	}
	bool ordenado = true;
	for(int i = 0; i < 99; i++) {
		if(A[i] > A[i+1]) {
			ordenado = false;
			break;
		}
	}
	if(ordenado) cout << "\nSI.\n\n";
	else cout << "\nNO.\n\n";
	system("pause");
  return 0;
}

