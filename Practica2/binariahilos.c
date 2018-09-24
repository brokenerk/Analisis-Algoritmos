//*****************************************************************
//EDGARDO ADRIÁN FRANCO MARTÍNEZ 
//Curso: Análisis de algoritmos
//ESCUELA SUPERIOR DE CÓMPUTO - IPN
//(C) Marzo 2013
//Ejemplo del empleo de Threads
//Compilación: "gcc -lm binariahilos.c -lpthread -o binariahilos"
//Ejecución: "./binariahilos 4 100"
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
int NumThreads;			//Número de threads
int N, indx = 19;
int *arreglo;
int datos[20] = {322486, 14700764, 3128036, 6337399, 61396,
10393545, 2147445644, 1295390003, 450057883, 187645041,
1980098116, 152503, 5000, 1493283650, 214826, 1843349527,
1360839354, 2109248666 , 2147470852, 0};

//********************************************************************************
//2 Realizar un procesamiento
//********************************************************************************
void* procesar(void* id)
{	
	int n_thread=(int)id;
	int inicio,fin,i,a;

	//Revisar la parte de los datos a procesar	
	inicio=(n_thread*N)/NumThreads;
	if(n_thread==NumThreads-1)	
		fin=N;
	else
		fin=((n_thread+1)*N)/NumThreads-1;

	printf("\nHola desde procesar\tSoy el thread %d\tInicio %d\tTermino %d",n_thread,inicio,fin);
	//*****************************************************************************
	//Implementacion del algoritmo
	//*****************************************************************************
	int centro, inf = inicio, sup = fin;
	while(inf <= sup)
	{
		centro = ((sup + inf)/2);
		printf("\nCentro:  %d", centro);
		if(arreglo[centro] == datos[indx]){
			printf("\nSI %d : %d", arreglo[centro], centro);
			break;
		}
		else if (datos[indx] < arreglo[centro])
			sup = centro - 1;
		else
			inf = centro + 1;
	}
		

	printf("\nBye desde procesar\tSoy el thread %d\tHe terminado",n_thread);

}

//*****************************************************************
//PROGRAMA PRINCIPAL 
//*****************************************************************
int main (int argc, char *argv[])
{	
	int i,j,k; 	//Variables auxiliares para loops

	
	//******************************************************************	
	//Iniciar el conteo del tiempo para las evaluaciones de rendimiento
	//******************************************************************	
	double utime0, stime0, wtime0,utime1, stime1, wtime1;
	uswtime(&utime0, &stime0, &wtime0);
	//******************************************************************	
	
	//********************************************************************************
	//Obtener el número de threads a usar y el arreglo para la identificacion de los mismos
	//********************************************************************************
	pthread_t *thread;
	NumThreads=atoi(argv[1]);
	thread = malloc(NumThreads*sizeof(pthread_t));

	//***************************************************************************************************************************
	//Saber cuál es el tamaño del problema N
	//***************************************************************************************************************************	
	N=atoi(argv[2]);
	arreglo = (int*)calloc(N,sizeof(int));
	//Con este for vamos agregando los n valores del txt al arreglo
	for(k = 0; k < N; k++)
		fscanf(stdin, "%d", &arreglo[k]);

	//***************************************************************************************************************************
	//2 Procesar desde cada hilo "procesar"
	//***************************************************************************************************************************
	//Crear los threads con el comportamiento "segmentar"
	for (i=1; i<NumThreads; i++) 
	{
		if (pthread_create (&thread[i], NULL, procesar,(void*)i) != 0 ) 
		{
			perror("El thread no  pudo crearse");
			exit(-1);
		}
	}
	
	//El main ejecuta el thread 0
	procesar(0);
	
	//Esperar a que terminen los threads (Saludar)
	for (i=1; i<NumThreads; i++) 
		pthread_join (thread[i], NULL);

	//******************************************************************	
	//Evaluar los tiempos de ejecución 
	//******************************************************************
	uswtime(&utime1, &stime1, &wtime1);
	//Cálculo del tiempo de ejecución del programa
	printf("\n");
	printf("real (Tiempo total)  %.10f s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU's) %.10f s\n",  utime1 - utime0);
	printf("%d threads (Tiempo de procesamiento aproximado por cada thread en CPU) %.10f s\n", NumThreads,(utime1 - utime0)/NumThreads);	
	printf("sys (Tiempo en acciónes de E/S)  %.3f s\n",  stime1 - stime0);
	printf("CPU/Wall   %.10f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");
	//******************************************************************
	
	//Terminar programa normalmente	
	exit (0);	
}