//*****************************************************************
//AUTORES:
// Nicolas Sayago Abigail
//	Parra Garcilazo Cinthya Dolores
// Ramos Diaz Enrique
//
//Practica 2: Análisis temporal y notación de orden (Algoritmos de búsqueda)
//Compilación:
//	gcc tiempo.c -c
//	gcc Binaria.c tiempo.o -o Binaria
//
//Ejecución: "./Binaria" (Linux)
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
//Descripción: Función que implementa el algoritmo de busqueda Binaria
//Recibe: Un arreglo de enteros, el tamaño del arreglo y un entero a buscar
//Devuelve: un booleando que indica si se encontro o no el entero a buscar
//*****************************************************************
int Binaria(int A[], int n, int dato)
{
	//centro: subíndice central del intervalo
  	//inf: límite inferior del intervalo
  	//sup: límite superior del intervalo
	int centro, inf = 0, sup = n-1;
	while(inf <= sup)
	{
		centro = ((sup + inf)/2);
		if(A[centro] == dato)
		{
			/*Para imprimir la posicion y el dato dentro del arreglo
			printf("SI %d : %d", A[centro], centro);*/
			return centro;
		}
		else if (dato < A[centro])
			sup = centro - 1;
		else
			inf = centro + 1;
	}
	return -1;
}

int main(int argc, char *argv[])
{
	//Obtenemos n como parametro del main y creamos una arreglo dinamico
	int n = atoi(argv[1]), i = 0, j = 0;
	float suma = 0, promedio = 0;
	int *arreglo = (int*)calloc(n,sizeof(int));
	int datos[20] = { 322486, 14700764, 3128036, 6337399, 61396,
	10393545, 2147445644, 1295390003, 450057883, 187645041,
	1980098116, 152503, 5000, 1493283650, 214826, 1843349527,
	1360839354, 2109248666 , 2147470852, 0};

	//Con este for vamos agregando los n valores del txt al arreglo
	for(i = 0; i < n; i++)
		fscanf(stdin, "%d", &arreglo[i]);
	printf("\nBusqueda Binaria n = %d\n\n", n);
	//Con este for vamos buscando cada numero en el arreglo
	for(j = 0; j < 20; j++)
	{
		double utime0, stime0, wtime0,utime1, stime1, wtime1; //Variables para medición de tiempos
		uswtime(&utime0, &stime0, &wtime0);

		int s = Binaria(arreglo, n, datos[j]);

		uswtime(&utime1, &stime1, &wtime1);

		if(s != -1)
			printf("\n%d SI : %d ", datos[j], s);
		else
			printf("\n%d NO : --- ", datos[j]);

		//Cálculo del tiempo de ejecución del programa
		
		printf("%.25f ",  wtime1 - wtime0); //Tiempo Real
		suma = suma + wtime1 - wtime0;
		printf("%.25f ",  utime1 - utime0); //Tiempo CPU
		printf("%.25f ",  stime1 - stime0); //Tiempo E/S
		printf("%.8f %% ",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0)); //CPU Wall
	}
	printf("\nPromedio Tiempo Total: %.20f s\n\n", suma/20);
	
	printf("------------------------------------\n");
}

