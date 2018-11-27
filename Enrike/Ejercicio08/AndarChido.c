#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Estructura del cliente
typedef struct{
	long long int t; //Tiempo de trayecto
	long long int d; //Libros que destruye
} CLIENTE;

void MinLibros(CLIENTE c[], long long int n){
//Debemos establecer el orden en que se regresaran a los clientes
	int k = trunc(n/2), b = 0;
	double tempt = 0, tempd = 0;
//Utilizamos el algoritmo shell de ordenamiento
	while(k >= 1){
		b = 1;
		while(b != 0){
			b = 0;
			for(int i = k; i <= (n-1);i++){
/*Vamos revisando si un cliente destruye más libros que otro, 
segun el tiempo que tarde en llevar al otro. De mayor a menor
números de libros destruidos
c[i] Cliente i: Destruye X libros en el tiempo del cliente i-k
c[i-k] Cliente i-k: Destruye Y libros en el tiempo del cliente i*/
				if(c[i].d * c[i-k].t > c[i-k].d * c[i].t){
/*Si el cliente i destruye más libros que el cliente i-k, 
los intercambiamos*/
					tempt = c[i].t;
					tempd = c[i].d;
					c[i].t = c[i-k].t;
					c[i].d = c[i-k].d;
					c[i-k].t = tempt;
					c[i-k].d = tempd;
					b = b + 1;
				}
			}
		}
		k = trunc(k/2);
	}
}
//N = numero de clientes en la oficina
//Ti = minutos en llegar de la oficina a la casa del cliente
//Dj = libros destruidos por minuto por cada cliente
//2Ti = minutos de ida y vuelta por cliente
//S = suma de las Dj de los N cliente esperando
int main(){
	long long int N = 0, S = 0, libmin = 0;;
	scanf("%lli", &N);
	CLIENTE clientes[N];
	for(int i = 0; i < N; i++){
		scanf("%lld %lld", &clientes[i].t, &clientes[i].d);
		//Minutos totales de ida y regreso por cliente
		clientes[i].t = clientes[i].t * 2;
		//Suma de las Dj de los clientes esperando
		S = S + clientes[i].d; 
	}
	MinLibros(clientes, N);
/*Ya ordenados los clientes de forma que se minimizan los libros 
destruidos, atendemos a los clientes*/
	for (int i = 0; i < N; i++){
/*Le restamos al total los libros que destruiría el cliente 
que se atiende*/
		S = S - clientes[i].d;
/*Vamos acumulando cuantos libros destruyen los otros clientes 
mientras se atiende al cliente actual*/
		libmin = libmin + S * clientes[i].t;
	}
	printf("\n%lld", libmin);
	return 0;
}