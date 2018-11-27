#include <stdio.h>
#include <stdlib.h>

long long int max(long long int a, long long int b){
	if (a < b) return b;
	else return a;
}

int main(){
	int n;
	long long int valor;
	scanf("%d", &n);
	long long int *A = (long long int*)calloc(n,sizeof(long long int));
	for(int i = 0; i < n; i++)
		scanf("%lli", &A[i]);

	//Guardamos el primer elemento, puede que este sea la suma máxima de cualquier subarreglo
	long long int suma = A[0], aux = A[0];
	for(int i = 1; i < n; i++){
		//Vamos verificando si nos conviene realizar la suma parcial o si nos quedamos solo con la posicion actual
		aux = max(aux + A[i], A[i]);
		//Vamos comparando las sumas parciales obtenidas (con el primer elemento o entre las anteriores)
		suma = max(aux, suma);
	}
	printf("%lli", suma);
	return 0;
}