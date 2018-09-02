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

	int j, i, aux, cambios;
	cambios = FALSE;
	i = 0;
	while((i <= n-1) && (cambios != FALSE))
	{
		cambios = FALSE;
		for(j=0; j<=(n-2)-i; j++)
		{
			if (A[i] < A[j])
			{
				aux = A[j];
				A[j] = A[i];
				A[i] = aux;
				cambios = TRUE;
			}
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	//Para probar el funcionamiento de los algoritmos
	int arreglo[20] = {82, 54, 17, 30, 20, 65467896, 111, 981, 69, 21897, 47, 10, 13, 78, 100, 99 ,1000, 9 , 124, 23};
	int i;
	 printf("ARREGLO INICIAL\n");
	for(i=0; i<20; i++)
	{
		printf("Numero %d . %d \n",i, arreglo[i]);
	}
	BurbujaSimpleOptimizada(arreglo, 20);
	
	printf("\n");
	printf("ARREGLO FINAL\n");
	for(i=0; i<20; i++)
	{
		printf("Numero %d . %d \n",i, arreglo[i]);
	}
	
}

