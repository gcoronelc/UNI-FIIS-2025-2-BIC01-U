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


// Variables globales
const int N = 20;
int notas[N] = {};
float notaPromedio = 0;
int notaMinima;
int notaMaxima;
int moda;

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

void encontrarModa(){
	// determinando la frecuencia
	int contador[21] = {};
	int nota;
	for(int i=0; i<N;i++){
		nota = notas[i];
		contador[nota]++;
	}
	// Encontrando la moda
	moda = 0;
	int frecuencia = contador[0];
	for(int i=1; i<21; i++){
		if(frecuencia < contador[i]){
			moda = i;
			frecuencia = contador[i];
		}
	}
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
	cout << "\nModa: " << moda;
}

int main() {
	
	// Datos
	generarNotas();
	
	// Proceso
	calculosEstadisticos();
	encontrarModa();
	
	// Reporte
	reporte();
	
	return 0;
}




