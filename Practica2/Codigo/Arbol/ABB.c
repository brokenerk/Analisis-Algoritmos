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


int main(int argc, char *argv[])
{
	//Obtenemos n como parametro del main y creamos una arreglo dinamico
	int n = 10; i = 0, j = 0;
	int s; // Variable bandera, indica si se encuentra un numero
	float suma = 0, promedio = 0;
	int *arreglo = (int*)calloc(n,sizeof(int));
	int datos[20] = {322486, 14700764, 3128036, 6337399, 61396,
					10393545, 2147445644, 1295390003, 450057883, 
					187645041, 1980098116, 152503, 5000, 1493283650, 
					214826, 1843349527, 1360839354, 2109248666 , 
					2147470852, 0};

	//Con este for vamos agregando los n valores del txt al arreglo
	for(i = 0; i < n; i++)
		fscanf(stdin, "%d", &arreglo[i]);
	printf("\nArbol Binario de Busqueda = %d", n);

	// Creamos un arbol
	Arbin ArbolBinBusqueda;
	consA(&ArbolBinBusqueda); //Asignamos el valor NULL al apuntador del ABB
	
	// Insertamos los valores del txt en el arbol
	for(i = 0; i < n; i++)
	{
		Insertar(&ArbolBinBusqueda, arreglo[i]);
	}
	printf("Se inserto bien :3\n");

	//Con este for vamos buscando cada numero en el arreglo
/*	for(j = 0; j < 20; j++)
	{

		s = ABB(&ArbolBinBusqueda, arreglo, n, datos[j]);

		if(j == 17)// para 2109248666
		{
			if(s != -1)
				printf("\n\n%d SI : %d ", datos[j], s);
			else
				printf("\n\n%d NO : --- ", datos[j]);
		}
	}
*/	
	printf("------------------------------------\n");
	exit(0);
	return 0;
}

