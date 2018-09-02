//*****************************************************************
//	AUTORES:
// 	Nicolas Sayago Abigail
// 	Ramos Diaz Enrique
// ****************************************************************
//	Practica 1: Analisis de algoritmos de ordenamiento numerico
//	Compilación: "gcc BurbujaSimpleOptimizada.c -o BurbujaSO
//	Ejecución: "./BurbujaSimpleOptimizada.out" (Linux)
//	***************************************************************

//	***************************************************************
//						Librerias incluidas
//	***************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tiempo.h"
typedef int bool;
#define TRUE 1
#define FALSE 0

//	***************************************************************
//						BURBUJA SIMPLE
//	***************************************************************
//	Descripción: Ordena un arreglo de números
//	Recibe: El arreglo de números, y la cantidad de números que se ordenaran
//	Devuelve: Nada.
//	***************************************************************
void BurbujaSimpleOptimizada(int A[], int n)
{
	double utime0, stime0, wtime0,utime1, stime1, wtime1; //Variables para medición de tiempos
	uswtime(&utime0, &stime0, &wtime0);

	int j, i, aux, cambios;
	cambios = TRUE;
	i = 0;
	while((i < n-1) && (cambios != FALSE))
	{
		cambios = FALSE;
		for(j=0; j<=(n-2)-i; j++)
		{
			if (A[j] > A[j+1])
			{
				aux = A[j];
				A[j] = A[j+1];
				A[j+1] = aux;
				cambios = TRUE;
			}
		}
		i++;
	}

	uswtime(&utime1, &stime1, &wtime1);

	//Cálculo del tiempo de ejecución del programa
	printf("\nBurbujaSimpleOtimizada\n");
	printf("real (Tiempo total)  %.30f s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.30f s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.30f s\n",  stime1 - stime0);
	printf("CPU/Wall   %.30f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");
}

int main(int argc, char *argv[])
{
		//Obtenemos n como parametro del main y creamos una arreglo dinamico
	int n = atoi(argv[1]);
	int *arreglo = (int*)calloc(n,sizeof(int));

	//Con este for vamos agregando los n valores del txt al arreglo
	for(int i=0; i<n; i++){
		fscanf(stdin, "%d", &arreglo[i]);
	}

	printf("n = %d\n", n);
	BurbujaSimpleOptimizada(arreglo, n);
	printf("------------------------------------\n");
	

}
}

