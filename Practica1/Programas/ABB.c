//*****************************************************************
//	AUTORES:
// 	Nicolas Sayago Abigail
// 	Ramos Diaz Enrique
// ****************************************************************
//	Practica 1: Analisis de algoritmos de ordenamiento numerico
//	Compilación: "gcc ABB.c -o ABB
//	Ejecución: "./ABB.out" (Linux)
//	***************************************************************

//	***************************************************************
//						Librerias incluidas
//	***************************************************************
#include <stdio.h>
#include <stdlib.h>
#include "Arbin.h"
#include "tiempo.h"

//	***************************************************************
//						Insertar
//	***************************************************************
//	Descripción: Inserta un arreglo de números en un ABB
//	Recibe: Un ABB vacio y un entero
//	Devuelve: Nada, pero construye el arbol binario
//	***************************************************************
void Insertar(Arbin *a, int e)
{
	Arbin *apu_a = a; // Declaramos un apuntador para recorrer el árbol
	while (*apu_a != NULL)
	{	
		if (e > ((*apu_a) -> raiz)) 
			apu_a = &((*apu_a) -> der);
		else
			apu_a = &((*apu_a) -> izq);
	}
	*apu_a = (NodoA *)malloc(sizeof(NodoA)); 
	(*apu_a) -> raiz = e;			// En el nodo colocaremos el elemento a introducir en el árbol
	(*apu_a) -> izq = NULL;		// Nos aseguramos de que ambos hijos estén apuntando a un valor NULL
	(*apu_a) -> der = NULL;
}

//	***************************************************************
//						GuardarRecorridoInOrden
//	***************************************************************
//	Descripción: Guarda los elementos de un arbol en un arreglo
//	Recibe: Un arbol binario, un arreglo y el tamaño del arreglo
//	Devuelve: Nada, pero coloca los elementos del arbol ordenados
//			  dentro del arreglo
//	***************************************************************
void GuardarRecorridoInOrden(Arbin *a, int A[], int n)
{
	posicion a_aux = *a; // Declaramos un apuntador auxiliar para viajar por el árbol
	NodoA **pila = (NodoA **)malloc(n * sizeof(Arbin)); // Inicializamos una pila de nodos para guardar valores del recorrido
	int tope = -1; // Tope de la pila
	int i = 0; 

	do
	{ 
		while (a_aux != NULL)
		{	// Haremos un recorrido hasta llegar a la parte más izquierda
			pila[++tope] = a_aux; // Iremos colocando en la pila los nodos de la izquierda
			a_aux = a_aux -> izq;
		}

		if (tope >= 0){	// Una vez llegado a la parte más izquierda, verificamos si quedan nodos en la pila
			a_aux = pila[tope--]; // Sacaremos el último nodo de la pila que será la "raíz" de ese subárbol
			A[i++] = a_aux -> raiz; // Ese nodo será ingresado al arreglo de números, posteriormente moveremos el índice un lugar más
			a_aux = a_aux -> der;	  // Ya que quitamos la "raíz", pasaremos a recorrer el lado derecho del subárbol
		}
	} 
	while (a_aux != NULL || tope >= 0); // Apuntador nulo y no tenemos más nodos que recorrer en la pila

	free(pila);
}

//	***************************************************************
//						OrdenaConArbolBinario
//	***************************************************************
//	Descripción: Ordena un arreglo de numeros utilizando diccionarios binarios
//	Recibe: Un arreglo de enteros y el tamaño del arreglo
//	Devuelve: Nada, pero ordena los elementos del arreglo
//	***************************************************************
void OrdenaConArbolBinario(int A[], int n)
{
	double utime0, stime0, wtime0,utime1, stime1, wtime1; //Variables para medición de tiempos
	uswtime(&utime0, &stime0, &wtime0);

	Arbin ArbolBinBusqueda;
	consA(&ArbolBinBusqueda); //Asignamos el valor NULL al apuntador del ABB
	int i, j = 0;

	for(i = 0; i < n; i++)
	{
		Insertar(&ArbolBinBusqueda, A[i]);
	}

	GuardarRecorridoInOrden(&ArbolBinBusqueda, A, n);

	destruir(&ArbolBinBusqueda);

	uswtime(&utime1, &stime1, &wtime1);

	//Cálculo del tiempo de ejecución del programa
	printf("\nDiccionario Binario\n");
	printf("real (Tiempo total)  %.35f s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.35f s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.35f s\n",  stime1 - stime0);
	printf("CPU/Wall   %.35f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");

	/*Para imprimir los numeros de arreglo y verificar el algoritmo
	for(i=0; i<n; i++){
		printf("%d \n", A[i]);
	}*/
}

int main(int argc, char *argv[])
{
	//Obtenemos n como parametro del main y creamos una arreglo dinamico
	int n = atoi(argv[1]);
	int *arreglo = (int*)calloc(n,sizeof(int));

	printf("n = %d\n", n);
	//Con este for vamos agregando los n valores del txt al arreglo
	for(int i = 0; i < n; i++)
	{
		fscanf(stdin, "%d", &arreglo[i]);
	}

	OrdenaConArbolBinario(arreglo, n);
	printf("------------------------------------\n");

	return 0;
}

