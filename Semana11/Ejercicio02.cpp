/*
Desarrollar un programa que muestre los primeros "n" términos de 
la serie de Fibonacci. El programa de solicitar el valor para "n".
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	
	// A. Variables
	int n;
	string serie;
	
	// B. Lectura
	do{ 
		cout << "Ingrese el valor de n: ";
		cin >> n;
		if(n <= 0) cout << "n debe ser un numero mayor que 0" << endl << endl;
	} while(n <= 0);

	
	// C: Proceso
	switch(n){
		case 1:
			serie = "0";
			break;
		case 2:
			serie = "0, 1";
			break;
		default:
			serie = "0, 1";
			int a=0, b=1;
			for(int i=3; i <= n; i++){
				int c= a + b;
				serie = serie + ", " + to_string(c);
				a = b;
				b = c;
			}
			break;
	}
	
	// D: Reporte
	cout << "REPORTE\n";
	cout << "Serie: " << serie << endl;
	
	return 0;
}
