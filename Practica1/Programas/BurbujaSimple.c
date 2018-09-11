//*****************************************************************
//	AUTORES:
// 	Nicolas Sayago Abigail
// 	Ramos Diaz Enrique
// ****************************************************************
//	Practica 1: Analisis de algoritmos de ordenamiento numerico
//	Compilación: "gcc BurbujaSimple.c -o BurbujaSimple
//	Ejecución: "./BurbujaSimple.out" (Linux)
//	***************************************************************

//	***************************************************************
//						Librerias incluidas
//	***************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tiempo.h"

//	***************************************************************
//						BURBUJA SIMPLE
//	***************************************************************
//	Descripción: Ordena un arreglo de números
//	Recibe: El arreglo de números, y la cantidad de números que se ordenaran
//	Devuelve: Nada.
//	***************************************************************
void BurbujaSimple(int A[], int n)
{
	double utime0, stime0, wtime0,utime1, stime1, wtime1; //Variables para medición de tiempos
	uswtime(&utime0, &stime0, &wtime0);

	int j, i, aux;
	for(i=0; i<=n-1; i++)
	{
		for(j=0; j<=(n-2)-i; j++)
		{
			if (A[j] > A[j+1])
			{
				aux = A[j];
				A[j] = A[j+1];
				A[j+1] = aux;
			}
		}
	}
	uswtime(&utime1, &stime1, &wtime1);

	//Cálculo del tiempo de ejecución del programa
	printf("\nBurbujaSimple\n");
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
	for(int i=0; i<n; i++)
	{
		fscanf(stdin, "%d", &arreglo[i]);
	}

	printf("n = %d\n", n);
	BurbujaSimple(arreglo, n);
	printf("------------------------------------\n");
	

}

