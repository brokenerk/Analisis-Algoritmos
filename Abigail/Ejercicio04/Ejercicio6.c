/*
	EJERCICIO 6
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, contador = 0;
	int n = 0;
	
	while(n != -1)
	{
		scanf("%d", &n);
		for(i = 10; i < n*5; i *= 2)
		{
			printf("\n\"Algoritmos\"\n");
			contador++;
		}
		printf("\nContador:%d\n", contador);		
		contador = 0;
	}

	return 0;
}
	