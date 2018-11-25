#include <stdio.h>
#include <math.h>
void Ej1(int n){
	printf("****Ejercicio 1*****\n");
	int cont=0;

	cont++;//asig i
	cont++;//ultima comparacion donde la condicion no se cumple y sale
	for(int i=1; i<n; i++, cont++){
		cont++;//asig j
		cont++;//ultima comparacion donde la condicion no se cumple y sale
		for(int j=0; j<(n-1); j++, cont++){
			//temp=A[j]; 
			cont++;
			//A[j]=A[j+1]; 
			cont++; cont++;
			//A[j+1]=temp; 
			cont++; cont++;
			cont++;//Numero de comparaciones
			cont++;//Numero de saltos
		}
		cont++;//Sale del for de adentro y reinicia

		cont++;//Numero de comparaciones
		cont++;//Numero de saltos

	}
	cont++;

	printf("Operaciones reales: %d\n", cont);
	printf("Operaciones segun la formula: %d\n", 8*n*n - 10*n +5);
}


// n = 10
void Ej2(int n){
	printf("****Ejercicio 2*****\n");
	int cont=0;
	cont++;//asig polinomio //polinomio=0;
	cont++;//asig i
	cont++;//ultima comparacion donde la condicion no se cumple 
	//y sale
	for (int i = 0; i <= n; ++i, cont++){//Numero de i++s
		cont+=4;//polinomio = polinomio*z + A[n-i];
		cont++;//Numero de comparaciones
		cont++;//Numero de saltos
	}
	cont++;
	printf("Operaciones reales: %d\n", cont);
	printf("Operaciones segun la formula: %d\n", 7*n + 11);
}

// n = 4
void Ej3(int n){
	printf("****Ejercicio 3*****\n");
	int cont=0, i, j, k;

	cont++;//asig i
	cont++;//ultima comparacion donde la condicion no se cumple 
	//y sale
	for(i=1; i<=n; i++, cont++){
		for(j=1; j<=n; j++, cont++){
			cont++;//C[i,j]=0;
			cont++;//asig k
			cont++;//ultima comparacion donde la condicion no 
			//se cumple y sale
			for(k=1; k<=n; k++, cont++){
				cont+=3; //C[i,j]=C[i,j]+A[i,k]*B[k,j];
				cont++;//Numero de comparaciones
				cont++;//Numero de saltos
			}
			cont++;//Numero de comparaciones
			cont++;//Numero de saltos
		}
		cont++;//Numero de comparaciones
		cont++;//Numero de saltos
	}
	cont++;//Sale del for
	printf("Operaciones reales: %d\n", cont);
	//printf("Operaciones segun la formula: %d\n", 6*n*n*n + 5*n*n + 7*n + 3);
}

// n = 2
void Ej4(int n){
	printf("****Ejercicio 4*****\n");
	int cont=0, aux;

	int n1 = n;

	int anterior=1; cont++;
	int actual=1; cont++;

	cont++;//ultima comparacion donde la condicion 
	//no se cumple y sale
	while(n1>2){
		cont++;//Numero de comparaciones
		cont++;//Numero de saltos
		aux=anterior+actual; cont+=2;
		anterior=actual; cont++;
		actual=aux; cont++;
		n1 = n1-1; cont+=2;
	}
	cont++;//Sale del while
	printf("Operaciones reales: %d\n", cont);

	//if(n<=2) printf("Operaciones segun la formula: %d\n", 4);
	//else printf("Operaciones segun la formula: %d\n", 8*n - 12);
	
}

// n = 8
void Ej5(int n){
	printf("****Ejercicio 5*****\n");
	int s2[n], s[n],i,j, cont=0;
	cont+=2;//asig i y n-1
	cont++; //asig j
	cont++;//ultima comparacion donde la condicion 
	//no se cumple y sale
	for(i=n-1, j=0; i>=0; i--, cont+=2, j++){
		s2[j]=s[i]; cont++;
		cont++;//Numero de comparaciones
		cont++;//Numero de saltos
	}
	cont++;

	cont++; //asig i
	cont++;//ultima comparacion donde la condicion 
	//no se cumple y sale
	for(i=0; i<n; i++, cont++){
		s[i]=s2[i]; cont++;
		cont++;//Numero de comparaciones
		cont++;//Numero de saltos
	}
	cont++;

	printf("Operaciones reales: %d\n", cont);
	//printf("Operaciones segun la formula: %d\n", 9*n + 8);
}

void Ej6(int n){
	printf("\n****Ejercicio 6 con n = %d*****\n", n);
	int cont=0;
	for(int i=10; i<n*5; i*=2)
	{
		cont++;
		
	}
	printf("# Impre Algoritmos %d\n", cont);
	printf("Funcion %d\n", (int)(log(n)/log(2)));
		
}

void Ej7(int n){
	printf("\n****Ejercicio 7 con n = %d*****\n", n);
	int cont=0;
	for(int j=n; j>1; j/=2){
		if(j<n/2){
			for(int i=0; i<n; i+=2)
			{
				cont++;
				
			}
		}
	}

	printf("# Impre Algoritmos %d\n", cont);
	printf("Funcion %d\n", (int)((n/2)*((log(n/2)/log(2))-1)));
}

void Ej8(int n){
	printf("\n****Ejercicio 8 con n = %d*****\n", n);
	int i=n, j, cont=0;

	while(i>=0){
		for(j=n; i<j; i-=2, j/=2)
		{
			cont++;
				
		}
	}
	printf("# Impre Algoritmos %d\n", cont);
}


int main(){

	int a[5] ={10, 100, 1000, 5000, 100000};

	for(int i=0; i<5; i++){
		Ej8(a[i]);
	}
	printf("\n");


}
