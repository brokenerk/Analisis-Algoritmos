#include <stdio.h>
#include <stdlib.h>

int coefBi(int n, int k){
	if(k == 0 || k == n)
		return 1;
	else if(k > 0 && k < n)
		return (coefBi(n-1, k-1) + coefBi(n-1, k));
	else
		return 0;
}

int coefBiTD(int n, int k){
	int i, j, tabla[n][k];
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			tabla[i][j] = -1;

	if(k == 0 || k == n)
		return 1;
	else if(k > 0 && k < n){
		if(tabla[n-1][k-1] == -1)
			tabla[n-1][k-1] = coefBiTD(n-1, k-1);
		if(tabla[n-1][k] == -1)
			tabla[n-1][k] = coefBiTD(n-1, k);
		return tabla[n-1][k-1] + tabla[n-1][k];
	}
	else
		return 0;	
}

int coefBiBU(int n, int k){
	int i, j, tabla[n+1][k+1];

	for(i = 0; i <= n; i++)
		tabla[i][0] = 1;

	for(i = 1; i<= n; i++)
		tabla[i][1] = i;

	for(i = 2; i<= k; i++)
		tabla[i][i] = 1;

	for(i = 3; i <= n; i++)
		for(j = 2; j <= i-1; j++)
			if(j <= k)
				tabla[i][j] = tabla[i-1][j-1] + tabla[i-1][j];
	
	return tabla[n][k];
}

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	printf("Recursivo: %d\n", coefBi(n, k));
	printf("Bottom Up: %d\n", coefBiBU(n, k));
	printf("Top Down: %d\n", coefBiTD(n, k));
	return 0;
}