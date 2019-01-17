/*Link: https://omegaup.com/arena/problem/Aprobando-el-Examen#problems*/

#include <stdio.h>

int main(){
	int e, aprobada = 1;
	double promedio, suma = 0;
	scanf("%d", &e);

	for(int i = 0; i < e - 1; i++){
		double calif;
		scanf("%lf", &calif);
		if(calif >= 6){
			suma = suma + calif;
			aprobada++;
		}
	}
	scanf("%lf", &promedio);

	printf("%.2f", promedio * aprobada - suma);
	return 0;
}