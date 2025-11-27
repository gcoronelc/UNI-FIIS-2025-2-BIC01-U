#include <iostream>
using namespace std;

// Declaracion global
const int N = 5;
int notas2[N] = {15,18};


// Función
void mostrarNotas2(){
	cout << "NOTAS2\n";
	for(int i=0; i<N; i++){
		cout << "notas2[" << i << "]: " << notas2[i] << endl;
	}
}

int main() {
	
	static int notas[5];
	
	
	cout << "Nota: " << notas[0] << endl;
	cout << "Nota: " << notas[1] << endl;
	cout << "Nota: " << notas[2] << endl;
	
	cout << "================================\n";
	cout << "Nota2[0]: " << notas2[0] << endl;
	cout << "Nota2[1]: " << notas2[1] << endl;
	cout << "Nota2[2]: " << notas2[2] << endl;
	cout << "Nota2[3]: " << notas2[3] << endl;
	cout << "Nota2[4]: " << notas2[4] << endl;
	
	cout << "================================\n";
	mostrarNotas2();
	
	return 0;	
}
