/*Link: https://omegaup.com/arena/problem/AcomodandoOMI#problems*/

#include <bits/stdc++.h>
using namespace std;

int Binaria(long long int A[], int n, long long int dato)
{
	int centro, inf = 0, sup = n - 1;
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

int main(){
	int N, a0;
	scanf("%d", &N);
	long long int* A = (long long int*)calloc(N, sizeof(long long int));

	for(int i = 0; i < N; i++)
		scanf("%lli", &A[i]);

	a0 = A[0];
	/*Funcion sort() de C++ Ej: sort(arreglo, arreglo + TAM). 
	Con Shell Sort excede el tiempo limite*/
	sort(A, A + N); 

	printf("%d", Binaria(A, N, a0));
	return 0;
}