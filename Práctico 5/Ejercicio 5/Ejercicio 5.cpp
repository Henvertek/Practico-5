// Ejercicio 5.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool same(char arr[]) {
	char c = arr[0];
	int am = 0;
	while(c != '\0') {
		am++;
		c = arr[am];
	}
	for(int i = 0; i < am; i++) {
		if(arr[i] != arr[am - 1 - i]) return false;
	}
	return true;
}

int main()
{
	char word[20];
	do {
		cout << "Ingrese un palindromo:\n>>> ";
		cin >> word;
	} while(!same(word));
	cout << "\nEXITO\n\n";
	system("pause");
  return 0;
}

