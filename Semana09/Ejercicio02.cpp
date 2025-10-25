// Elaborado por: Nick Cristobal
#include <iostream>
#include <string>
using namespace std;
int main(){
	// Variables
	int n; //CANTIDAD DE TERMINOS
	string serie; //PARA GUARDAR LA SERIE
	//LECTURA
	do{ 
		cout << "Ingrese el valor de n: ";
		cin >> n;
		if(n <= 0) cout << "n debe ser un numero mayor que 0" << endl << endl;
	} while(n <= 0);
	
	//PROCESO
	switch(n){
		case 1: 
			serie = "0";
			break;
		case 2:
			serie = "0, 1";
			break;
		default:
			serie = "0, 1";
			int a=0, b=1;
			for(int i=3; i <= n; i++){
				int c= a + b;
				serie = serie + ", " + to_string(c);
				a = b;
				b = c;
			}
	}
	//REPORTE
	cout << "Serie: " << serie << endl;
	
	return 0;
}



