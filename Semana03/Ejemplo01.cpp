/*
Leer la nota de un estudiante y determinar si esta aprobado.
*/

#include <iostream>
using namespace std;

int main(){
	
	// Variables
	int nota;
	string condicion;
	
	// Entrada de Datos o Lectura de Datos o Datos
	cout << "======= DATOS ========" << endl;
	cout << "Nota: ";
	cin >> nota;
	
	// Proceso
	condicion = "Aprobado";
	if( nota < 10 ){
		condicion = "Desaprobado";
	}
	
	// Reporte
	cout << endl << endl;
	cout << "========== REPORTE ==========" << endl;
	cout << "Nota: " << nota << endl;
	cout << "Condici�n: " << condicion << endl;
	cout << endl << endl;
	
	return 0;
}

