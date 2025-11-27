#include <iostream>
using namespace std;

int main() {
	
    // Declaracion de un arreglo de enteros con 5 elementos
    int miArreglo[] = {10, 20, 30, 40, 50, 60};

    // Acceso a elementos del arreglo mediante indices
    cout << "Primer elemento: " << miArreglo[0] << endl; // Muestra el valor 10
    cout << "Tercer elemento: " << miArreglo[2] << endl; // Muestra el valor 30

	
    // Modificacion de un elemento
    miArreglo[1] = 25;
    
    // Acceso incorrecto, indice no existe
    miArreglo[100] = 25;

    // Recorriendo el arreglo
    cout << "========================================\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Elemento [" << i << "]: " << miArreglo[100] << endl;
    }

    return 0;
}
