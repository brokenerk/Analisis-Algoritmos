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

//	***************************************************************
//						BURBUJA SIMPLE
//	***************************************************************
//	Descripción: Ordena un arreglo de números
//	Recibe: El arreglo de números, y la cantidad de números que se ordenaran
//	Devuelve: Nada.
//	***************************************************************
void BurbujaSimple(int A[], int n)
{
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
}

int main(int argc, char *argv[])
{
	//Para probar el funcionamiento de los algoritmos
	int arreglo[20] = {82, 54, 17, 30, 20, 65467896, 111, 981, 69, 21897, 47, 10, 13, 78, 100, 99 ,1000, 9 , 124, 23};
	int i;
	/* printf("ARREGLO INICIAL\n");
	for(i=0; i<20; i++)
	{
		printf("Numero %d . %d \n",i, arreglo[i]);
	}
	*/
	BurbujaSimple(arreglo, 20);
	/*printf("\n");
	printf("ARREGLO FINAL\n");
	for(i=0; i<20; i++)
	{
		printf("Numero %d . %d \n",i, arreglo[i]);
	}
	*/
}

