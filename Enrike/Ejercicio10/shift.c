#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int max(int a, int b){
    if(a > b) return a;
    else return b;
}

int main(){
	int n;
	scanf("%d",&n);
	char *A = (char*)calloc(n+1, sizeof(char*));
	char *B = (char*)calloc(n+1, sizeof(char*));
	scanf("%s %s", A, B);
	//Prefijo: subcadena a la izquierda
	int prefix = 0;
	int shift = 0;
	int i = 0;
	while(i < n){
		//Revisar el primer caracter del prefijo de A
		if(B[i] == A[0]){
			//Revisar los siguientes caracteres del prefijo, si existen
			if(B[(i + prefix) % n] == A[prefix]){
				int j = 0;
				int aux = 0;
				//Hacemos las shift operations
				while(B[i + j] == A[j]){
					aux++;
					j = (j + 1) % n;
				}
				/*Revisamos si las shift operations son mayores al valor anterior
				si lo son, lo sustituimos. Obtenemos el máximo de ambos*/
				prefix = max(aux, prefix);
				shift = max(i, shift);
			}
		}
		i++;
	}
	printf("%d\n", shift);
	return 0;
}
