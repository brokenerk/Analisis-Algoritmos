#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	char *A = (char*)calloc(n+1, sizeof(char*));
	char *B = (char*)calloc(n+1, sizeof(char*));
	scanf("%s %s", A, B);
	//Prefijo: subcadena a la izquierda
	int prefix = 0, shift = 0;
	int i = 0, cont=0;
	while(i < n){
		//Revisar el primer caracter del prefijo de A
		if(B[i] == A[0]){
			//Revisar los siguientes caracteres del prefijo, si existen (KMP)
			if(B[(i + prefix) % n] == A[prefix]){
				int j = 0, aux = 0;
				//Hacemos las shift operations mientras el prefijo coincida
				while(B[i + j] == A[j]){
					aux++;
					j = (j + 1) % n;
					cont++;
				}
				/*Si la longitud del nuevo prefijo encontrado es mayor, actualizamos valores*/
				if(aux > prefix){
					prefix = aux;
					shift = i;
				}
			}
		}
		i++;
	}
	printf("%d %d\n", shift, cont);
	return 0;
}
