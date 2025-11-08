#include <iostream>
#include <string>
using namespace std;

// Leer enteros positivos
int leeEnteroPositivo(string etiqueta){
	int x;
	do{ 
		cout << etiqueta;
		cin >> x;
		if(x <= 0) cout << "Debe ingresar una valor mayor que 0.\n\n";
	} while(x <= 0);
	return x;
}

// Proceso
string proceso(int m, int n){
	// Determinar cual es el menor y cual es el mayor
	int menor, mayor;
    if (m < n) {
        menor = m;
        mayor = n;
    } else {
        menor = n;
        mayor = m;
    }
    // Construir la cadena con los números impares
    string resultado = "";
    for (int i = menor; i <= mayor; i++) {
        if (i % 2 != 0) {
            resultado = resultado + to_string(i) + " ";
        }
    }
	return resultado;	
}


int main() {
	
    // ========== BLOQUE A: VARIABLES ==========
    int m, n;
    string resultado;
    
    // ========== BLOQUE B: LECTURA DE DATOS ==========
    m = leeEnteroPositivo("Ingrese el valor de m: ");
    n = leeEnteroPositivo("Ingrese el valor de n: ");
    
    // ========== BLOQUE C: PROCESO ==========
    resultado = proceso(m,n);

    
    // ========== BLOQUE D: REPORTE ==========
    cout << "\nNumeros impares entre " << m << " y " << n << ":" << endl;
    
    if (resultado == "") {
        cout << "No hay numeros impares en este rango." << endl;
    } else {
        cout << resultado << endl;
    }
    
    return 0;
}
