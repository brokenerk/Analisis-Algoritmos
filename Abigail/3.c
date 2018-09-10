#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int n = 4, Funcion = 0, Contador = 0;
  int i, j, k;
  for (i = 1, Contador++; i <= n; i++, Contador++) 
  {
    Contador++; // SALTO IMPLICITO
    for (j = 1, Contador++; j <= n; j++, Contador++) 
    {
      Contador++; // Comparacion
      Contador++; // Asignacion
      for (k = 1, Contador++; k <= n; k++, Contador++) 
      {
        Contador += 3; // Operaciones dentro del for
        Contador++; // Comparacion
      }
      Contador++;  // Comparacion
      Contador++;  // SALTO IMPLICITO
    }
    Contador++;  // Comparacion
    Contador++;  // SALTO IMPLICITO
  }
  Contador++; // Comparacion
  Contador++; // SALTO EXPLICITO
  Funcion = 6*n*n*n + 5*n*n + 7*n + 3;
  printf("\nCon n = %d \n", n); 
  printf("# por Funcion: %d \n", Funcion);
  printf("# de reales: %d \n", Contador);
  return 0;
  // 5n^3+6n^2+5n+3
}