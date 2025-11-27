
#include <iostream>
using namespace std;

int main() {
    // Declaración de un arreglo de enteros con 5 elementos
    int miArreglo[2][3] = {{10, 20, 30}, {40, 50,60}};
    //Recorrido de la matriz por columna y fila
    for (int j = 0; j < 3; j++){

        for (int i = 0; i < 2; i++){
            cout << miArreglo[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

