//S = Tamaño mochila
//N = Items que caben en la mochila
#include<stdio.h>
#include <stdlib.h>

int max(int a, int b){
	if(a>b) return a;
	else return b;
}

int knapsack(int tam[], int valor[], int s, int n){
	int mochila[n+1][s+1];
	//Programacion dinamica de forma Bottom Up
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= s; j++){
			if(i == 0 || j == 0)
				//No hay elementos
				mochila[i][j] = 0;
			else if(tam[i-1] <= j)
				//Aqui nos enfrentamos a la decision de tomar o no tomar el elemento
				mochila[i][j] = max(valor[i-1] + mochila[i-1][j-tam[i-1]], mochila[i-1][j]);
			else
				//Como ya no hay espacio, optamos por no elegirlo
				mochila[i][j] = mochila[i-1][j];
		}
	}/*En la ultima posicion se encuentra el valor máximo*/
	return mochila[n][s];
}

int main(void){
	int S, N;
	scanf("%d %d", &S, &N);
	int *tam = (int*)calloc(N,sizeof(int));
	int *val = (int*)calloc(N,sizeof(int));
	for(int i = 0; i < N; i++)
		scanf("%d %d", &tam[i], &val[i]);
	printf("\n%d", knapsack(tam, val, S, N));
	return 0;
}