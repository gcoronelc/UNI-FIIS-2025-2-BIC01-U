// Elaborado por : Jorge Ñaupa
#include <iostream>
#include <string>
using namespace std;
int main(){
	// Variables
	int n,digitos,n_aux,n_amst;
	string reporte;
	// Lectura
	cout<<"Ingrese un numero: ";
	cin>>n;
	// Proceso
	n_aux=n;
	digitos=0; //Contador de digitos del numero
	while (n_aux>0){
		digitos++;
		n_aux=n_aux/10;
	}
	n_aux=n;
	n_amst=0; //Acumula la suma de las potencias de los digitos
	while (n_aux>0){
		int cifra=n_aux%10;
		n_aux=n_aux/10;
		int p=1;
		for( int i=1;i<=digitos ;i++ ){
			p=p*cifra;
		}
		n_amst=n_amst+p;
	}
	reporte= "No es un numero de amstrong";
	if (n==n_amst){
		reporte="Si es un numero de amstrong ";
	}
	// Reporte
	cout<<reporte<<endl;
	
	
	return 0;
}
