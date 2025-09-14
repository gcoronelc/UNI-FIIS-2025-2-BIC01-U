/*
	Averiguar la cantidad de dias de un mes.
*/

#include <iostream>
using namespace std;

int main(){
	
	// Variables
	int mes, dias;
	
	// Entrada de datos
	cout << "Mes: ";
	cin >> mes;
	
	// Proceso
	switch (mes){
		case 1: case 3: case 5:
		case 7: case 8: case 10: case 12: 
			dias = 31;
			break;
		case 2:
			dias = 28;
			break;
		case 4: case 6: case 9: case 11:
			dias = 30;
			break;
	}
	
	// Reporte
	cout << "----------------------" << endl;
	cout << "Mes: " << mes << endl;
	cout << "Dias: " << dias << endl;
	cout << "16/5: " << (16/5) << endl;
	cout << "3!=4-1 => " << (3!=4-1) << endl;
	cout << endl << endl;
	
	return 0;
}
