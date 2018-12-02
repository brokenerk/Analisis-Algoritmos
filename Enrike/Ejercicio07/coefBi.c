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

int coefBiDP(int n, int k){
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
	//printf("%d\n", coefBi(n, k));
	printf("%d\n", coefBiDP(n, k));
	return 0;
}