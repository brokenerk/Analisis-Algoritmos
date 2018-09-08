
//*****************************************************************
//	AUTORES:
// 	Nicolas Sayago Abigail
// 	Ramos Diaz Enrique
// ****************************************************************
//	Practica 1: Analisis de algoritmos de ordenamiento numerico
//	***************************************************************

//	***************************************************************
//			Libreria para construir un Arbol Binario
//	***************************************************************

//Defimos la estructura de un arbol binario
//Consiste en una raiz, un nodo izquierdo y un nodo derecho
typedef struct NodoA{
	
	int raiz;
	struct NodoA*izq;
	struct NodoA*der;
}*Arbin;


//	***************************************************************
//						vacioA
//	***************************************************************
//	Descripción: Construye un arbol binario vacio
//	Recibe: Nada
//	Devuelve: Un arbol binario vacio
//	***************************************************************

Arbin vacioA() {return NULL;}

//	***************************************************************
//						consA
//	***************************************************************
//	Descripción: Construye un arbol binario con elementos
//	Recibe: Una raiz, un arbol binario como nodo izquierdo c/elementos, 
//			un arbol binario como nodo derecho c/elementos
//	Devuelve: Un Arbol binario c/ elementos construido a partir de las 
//			  ramificaciones recibidas unidas con la raiz
//	***************************************************************

Arbin consA(int r, Arbin i, Arbin d)
{
	Arbin t = (Arbin)malloc(sizeof(struct NodoA));
	t -> raiz = r;
	t -> izq = i;
	t -> der = d;
	return t;
}

//	***************************************************************
//						esvacioA
//	***************************************************************
//	Descripción: Indica si un arbol binario esta vacio
//	Recibe: Nada
//	Devuelve: Un entero (0/1) indicando si el arbol esta vacio
//	***************************************************************
int esvacioA(Arbin a) {return a==NULL;}

//	***************************************************************
//						raiz
//	***************************************************************
//	Descripción: Da el valor de la raiz de un arbol binario
//	Recibe: Un arbol binario
//	Devuelve: La raiz del arbol binario
//	***************************************************************
int raiz(Arbin a) {return a->raiz;}

//	***************************************************************
//						izquierdo
//	***************************************************************
//	Descripción: La ramificacion izquierda completa de un arbol binario
//	Recibe: Un arbol binario
//	Devuelve: La ramificacion izquierda del arbol binario
//	***************************************************************
Arbin izquierdo(Arbin a) {return a->izq;}

//	***************************************************************
//						derecho
//	***************************************************************
//	Descripción: La ramificacion derecha completa de un arbol binario
//	Recibe: Un arbol binario
//	Devuelve: La ramificacion derecha del arbol binario
//	***************************************************************
Arbin derecho(Arbin a) {return a->der;}





