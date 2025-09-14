/*
Leer la nota de un estudiante y determinar si esta aprobado.
Aplicando el operador ternario.
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
	condicion = ( nota >= 10 ) ? "Aprobado" : "Desaprobado";
	
	// Reporte
	cout << endl << endl;
	cout << "========== REPORTE ==========" << endl;
	cout << "Nota: " << nota << endl;
	cout << "Condición: " << condicion << endl;
	cout << endl << endl;
	
	return 0;
}

