// Ejercicio 2.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int V[20], P[20], N[20];
	srand(time(NULL));
	for(int i = 0; i < 20; i++) {
		int curr = rand() % 100 - 50;
		cout << curr << ", ";
		V[i] = curr;
		if(V[i] < 0) {
			N[i] = V[i];
			P[i] = -1;
		}
		else {
			P[i] = V[i];
			N[i] = 1;
		}
	}

	cout << "\n\n  >= 0: \n";
	for(int i = 0; i < 20; i++) {
		if(P[i] != -1) cout << P[i] << ", ";
	}
	cout << "\n\n  < 0: \n";
	for(int i = 0; i < 20; i++) {
		if(N[i] != 1) cout << N[i] << ", ";
	}
	cout << "\n\n";
	system("pause");
  return 0;
}

