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
	printf("\n");
	printf("real (Tiempo total)  %.15f s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.15f s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.15f s\n",  stime1 - stime0);
	printf("CPU/Wall   %.15f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
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
}

/* Para imprimir los numeros de arreglo y verificar el algoritmo
for(i=0; i<n; i++){
		printf("%d ", A[i]);
	}*/

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int *arreglo = (int*)calloc(n,sizeof(int));

	for(int i=0; i<n; i++)
	{
		fscanf(stdin, "%d", &arreglo[i]);
		//printf("%d\n", arreglo[i]);
	}

	Insercion(arreglo, n);

  
	//Seleccion(arreglo, n);
}

