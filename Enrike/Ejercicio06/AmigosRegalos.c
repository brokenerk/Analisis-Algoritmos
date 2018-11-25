#include <stdio.h>
#include <stdlib.h>

long long int c1, c2, x, y, producto;
//Funcion para descartar valores negativos
long long int max(long long int a, long long int b){
	if (a < b) return b;
	else return a;
}

//Funcion para ver si el conjunto de numeros cumple las condiciones
int conjunto(long long int n){
	//Encontrar la cantidad de numeros no divisibles
	long long int noDivX = n - (n / x);
	long long int noDivY = n - (n / y);
	long long int noDivAmbos = n - (n / producto);
	long long int noDivSimul = noDivX + noDivY - noDivAmbos;
	//Verificar si la cantidad encontrada es suficiente para regalar
	long long int regalosA1 = max(c1 - noDivAmbos + noDivY, 0);
	long long int regalosA2 = max(c2 - noDivAmbos + noDivX, 0);
	//El total de regalos no deben de superar la cantidad disponible de numeros
	if (regalosA1 + regalosA2 <= noDivSimul) return 1;
	else return 0;
}

int main(){
	scanf("%lli %lli %lli %lli", &c1, &c2, &x, &y);
	long long int inf = 0, sup = 2 * (c1 + c2), centro;
	producto = x * y;
	//Busqueda binaria para hallar el conjunto
	while (sup - inf > 1){
		centro = (inf + sup) / 2;
		if(conjunto(centro) == 1)
			sup = centro;
		else
			inf = centro;
	}
	printf("\n%lli", sup);
	return 0;
}