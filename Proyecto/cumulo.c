//Link explicacion: http://www.algoritmia.net/articles.php?id=34

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Estructura de una estrella como punto
typedef struct{
	double x;
	double y;
} PUNTO;
double dmin = 1e10; // Distancia minima (infinito)

//Algoritmo de ordenacion shell
void shell(PUNTO arreglo[], int n){
	int k = trunc(n/2), b = 0, i = 0;
	double tempx = 0, tempy = 0;
	while(k >= 1){
		b = 1;
		while(b != 0){
			b = 0;
			for(i = k;i <= (n-1);i++){
				if(arreglo[i-k].x > arreglo[i].x){
					tempx = arreglo[i].x;
					tempy = arreglo[i].y;
					arreglo[i].x = arreglo[i-k].x;
					arreglo[i].y = arreglo[i-k].y;
					arreglo[i-k].x = tempx;
					arreglo[i-k].y = tempy;
					b = b + 1;
				}
			}
		}
		k = trunc(k/2);
	}
}

//Función que calcula la distancia entre dos puntos
double distancia(PUNTO a, PUNTO b){
	return (sqrt((a.x - b.x)*(a.x - b.x)+(a.y - b.y)*(a.y - b.y)));
}

void distDyV(PUNTO e[], int num){
	double dist;
	int inicio, fin, k, l;
	//Si no hay pares de puntos, salimos
	if(num <= 1) return;
	//Ordenar los puntos segun la coordenada x
	shell(e, num);
	//Buscar en la izquierda recursivamente
	distDyV(e, num/2);
	//Buscar en la derecha recursivamente
	distDyV(e + num/2, (num+1)/2);

	//Hallar los límites del conjunto central
	for(inicio = num/2; inicio > 0 && e[num/2].x - e[inicio].x < dmin; inicio--);
	for(fin = num/2; fin < num-1 && e[fin].x - e[num/2].x < dmin; fin++);

	//Búsqueda exhaustiva en el conjunto central
	for(k = inicio; k <= fin; k++)
		for(l = k + 1; l <= fin; l++)
			if((dist = distancia(e[k], e[l])) < dmin)
				dmin = dist;			
}

int main(){
	int n;
	scanf("%d", &n);
	PUNTO pts[n];
	for(int j = 0; j < n; j++)
		scanf("%lf %lf", &pts[j].x, &pts[j].y);
	distDyV(pts, n);
	printf("%.3lf\n", dmin);
	return 0;
}