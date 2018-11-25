//Subsecuencia Común más Larga
#include<stdio.h>
#include<string.h>

int max(int a, int b){
	if(a>b) return a;
	else return b;
}

int LCS(char *a, char *b, int lena, int lenb){
	/*Construimos una tabla de forma Botton Up*/
	int lcs[lena+1][lenb+1];
	for(int i = 0; i <= lena; i++){
		for(int j = 0; j <= lenb; j++){
			if(a[i-1] == '\0' || b[j-1] == '\0')
				/*Caso base, la cadena esta vacia*/
				lcs[i][j] = 0;
			else if(a[i-1] == b[j-1])
				/*Sumamos 1 y quitamos el elemento de ambas cadenas*/
				lcs[i][j] = lcs[i-1][j-1] + 1;
			else
				/*Debemos ignorar a uno y sólo tomar al máximo*/
				lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
		}
	}
	/*En la ultima posicion del arreglo se encuentra la LCS*/
	return lcs[lena][lenb];
}

int main(void){
	char c1[10000];
	char c2[10000];
	scanf("%s", c1);
	scanf("%s", c2);
	printf("\n%d", LCS(c1, c2, strlen(c1), strlen(c2)));
	return 0;
}