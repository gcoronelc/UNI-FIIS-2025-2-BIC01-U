#include <iostream>
using namespace std;

int main() {
	
	static int notas[5];
	
	cout << "Nota: " << notas[0] << endl;
	cout << "Nota: " << notas[1] << endl;
	cout << "Nota: " << notas[2] << endl;
	
	cout << "================================\n";
	int notas2[50] = {15,18};
	cout << "Nota2[0]: " << notas2[0] << endl;
	cout << "Nota2[1]: " << notas2[1] << endl;
	cout << "Nota2[2]: " << notas2[2] << endl;
	cout << "Nota2[3]: " << notas2[3] << endl;
	cout << "Nota2[4]: " << notas2[4] << endl;
	cout << "Nota2[49]: " << notas2[49] << endl;
	return 0;	
}
