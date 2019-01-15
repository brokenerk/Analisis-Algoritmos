/*Link: https://omegaup.com/arena/problem/Un-problema-facil-2#problems*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Shell(long long int arreglo[], long long int n)
{
	long long int k = trunc(n/2);
	long long int b = 0;
	long long int i = 0;
	long long int temp = 0;

	while(k >= 1)
	{
		b = 1;
		while(b != 0)
		{
			b = 0;
			for(i = k;i <= (n-1);i++)
			{
				if(arreglo[i-k] > arreglo[i])
				{
					temp = arreglo[i];
					arreglo[i] = arreglo[i-k];
					arreglo[i-k] = temp;
					b = b+1;
				}
			}
		}
		k = trunc(k/2);
	}
}

long long int Binaria(long long int A[], long long int n, long long int dato)
{
	long long int centro, inf = 0, sup = n - 1;
	while(inf <= sup)
	{
		centro = ((sup + inf)/2);
		if(A[centro] == dato)
			return centro;
		else if (dato < A[centro])
			sup = centro - 1;
		else
			inf = centro + 1;
	}
	return -1;
}

int main()
{
	long long int n, k, i, total = 0;
	scanf("%lli %lli", &n, &k);
	long long int *A = (long long int*)calloc(n, sizeof(long long int));

	for(i = 0; i < n; i++)
		scanf("%lli", &A[i]);

	Shell(A, n);

	for(i = 0; i < n; i++)
		if(Binaria(A, n, k + A[i]) != -1)
			total++;
		
	printf("%lli", total);
}