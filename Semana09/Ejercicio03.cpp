// Elaborado por: Gabriel Gastelu
#include <iostream>
#include <string>
using namespace std;
int main(){
	// Variables
	int n;
	//Entrada
	cout << "Ingresa un numero entero positivo:"; cin>>n;
	//Proceso
	if(n<=0){ //Por si desobedecen p
		cout << "Debe ingresar un numero positivo";
		return 0;
	}
	int contador= 0; //Va a ser el numero de cifras
	int aux=n; //Auxiliar para el bucle
	while(aux>0){
		aux = aux/10;
		contador++;
	}
	//Reporte
	cout << "El numero "<<n<< " tiene "<< contador <<" digito(s)" << endl;
	return 0;
}


	
	
