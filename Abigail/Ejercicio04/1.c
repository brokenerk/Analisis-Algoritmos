#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, n = 10, temp, A[n];
  int Funcion = 0, Contador = 0;
    scanf("%d", &n);
    Contador++; // Asignación
    for (i = 1; i < n; i++, Contador++) 
    {
      Contador++; // SALTO IMPLICITO - Cuando te dice que te vayas a dentro del FOR
      Contador++; // Comparacion que si se cumple
      Contador++; // Asignación de j = 0
      for (j = 0; j < n - 1; j++, Contador++) 
      {
        Contador++; // SALTO IMPLICITO
        Contador++; // Comparacion
        Contador += 5; // operaciones
        temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
      Contador++; // comparacion
      Contador++; // SALTO EN FALSO
    }
    Contador++; // Cuando comparas y no se cumple
    Contador++; // SALTO EN FALSO - Cuando no se cumple
    Funcion = 8*n*n-10*n+5;
    printf("\n Con n = %d \n", n);
    printf("# Funcion : %d \n", Funcion);
    printf("# Reales : %d \n", Contador);
    Funcion = 0, Contador = 0;
  return 0;
}
