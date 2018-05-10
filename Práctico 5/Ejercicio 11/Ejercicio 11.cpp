// Ejercicio 11.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int nums[80];
	int search, res = -1;
	srand(time(NULL));
	for(int i = 0; i < 80; i++) {
		nums[i] = rand() % 1000;
		cout << nums[i] << " ";
	}
	cout << "\n\nIngrese el numero que desea encontrar:\n>>> ";
	cin >> search;

	for(int i = 0; i < 80; i++) {
		if(search == nums[i])res = i+1;
	}
	if(res != -1) cout << "El numero se encuentra en la posicion " << res << endl;
	else cout << "El numero no se encuentra en el arreglo.\n";
	system("pause");
  return 0;
}

