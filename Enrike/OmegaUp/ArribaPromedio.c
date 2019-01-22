/*Link: https://omegaup.com/arena/problem/arriba_del_promedio#problems*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int c, i;
	scanf("%d", &c);
	float* resultados = (float*)calloc(c, sizeof(float));

	for(i = 0; i < c; i++){
		int n, j;
		scanf("%d", &n);
		float suma = 0, promedio = 0, arriba = 0;
		int* califs = (int*)calloc(n, sizeof(int));
		for(j = 0; j < n; j++){
			scanf("%d", &califs[j]);
			suma = suma + califs[j];
		}
		promedio = suma / n;
		for(j = 0; j < n; j++)
			if(califs[j] > promedio)
				arriba++;

		resultados[i] = arriba / n * 100;
	}

	for(i = 0; i < c; i++){
		printf("%.3f%%\n", resultados[i]);
	}
	return 0;
}