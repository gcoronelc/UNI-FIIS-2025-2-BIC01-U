#include <iostream>
using namespace std;

int main() {
    // Declaración de un arreglo de enteros con 5 elementos
    int miArreglo[5] = {10, 20, 30, 40, 50};

    // Acceso a elementos del arreglo mediante índices
    cout << "Primer elemento: " << miArreglo[0] << endl;
    cout << "Tercer elemento: " << miArreglo[2] << endl;

    // Modificación de un elemento
    miArreglo[1] = 25;

    // Recorriendo el arreglo
    for (int i = 0; i < 5; ++i) {
        cout << "Elemento " << i << ": " << miArreglo[i] << endl;
    }

    return 0;
}
