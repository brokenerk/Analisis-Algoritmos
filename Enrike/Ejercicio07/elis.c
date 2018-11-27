#include<stdio.h>
#include <stdlib.h>

int max(int a, int b){
	if(a>b) return a;
	else return b;
}

int ELIS(int arreglo[], int n){
	//Arreglo auxiliar para hallar LIS
	int elis[n], resultado = 0;
	elis[0] = 1;
	//Programacion dinamica de forma Bottom Up para hallar las longitudes LIS parciales
	for(int i = 1; i < n; i++){
		elis[i] = 1;
		for(int j = 0; j < i; j++){
			if(arreglo[i] > arreglo[j] && elis[i] < elis[j] + 1)
				elis[i] = elis[j] + 1;
		}	
	}
	//Encontrar el máximo de todas las soluciones obtenidas
	for(int i = 0; i < n; i++)
		resultado = max(resultado , elis[i]);
	return resultado;
}

int main(void){
	int num;
	scanf("%d", &num);
	int *A = (int*)calloc(num,sizeof(int));
	for(int i = 0; i < num ; i++)
		scanf("%d", &A[i]);
	printf("\n%d", ELIS(A, num));
	return 0;
}