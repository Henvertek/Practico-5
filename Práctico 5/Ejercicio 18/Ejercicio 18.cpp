// Ejercicio 18.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
using namespace std;

int main() {
	char rawNum[30];
	int convertedNum[60];
	int largest = 0, baseFrom, baseTo, figures = 0, decimal = 0;
	cout << "Ingrese el numero a convertir:\n>>> ";
	cin.getline(rawNum, 30);
	for(int i = 0; rawNum[i] != '\0'; i++) {
		figures++;
		if(rawNum[i] - 48 > largest) largest = rawNum[i] - 48;
	}
	do {
		cout << "¿En que base esta?\n>>> ";
		cin >> baseFrom;
		if(baseFrom <= largest) cout << "Imposible tener " << largest << " como digito en un numero en base " << baseFrom << ".\n\n";
	} while(baseFrom <= largest);
	do {
		cout << "¿A que base desea convertirlo?\n>>> ";
		cin >> baseTo;
		if(baseTo > 10) cout << "Lo sentimos, por el momento no se puede utilizar una base mayor a 10.\n";
	} while(baseTo > 10 || baseTo < 1);
	if(baseTo == baseFrom) cout << rawNum << endl;
	else {
		for(int i = 0; rawNum[i] != '\0'; i++) {
			decimal += (rawNum[i] - 48) * pow(baseFrom, figures - 1 - i);
		}
		int i = 0;
		while(decimal > 0) {
			convertedNum[i++] = decimal % baseTo;
			decimal /= baseTo;
		}
		for(int a = i - 1; a >= 0; a--) {
			cout << convertedNum[a];
		}
	}
	cout << endl;
	system("pause");
	return 0;
}
/*int main() {
	char rawNum[30];
	int baseFrom, baseTo, figures, result = 0;
	cout << "Ingrese el numero a convertir:\n>>> ";
	cin.getline(rawNum, 30);
	cout << "En que base esta el numero?\n>>> ";
	cin >> baseFrom;
	cout << "A que base lo convertimos?\n>>> ";
	cin >> baseTo;
	for(int i = 0; rawNum[i] != '\0'; i++) {
		figures = i;
	}
	figures++;
	if(baseTo == 10) {

	}
	for(int i = 0; i < figures; i++) {//pasaje a base 10
		result += (rawNum[i] - 48) * (baseFrom, figures - 1 - i);
	}
	else {
		cout << rawNum;
	}
	system("pause");
	return 0;
}
	*/