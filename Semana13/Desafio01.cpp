/*
Ejercicio 01
Generar un arreglo con las notas aleatorias (de 0 a 20) de 40 alumnos. Determinar:
- La nota promedio
- La mínima nota
- La máxima nota
- La nota más frecuente
*/

#include <iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;


// Variables
const int N = 5;
int notas[N] = {};
float notaPromedio = 0;
int notaMinima;
int notaMaxima;

void generarNotas(){
	srand(time(NULL));
	for(int i=0; i<N; i++){
		notas[i] = rand() % 20 + 1;
	}
}

void calculosEstadisticos(){
	notaMaxima = 0;
	notaMinima = 20;
	int suma = 0;
	int tempo;
	for(int i=0; i<N; i++){
		tempo = notas[i];
		suma += tempo;
		notaMinima = (notaMinima>tempo?tempo:notaMinima);
		notaMaxima = (notaMaxima<tempo?tempo:notaMaxima);
	}
	notaPromedio = suma * 1.0 / N;
}

void reporte(){
	cout << "Notas: ";
	for(int i=0; i<N; i++){
		cout << (i==0?"":", ");
		cout << notas[i];	
	}
	cout << "\nNota promedio: " << notaPromedio;
	cout << "\nNota maxima: " << notaMaxima;
	cout << "\nNota minima: " << notaMinima;
}

int main() {
	
	// Datos
	generarNotas();
	
	// Proceso
	calculosEstadisticos();
	
	// Reporte
	reporte();
	
	return 0;
}




