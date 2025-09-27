#include <iostream>
using namespace std;

int main(){
	// Variables
	int numero;
	bool multi3, multi5;
	string msg3, msg5, msg;
	// Lectura de datos
	cout << "DATOS" << endl;
	cout << "==============================" << endl;
	cout << "Numero entero positivo: ";
	cin  >> numero;
	// Proceso
	multi3 = (numero%3 == 0);
	multi5 = (numero%5 == 0);
	// Mensajes
	if(multi3) msg3 = "Si es multiplo de 3";
	else msg3 = "No es multiplo de 3";
	if(multi5) msg5 = "Si es multiplo de 5";
	else msg5 = "No es multiplo de 5";
	msg = "";
	if(!multi3 && !multi5) msg = "No es multiplo de 3 ni de 5";
	// Reporte
	cout << endl << endl;
	cout << "REPORTE" << endl;
	cout << "============================" << endl;
	cout << msg3 << endl;
	cout << msg5 << endl;
	cout << msg << endl;
	cout << endl;
	return 0;	
}
