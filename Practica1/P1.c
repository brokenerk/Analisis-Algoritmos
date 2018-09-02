//*****************************************************************
//AUTORES:
// Nicolas Sayago Abigail
// Ramos Diaz Enrique
//
//Practica 1: Analisis de algoritmos de ordenamiento numerico
//Compilación: "gcc P1.c -o P1
//Ejecución: "./P1.out" (Linux)
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
	for(i=0; i<n; i++)
	{
		j=i;
		temp=A[i];
		while(j>0 && temp<A[j-1])
		{
			A[j]=A[j-1];
			j--;
		}
		A[j]=temp;
	}
	uswtime(&utime1, &stime1, &wtime1);


	//Cálculo del tiempo de ejecución del programa
	printf("\nInsercion\n");
	printf("real (Tiempo total)  %.30f s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.30f s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.30f s\n",  stime1 - stime0);
	printf("CPU/Wall   %.30f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");
}

//*****************************************************************
//Seleccion
//*****************************************************************
//Descripción: Función que implementa el algoritmo de ordenamiento 
//de Seleccion
//Recibe: Un arreglo de enteros y el tamaño del arreglo
//Devuelve: Nada, pero ordena el arreglo de menor mayor
//*****************************************************************#include <stdio.h>
void Seleccion(int A[], int n)
{
	double utime0, stime0, wtime0,utime1, stime1, wtime1; //Variables para medición de tiempos
	uswtime(&utime0, &stime0, &wtime0);

	int k, p, i, temp;
	for(k=0; k<n-1; k++)
	{
		p=k;
		for(i=k+1; i<n; i++)
		{
			if(A[i]<A[p])
				p=i;
		}
		temp = A[p];
		A[p] = A[k];
		A[k] = temp;
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

/* Para imprimir los numeros de arreglo y verificar el algoritmo
for(i=0; i<n; i++){
		printf("%d ", A[i]);
	}*/

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

	Insercion(arreglo, n);
	Seleccion(arreglo, n);

	printf("------------------------------------\n");
}

