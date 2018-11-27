#include<stdio.h>
#include <stdlib.h>

int max(int a, int b);
int knapsack(int tam[], int valor[], int s, int n);

int main(void)
{
	int S, N;
	scanf("%d %d", &S, &N);
	int *tam = (int*)calloc(N, sizeof(int));
	int *val = (int*)calloc(N, sizeof(int));
	for(int i = 0; i < N; i++)
		scanf("%d %d", &tam[i], &val[i]);
	printf("\n%d", knapsack(tam, val, S, N));
	return 0;
}

int max(int a, int b) 
{ 
  if(a > b)
    return a;
  else 
    return b;
} 

int knapsack(int tam[], int valor[], int s, int n)
{
	int kn[n+1][s+1];
	for(int i = 0; i <= n; i++)
	{
		for(int j = 0; j <= s; j++)
		{
			if(i == 0 || j == 0)
				kn[i][j] = 0;
			else if(tam[i-1] <= j)
				kn[i][j] = max(valor[i-1] + kn[i-1][j-tam[i-1]], kn[i-1][j]);
			else
				kn[i][j] = kn[i-1][j];
		}
	}
	return kn[n][s];
}