//*****************************************************************
//	AUTORES:
// 	Nicolas Sayago Abigail
// 	Ramos Diaz Enrique
// ****************************************************************
//	Practica 1: Analisis de algoritmos de ordenamiento numerico
//	Compilación: "gcc DicBin.c -o DicBin
//	Ejecución: "./DicBin.out" (Linux)
//	***************************************************************

//	***************************************************************
//						Librerias incluidas
//	***************************************************************
#include <stdio.h>
#include <stdlib.h>
#include "Arbin.h"
#include "Pila.h"
#include "tiempo.h"

//Un diccionario de datos es un arbol binario
//Declaramos un tipo de dato Arbin para nuestro diccionario binario
typedef Arbin DicBin;
Pila stack;

//	***************************************************************
//						InsertaOrden
//	***************************************************************
//	Descripción: Inserta un arreglo de números en un Diccionario Binario
//	Recibe: Un Diccionario Binario vacio y un entero
//	Devuelve: Nada, pero construye el arbol binario
//	***************************************************************
DicBin Insertar(DicBin a, int e)
{
	if(esvacioA(a))
		return consA(e,vacioA(),vacioA());
	if (e < raiz(a))
		return consA(raiz(a), Insertar(izquierdo(a),e), derecho(a));
	else
		return consA(raiz(a), izquierdo(a), Insertar(derecho(a),e));
}

//	***************************************************************
//						GuardarRecorridoInOrden
//	***************************************************************
//	Descripción: Guarda los elementos de un arbol en un arreglo
//	Recibe: Un arbol binario y un arreglo
//	Devuelve: Nada, pero coloca los elementos del arbol ordenados
//			  dentro del arreglo
//	***************************************************************
void GuardarRecorridoInOrden (Arbin a)
{
	if (!esvacioA(a))
	{
		GuardarRecorridoInOrden(derecho(a));
		//Vamos metiendo los elementos ordenados a una pila
		stack=push(raiz(a), stack);
		GuardarRecorridoInOrden(izquierdo(a));
	}
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

	DicBin ArbolBinBusqueda = vacioA();//Declaramos un diccionario binario
	int i;

	for(i=0; i<n; i++){
		ArbolBinBusqueda = Insertar(ArbolBinBusqueda, A[i]);
	}

	GuardarRecorridoInOrden(ArbolBinBusqueda);

	//Copiamos el contenido de la pila al arreglo
	for(i=0; i<n; i++){
		A[i]=top(stack);
		stack=pop(stack);
	}

	uswtime(&utime1, &stime1, &wtime1);

	//Cálculo del tiempo de ejecución del programa
	printf("\nDiccionario Binario\n");
	printf("real (Tiempo total)  %.35f s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.35f s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.35f s\n",  stime1 - stime0);
	printf("CPU/Wall   %.35f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");

	/*for(i=0; i<n; i++){
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
	for(int i=0; i<n; i++){
		fscanf(stdin, "%d", &arreglo[i]);
	}

	OrdenaConArbolBinario(arreglo, n);
	printf("------------------------------------\n");

	return 0;
}

