#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int anterior = 1;
  int actual = 1;
  int Funcion; 
  int n = 20, aux = 0;
  int Contador = 3;
  while (n > 2) 
  {
    Contador++;
    Contador++;
    aux = anterior + actual;
    anterior = actual;
    actual = aux;
    n = n - 1;
    Contador += 6;
  }
  Contador++;

  if(n <= 2)
    Funcion = 4;
  else
    Funcion = 8*n - 12;

  printf("\nCon n = %d \n", n); 
  printf("# por Funcion: %d \n", Funcion);
  printf("# de reales: %d \n", Contador);
  return 0;
}