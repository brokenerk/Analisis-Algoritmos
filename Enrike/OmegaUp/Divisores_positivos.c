/*Link: https://omegaup.com/arena/problem/Divisores-positivos#problems*/

#include <stdio.h>
#include <stdlib.h>

/* FACTORES PRIMOS de 20
	20 = 2 * 2 * 5
	20 = 2 ^ 2 * 5 ^ 1
	HALLAR NUM DIVISORES
	#Divisores = (2 + 1)(1 + 1) = 3 * 2 = 6
*/

long long int Divisores(long long int num){
	long long int exp = 0, divisores = 1, j = 2;
	//Descomponemos el numero en factores primos

	while(num != 0){
		if(num % j == 0){
			num = num / j;
			//Obtenemos el exponente del primo
			exp++;
		}
		else
		{
			j++;
			//Le sumamos 1 a cada exponente de los primos y multiplicamos los resultados
			divisores = divisores * (exp + 1);
			exp = 0;
			if(num == 1)
				break;
		}
	}
	return divisores;
}

int main(){
	long long int N;
	scanf("%lli", &N);
	printf("%lli", Divisores(N));
}