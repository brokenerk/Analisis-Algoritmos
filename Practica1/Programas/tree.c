/*
Implementación Práctica 01: Pruebas a posteriori (Algoritmos de Ordenamiento)
Por: Git Gud (Equipo Arbol)
Versión: 1.0

Descripción: Programa que ordenará por medio de un ABB
  
Observaciones: 
*/

//LIBRERÍAS
#include <stdio.h>
#include <stdlib.h>
#include "ArbolBinario.h"
#include "tiempo.h"
#include "imprimeTiempos.h"

// FUNCIÓN PRINCIPAL

/*
Variables usadas en el programa:
	int size: variable que tomará el tamaño de la línea de comando
	int* Data: apuntador de entero que será inicializado como arreglo para los datos a ordenar
	double utime0: variable que medirá el tiempo de inicio de ejecución del usuario
	double stime0: variable que medirá el tiempo de inicio de ejecución del sistema
	double wtime0: variable que medirá el tiempo de inicio de ejecución real
	double utime1: variable que medirá el tiempo de finalización de ejecución del usuario 
	double stime1: variable que medirá el tiempo de finalización de ejecución del sistema
	double wtime1: variable que medirá el tiempo de finalización de ejecución real
*/
int main(int argc, char **argv)
{
		//Creamos arreglo dinámico
	int n = atoi(argv[1]);
	int *arreglo = (int*)calloc(n,sizeof(int));
	int i=0;
	//Agregamos los n valores del txt al arreglo
	for(i=0; i<n; i++){
		fscanf(stdin, "%d", &arreglo[i]);
	}

	printf("n = %d\n", n);
	double utime0, stime0, wtime0,utime1, stime1, wtime1; //Variables para medición de tiempos
	uswtime(&utime0, &stime0, &wtime0);
	BinarySearchTreeSort(arreglo, n);
	
	uswtime(&utime1, &stime1, &wtime1);

	//Cálculo del tiempo de ejecución del programa
	printf("\nSeleccion\n");
	printf("real (Tiempo total)  %.30f s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.30f s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.30f s\n",  stime1 - stime0);
	printf("CPU/Wall   %.30f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");
	return 0;
}
