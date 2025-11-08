/*
Desarrollar un programa que muestre los primeros "n" términos de 
la serie de Fibonacci. El programa de solicitar el valor para "n".
*/

#include <iostream>
#include <string>
using namespace std;

// Leer enteros positivos
int leeEnteroPositivo(string etiqueta){
	int x;
	do{ 
		cout << etiqueta;
		cin >> x;
		if(x <= 0) cout << "Debe ingresar una valor mayor que 0.\n\n";
	} while(x <= 0);
	return x;
}

// Obtener la serie
string proceso(int n){
	string serie;
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
	return serie;
}

int main() {
	
	// A. Variables
	int n;
	string serie;
	
	// B. Lectura
	n = leeEnteroPositivo("Ingrese valor a n: ");

	// C: Proceso
	serie = proceso(n);
	
	// D: Reporte
	cout << "REPORTE\n";
	cout << "Serie: " << serie << endl;
	
	return 0;
}
