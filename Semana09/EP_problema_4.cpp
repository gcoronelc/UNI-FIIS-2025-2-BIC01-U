//Elaborado por: Jimena Huaman
#include <iostream>
#include <string>
using namespace std;
int main(){
	// Variables
	int n,acumulaSuma;
	string suma;
	// Lectura
	cout<< "introduce el valor de n: "; cin>>n;
	// Proceso
	suma="";
	acumulaSuma=0;
	for(int i=1; i<=n;i++){
		int valor=i*2;
		acumulaSuma += valor;
		if (suma!= ""){
			suma=suma + " + "; 
		}
		suma = suma + " " + to_string(valor);		
	} 
	suma=suma + " = " + to_string(acumulaSuma);
	
	// Reporte
	cout<< "operacion: "<<suma;
	
	return 0;	
}
