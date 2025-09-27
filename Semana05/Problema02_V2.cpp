#include <iostream>
using namespace std;

int main(){
	// Variables
	int tiempo, porcentaje;
	float sueldo, bono, sueldo_total;
	// Datos
	cout << "Lectura de datos" << endl;
	cout << "==============================" << endl;
	cout << "Sueldo base: ";    cin >> sueldo;
	cout << "Tiempo en años: "; cin >> tiempo;	
	// Determinando porcentaje
	porcentaje = 0; // Punto de apoyo
	if(tiempo >= 4 && tiempo <= 8) porcentaje = 5;
	if(tiempo >= 9 && tiempo <= 13 ) porcentaje = 10;
	if(tiempo > 13) porcentaje = 15;
	// Calcular bono y sueldo final
	bono = sueldo * porcentaje / 100.00;
	sueldo_total = sueldo + bono;
	// Reporte
	cout << endl << endl;
	cout << "REPORTE" << endl;
	cout << "=================================" << endl;
	cout << "Sueldo base: " << sueldo << endl;
	cout << "Porcentaje de bono: " << porcentaje << "%" << endl;
	cout << "Bono por antiguedad: " << bono << endl;
	cout << "Sueldo total: " << sueldo_total << endl;
	cout << endl;
	
	return 0;
}
