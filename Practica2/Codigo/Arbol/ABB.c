//*****************************************************************
//	AUTORES:
// 	Nicolas Sayago Abigail
//	Parra Garcilazo Cinthya Dolores
// 	Ramos Diaz Enrique
// ****************************************************************
//	Practica 2: Análisis temporal y notación de orden (Algoritmos de búsqueda)
//	Compilación:
//	gcc tiempo.c -c
//	gcc ABB.c tiempo.o -o ABB
//
//	Ejecución: "./ABB" (Linux)
//	***************************************************************

//	***************************************************************
//						Librerias incluidas
//	***************************************************************
#include <stdio.h>
#include <stdlib.h>
#include "Arbin.h"

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
//						BucarRecorridoInOrden
//	***************************************************************
//	Descripción: Busca si existe un elemento en el arbol
//	Recibe: Un arbol binario, tamaño del arreglo y el elemento a buscar
//	Devuelve: -1 si existe el elemento, 0 si no existe
//	***************************************************************

int ABB(Arbin *a, int n, int elemento)
{
	// Declaramos un apuntador auxiliar para viajar por el árbol
	posicion a_aux = *a; 
	// Inicializamos una pila de nodos para guardar valores del recorrido
	NodoA **pila = (NodoA **)malloc(n * sizeof(Arbin)); 
	int tope = -1; // Tope de la pila
	int numero; // Auxiliar para comparar
	do
	{ 
			pila[++tope] = a_aux; // Iremos colocando en la pila los nodos de la izquierda
			a_aux = pila[tope--]; // Sacaremos el último nodo de la pila que será la "raíz" de ese subárbol
			numero = a_aux -> raiz; // Ese nodo dira cual es el numero en ese momento, posteriormente moveremos el índice un lugar más					
			printf("Compara: Arbol-%d , elemento-%d \n", numero, elemento);
			if(numero == elemento)
			{
				a_aux = NULL;
				return -1;
			}
			else if(numero < elemento)
			{
				// Ya que quitamos la "raíz", pasaremos a recorrer el lado izquierdo del subárbol
				a_aux = a_aux -> der;		
			}
			else
			{
				// Ya que quitamos la "raíz", pasaremos a recorrer el lado derecho del subárbol
				a_aux = a_aux -> izq; 		
			}
	} 
	while (a_aux != NULL || tope >= 0); // Apuntador nulo y no tenemos más nodos que recorrer en la pila
	free(pila);
	return 0;
}

int main(int argc, char *argv[])
{
	//Obtenemos n como parametro del main y creamos una arreglo dinamico
	int n = atoi(argv[1]);
	int *arreglo = (int*)calloc(n,sizeof(int));
	int i, j;
	int s = 0; 
	//int n = 9;
	printf("n = %d\n", n);
	//Con este for vamos agregando los n valores del txt al arreglo
	/for(i = 0; i < n; i++)
	{
		fscanf(stdin, "%d", &arreglo[i]);
	}

	/*int arreglo[9] = {55, 4, 1, 2, 0,
					15, 14, 16, 20};
	*/
	// DECLARO UN ARREGLO PARA LOS DATOS QUE VAMOS A BUSCAR EN EL ARBOL
	int datos[20] = {20, 14700764, 3128036, 6337399, 61396,
					10393545, 2147445644, 1295390003, 450057883, 
					187645041, 1980098116, 152503, 5000, 1493283650, 
					214826, 1843349527, 1360839354, 2109248666 , 
					2147470852, 0};
	/*
		AGREGA AL ARBOL LOS NUMEROS DEL TXT

	*/
	Arbin ArbolBinBusqueda;
	consA(&ArbolBinBusqueda); //Asignamos el valor NULL al apuntador del ABB
	
	for(i = 0; i < n; i++)
	{
		Insertar(&ArbolBinBusqueda, arreglo[i]);
	}

	/*
		BUSCA EN EL ARBOL CADA NUMERO DEL ARREGLO DATOS
	*/
	for(j = 0; j < 20; j++)
	{
		//printf("DATO %d :  %d\n", j, datos[j]);
		// La funcion recibe el arbol, numero de datos y el dato
		//s = ABB(&ArbolBinBusqueda, n, datos[j]);
		//printf("----------Bandera:%d\n", s);
		if(j == 0)// para 2109248666
		{
			s = ABB(&ArbolBinBusqueda, n, datos[j]);
		
			if(s == -1)
				printf("\n\n%d SI : %d ", datos[j], s);
			else
				printf("\n\n%d NO : --- ", datos[j]);
		}
	}

	destruir(&ArbolBinBusqueda);	

	printf("\n------------------------------------\n");

	return 0;
}

