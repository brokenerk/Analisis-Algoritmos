/*Link: https://omegaup.com/arena/problem/Maximo-de-tres#problems*/
#include <stdio.h>

int max(int a, int b){
	if(a > b)
		return a;
	else
		return b;
}

int main(){
	int A, B, C, maximo;
	scanf("%d %d %d", &A, &B, &C);
	maximo = max(max(A, B), C);
	printf("%d\n", maximo);
	return 0;
}