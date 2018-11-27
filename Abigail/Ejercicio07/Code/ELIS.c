#include<stdio.h>
#include <stdlib.h>

int max(int a, int b); 
int elis(int A[], int n);

int main(void)
{
	int num;
	scanf("%d", &num);
	int *S = (int*)calloc(num, sizeof(int));
	for(int i = 0; i < num ; i++)
		scanf("%d", &S[i]);
	printf("\n%d", elis(S, num));
	return 0;
}

int elis(int A[], int n)
{
	int elis[n], resultado = 0;
	elis[0] = 1;
	for(int i = 1; i < n; i++)
	{
		elis[i] = 1;
		for(int j = 0; j < i; j++)
		{
			if(A[i] > A[j] && elis[i] < elis[j] + 1)
				elis[i] = elis[j] + 1;
		}	
	}
	for(int i = 0; i < n; i++)
		resultado = max(resultado , elis[i]);
	return resultado;
}

int max(int a, int b) 
{ 
  if(a > b)
    return a;
  else 
    return b;
} 
