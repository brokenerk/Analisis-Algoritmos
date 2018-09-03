//*****************************************************************
//AUTORES:
// Nicolas Sayago Abigail
// Ramos Diaz Enrique
//
//Practica 1: Analisis de algoritmos de ordenamiento numerico
//Compilación: "gcc Seleccion.c -o Seleccion
//Ejecución: "./Seleccion.out" (Linux)
//*****************************************************************

//*****************************************************************
//Librerias incluidas
//*****************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tiempo.h"
#include <math.h>

//*****************************************************************
//Shell
//*****************************************************************
//Descripción: Función que implementa el algoritmo de ordenamiento 
//Shel
//Recibe: Un arreglo de enteros y el tamaño del arreglo
//Devuelve: Nada, pero ordena el arreglo de menor mayor
//*****************************************************************

void Shell(int arreglo[], int n){
	double utime0, stime0, wtime0,utime1, stime1, wtime1; //Variables para medición de tiempos
	uswtime(&utime0, &stime0, &wtime0);

	int k=trunc(n/2);
	int b=0;
	int i=0;
	int temp=0;

	while(k>=1){
		b=1;
		while(b!=0){
			b=0;
			for(i=k;i<=(n-1);i++){
				if(arreglo[i-k]>arreglo[i]){
					temp=arreglo[i];
					arreglo[i]=arreglo[i-k];
					arreglo[i-k]=temp;
					b=b+1;
				}
			}
		}
		k=trunc(k/2);
	}

	uswtime(&utime1, &stime1, &wtime1);

	//Cálculo del tiempo de ejecución del programa
	printf("\nSeleccion\n");
	printf("real (Tiempo total)  %.30f s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.30f s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.30f s\n",  stime1 - stime0);
	printf("CPU/Wall   %.30f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");
}


int main (int argc,char *argv[]){
	//Creamos arreglo dinámico
	int n = atoi(argv[1]);
	int *arreglo = (int*)calloc(n,sizeof(int));
	int i=0;
	//Agregamos los n valores del txt al arreglo
	for(i=0; i<n; i++){
		fscanf(stdin, "%d", &arreglo[i]);
	}

	printf("n = %d\n", n);

	Shell(arreglo,n);

	return 0;
}