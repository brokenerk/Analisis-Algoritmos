#include <stdio.h>

int main(){
	int A, B, pasos = 0, x = 0, y = 0, aux = 0;
	scanf("%d", &A);
	scanf("%d", &B);
	x = A;
	y = B;

	printf ("%d %d ", x, y);

	while(1){
		aux = x + y;
		aux = aux % 10;
		printf("%d ", aux);
		x = y;
		y = aux;
		aux = 0;
		pasos++;
		if(x == A && y == B)
			break;
	}

	printf("\n%d\n", pasos);
	return 0;
}