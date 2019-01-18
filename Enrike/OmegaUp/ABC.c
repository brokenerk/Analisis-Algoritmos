/*Link: https://omegaup.com/arena/problem/abc#problems*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
	A < B
	B < C
	A < C
	Orden ASC = A, B, C
*/
void BurbujaSimple(int A[], int n)
{
	int j, i, aux;
	for(i = 0; i <= n-1; i++)
	{
		for(j = 0; j <= (n-2)-i; j++)
		{
			if (A[j] > A[j + 1])
			{
				aux = A[j];
				A[j] = A[j + 1];
				A[j + 1] = aux;
			}
		}
	}
}

int main(){
	int x, y, z;
	int X[3];
	char orden[4]; //Añadimos un espacio extra para el '\0'
	scanf("%d %d %d", &X[0], &X[1], &X[2]);
	scanf("%s", orden);

	BurbujaSimple(X, 3);

	if(strcmp(orden, "ABC") == 0)
		printf("%d %d %d", X[0], X[1], X[2]);
	else if(strcmp(orden, "BCA") == 0)
		printf("%d %d %d", X[1], X[2], X[0]);
	else if(strcmp(orden, "CAB") == 0)
		printf("%d %d %d", X[2], X[0], X[1]);
	else if(strcmp(orden, "BAC") == 0)
		printf("%d %d %d", X[1], X[0], X[2]);
	else if(strcmp(orden, "ACB") == 0)
		printf("%d %d %d", X[0], X[2], X[1]);
	else if(strcmp(orden, "CBA") == 0)
		printf("%d %d %d", X[2], X[1], X[0]);

	return 0;
}