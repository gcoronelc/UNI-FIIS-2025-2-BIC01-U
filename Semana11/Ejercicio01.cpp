#include <iostream>
#include <string>
using namespace std;

int main() {
	
    // ========== BLOQUE A: VARIABLES ==========
    int m, n, i, menor, mayor;
    string resultado;
    
    // ========== BLOQUE B: LECTURA DE DATOS ==========
    cout << "Ingrese el valor de m: ";
    cin >> m;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    
    // ========== BLOQUE C: PROCESO ==========
    // Determinar cual es el menor y cual es el mayor
    if (m < n) {
        menor = m;
        mayor = n;
    } else {
        menor = n;
        mayor = m;
    }
    
    // Construir la cadena con los números impares
    resultado = "";
    
    for (i = menor; i <= mayor; i++) {
        if (i % 2 != 0) {
            resultado = resultado + to_string(i) + " ";
        }
    }
    
    // ========== BLOQUE D: REPORTE ==========
    cout << "\nNumeros impares entre " << menor << " y " << mayor << ":" << endl;
    
    if (resultado == "") {
        cout << "No hay numeros impares en este rango." << endl;
    } else {
        cout << resultado << endl;
    }
    
    return 0;
}
