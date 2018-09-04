
//*****************************************************************
//	AUTORES:
// 	Nicolas Sayago Abigail
// 	Ramos Diaz Enrique
// ****************************************************************
//	Practica 1: Analisis de algoritmos de ordenamiento numerico
//	***************************************************************

//	***************************************************************
//			Libreria para construir una Pila
//	***************************************************************

//Defimos la estructura de un arbol binario

//Consiste en un dato, que sera el tope, y un node que sera el resto de la pila
typedef struct Nodo //Definicion del tipo de dato Pila
{
	int dato;
	struct Nodo*sig;	
}*Pila;

//	***************************************************************
//						empty
//	***************************************************************
//	Descripción: Construye una pila vacia
//	Recibe: Nada
//	Devuelve: Una pila vacio
//	***************************************************************
Pila empty(){return NULL;}

//	***************************************************************
//						push
//	***************************************************************
//	Descripción: Inserta un elemento al fondo de la pila
//	Recibe: Un entero y una pila
//	Devuelve: Una pila con el entero en el tope de ella
//	***************************************************************
Pila push(int e, Pila p)//Inserta valores a la pila
{
	Pila t=(Pila)malloc(sizeof(struct Nodo));
	t->dato= e;
	t->sig= p;
	return t;
}

//	***************************************************************
//						isempty
//	***************************************************************
//	Descripción: Indica si una pila esta vacia
//	Recibe: Una pila
//	Devuelve: Un entero (0/1) indicando si la pila esta vacia
//	***************************************************************
int isempty(Pila p){return p==NULL;}//Devuelve un booleano

//	***************************************************************
//						top
//	***************************************************************
//	Descripción: Devuelve el tope de la pila
//	Recibe: Una pila
//	Devuelve: El entero que esta en el tope
//	***************************************************************
int top(Pila p){return p->dato;}

//	***************************************************************
//						pop
//	***************************************************************
//	Descripción: Remueve el tope de la pila
//	Recibe: Una pila
//	Devuelve: Una pila sin su tope
//	***************************************************************
Pila pop(Pila p){return p->sig;}

