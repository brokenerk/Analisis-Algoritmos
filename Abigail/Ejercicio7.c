#include <stdio.h>

int main()
{
	int i, j, n=10;
	int contador = 0;
	int Funcion;

	for(j = n; j > 1; j /=2 )
	{
		if(j < (n/2))
		{
			for(i = 0; i < n; i += 2)
			{
				printf("\"Algoritmos\"\n");
				contador++;
			}
		}
	}	
	Funcion = (int)((n/2)*((log(n/2)/log(2))-1));

	printf(" Funcion: %d \n", Funcion);
	printf(" Contador: %d \n", contador);
	contador = 0;	
}
