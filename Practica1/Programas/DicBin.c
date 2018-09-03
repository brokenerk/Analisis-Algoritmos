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
#include "tiempo.h"

//Un diccionario de datos es un arbol binario
//Declaramos un tipo de dato Arbin para nuestro diccionario binario
typedef Arbin DicBin;

//	***************************************************************
//						InsertaOrden
//	***************************************************************
//	Descripción: Inserta en orden un arreglo de números
//	Recibe: Un entero y un Diccionario Binario vacio
//	Devuelve: Un Diccionario Binario ordenado
//	***************************************************************
DicBin InsertaOrden(int e, DicBin a)
{
	
	if(esvacioA(a))
		return consA(e,vacioA(),vacioA());
	if (e < raiz(a))
		return consA(raiz(a), InsertaOrden(e,izquierdo(a)), derecho(a));
	else
		return consA(raiz(a), izquierdo(a), InsertaOrden(e,derecho(a)));
}

int main(int argc, char *argv[])
{
	//Obtenemos n como parametro del main y creamos una arreglo dinamico
	int n = atoi(argv[1]);
	int *arreglo = (int*)calloc(n,sizeof(int));

	printf("n = %d\n", n);

	double utime0, stime0, wtime0,utime1, stime1, wtime1; //Variables para medición de tiempos
	uswtime(&utime0, &stime0, &wtime0);

	DicBin a=vacioA();//Declaramos un diccionario binario
	//Con este for vamos agregando los n valores del txt al arreglo
	for(int i=0; i<n; i++){
		fscanf(stdin, "%d", &arreglo[i]);
		//Le enviamos los elementos al diccionario de busqueda para que los agregue en orden recursivamente
		a=InsertaOrden(arreglo[i],a);
	}

	uswtime(&utime1, &stime1, &wtime1);

	//Cálculo del tiempo de ejecución del programa
	printf("\nDiccionario Binario\n");
	printf("real (Tiempo total)  %.35f s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.35f s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.35f s\n",  stime1 - stime0);
	printf("CPU/Wall   %.35f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");
	printf("------------------------------------\n");
	//Imprimimos InOrden
	//ImpInOrd(a);


	return 0;
}

