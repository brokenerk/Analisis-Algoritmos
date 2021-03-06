//*****************************************************************
//AUTORES:
// Nicolas Sayago Abigail
//	Parra Garcilazo Cinthya Dolores
// Ramos Diaz Enrique
//
//Practica 1: Analisis de algoritmos de ordenamiento numerico
//Compilación:
//	gcc tiempo.c -c
//	gcc Insercion.c tiempo.o -o Insercion
//
//Ejecución: "./Insercion" (Linux)
//*****************************************************************

//*****************************************************************
//Librerias incluidas
//*****************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tiempo.h"

//*****************************************************************
//Insercion
//*****************************************************************
//Descripción: Función que implementa el algoritmo de ordenamiento 
//de Insercion
//Recibe: Un arreglo de enteros y el tamaño del arreglo
//Devuelve: Nada, pero ordena el arreglo de menor mayor
//*****************************************************************#include <stdio.h>
void Insercion(int A[], int n)
{
	double utime0, stime0, wtime0,utime1, stime1, wtime1; //Variables para medición de tiempos
	uswtime(&utime0, &stime0, &wtime0);

	int j, i, temp;
	for(i = 0; i < n; i++)
	{
		j = i;
		temp = A[i];
		while(j>0 && temp<A[j-1])
		{
			A[j] = A[j-1];
			j--;
		}
		A[j] = temp;
	}
	uswtime(&utime1, &stime1, &wtime1);


	//Cálculo del tiempo de ejecución del programa
	printf("\nInsercion\n");
	printf("real (Tiempo total)  %.35f s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.35f s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.35f s\n",  stime1 - stime0);
	printf("CPU/Wall   %.35f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");

	/*//Para imprimir los numeros de arreglo y verificar el algoritmo
	for(i=0; i<n; i++){
		printf("%d, ", A[i]);
	}*/
}

int main(int argc, char *argv[])
{
	//Obtenemos n como parametro del main y creamos una arreglo dinamico
	int n = atoi(argv[1]);
	int *arreglo = (int*)calloc(n,sizeof(int));

	//Con este for vamos agregando los n valores del txt al arreglo
	for(int i = 0; i < n; i++)
	{
		fscanf(stdin, "%d", &arreglo[i]);
	}

	printf("n = %d\n", n);
	Insercion(arreglo, n);
	printf("------------------------------------\n");
}

