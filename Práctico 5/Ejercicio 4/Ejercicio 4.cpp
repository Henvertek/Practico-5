// Ejercicio 4.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char line[41];
	cout << "Escriba una frase(hasta 40 caracteres):\n>>> ";
	cin.getline(line, 41);
	char c = line[0];
	int count[6] = {0, 0, 0, 0, 0};
  while(line[count[0]] != '\0') {
		count[0]++;
		c = line[count[0]];
		switch(c) {
			case 'a':
			case 'A':
				count[1]++; break;
			case 'e':
			case 'E':
				count[2]++; break;
			case 'i':
			case 'I':
				count[3]++; break;
			case 'o':
			case 'O':
				count[4]++; break;
			case 'u':
			case 'U':
				count[5]++; break;
		}
	}
	cout << "Ha ingresado " << count[0] << " letras. De las cuales:\n";
	cout << count[1] << "/" << count[0] << " eran \"A\".\n";
	cout << count[2] << "/" << count[0] << " eran \"E\".\n";
	cout << count[3] << "/" << count[0] << " eran \"I\".\n";
	cout << count[4] << "/" << count[0] << " eran \"O\".\n";
	cout << count[5] << "/" << count[0] << " eran \"U\".\n\n";
	system("pause");
  return 0;
}

