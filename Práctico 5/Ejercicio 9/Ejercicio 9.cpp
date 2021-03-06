// Ejercicio 9.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int M[100];
	int N[100];
	srand(time(NULL));
	for(int i = 0; i < 100; i++) {
		M[i] = rand() % 10;
		N[i] = rand() % 10;
		cout << M[i] << "  " << N[i] << endl;
	}
	int i = 0;
	for(; i < 100 && M[i] == N[i]; i++);
	if(i == 100) cout << "\nIguales.\n";
	else cout << "\nDiferentes.\n\n";
	system("pause");
  return 0;
}