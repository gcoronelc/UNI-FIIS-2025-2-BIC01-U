#include <iostream>
using namespace std;
int main(){
	// Variables
	int n, suma;
	// Datos
	cout << "De un numero entero positivo mayor que 0: "; cin >> n;
	// Proceso
	suma=0;
	for(int i=2; i<=n; i+=2){
		suma+=i;
	}
	
	// Salida
	cout << "El valor de n es: " << n << endl;
	cout << "El valor de la suma es: " << suma;
	
	return 0;
}
