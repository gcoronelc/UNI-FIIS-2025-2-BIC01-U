#include <iostream>
using namespace std;
int main(){
	// Variables
	int numero;
	string repo;
	// Datos
	cout << "Ingrese un numero entero positivo: ";
	cin >> numero;
	// Proceso
	repo = "Si es primo";
	if(numero<=1) repo = "No es primo";
	for(int i = 2; i < numero; i++ ){
		if(numero%i==0){
			repo = "No es primo";
			break;
		}
	}
	// Salida
	cout << endl;
	cout << "Reporte" << endl;
	cout << "Numero: " << numero << endl;
	cout << "Reporte: " << repo << endl;
	
	return 0;
}
