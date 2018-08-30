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
	//Para probar el funcionamiento de los algoritmos
	int arreglo[20] = {82, 54, 17, 30, 20, 65467896, 111, 981, 69, 21897, 47, 10, 13, 78, 100, 99 ,1000, 9 , 124, 23};

	Insercion(arreglo, 20);
	printf("\n");
	Seleccion(arreglo, 20);
}

