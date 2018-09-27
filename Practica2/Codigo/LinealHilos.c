//*****************************************************************
//AUTORES:
// Nicolas Sayago Abigail
// Parra Garcilazo Cinthya Dolores
// Ramos Diaz Enrique
//
//Practica 2: Análisis temporal y notación de orden (Algoritmos de búsqueda)
//Compilación:
//Compilación: "gcc -lm LinealHilos.c tiempo.o -lpthread -o LinealHilos"
//Ejecución: "./LinealHilos 4 100"
//*****************************************************************

//*****************************************************************
//LIBRERIAS INCLUIDAS
//*****************************************************************
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include "tiempo.h"

//*****************************************************************
//VARIABLES GLOBALES
//*****************************************************************
int NumThreads, N, indice = 0, encontrado = -1, s = 0;
int *arreglo;
int datos[20] = {322486, 14700764, 3128036, 6337399, 61396,
10393545, 2147445644, 1295390003, 450057883, 187645041,
1980098116, 152503, 5000, 1493283650, 214826, 1843349527,
1360839354, 2109248666 , 2147470852, 0};

//*****************************************************************
//LinealHilos
//*****************************************************************
//Descripción: Hilo que procesa el algoritmo de busqueda lineal e
//indica si el dato a buscar está o no en el arreglo.
//Recibe: Un indice de tipo void que indica el numero de hilo
//Devuelve: Nada
//*****************************************************************
void* Lineal(void* id)
{
	int n_thread=(int)id, inicio, fin;

	//Revisar la parte de los datos a procesar	
	
	inicio=(n_thread*N)/NumThreads;
	if(n_thread==NumThreads-1)	
		fin=N-1;
	else
		fin=((n_thread+1)*N)/NumThreads-1;

	int posicion = inicio;
	if(dato>A[inicio])
		while(posicion =< fin)
		{
			if(dato == A[posicion])
				encontrado =1;
			posicion++;
		}
}

//*****************************************************************
//PROGRAMA PRINCIPAL 
//*****************************************************************
int main (int argc, char *argv[])
{	
	int i, k; 	//Variables auxiliares para loops
	float suma = 0, promedio = 0;
	NumThreads = atoi(argv[1]);
	N = atoi(argv[2]);
	arreglo = (int*)calloc(N,sizeof(int));

	//Con este for vamos agregando los n valores del txt al arreglo
	for(k = 0; k < N; k++)
		fscanf(stdin, "%d", &arreglo[k]);
	printf("\nBusqueda Lineal Hilos n = %d\n\n", N);

	//Con este for vamos buscando cada numero en el arreglo
	for(indice = 0; indice < 20; indice++)
	{
		//******************************************************************	
		//Iniciar el conteo del tiempo para las evaluaciones de rendimiento
		//******************************************************************	
		double utime0, stime0, wtime0,utime1, stime1, wtime1;
		uswtime(&utime0, &stime0, &wtime0);
		encontrado = -1;
		s = 0;

		//********************************************************************************
		//Obtener el número de threads a usar y el arreglo para la identificacion de los mismos
		//********************************************************************************
		pthread_t *thread;
		thread = calloc(NumThreads,sizeof(pthread_t));

		//******************************************************************************
		//Procesar desde cada hilo "LinealHilos"
		//*******************************************************************************
		//Crear los threads con el comportamiento "segmentar"
		for (i = 1; i < NumThreads; i++) 
		{
			if (pthread_create(&thread[i], NULL, LinealHilos,(void*)i) != 0 ) 
			{
				perror("El hilo no pudo crearse");
				exit(-1);
			}
		}
		
		//El main ejecuta el hilo 0
		LinealHilos(0);
		
		//Esperar a que terminen los hilos
		for (i = 1; i < NumThreads; i++)
			pthread_join (thread[i], NULL);

		free(thread);
		//******************************************************************	
		//Evaluar los tiempos de ejecución 
		//******************************************************************
		uswtime(&utime1, &stime1, &wtime1);

		//Cálculo del tiempo de ejecución del programa
		if(indice == 17)// para 2109248666
		{
			if(encontrado != -1)
				printf("\n%d SI : %d ", datos[indice], s);
			else
				printf("\n%d NO : --- ", datos[indice]);

			printf("\n");
			printf("Total  %.20f\n",  wtime1 - wtime0);
			printf("CPU's %.20f\n",  utime1 - utime0);
			printf("Hilos %.20f\n", (utime1 - utime0)/NumThreads);	
			printf("E/S %.20f\n",  stime1 - stime0);
			printf("CPU/Wall %.8f %%\n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
			printf("\n");
		}
		suma = suma + wtime1 - wtime0;

		//******************************************************************
	}
	printf("\nPromedio Tiempo Total: %.20f s\n\n", suma/20);
	
	printf("------------------------------------\n");
	
	//Terminar programa normalmente	
	exit (0);	
}