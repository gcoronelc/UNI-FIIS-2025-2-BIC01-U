#include <iostream>
using namespace std;
int main(){
	// Variables
	int numero, suma;
	string repo;
	
	// Datos
	cout << "Ingrese un numero entero positivo: ";
	cin >> numero;
	
	// Proceso
	suma = 0;
	for(int i=1; i< numero; i++){
		if(numero% i == 0){
			suma = suma+ i;
		}
	}
	
	// Determinar si es perfecto
	if (suma == numero){
		repo = "Si es perfecto";
	} else {
		repo = "No es perfecto";
	}
	
	// Salida
	cout << endl;
	cout << "Reporte" << endl;
	cout << "Numero: " << numero << endl;
	cout << "Suma de Divisores: " << suma << endl;
	cout << "Resultado" << repo << endl;
	
	return 0;
}
