
#include <iostream>
using namespace std;

int main() {
	
	// Declaración de un arreglo de enteros con 5 elementos
	int miArreglo[2][3] = {
		{10, 20, 30}, 
		{40, 50,60}
	};
	
	//Recorrido de la matriz por fila y columna
	for (int fila = 0; fila < 2; fila++){
	
		for (int columna = 0; columna < 3; columna++){
			cout << miArreglo[fila][columna] << " ";
		}
		
		cout << endl;
	}
    
    return 0;
}

