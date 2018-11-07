#include <stdio.h>

int main()
{
	int i, j, contador = 0;
	int n = 0;
	while(n != -1)
	{
		scanf("%d", &n);
		i = n;
		while(i >= 0)
		{
			for(j = n; i < j; i-= 2, j /= 2)
			{
				printf("\"Algoritmos\"\n");
				contador++;	
			}
		}	
		printf(" Contador: %d\n", contador);
	}
	return 0;
}
