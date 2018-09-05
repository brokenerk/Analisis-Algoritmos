#include <stdio.h>

int main()
{
	int i, j, n;
	int contador = 0;
	
	while(n != -1)
	{
		scanf("%d", &n);
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
		printf(" Contador: %d \n", contador);
		contador = 0;
	}
	
}