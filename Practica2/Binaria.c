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
		centro = ((sup - inf)/2) + inf;
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

	printf("n = %d\n\n", n);
	//Con este for vamos buscando cada numero en el arreglo
	for(j = 0; j < 20; j++)
	{
		double utime0, stime0, wtime0,utime1, stime1, wtime1; //Variables para medición de tiempos
		uswtime(&utime0, &stime0, &wtime0);

		int s = Binaria(arreglo, n, datos[j]);

		uswtime(&utime1, &stime1, &wtime1);

		if(s != -1)
			printf("\nSI %d : %d\n", datos[j], s);
		else
			printf("\nNO %d\n", datos[j]);

		//Cálculo del tiempo de ejecución del programa
		printf("\nBusqueda Binaria\n");
		printf("real (Tiempo total)  %.35f s\n",  wtime1 - wtime0);
		suma = suma + wtime1 - wtime0;
		printf("user (Tiempo de procesamiento en CPU) %.35f s\n",  utime1 - utime0);
		printf("sys (Tiempo en acciónes de E/S)  %.35f s\n",  stime1 - stime0);
		printf("CPU/Wall   %.35f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
		printf("\n");

	}
	printf("\n\nPromedio Tiempo Total: %.35f s\n", suma/20);
	
	printf("------------------------------------\n");
}

