#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	string rpta;
	
	cout << "Rpta:"; cin >> rpta;
	
	if( rpta == "si" ){
		cout << " Hola" << endl;
	}
	
	// Datos
	srand(time(0)); //fundamental para iniciar la semilla
	int a = rand();
	int b = rand();
	int c = rand();
	cout << "Los 3 numeros al azar son: " << a << " " << b << " " << c << "\n";
	// Mayor
	int mayor = a;
	if (b > mayor) mayor = b;
	if (c > mayor) mayor = c;
	// Menor
	int menor = c;
	if (b < menor) menor = b;
	if (a < menor) menor = a;
	// Numero central
	int medio = (a + b + c) - (mayor + menor);
	// Reporte
	cout << "REPORTE" << endl;
	cout << "============================" << endl;
	cout << "Mayor: " << mayor << endl;
	cout << "Menor: " << menor << endl;
	cout << "Central: " << medio << " " << endl;

	return 0;
}
 
