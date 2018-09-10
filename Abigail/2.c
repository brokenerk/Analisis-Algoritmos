#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int polinomio = 0, Funcion, i, n = 5000, z = 1, A[n];
  int Contador = 1;
  for (i = 0, Contador++; i <= n; i++, Contador++) 
  {
    Contador++; // SALTO IMPLICITO
    Contador += 4; // Numero de operaciones
    polinomio = polinomio * z + A[n - i];
    Contador++; // Numero de saltos
  }
  Contador++; // SALTO FALSO
  Contador++; // Compara y no es correcto
  Funcion = 7*n + 11;
  printf("\nCon n = %d \n", n); 
  printf("# por Funcion: %d \n", Funcion);
  printf("# de reales: %d \n", Contador);
}