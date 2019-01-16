/*Link: https://omegaup.com/arena/problem/Mediana#problems*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Shell(int arreglo[], int n)
{
	int k = trunc(n/2);
	int b = 0;
	int i = 0;
	int temp = 0;

	while(k >= 1)
	{
		b = 1;
		while(b != 0)
		{
			b = 0;
			for(i = k; i <= (n-1); i++)
			{
				if(arreglo[i-k] > arreglo[i])
				{
					temp = arreglo[i];
					arreglo[i] = arreglo[i-k];
					arreglo[i-k] = temp;
					b = b+1;
				}
			}
		}
		k = trunc(k/2);
	}
}

int main(){
	int N, suma = 0, centro;
	float mediana, m;
	scanf("%d", &N);
	int* datos = (int*)calloc(N, sizeof(int));

	for(int i = 0; i < N; i++)
		scanf("%d", &datos[i]);

	Shell(datos, N);
	centro = N / 2;
	if(N % 2 == 0){
		m = datos[centro-1] + datos[centro];
		mediana = m / 2;
	}
	else
		mediana = datos[centro];
	
	printf("%.1f\n", mediana);
}